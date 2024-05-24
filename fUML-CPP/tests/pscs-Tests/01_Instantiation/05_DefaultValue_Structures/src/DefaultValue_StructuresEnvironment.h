/*
 * DefaultValue_StructuresEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef DEFAULTVALUE_STRUCTURES_ENVIRONMENT_H
#define DEFAULTVALUE_STRUCTURES_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace DefaultValue_Structures
{
	class DefaultValue_StructuresEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~DefaultValue_StructuresEnvironment();
			static const std::shared_ptr<DefaultValue_StructuresEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			DefaultValue_StructuresEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* DEFAULTVALUE_STRUCTURES_ENVIRONMENT_H */
