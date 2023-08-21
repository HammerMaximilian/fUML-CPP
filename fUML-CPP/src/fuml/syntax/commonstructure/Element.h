/*
 * Element.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_ELEMENT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_ELEMENT_H_

#include <utils/FumlObject.h>
#include <memory>
#include <vector>
#include "CommentList.h"
#include "ElementList.h"

namespace fuml::syntax::commonstructure
{
	class Element : public utils::FumlObject
	{

		public:
			std::shared_ptr<fuml::syntax::commonstructure::ElementList> ownedElement = std::make_shared<fuml::syntax::commonstructure::ElementList>();
			std::shared_ptr<fuml::syntax::commonstructure::Element> owner = nullptr;
			std::shared_ptr<fuml::syntax::commonstructure::CommentList> ownedComment = std::make_shared<fuml::syntax::commonstructure::CommentList>();

		private:
			std::weak_ptr<fuml::syntax::commonstructure::Element> thisElementPtr;

		public:
			virtual ~Element() = 0;
			virtual void setThisPtr(std::weak_ptr<fuml::syntax::commonstructure::Element>);

		protected:
			void addOwnedElement(
				const std::shared_ptr<fuml::syntax::commonstructure::Element>& ownedElement);
	}; // Element
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_ELEMENT_H_ */
