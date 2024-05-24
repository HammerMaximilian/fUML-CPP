/*
 * Operation_RequiredInterface_DelegationChainEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef OPERATION_REQUIREDINTERFACE_DELEGATIONCHAIN_ENVIRONMENT_H
#define OPERATION_REQUIREDINTERFACE_DELEGATIONCHAIN_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Operation_RequiredInterface_DelegationChain
{
	class Operation_RequiredInterface_DelegationChainEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~Operation_RequiredInterface_DelegationChainEnvironment();
			static const std::shared_ptr<Operation_RequiredInterface_DelegationChainEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			Operation_RequiredInterface_DelegationChainEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* OPERATION_REQUIREDINTERFACE_DELEGATIONCHAIN_ENVIRONMENT_H */
