/*
 * ClauseList.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CLAUSELIST_H_
#define FUML_SYNTAX_ACTIONS_CLAUSELIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::actions
{
	class Clause;
	typedef std::vector<std::shared_ptr<fuml::syntax::actions::Clause>> ClauseList;
}

#endif /* FUML_SYNTAX_ACTIONS_CLAUSELIST_H_ */
