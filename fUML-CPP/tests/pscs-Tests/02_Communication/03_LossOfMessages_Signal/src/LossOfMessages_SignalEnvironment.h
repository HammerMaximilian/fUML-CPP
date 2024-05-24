/*
 * LossOfMessages_SignalEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef LOSSOFMESSAGES_SIGNAL_ENVIRONMENT_H
#define LOSSOFMESSAGES_SIGNAL_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace LossOfMessages_Signal
{
	class LossOfMessages_SignalEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~LossOfMessages_SignalEnvironment();
			static const std::shared_ptr<LossOfMessages_SignalEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			LossOfMessages_SignalEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* LOSSOFMESSAGES_SIGNAL_ENVIRONMENT_H */
