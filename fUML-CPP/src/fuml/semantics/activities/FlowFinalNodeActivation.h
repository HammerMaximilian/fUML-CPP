/*
 * FlowFinalNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_FLOWFINALNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIVITIES_FLOWFINALNODEACTIVATION_H_

#include <fuml/semantics/activities/ControlNodeActivation.h>

namespace fuml::semantics::activities
{
	class FlowFinalNodeActivation : public ControlNodeActivation
	{
		public:
			virtual ~FlowFinalNodeActivation() = default;

			virtual void fire(const TokenListPtr&) override;

	}; // FlowFinalNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIVITIES_FLOWFINALNODEACTIVATION_H_ */
