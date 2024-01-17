/*
 * ExtensionsProfileModel.cpp
 *
 *  Created on: 17.01.2024
 *      Author: maha6913
 */

#include <utils/extensionsprofile/ExtensionsProfileModel.h>

#include <uml/packages/Profile.h>
#include <uml/packages/Stereotype.h>

using namespace uml::extensionsprofile;

const std::shared_ptr<ExtensionsProfileModel>& ExtensionsProfileModel::Instance()
{
	static std::shared_ptr<ExtensionsProfileModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new ExtensionsProfileModel());
		instance->initializeInMemoryModel();
	}
	return instance;
}

void ExtensionsProfileModel::initializeInMemoryModel()
{
	/*
	 * Create in-memory model elements
	 */

	//Profile_ExtensionsProfile
	Profile_ExtensionsProfile.reset(new Profile());
	Profile_ExtensionsProfile->setThisPackagePtr(Profile_ExtensionsProfile);
	Profile_ExtensionsProfile->setName("ExtensionsProfile");

	//Stereotype ExplicitBaseClassCall
	Stereotype_ExplicitBaseClassCall.reset(new Stereotype());
	Stereotype_ExplicitBaseClassCall->setThisClass_Ptr(Stereotype_ExplicitBaseClassCall);
	Stereotype_ExplicitBaseClassCall->setName("ExplicitBaseClassCall");
	Stereotype_ExplicitBaseClassCall->_setProfile(Profile_ExtensionsProfile);
}
