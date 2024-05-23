/*
 * RecursiveDestructionEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef RECURSIVEDESTRUCTION_ENVIRONMENT_H
#define RECURSIVEDESTRUCTION_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace RecursiveDestruction
{
	class RecursiveDestructionEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~RecursiveDestructionEnvironment();
			static const std::shared_ptr<RecursiveDestructionEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			RecursiveDestructionEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* RECURSIVEDESTRUCTION_ENVIRONMENT_H */
