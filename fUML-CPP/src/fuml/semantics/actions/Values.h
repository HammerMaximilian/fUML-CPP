/*
 * Values.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_VALUES_H_
#define FUML_SEMANTICS_ACTIONS_VALUES_H_

#include <fuml/semantics/fwd.h>
#include <utils/FumlObject.h>

namespace fuml::semantics::actions
{
	class Values : public utils::FumlObject
	{
		public:
			ValueListPtr values = std::make_shared<ValueList>();

		public:
			virtual ~Values() = default;
	}; // Values
}

#endif /* FUML_SEMANTICS_ACTIONS_VALUES_H_ */
