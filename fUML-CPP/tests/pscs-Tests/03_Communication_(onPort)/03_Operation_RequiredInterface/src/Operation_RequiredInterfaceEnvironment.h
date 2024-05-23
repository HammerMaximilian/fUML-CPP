/*
 * Operation_RequiredInterfaceEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef OPERATION_REQUIREDINTERFACE_ENVIRONMENT_H
#define OPERATION_REQUIREDINTERFACE_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Operation_RequiredInterface
{
	class Operation_RequiredInterfaceEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~Operation_RequiredInterfaceEnvironment();
			static const std::shared_ptr<Operation_RequiredInterfaceEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			Operation_RequiredInterfaceEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* OPERATION_REQUIREDINTERFACE_ENVIRONMENT_H */
