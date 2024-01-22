/*
 * Environment.h
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_UTILS_ENVIRONMENT_ENVIRONMENT_H_
#define PSCS_UTILS_ENVIRONMENT_ENVIRONMENT_H_

#include <utils/environment/Environment.h>

namespace pscs::environment
{
	class Environment : public fuml::environment::Environment
	{
		public:
			Environment();
			virtual ~Environment() = 0;
	};
}

#endif /* PSCS_UTILS_ENVIRONMENT_ENVIRONMENT_H_ */
