/*
 * UnlimitedNaturalMinFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalMinFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::unlimitednaturalfunctions;

UnlimitedNaturalMinFunctionBehaviorExecution::UnlimitedNaturalMinFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_Min);
}

int UnlimitedNaturalMinFunctionBehaviorExecution::doUnlimitedNaturalFunction(const std::shared_ptr<std::vector<int>>& arguments)
{
	int i1 = arguments->at(0);
	int i2 = arguments->at(1);

	// This returns true if min(i1,i2), where a value of -1 means
	// "unbounded", which is the highest possible value.
	int i = ((i1 < 0) ? i2 : ((i2 < 0) ? i1 : ((i1 <= i2) ? i1 : i2)));

	fuml::Debug::println("[doBody] UnlimitedNatural Min result = " + std::to_string(i));
	return i;
}

ValuePtr UnlimitedNaturalMinFunctionBehaviorExecution::new_()
{
	std::shared_ptr<UnlimitedNaturalMinFunctionBehaviorExecution> newValue(new UnlimitedNaturalMinFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
