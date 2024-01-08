/*
 * Stereotype.h
 *
 *  Created on: 08.01.2024
 *      Author: Maximilian
 */

#ifndef UML_PACKAGES_STEREOTYPE_H_
#define UML_PACKAGES_STEREOTYPE_H_

#include <uml/structuredclassifiers/Class_.h>

namespace uml::packages
{
	class Stereotype : public Class_ // PSCS-specific, Stereotypes are required in PSCS
	{
		public:
			ProfilePtr profile = nullptr;

		public:
			virtual ~Stereotype() = default;

			void _setProfile(const ProfilePtr&);
	}; // Stereotype
}

#endif /* UML_PACKAGES_STEREOTYPE_H_ */
