/*
 * StructuredValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLESCLASSIFIERS_STRUCTUREDVALUE_H_
#define FUML_SEMANTICS_SIMPLESCLASSIFIERS_STRUCTUREDVALUE_H_

#include <fuml/semantics/values/Value.h>

namespace fuml::semantics::simpleclassifiers
{
	class StructuredValue : Value
	{
		public:
			virtual ~StructuredValue() = 0;

			virtual ValueSpecificationPtr specify() override;
			virtual FeatureValuePtr getFeatureValue(
					const StructuralFeaturePtr&) = 0;
			virtual FeatureValuePtr setFeatureValue(
					const StructuralFeaturePtr&,
					const ValueListPtr&,
					int position) = 0;
			virtual FeatureValueListPtr getFeatureValues() = 0;
			StructuralFeatureListPtr getMemberFeatures(
					const ClassifierPtr&);
			StructuralFeatureListPtr getStructuralFeatures();
			StructuralFeatureListPtr getStructuralFeaturesForType(
					const ClassifierPtr&);
			void createFeatureValues();
			void addFeatureValues(const FeatureValueListPtr&);
			bool checkForAssociationEnd(const StructuralFeaturePtr&);
			ValueListPtr getValues(
					const NamedElementPtr&,
					const FeatureValueListPtr&);
	}; // StructuredValue
}


#endif /* FUML_SEMANTICS_SIMPLESCLASSIFIERS_STRUCTUREDVALUE_H_ */
