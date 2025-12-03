/*
 * VariableValue.h
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#ifndef FUML_EXTENSIONS_ACTIVITIES_VARIABLEVALUE_H_
#define FUML_EXTENSIONS_ACTIVITIES_VARIABLEVALUE_H_

#include <fuml/extensions/fwd.h>
#include <fuml/semantics/fwd.h>
#include <uml/fwd.h>
#include <utils/UmlObject.h>

namespace fuml::extensions::activities
{
	class VariableValue : public uml::UmlObject
	{
		public:
			VariablePtr variable = nullptr;
			ValueListPtr values = std::make_shared<ValueList>();
			int position = 0;

		public:
			virtual ~VariableValue() = default;

			VariableValuePtr copy();
	};
// VariableValue
}

#endif /* FUML_EXTENSIONS_ACTIVITIES_VARIABLEVALUE_H_ */
