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
			virtual ~CS_Environment() = 0;

		protected:
			CS_Environment();

			virtual void initializeLoci() override;
			virtual void initializeLociContents() override;

	};
}

#endif /* PSCS_UTILS_ENVIRONMENT_CS_ENVIRONMENT_H_ */
