/*
 * CS_ConstructStrategy.h
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_ACTIONS_CS_CONSTRUCTSTRATEGY_H_
#define PSCS_SEMANTICS_ACTIONS_CS_CONSTRUCTSTRATEGY_H_

#include <fuml/semantics/loci/SemanticStrategy.h>
#include <pscs/semantics/fwd.h>
#include <uml/fwd.h>

namespace pscs::semantics::actions
{
	class CS_ConstructStrategy : public SemanticStrategy
	{
		public:
			virtual ~CS_ConstructStrategy() = 0;

			virtual std::string getName() override;
			virtual Object_Ptr construct(const OperationPtr&, const CS_ObjectPtr&) = 0;
	}; // CS_ConstructStrategy
}

#endif /* PSCS_SEMANTICS_ACTIONS_CS_CONSTRUCTSTRATEGY_H_ */
