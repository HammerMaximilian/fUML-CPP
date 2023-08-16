/*
 * NamedElementList.h
 *
 *  Created on: 16.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_NAMEDELEMENTLIST_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_NAMEDELEMENTLIST_H_

#include <memory>
#include <vector>
#include "NamedElement.h"

namespace fuml::syntax::commonstructure
{
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::NamedElement>> NamedElementList;
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_NAMEDELEMENTLIST_H_ */
