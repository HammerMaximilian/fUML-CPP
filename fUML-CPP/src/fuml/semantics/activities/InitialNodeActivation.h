/*
 * InitialNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_INITIALNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIVITIES_INITIALNODEACTIVATION_H_

#include <fuml/semantics/activities/ControlNodeActivation.h>

namespace fuml::semantics::activities
{
	class InitialNodeActivation : public ControlNodeActivation
	{
		public:
			virtual ~InitialNodeActivation() = default;

			virtual void fire(const TokenListPtr&) override;

	};
// InitialNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIVITIES_INITIALNODEACTIVATION_H_ */
