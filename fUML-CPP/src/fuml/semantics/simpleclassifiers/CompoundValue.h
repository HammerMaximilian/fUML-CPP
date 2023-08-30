/*
 * CompoundValue.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLECLASSIFIERS_COMPOUNDVALUE_H_
#define FUML_SEMANTICS_SIMPLECLASSIFIERS_COMPOUNDVALUE_H_

#include <fuml/semantics/simpleclassifiers/StructuredValue.h>

namespace fuml::semantics::simpleclassifiers
{
	class CompoundValue : public StructuredValue
	{
		public:
			FeatureValueListPtr featureValues = std::make_shared<FeatureValueList>();

		public:
			virtual ~CompoundValue() = 0;

			virtual bool equals(const ValuePtr&) override;
			virtual ValuePtr copy() override;
			virtual FeatureValuePtr getFeatureValue(const StructuralFeaturePtr&) override;
			virtual void setFeatureValue(const StructuralFeaturePtr&, const ValueListPtr&, int position) override;
			virtual FeatureValueListPtr getFeatureValues() override;
			virtual std::string toString() override;
	};
// CompoundValue
}

#endif /* FUML_SEMANTICS_SIMPLECLASSIFIERS_COMPOUNDVALUE_H_ */
