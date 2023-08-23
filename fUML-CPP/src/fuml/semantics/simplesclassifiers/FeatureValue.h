/*
 * FeatureValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLESCLASSIFIERS_FEATUREVALUE_H_
#define FUML_SEMANTICS_SIMPLESCLASSIFIERS_FEATUREVALUE_H_

#include <fuml/syntax/fwd.h>
#include <fuml/semantics/fwd.h>
#include "utils/FumlObject.h"

namespace fuml::syntax::classification
{
	class StructuralFeature;
}

namespace fuml::semantics::simpleclassifiers
{
	class FeatureValue : public utils::FumlObject
	{
		public:
			StructuralFeaturePtr feature = nullptr;
			ValueListPtr values = std::make_shared<ValueList>();
			int position = 0;

		public:
			bool hasEqualValues(
					const FeatureValuePtr&);
			FeatureValuePtr copy();
	}; //FeatureValue
}

#endif /* FUML_SEMANTICS_SIMPLESCLASSIFIERS_FEATUREVALUE_H_ */
