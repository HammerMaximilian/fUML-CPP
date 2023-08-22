/*
 * TypeList.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_TYPELIST_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_TYPELIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::commonstructure
{
	class Type;
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::Type>> TypeList;
}

using TypeList = fuml::syntax::commonstructure::TypeList;
using TypeListPtr = std::shared_ptr<TypeList>;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_TYPELIST_H_ */
