/*
 * CS_RequestPropagationStrategy.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_REQUESTPROPAGATIONSTRATEGY_H_
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_REQUESTPROPAGATIONSTRATEGY_H_

#include <fuml/semantics/fwd.h>
#include <fuml/semantics/loci/SemanticStrategy.h>

namespace pscs::semantics::structuredclassifiers
{
	class CS_RequestPropagationStrategy : public SemanticStrategy
	{
		public:
			virtual ~CS_RequestPropagationStrategy() = 0;

			virtual std::string getName() override;
			virtual ReferenceListPtr select(const ReferenceListPtr&, const SemanticVisitorPtr&) = 0;
	}; // CS_RequestPropagationStrategy
}

#endif /* PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_REQUESTPROPAGATIONSTRATEGY_H_ */
