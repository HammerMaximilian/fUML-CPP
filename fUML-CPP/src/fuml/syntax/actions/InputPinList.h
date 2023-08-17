/*
 * InputPinList.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_INPUTPINLIST_H_
#define FUML_SYNTAX_ACTIONS_INPUTPINLIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::actions
{
	class InputPin;
	typedef std::vector<std::shared_ptr<fuml::syntax::actions::InputPin>> InputPinList;
}

#endif /* FUML_SYNTAX_ACTIONS_INPUTPINLIST_H_ */
