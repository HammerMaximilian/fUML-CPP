/*
 * BehaviorPort_SignalEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef BEHAVIORPORT_SIGNAL_ENVIRONMENT_H
#define BEHAVIORPORT_SIGNAL_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace BehaviorPort_Signal
{
	class BehaviorPort_SignalEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~BehaviorPort_SignalEnvironment();
			static const std::shared_ptr<BehaviorPort_SignalEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			BehaviorPort_SignalEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* BEHAVIORPORT_SIGNAL_ENVIRONMENT_H */
