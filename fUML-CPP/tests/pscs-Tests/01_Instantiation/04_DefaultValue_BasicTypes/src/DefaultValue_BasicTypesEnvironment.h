/*
 * DefaultValue_BasicTypesEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef DEFAULTVALUE_BASICTYPES_ENVIRONMENT_H
#define DEFAULTVALUE_BASICTYPES_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace DefaultValue_BasicTypes
{
	class DefaultValue_BasicTypesEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~DefaultValue_BasicTypesEnvironment();
			static const std::shared_ptr<DefaultValue_BasicTypesEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			DefaultValue_BasicTypesEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* DEFAULTVALUE_BASICTYPES_ENVIRONMENT_H */
