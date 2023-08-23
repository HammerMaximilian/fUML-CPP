/*
 * NamedElement.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_NAMEDELEMENT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_NAMEDELEMENT_H_

#include <fuml/syntax/commonstructure/Element.h>
#include <fuml/syntax/commonstructure/VisibilityKind.h>
#include <memory>
#include <string>

namespace fuml::syntax::commonstructure
{
	class Namespace;
}
using Namespace = fuml::syntax::commonstructure::Namespace;
using NamespacePtr = std::shared_ptr<Namespace>;

namespace fuml::syntax::commonstructure
{
	class NamedElement : virtual public Element
	{

		public:
			std::string name = "";
			VisibilityKind visibility;
			std::string qualifiedName = "";
			NamespacePtr namespace_ = nullptr;

		public:
			virtual ~NamedElement() = 0;

			void setName(std::string);
			void setVisibility(
				VisibilityKind);
			void _setNamespace(const NamespacePtr&);
	}; // NamedElement
}

using NamedElement = fuml::syntax::commonstructure::NamedElement;
using NamedElementPtr = std::shared_ptr<NamedElement>;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_NAMEDELEMENT_H_ */
