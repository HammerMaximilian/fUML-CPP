/*
 * RemovingInstanceFromPartEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef REMOVINGINSTANCEFROMPART_ENVIRONMENT_H
#define REMOVINGINSTANCEFROMPART_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace RemovingInstanceFromPart
{
	class RemovingInstanceFromPartEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~RemovingInstanceFromPartEnvironment();
			static const std::shared_ptr<RemovingInstanceFromPartEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			RemovingInstanceFromPartEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* REMOVINGINSTANCEFROMPART_ENVIRONMENT_H */
