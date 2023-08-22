/*
 * Element.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_ELEMENT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_ELEMENT_H_

#include <fuml/syntax/commonstructure/CommentList.h>
#include <fuml/syntax/commonstructure/ElementList.h>
#include <utils/FumlObject.h>
#include <memory>

namespace fuml::syntax::commonstructure
{
	class Element : public utils::FumlObject
	{
		using ElementPtr = std::shared_ptr<Element>;

		public:
			ElementListPtr ownedElement = std::make_shared<ElementList>();
			ElementPtr owner = nullptr;
			CommentListPtr ownedComment = std::make_shared<CommentList>();

		private:
			std::weak_ptr<Element> thisElementPtr;

		public:
			virtual ~Element() = 0;
			virtual void setThisPtr(std::weak_ptr<Element>);

		protected:
			void addOwnedElement(
				const ElementPtr& ownedElement);
	}; // Element
}

using Element = fuml::syntax::commonstructure::Element;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_ELEMENT_H_ */
