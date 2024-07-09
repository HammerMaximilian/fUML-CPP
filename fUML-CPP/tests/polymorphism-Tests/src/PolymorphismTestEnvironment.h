/*
 * PolymorphismTestEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef POLYMORPHISMTEST_ENVIRONMENT_H
#define POLYMORPHISMTEST_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace PolymorphismTest
{
	class PolymorphismTestEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~PolymorphismTestEnvironment();
			static const std::shared_ptr<PolymorphismTestEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			PolymorphismTestEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */
			virtual void initializeLociContents() override;
		/*
 		 * End of user code
		 */
	};
}

#endif /* POLYMORPHISMTEST_ENVIRONMENT_H */
