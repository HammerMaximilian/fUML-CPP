/*
 * ValueSpecification.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef UML_VALUES_VALUESPECIFICATION_H_
#define UML_VALUES_VALUESPECIFICATION_H_

#include <uml/commonstructure/TypedElement.h>

namespace uml::values
{
	class ValueSpecification : public TypedElement
	{
		public:
			virtual ~ValueSpecification() = 0;
	};
// ValueSpecification
}

#endif /* UML_VALUES_VALUESPECIFICATION_H_ */
