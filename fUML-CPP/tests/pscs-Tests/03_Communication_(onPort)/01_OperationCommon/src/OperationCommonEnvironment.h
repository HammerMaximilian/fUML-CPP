/*
 * OperationCommonEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef OPERATIONCOMMON_ENVIRONMENT_H
#define OPERATIONCOMMON_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace OperationCommon
{
	class OperationCommonEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~OperationCommonEnvironment();
			static const std::shared_ptr<OperationCommonEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			OperationCommonEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* OPERATIONCOMMON_ENVIRONMENT_H */
