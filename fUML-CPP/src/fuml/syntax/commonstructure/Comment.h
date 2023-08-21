/*
 * Comment.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_COMMENT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_COMMENT_H_

#include <utils/FumlObject.h>
#include <memory>
#include <vector>
#include "ElementList.h"

namespace fuml::syntax::commonstructure
{
	class Comment : public utils::FumlObject {

		public:
			std::shared_ptr<fuml::syntax::commonstructure::ElementList> annotatedElement = std::make_shared<fuml::syntax::commonstructure::ElementList>();
			std::string body = "";

		public:
			void setAnnotatedElement(
				const std::shared_ptr<fuml::syntax::commonstructure::Element>&);
			void setBody(std::string);
	}; // Comment
}



#endif /* FUML_SYNTAX_COMMONSTRUCTURE_COMMENT_H_ */
