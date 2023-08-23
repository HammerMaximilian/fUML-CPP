/*
 * TypedElement.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_TYPEDELEMENT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_TYPEDELEMENT_H_

#include <fuml/syntax/commonstructure/NamedElement.h>

namespace fuml::syntax::commonstructure
{
	class TypedElement : virtual public NamedElement {

		public:
			TypePtr type = nullptr;

		public:
			void setType(const TypePtr&);
	}; // TypedElement
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_TYPEDELEMENT_H_ */
