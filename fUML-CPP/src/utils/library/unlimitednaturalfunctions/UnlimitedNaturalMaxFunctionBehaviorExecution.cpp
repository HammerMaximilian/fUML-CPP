/*
 * UnlimitedNaturalMaxFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalMaxFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::unlimitednaturalfunctions;

UnlimitedNaturalMaxFunctionBehaviorExecution::UnlimitedNaturalMaxFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->UnlimitedNaturalFunctions_Max);
}

int UnlimitedNaturalMaxFunctionBehaviorExecution::doUnlimitedNaturalFunction(const std::shared_ptr<std::vector<int>>& arguments)
{
	int i1 = arguments->at(0);
	int i2 = arguments->at(1);

	// This returns true if max(i1,i2), where a value of -1 means
	// "unbounded", which is the highest possible value.
	int i = ((i1 < 0) ? i1 : ((i2 < 0) ? i2 : ((i1 > i2) ? i1 : i2)));

	fuml::Debug::println("[doBody] UnlimitedNatural Max result = " + std::to_string(i));
	return i;
}

ValuePtr UnlimitedNaturalMaxFunctionBehaviorExecution::new_()
{
	std::shared_ptr<UnlimitedNaturalMaxFunctionBehaviorExecution> newValue(new UnlimitedNaturalMaxFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
