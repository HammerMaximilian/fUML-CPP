/*
 * OutputPinList.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_OUTPUTPINLIST_H_
#define FUML_SYNTAX_ACTIONS_OUTPUTPINLIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::actions
{
	class OutputPin;
	typedef std::vector<std::shared_ptr<fuml::syntax::actions::OutputPin>> OutputPinList;
}

using OutputPinList = fuml::syntax::actions::OutputPinList;
using OutputPinListPtr = std::shared_ptr<OutputPinList>;

#endif /* FUML_SYNTAX_ACTIONS_OUTPUTPINLIST_H_ */
