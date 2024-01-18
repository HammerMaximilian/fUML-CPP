/*
 * ExtensionsProfileModel.h
 *
 *  Created on: 17.01.2024
 *      Author: maha6913
 */

#ifndef UTILS_EXTENSIONSPROFILE_EXTENSIONSPROFILEMODEL_H_
#define UTILS_EXTENSIONSPROFILE_EXTENSIONSPROFILEMODEL_H_

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

namespace uml::extensionsprofile
{
	class ExtensionsProfileModel : public uml::environment::InMemoryModel
	{
		public:
			ProfilePtr Profile_ExtensionsProfile = nullptr;
			StereotypePtr Stereotype_ExplicitBaseClassCall = nullptr;

		public:
			virtual ~ExtensionsProfileModel() = default;
			static const std::shared_ptr<ExtensionsProfileModel>& Instance();

		private:
			ExtensionsProfileModel() = default;
			void initializeInMemoryModel();
	};
}

#endif /* UTILS_EXTENSIONSPROFILE_EXTENSIONSPROFILEMODEL_H_ */
