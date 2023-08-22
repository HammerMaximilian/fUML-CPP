/*
 * TriggerList.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_TRIGGERLIST_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_TRIGGERLIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::commonbehavior
{
	class Trigger;
	typedef std::vector<std::shared_ptr<fuml::syntax::commonbehavior::Trigger>> TriggerList;
}

using TriggerList = fuml::syntax::commonbehavior::TriggerList;
using TriggerListPtr = std::shared_ptr<TriggerList>;

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_TRIGGERLIST_H_ */
