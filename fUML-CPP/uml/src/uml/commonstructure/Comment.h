/*
 * Comment.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef UML_COMMONSTRUCTURE_COMMENT_H_
#define UML_COMMONSTRUCTURE_COMMENT_H_

#include <uml/fwd.h>
#include <string>
#include <utils/UmlObject.h>

namespace uml::commonstructure
{
	class Comment : public uml::UmlObject
	{
		public:
			ElementListPtr annotatedElement = std::make_shared<ElementList>();
			std::string body = "";

		public:
			virtual ~Comment() = default;

			void setAnnotatedElement(const ElementPtr&);
			void setBody(std::string);
	};
// Comment
}

#endif /* UML_COMMONSTRUCTURE_COMMENT_H_ */
