/*
 * CalcModelEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef CALCMODEL_ENVIRONMENT_H
#define CALCMODEL_ENVIRONMENT_H

#include <utils/environment/Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace CalcModel
{
	class CalcModelEnvironment : public fuml::environment::Environment
	{
		public:
			virtual ~CalcModelEnvironment();
			static const std::shared_ptr<CalcModelEnvironment>& Instance();

			virtual void execute(std::string) override;

		private:
			CalcModelEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* CALCMODEL_ENVIRONMENT_H */
