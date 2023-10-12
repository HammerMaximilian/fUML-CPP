/*
 * fUML_TestsEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef FUML_TESTS_ENVIRONMENT_H
#define FUML_TESTS_ENVIRONMENT_H

#include <utils/environment/Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace fUML_Tests
{
	class fUML_TestsEnvironment : public fuml::environment::Environment
	{
		public:
			virtual ~fUML_TestsEnvironment();
			static const std::shared_ptr<fUML_TestsEnvironment>& Instance();

			virtual void execute(std::string) override;

		private:
			fUML_TestsEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* FUML_TESTS_ENVIRONMENT_H */
