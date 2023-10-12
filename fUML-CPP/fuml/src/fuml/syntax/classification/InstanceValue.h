/*
 * InstanceValue.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_INSTANCEVALUE_H_
#define FUML_SYNTAX_CLASSIFICATION_INSTANCEVALUE_H_

#include <fuml/syntax/values/ValueSpecification.h>

namespace fuml::syntax::classification
{
	class InstanceValue : public ValueSpecification
	{
		public:
			InstanceSpecificationPtr instance = nullptr;

		public:
			virtual ~InstanceValue() = default;

			void setInstance(const InstanceSpecificationPtr&);
	};
// InstanceValue
}

#endif /* FUML_SYNTAX_CLASSIFICATION_INSTANCEVALUE_H_ */
