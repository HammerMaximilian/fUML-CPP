/*
 * CommentList.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_COMMENTLIST_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_COMMENTLIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::commonstructure
{
	class Comment;
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::Comment>> CommentList;
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_COMMENTLIST_H_ */
