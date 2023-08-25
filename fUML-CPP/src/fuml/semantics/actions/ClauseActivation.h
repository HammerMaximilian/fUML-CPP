/*
 * ClauseActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_CLAUSEACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_CLAUSEACTIVATION_H_

#include <fuml/semantics/fwd.h>
#include <fuml/syntax/fwd.h>
#include <utils/FumlObject.h>

namespace fuml::semantics::actions
{
	class ClauseActivation : public utils::FumlObject
	{
		public:
			ConditionalNodeActivationPtr conditionalNodeActivation = nullptr;
			ClausePtr clause = nullptr;

		public:
			virtual ~ClauseActivation() = default;

			void receiveControl();
			bool isReady();
			void runTest();
			void selectBody();
			BooleanValuePtr getDecision();
			ClauseActivationListPtr getPredecessors();
			ClauseActivationListPtr getSuccessors();

	}; // ClauseActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_CLAUSEACTIVATION_H_ */
