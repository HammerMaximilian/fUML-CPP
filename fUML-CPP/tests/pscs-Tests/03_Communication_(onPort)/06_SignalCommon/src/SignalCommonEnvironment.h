/*
 * SignalCommonEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef SIGNALCOMMON_ENVIRONMENT_H
#define SIGNALCOMMON_ENVIRONMENT_H

#include <utils/environment/CS_Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace SignalCommon
{
	class SignalCommonEnvironment : public pscs::environment::CS_Environment
	{
		public:
			virtual ~SignalCommonEnvironment();
			static const std::shared_ptr<SignalCommonEnvironment>& Instance();

			virtual void execute(std::string) override;

		protected:
			SignalCommonEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* SIGNALCOMMON_ENVIRONMENT_H */
