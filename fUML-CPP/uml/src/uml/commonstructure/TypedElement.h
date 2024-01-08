/*
 * TypedElement.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef UML_COMMONSTRUCTURE_TYPEDELEMENT_H_
#define UML_COMMONSTRUCTURE_TYPEDELEMENT_H_

#include <uml/commonstructure/NamedElement.h>

namespace uml::commonstructure
{
	class TypedElement : virtual public NamedElement
	{
		public:
			TypePtr type = nullptr;

		public:
			virtual ~TypedElement() = 0;

			void setType(const TypePtr&);
	};
// TypedElement
}

#endif /* UML_COMMONSTRUCTURE_TYPEDELEMENT_H_ */
