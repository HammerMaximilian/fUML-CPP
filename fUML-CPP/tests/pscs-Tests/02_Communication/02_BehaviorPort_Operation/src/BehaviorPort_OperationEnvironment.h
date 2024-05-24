/*
 * BehaviorPort_OperationEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef BEHAVIORPORT_OPERATION_ENVIRONMENT_H
#define BEHAVIORPORT_OPERATION_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace BehaviorPort_Operation
{
	class BehaviorPort_OperationEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~BehaviorPort_OperationEnvironment();
			static const std::shared_ptr<BehaviorPort_OperationEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			BehaviorPort_OperationEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* BEHAVIORPORT_OPERATION_ENVIRONMENT_H */
