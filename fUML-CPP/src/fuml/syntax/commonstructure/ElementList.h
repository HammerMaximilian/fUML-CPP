/*
 * ElementList.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTLIST_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTLIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::commonstructure
{
	class Element;
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::Element>> ElementList;
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTLIST_H_ */
