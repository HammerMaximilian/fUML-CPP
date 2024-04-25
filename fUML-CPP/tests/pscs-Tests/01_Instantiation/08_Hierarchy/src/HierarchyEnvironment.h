/*
 * HierarchyEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef HIERARCHY_ENVIRONMENT_H
#define HIERARCHY_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Hierarchy
{
	class HierarchyEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~HierarchyEnvironment();
			static const std::shared_ptr<HierarchyEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			HierarchyEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* HIERARCHY_ENVIRONMENT_H */
