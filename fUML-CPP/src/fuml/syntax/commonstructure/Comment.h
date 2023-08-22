/*
 * Comment.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_COMMENT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_COMMENT_H_

#include <fuml/syntax/commonstructure/ElementList.h>
#include <utils/FumlObject.h>
#include <memory>
#include <string>

namespace fuml::syntax::commonstructure
{
	class Element;
}
using Element = fuml::syntax::commonstructure::Element;
using ElementPtr = std::shared_ptr<Element>;

namespace fuml::syntax::commonstructure
{
	class Comment : public utils::FumlObject {

		public:
			ElementListPtr annotatedElement = std::make_shared<ElementList>();
			std::string body = "";

		public:
			void setAnnotatedElement(
				const ElementPtr&);
			void setBody(std::string);
	}; // Comment
}

using Comment = fuml::syntax::commonstructure::Comment;
using CommentPtr = std::shared_ptr<Comment>;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_COMMENT_H_ */
