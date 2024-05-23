/*
 * Operation_ProvidedAndRequiredInterfaceEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef OPERATION_PROVIDEDANDREQUIREDINTERFACE_ENVIRONMENT_H
#define OPERATION_PROVIDEDANDREQUIREDINTERFACE_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Operation_ProvidedAndRequiredInterface
{
	class Operation_ProvidedAndRequiredInterfaceEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~Operation_ProvidedAndRequiredInterfaceEnvironment();
			static const std::shared_ptr<Operation_ProvidedAndRequiredInterfaceEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			Operation_ProvidedAndRequiredInterfaceEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* OPERATION_PROVIDEDANDREQUIREDINTERFACE_ENVIRONMENT_H */
