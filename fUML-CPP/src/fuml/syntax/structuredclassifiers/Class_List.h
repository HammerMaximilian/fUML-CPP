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

namespace fuml::syntax::structuredclassifiers
{
	class Class_;
	typedef std::vector<std::shared_ptr<fuml::syntax::structuredclassifiers::Class_>> Class_List;
}

using Class_List = fuml::syntax::structuredclassifiers::Class_List;
using Class_ListPtr = std::shared_ptr<Class_List>;

#endif /* FUML_SYNTAX_STRUCTUREDCLASSIFIERS_CLASS_LIST_H_ */
