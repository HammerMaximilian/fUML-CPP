/*
 * RedefinableElement.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_CLASSIFICATION_REDEFINABLEELEMENT_H_
#define UML_CLASSIFICATION_REDEFINABLEELEMENT_H_

#include <uml/commonstructure/NamedElement.h>

namespace uml::classification
{
	class RedefinableElement : virtual public NamedElement
	{
		public:
			bool isLeaf = false;
			RedefinableElementListPtr redefinedElement = std::make_shared<RedefinableElementList>();
			ClassifierListPtr redefinitionContext = std::make_shared<ClassifierList>();

		public:
			virtual ~RedefinableElement() = 0;

			void setIsLeaf(bool);

		protected:
			void addRedefinedElement(const RedefinableElementPtr&);
			void addRedefinitionContext(const ClassifierPtr&);
	};
// RedefinableElement
}

#endif /* UML_CLASSIFICATION_REDEFINABLEELEMENT_H_ */
