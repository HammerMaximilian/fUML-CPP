/*
 * BehaviorList.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIORLIST_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIORLIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::commonbehavior
{
	class Behavior;
	typedef std::vector<std::shared_ptr<fuml::syntax::commonbehavior::Behavior>> BehaviorList;
}

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIORLIST_H_ */
