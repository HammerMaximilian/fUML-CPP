/*
 * SingleDelegation_P_PWP_OperationEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef SINGLEDELEGATION_P_PWP_OPERATION_ENVIRONMENT_H
#define SINGLEDELEGATION_P_PWP_OPERATION_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace SingleDelegation_P_PWP_Operation
{
	class SingleDelegation_P_PWP_OperationEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~SingleDelegation_P_PWP_OperationEnvironment();
			static const std::shared_ptr<SingleDelegation_P_PWP_OperationEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			SingleDelegation_P_PWP_OperationEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* SINGLEDELEGATION_P_PWP_OPERATION_ENVIRONMENT_H */
