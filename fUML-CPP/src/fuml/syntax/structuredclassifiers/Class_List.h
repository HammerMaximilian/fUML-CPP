/*
 * Class_List.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_STRUCTUREDCLASSIFIERS_CLASS_LIST_H_
#define FUML_SYNTAX_STRUCTUREDCLASSIFIERS_CLASS_LIST_H_

#include <memory>
#include <vector>
#include "Class_.h"

namespace fuml::syntax::classification
{
	typedef std::vector<std::shared_ptr<fuml::syntax::structuredclassifiers::Class_>> Class_List;
}

#endif /* FUML_SYNTAX_STRUCTUREDCLASSIFIERS_CLASS_LIST_H_ */
