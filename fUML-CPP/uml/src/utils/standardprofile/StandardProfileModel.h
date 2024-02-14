/*
 * StandardProfileModel.h
 *
 *  Created on: 17.01.2024
 *      Author: maha6913
 */

#ifndef UTILS_STANDARDPROFILE_STANDARDPROFILEMODEL_H_
#define UTILS_STANDARDPROFILE_STANDARDPROFILEMODEL_H_

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

namespace uml::standardprofile
{
	class StandardProfileModel : public uml::environment::InMemoryModel
	{
		public:
			ProfilePtr Profile_StandardProfile = nullptr;
			StereotypePtr Stereotype_Create = nullptr;

		public:
			virtual ~StandardProfileModel() = default;
			static const std::shared_ptr<StandardProfileModel>& Instance();

		private:
			StandardProfileModel() = default;
			void initializeInMemoryModel();
	};
}

#endif /* UTILS_STANDARDPROFILE_STANDARDPROFILEMODEL_H_ */
