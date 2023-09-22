/*
 * UnlimitedNaturalGreaterThanFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalGreaterThanFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/FoundationalModelLibraryModel.h>

using namespace fuml::library::unlimitednaturalfunctions;

UnlimitedNaturalGreaterThanFunctionBehaviorExecution::UnlimitedNaturalGreaterThanFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_UnlimitedNaturalFunctions_greaterThan);
}

bool UnlimitedNaturalGreaterThanFunctionBehaviorExecution::doUnlimitedNaturalFunction(const std::shared_ptr<std::vector<int>>& arguments)
{
	int i1 = arguments->at(0);
	int i2 = arguments->at(1);

	// This function returns true if i1 > i2, where a value of -1 means
	// "unbounded", which is the highest possible value.
	bool b = ((i2 >= 0) && ((i1 < 0) || (i1 > i2)));

	fuml::Debug::println("[doBody] UnlimitedNatural Greater Than result = " + std::to_string(b));
	return b;
}

ValuePtr UnlimitedNaturalGreaterThanFunctionBehaviorExecution::new_()
{
	std::shared_ptr<UnlimitedNaturalGreaterThanFunctionBehaviorExecution> newValue(
		new UnlimitedNaturalGreaterThanFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
