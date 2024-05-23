/*
 * RemovingInstanceFromPortEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef REMOVINGINSTANCEFROMPORT_ENVIRONMENT_H
#define REMOVINGINSTANCEFROMPORT_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace RemovingInstanceFromPort
{
	class RemovingInstanceFromPortEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~RemovingInstanceFromPortEnvironment();
			static const std::shared_ptr<RemovingInstanceFromPortEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			RemovingInstanceFromPortEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* REMOVINGINSTANCEFROMPORT_ENVIRONMENT_H */
