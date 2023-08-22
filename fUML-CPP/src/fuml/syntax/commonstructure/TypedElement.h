/*
 * TypedElement.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_TYPEDELEMENT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_TYPEDELEMENT_H_

#include <fuml/syntax/commonstructure/NamedElement.h>
#include <memory>

namespace fuml::syntax::commonstructure
{
	class Type;
}
using Type = fuml::syntax::commonstructure::Type;
using TypePtr = std::shared_ptr<Type>;

namespace fuml::syntax::commonstructure
{
	class TypedElement : virtual public fuml::syntax::commonstructure::NamedElement {

		public:
			TypePtr type = nullptr;

		public:
			void setType(const TypePtr&);
	}; // TypedElement
}

using TypedElement = fuml::syntax::commonstructure::TypedElement;
using TypedElementPtr = std::shared_ptr<TypedElement>;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_TYPEDELEMENT_H_ */
