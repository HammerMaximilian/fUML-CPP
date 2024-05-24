/*
 * StandardProfileModel.cpp
 *
 *  Created on: 17.01.2024
 *      Author: maha6913
 */

#include <utils/standardprofile/StandardProfileModel.h>

#include <uml/packages/Profile.h>
#include <uml/packages/Stereotype.h>

using namespace uml::standardprofile;

const std::shared_ptr<StandardProfileModel>& StandardProfileModel::Instance()
{
	static std::shared_ptr<StandardProfileModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new StandardProfileModel());
		instance->initializeInMemoryModel();
	}
	return instance;
}

void StandardProfileModel::initializeInMemoryModel()
{
	/*
	 * Create in-memory model elements
	 */

	//Profile_StandardProfile
	Profile_StandardProfile.reset(new Profile());
	Profile_StandardProfile->setThisPackagePtr(Profile_StandardProfile);
	Profile_StandardProfile->setName("StandardProfile");

	//Stereotype Create
	Stereotype_Create.reset(new Stereotype());
	Stereotype_Create->setThisClass_Ptr(Stereotype_Create);
	Stereotype_Create->setName("Create");
	Stereotype_Create->_setProfile(Profile_StandardProfile);
}
