/*
 * InstanceValue.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_INSTANCEVALUE_H_
#define FUML_SYNTAX_CLASSIFICATION_INSTANCEVALUE_H_

#include <memory>
#include <fuml/syntax/values/ValueSpecification.h>

namespace fuml::syntax::classification
{
	class InstanceSpecification;
}
using InstanceSpecification = fuml::syntax::classification::InstanceSpecification;
using InstanceSpecificationPtr = std::shared_ptr<InstanceSpecification>;

namespace fuml::syntax::classification
{
	class InstanceValue : public ValueSpecification
	{
		public:
			InstanceSpecificationPtr instance = nullptr;

		public:
			void setInstance(
					const InstanceSpecificationPtr&);
	}; // InstanceValue
}

using InstanceValue = fuml::syntax::classification::InstanceValue;
using InstanceValuePtr = std::shared_ptr<InstanceValue>;

#endif /* FUML_SYNTAX_CLASSIFICATION_INSTANCEVALUE_H_ */
