/*
 * assertExtentOfCExecution.h
 * 
 * Auto-generated file
 */

#ifndef ASSERTEXTENTOFC_EXECUTION_H
#define ASSERTEXTENTOFC_EXECUTION_H

#include <fuml/semantics/commonbehavior/OpaqueBehaviorExecution.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace RecursiveDestruction
{
	class assertExtentOfCExecution : public OpaqueBehaviorExecution
	{
		public:
			assertExtentOfCExecution();
			virtual ~assertExtentOfCExecution();

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

#endif /* ASSERTEXTENTOFC_EXECUTION_H */
