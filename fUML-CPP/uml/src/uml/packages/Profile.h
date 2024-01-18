/*
 * Profile.h
 *
 *  Created on: 08.01.2024
 *      Author: Maximilian
 */

#ifndef UML_PACKAGES_PROFILE_H_
#define UML_PACKAGES_PROFILE_H_

#include <uml/packages/Package.h>

namespace uml::packages
{
	class Profile : public Package // PSCS-specific, Stereotypes are required in PSCS
	{
		public:
			virtual ~Profile() = default;
	}; // Profile
}

#endif /* UML_PACKAGES_PROFILE_H_ */
