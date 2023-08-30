/*
 * DecisionNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_DECISIONNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIVITIES_DECISIONNODEACTIVATION_H_

#include <fuml/semantics/activities/ControlNodeActivation.h>

namespace fuml::semantics::activities
{
	class DecisionNodeActivation : public ControlNodeActivation
	{
		public:
			ExecutionPtr decisionInputExecution = nullptr;

		public:
			virtual ~DecisionNodeActivation() = default;

			virtual void fire(const TokenListPtr&) override;
			ValueListPtr getDecisionValues(const TokenListPtr&);
			ValuePtr executeDecisionInputBehavior(const ValuePtr&, const ValuePtr&);
			virtual void terminate() override;
			virtual bool isReady() override;
			virtual TokenListPtr takeOfferedTokens() override;
			ValuePtr getDecisionInputFlowValue();
			ActivityEdgeInstancePtr getDecisionInputFlowInstance();
			bool test(const ValueSpecificationPtr&, const ValuePtr&);
			TokenListPtr removeJoinedControlTokens(const TokenListPtr&);
			bool hasObjectFlowInput();

	};
// DecisionNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIVITIES_DECISIONNODEACTIVATION_H_ */
