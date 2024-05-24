/*
 * MultipleDelegation_SameConnector_P_P_OperationEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef MULTIPLEDELEGATION_SAMECONNECTOR_P_P_OPERATION_ENVIRONMENT_H
#define MULTIPLEDELEGATION_SAMECONNECTOR_P_P_OPERATION_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace MultipleDelegation_SameConnector_P_P_Operation
{
	class MultipleDelegation_SameConnector_P_P_OperationEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~MultipleDelegation_SameConnector_P_P_OperationEnvironment();
			static const std::shared_ptr<MultipleDelegation_SameConnector_P_P_OperationEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			MultipleDelegation_SameConnector_P_P_OperationEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* MULTIPLEDELEGATION_SAMECONNECTOR_P_P_OPERATION_ENVIRONMENT_H */
