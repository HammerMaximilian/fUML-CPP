/*
 * LossOfMessages_OperationEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef LOSSOFMESSAGES_OPERATION_ENVIRONMENT_H
#define LOSSOFMESSAGES_OPERATION_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace LossOfMessages_Operation
{
	class LossOfMessages_OperationEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~LossOfMessages_OperationEnvironment();
			static const std::shared_ptr<LossOfMessages_OperationEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			LossOfMessages_OperationEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* LOSSOFMESSAGES_OPERATION_ENVIRONMENT_H */
