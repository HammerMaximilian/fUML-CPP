/*
 * ExecutionFactory.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_LOCI_EXECUTIONFACTORY_H_
#define FUML_SEMANTICS_LOCI_EXECUTIONFACTORY_H_

#include <fuml/semantics/fwd.h>
#include <fuml/syntax/fwd.h>
#include <utils/FumlObject.h>

namespace fuml::semantics::loci
{
	class ExecutionFactory : public fuml::FumlObject
	{
		public:
			LocusPtr_w locus;
			OpaqueBehaviorExecutionListPtr primitiveBehaviorPrototypes = std::make_shared<OpaqueBehaviorExecutionList>();
			PrimitiveTypeListPtr builtInTypes = std::make_shared<PrimitiveTypeList>();
			SemanticStrategyListPtr strategies = std::make_shared<SemanticStrategyList>();

		public:
			virtual ~ExecutionFactory() = default;

			ExecutionPtr createExecution(const BehaviorPtr&, const Object_Ptr&);
			EvaluationPtr createEvaluation(const ValueSpecificationPtr&);
			SemanticVisitorPtr instantiateVisitor(const ElementPtr&);
			OpaqueBehaviorExecutionPtr instantiateOpaqueBehaviorExecution(const OpaqueBehaviorPtr&);
			void addPrimitiveBehaviorPrototype(const OpaqueBehaviorExecutionPtr&);
			void addBuiltInType(const PrimitiveTypePtr&);
			PrimitiveTypePtr getBuiltInType(std::string);
			void setStrategy(const SemanticStrategyPtr&);
			SemanticStrategyPtr getStrategy(std::string);
			int getStrategyIndex(std::string);

	};
// ExecutionFactory
}

#endif /* FUML_SEMANTICS_LOCI_EXECUTIONFACTORY_H_ */
