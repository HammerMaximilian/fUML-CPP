/*
 * ValueList.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_VALUES_VALUELIST_H_
#define FUML_SEMANTICS_VALUES_VALUELIST_H_

#include <memory>
#include <vector>

namespace fuml::semantics::values
{
	class Value;
	typedef std::vector<std::shared_ptr<fuml::semantics::values::Value>> ValueList;
}

using ValueList = fuml::semantics::values::ValueList;
using ValueListPtr = std::shared_ptr<ValueList>;

#endif /* FUML_SEMANTICS_VALUES_VALUELIST_H_ */
