/*
 * RedefinableElement.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_REDEFINABLEELEMENT_H_
#define FUML_SYNTAX_CLASSIFICATION_REDEFINABLEELEMENT_H_

#include <fuml/syntax/commonstructure/NamedElement.h>


namespace fuml::syntax::classification
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
			void addRedefinedElement(
					const RedefinableElementPtr&);
			void addRedefinitionContext(
					const ClassifierPtr&);
	}; // RedefinableElement
}

#endif /* FUML_SYNTAX_CLASSIFICATION_REDEFINABLEELEMENT_H_ */
