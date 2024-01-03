/*
 * InstanceValue.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_CLASSIFICATION_INSTANCEVALUE_H_
#define UML_CLASSIFICATION_INSTANCEVALUE_H_

#include <uml/values/ValueSpecification.h>

namespace uml::classification
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

#endif /* UML_CLASSIFICATION_INSTANCEVALUE_H_ */
