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
	class Element : public fuml::FumlObject
	{
		public:
			ElementListPtr ownedElement = std::make_shared<ElementList>();
			ElementPtr_w owner;
			CommentListPtr ownedComment = std::make_shared<CommentList>();

		private:
			ElementPtr_w thisElementPtr;

		public:
			virtual ~Element() = 0;
			void setThisElementPtr(ElementPtr_w);

		protected:
			void addOwnedElement(const ElementPtr& ownedElement);
	};
// Element
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_ELEMENT_H_ */
