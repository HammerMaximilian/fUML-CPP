/*
 * Signal_AssemblyEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef SIGNAL_ASSEMBLY_ENVIRONMENT_H
#define SIGNAL_ASSEMBLY_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Signal_Assembly
{
	class Signal_AssemblyEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~Signal_AssemblyEnvironment();
			static const std::shared_ptr<Signal_AssemblyEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			Signal_AssemblyEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* SIGNAL_ASSEMBLY_ENVIRONMENT_H */
