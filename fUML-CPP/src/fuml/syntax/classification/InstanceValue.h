/*
 * InstanceValue.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_INSTANCEVALUE_H_
#define FUML_SYNTAX_CLASSIFICATION_INSTANCEVALUE_H_

#include <memory>
#include "fuml/syntax/values/ValueSpecification.h"

namespace fuml::syntax::classification
{
	class InstanceSpecification;
}

namespace fuml::syntax::classification
{
	class InstanceValue : public fuml::syntax::values::ValueSpecification
	{
		public:
			std::shared_ptr<fuml::syntax::classification::InstanceSpecification> instance = nullptr;

		public:
			void setInstance(
					const std::shared_ptr<fuml::syntax::classification::InstanceSpecification>&);
	}; // InstanceValue
}

#endif /* FUML_SYNTAX_CLASSIFICATION_INSTANCEVALUE_H_ */
