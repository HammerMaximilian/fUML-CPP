/*
 * CS_DefaultRequestPropagationStrategy.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_DEFAULTREQUESTPROPAGATIONSTRATEGY_H_
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_DEFAULTREQUESTPROPAGATIONSTRATEGY_H_

#include <pscs/semantics/structuredclassifiers/CS_RequestPropagationStrategy.h>

namespace pscs::semantics::structuredclassifiers
{
	class CS_DefaultRequestPropagationStrategy : public CS_RequestPropagationStrategy
	{
		public:
			virtual ~CS_DefaultRequestPropagationStrategy() = default;

			virtual ReferenceListPtr select(const ReferenceListPtr&, const SemanticVisitorPtr&) override;
	}; // CS_DefaultRequestPropagationStrategy
}

#endif /* PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_DEFAULTREQUESTPROPAGATIONSTRATEGY_H_ */
