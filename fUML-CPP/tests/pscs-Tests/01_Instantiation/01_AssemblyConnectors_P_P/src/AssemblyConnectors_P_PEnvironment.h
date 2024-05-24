/*
 * AssemblyConnectors_P_PEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef ASSEMBLYCONNECTORS_P_P_ENVIRONMENT_H
#define ASSEMBLYCONNECTORS_P_P_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace AssemblyConnectors_P_P
{
	class AssemblyConnectors_P_PEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~AssemblyConnectors_P_PEnvironment();
			static const std::shared_ptr<AssemblyConnectors_P_PEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			AssemblyConnectors_P_PEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* ASSEMBLYCONNECTORS_P_P_ENVIRONMENT_H */
