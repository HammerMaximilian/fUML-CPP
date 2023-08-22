/*
 * FeatureValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLESCLASSIFIERS_FEATUREVALUE_H_
#define FUML_SEMANTICS_SIMPLESCLASSIFIERS_FEATUREVALUE_H_

#include "utils/FumlObject.h"
#include "fuml/semantics/values/ValueList.h"

namespace fuml::syntax::classification
{
	class StructuralFeature;
}

namespace fuml::semantics::simpleclassifiers
{
	class FeatureValue : public utils::FumlObject
	{
		public:
			std::shared_ptr<fuml::syntax::classification::StructuralFeature> feature = nullptr;
			std::shared_ptr<fuml::semantics::values::ValueList> values = std::make_shared<fuml::semantics::values::ValueList>();
			int position = 0;

		public:
			bool hasEqualValues(
					const std::shared_ptr<FeatureValue>&);
			std::shared_ptr<FeatureValue> copy();
	}; //FeatureValue
}

using FeatureValue = fuml::semantics::simpleclassifiers::FeatureValue;
using FeatureValuePtr = std::shared_ptr<FeatureValue>;

#endif /* FUML_SEMANTICS_SIMPLESCLASSIFIERS_FEATUREVALUE_H_ */
