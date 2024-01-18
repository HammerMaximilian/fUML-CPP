/*
 * LiteralNull.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef UML_VALUES_LITERALNULL_H_
#define UML_VALUES_LITERALNULL_H_

#include <uml/values/LiteralSpecification.h>

namespace uml::values
{
	class LiteralNull : public LiteralSpecification
	{
		public:
			virtual ~LiteralNull() = default;

	};
// LiteralNull
}

#endif /* UML_VALUES_LITERALNULL_H_ */
