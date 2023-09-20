/*
 * primecheckerEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef PRIMECHECKER_ENVIRONMENT_H
#define PRIMECHECKER_ENVIRONMENT_H

#include <utils/environment/Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace primechecker
{
	class primecheckerEnvironment : public fuml::environment::Environment
	{
		public:
			virtual ~primecheckerEnvironment();
			static const std::shared_ptr<primecheckerEnvironment>& Instance();

			virtual void execute(std::string) override;

		private:
			primecheckerEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* PRIMECHECKER_ENVIRONMENT_H */
