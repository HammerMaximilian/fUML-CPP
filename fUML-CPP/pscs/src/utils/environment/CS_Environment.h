/*
 * CS_Environment.h
 *
 *  Created on: 22.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_UTILS_ENVIRONMENT_CS_ENVIRONMENT_H_
#define PSCS_UTILS_ENVIRONMENT_CS_ENVIRONMENT_H_

#include <utils/environment/Environment.h>

namespace pscs::environment
{
	class CS_Environment : public fuml::environment::Environment
	{
		public:
			CS_Environment();
			virtual ~CS_Environment() = 0;
	};
}

#endif /* PSCS_UTILS_ENVIRONMENT_CS_ENVIRONMENT_H_ */
