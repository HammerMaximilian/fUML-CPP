/*
 * MultipleDelegation_SameConnector_P_PWP_SignalEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef MULTIPLEDELEGATION_SAMECONNECTOR_P_PWP_SIGNAL_ENVIRONMENT_H
#define MULTIPLEDELEGATION_SAMECONNECTOR_P_PWP_SIGNAL_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace MultipleDelegation_SameConnector_P_PWP_Signal
{
	class MultipleDelegation_SameConnector_P_PWP_SignalEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~MultipleDelegation_SameConnector_P_PWP_SignalEnvironment();
			static const std::shared_ptr<MultipleDelegation_SameConnector_P_PWP_SignalEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			MultipleDelegation_SameConnector_P_PWP_SignalEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* MULTIPLEDELEGATION_SAMECONNECTOR_P_PWP_SIGNAL_ENVIRONMENT_H */
