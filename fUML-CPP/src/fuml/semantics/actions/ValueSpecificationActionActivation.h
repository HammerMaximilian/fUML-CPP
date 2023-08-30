/*
 * ValueSpecificationActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_VALUESPECIFICATIONACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_VALUESPECIFICATIONACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class ValueSpecificationActionActivation : public ActionActivation
	{
		public:
			virtual ~ValueSpecificationActionActivation() = default;

			virtual void doAction() override;

	};
// ValueSpecificationActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_VALUESPECIFICATIONACTIONACTIVATION_H_ */
