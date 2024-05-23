/*
 * Signal_AssemblyAndDelegationEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef SIGNAL_ASSEMBLYANDDELEGATION_ENVIRONMENT_H
#define SIGNAL_ASSEMBLYANDDELEGATION_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Signal_AssemblyAndDelegation
{
	class Signal_AssemblyAndDelegationEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~Signal_AssemblyAndDelegationEnvironment();
			static const std::shared_ptr<Signal_AssemblyAndDelegationEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			Signal_AssemblyAndDelegationEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* SIGNAL_ASSEMBLYANDDELEGATION_ENVIRONMENT_H */
