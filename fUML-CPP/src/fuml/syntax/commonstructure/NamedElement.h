/*
 * NamedElement.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_NAMEDELEMENT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_NAMEDELEMENT_H_

#include <memory>
#include <vector>
#include "Element.h"

namespace fuml::syntax::commonstructure
{
	class Namespace;
	enum class VisibilityKind;
}

namespace fuml::syntax::commonstructure
{
	class NamedElement : virtual public fuml::syntax::commonstructure::Element
	{

		public:
			std::string name = "";
			fuml::syntax::commonstructure::VisibilityKind visibility;
			std::string qualifiedName = "";
			std::shared_ptr<fuml::syntax::commonstructure::Namespace> namespace_ = nullptr;

		public:
			virtual ~NamedElement() = 0;

			void setName(std::string);
			void setVisibility(
				fuml::syntax::commonstructure::VisibilityKind);
			void _setNamespace(const std::shared_ptr<fuml::syntax::commonstructure::Namespace>&);
	}; // NamedElement
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_NAMEDELEMENT_H_ */
