/*
 * FeatureValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLECLASSIFIERS_FEATUREVALUE_H_
#define FUML_SEMANTICS_SIMPLECLASSIFIERS_FEATUREVALUE_H_

#include <fuml/semantics/fwd.h>
#include <fuml/syntax/fwd.h>
#include <utils/FumlObject.h>

namespace fuml::semantics::simpleclassifiers
{
	class FeatureValue : public fuml::FumlObject
	{
		public:
			StructuralFeaturePtr feature = nullptr;
			ValueListPtr values = std::make_shared<ValueList>();
			int position = 0;

		public:
			virtual ~FeatureValue() = default;

			bool hasEqualValues(const FeatureValuePtr&);
			FeatureValuePtr copy();
	};
//FeatureValue
}

#endif /* FUML_SEMANTICS_SIMPLECLASSIFIERS_FEATUREVALUE_H_ */
