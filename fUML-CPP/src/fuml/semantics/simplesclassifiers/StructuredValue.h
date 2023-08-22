/*
 * StructuredValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLESCLASSIFIERS_STRUCTUREDVALUE_H_
#define FUML_SEMANTICS_SIMPLESCLASSIFIERS_STRUCTUREDVALUE_H_

#include <fuml/semantics/simplesclassifiers/FeatureValueList.h>
#include <fuml/semantics/values/Value.h>
#include <fuml/semantics/values/ValueList.h>
#include <fuml/syntax/classification/StructuralFeatureList.h>
#include <memory>

namespace fuml::syntax::classification
{
	class Classifier;
}
namespace fuml::syntax::commonstructure
{
	class NamedElement;
}
namespace fuml::syntax::values
{
	class ValueSpecification;
}

namespace fuml::semantics::simpleclassifiers
{
	class StructuredValue : fuml::semantics::values::Value
	{
		public:
			virtual ~StructuredValue() = 0;

			virtual std::shared_ptr<fuml::syntax::values::ValueSpecification> specify() override;
			virtual std::shared_ptr<FeatureValue> getFeatureValue(
					const std::shared_ptr<fuml::syntax::classification::StructuralFeature>&) = 0;
			virtual std::shared_ptr<FeatureValue> setFeatureValue(
					const std::shared_ptr<fuml::syntax::classification::StructuralFeature>&,
					const std::shared_ptr<fuml::semantics::values::ValueList>&,
					int position) = 0;
			virtual std::shared_ptr<FeatureValueList> getFeatureValues() = 0;
			std::shared_ptr<fuml::syntax::classification::StructuralFeatureList> getMemberFeatures(
					const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			std::shared_ptr<fuml::syntax::classification::StructuralFeatureList> getStructuralFeatures();
			std::shared_ptr<fuml::syntax::classification::StructuralFeatureList> getStructuralFeaturesForType(
					const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			void createFeatureValues();
			void addFeatureValues(const std::shared_ptr<FeatureValueList>&);
			bool checkForAssociationEnd(const std::shared_ptr<fuml::syntax::classification::StructuralFeature>&);
			std::shared_ptr<fuml::semantics::values::ValueList> getValues(
					const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>&,
					const std::shared_ptr<FeatureValueList>&);
	}; // StructuredValue
}


#endif /* FUML_SEMANTICS_SIMPLESCLASSIFIERS_STRUCTUREDVALUE_H_ */
