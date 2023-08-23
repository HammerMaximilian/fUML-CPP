/*
 * CompoundValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLESCLASSIFIERS_COMPOUNDVALUE_H_
#define FUML_SEMANTICS_SIMPLESCLASSIFIERS_COMPOUNDVALUE_H_

#include <fuml/semantics/simplesclassifiers/StructuredValue.h>

namespace fuml::semantics::simpleclassifiers
{
	class CompoundValue : public StructuredValue
	{
		public:
			FeatureValueListPtr featureValues = std::make_shared<FeatureValueList>();

		public:
			virtual bool equals(const ValuePtr&);
			virtual ValuePtr copy();
			virtual FeatureValuePtr getFeatureValue(const StructuralFeaturePtr&);
			virtual void setFeatureValue(const StructuralFeaturePtr&,
					const ValueListPtr&, int position);
			virtual FeatureValueListPtr getFeatureValues();
			virtual std::string toString();
	}; // CompoundValue
}

#endif /* FUML_SEMANTICS_SIMPLESCLASSIFIERS_COMPOUNDVALUE_H_ */
