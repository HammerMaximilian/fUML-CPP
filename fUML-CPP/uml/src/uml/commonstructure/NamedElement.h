/*
 * NamedElement.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef UML_COMMONSTRUCTURE_NAMEDELEMENT_H_
#define UML_COMMONSTRUCTURE_NAMEDELEMENT_H_

#include <uml/commonstructure/Element.h>
#include <uml/commonstructure/VisibilityKind.h>
#include <string>

namespace uml::commonstructure
{
	class NamedElement : virtual public Element
	{

		public:
			std::string name = "";
			VisibilityKind visibility;
			std::string qualifiedName = "";
			NamespacePtr_w namespace_;

		public:
			virtual ~NamedElement() = 0;

			void setName(std::string);
			void setVisibility(VisibilityKind);
			void _setNamespace(const NamespacePtr&);
	};
// NamedElement
}

#endif /* UML_COMMONSTRUCTURE_NAMEDELEMENT_H_ */
