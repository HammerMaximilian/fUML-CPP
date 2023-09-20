/*
 * checkIf_1_Or_0Execution.h
 * 
 * Auto-generated file
 */

#ifndef CHECKIF_1_OR_0_EXECUTION_H
#define CHECKIF_1_OR_0_EXECUTION_H

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace primechecker
{
	class checkIf_1_Or_0Execution : public OpaqueBehaviorExecution
	{
		public:
			checkIf_1_Or_0Execution();
			virtual ~checkIf_1_Or_0Execution();

			virtual void doBody(const ParameterValueListPtr&, const ParameterValueListPtr&) override;
			virtual ValuePtr new_() override;		

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* CHECKIF_1_OR_0_EXECUTION_H */
