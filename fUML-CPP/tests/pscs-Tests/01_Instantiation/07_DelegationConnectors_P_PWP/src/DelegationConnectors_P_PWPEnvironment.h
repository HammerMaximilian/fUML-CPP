/*
 * DelegationConnectors_P_PWPEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef DELEGATIONCONNECTORS_P_PWP_ENVIRONMENT_H
#define DELEGATIONCONNECTORS_P_PWP_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace DelegationConnectors_P_PWP
{
	class DelegationConnectors_P_PWPEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~DelegationConnectors_P_PWPEnvironment();
			static const std::shared_ptr<DelegationConnectors_P_PWPEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			DelegationConnectors_P_PWPEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* DELEGATIONCONNECTORS_P_PWP_ENVIRONMENT_H */
