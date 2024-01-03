/*
 * LiteralSpecification.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef UML_VALUES_LITERALSPECIFICATION_H_
#define UML_VALUES_LITERALSPECIFICATION_H_

#include <uml/values/ValueSpecification.h>

namespace uml::values
{
	class LiteralSpecification : public ValueSpecification
	{
		public:
			virtual ~LiteralSpecification() = 0;
	};
// LiteralSpecification
}

#endif /* UML_VALUES_LITERALSPECIFICATION_H_ */
