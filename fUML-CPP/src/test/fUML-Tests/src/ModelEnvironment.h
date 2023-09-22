/*
 * ModelEnvironment.h
 * 
 * Auto-generated file
 */

#ifndef MODEL_ENVIRONMENT_H
#define MODEL_ENVIRONMENT_H

#include <utils/environment/Environment.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace Model
{
	class ModelEnvironment : public fuml::environment::Environment
	{
		public:
			virtual ~ModelEnvironment();
			static const std::shared_ptr<ModelEnvironment>& Instance();

			virtual void execute(std::string) override;

		private:
			ModelEnvironment();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* MODEL_ENVIRONMENT_H */
