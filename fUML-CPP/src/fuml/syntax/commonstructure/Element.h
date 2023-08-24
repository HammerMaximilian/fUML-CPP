/*
 * Element.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_ELEMENT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_ELEMENT_H_

#include <fuml/syntax/fwd.h>
#include <utils/FumlObject.h>

namespace fuml::syntax::commonstructure
{
	class Element : public utils::FumlObject
	{
		public:
			ElementListPtr ownedElement = std::make_shared<ElementList>();
			ElementPtr owner = nullptr;
			CommentListPtr ownedComment = std::make_shared<CommentList>();

		private:
			std::weak_ptr<Element> thisElementPtr;

		public:
			virtual ~Element() = 0;
			void setThisElementPtr(std::weak_ptr<Element>);

		protected:
			void addOwnedElement(
				const ElementPtr& ownedElement);
	}; // Element
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_ELEMENT_H_ */
