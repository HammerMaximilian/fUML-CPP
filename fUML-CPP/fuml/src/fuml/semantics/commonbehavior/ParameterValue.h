/*
 * ParameterValue.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_PARAMETERVALUE_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_PARAMETERVALUE_H_

#include <fuml/semantics/fwd.h>
#include <uml/fwd.h>
#include <utils/UmlObject.h>

namespace fuml::semantics::commonbehavior
{
	class ParameterValue : uml::UmlObject
	{
		public:
			ParameterPtr parameter = nullptr;
			ValueListPtr values = std::make_shared<ValueList>();

		public:
			virtual ~ParameterValue() = default;

			ParameterValuePtr copy();
	};
// ParameterValue
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_PARAMETERVALUE_H_ */
