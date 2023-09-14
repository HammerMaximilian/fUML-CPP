/*
 * UnlimitedNaturalLessThanFunctionBehaviorExecution.cpp
 *
 *  Created on: 14.09.2023
 *      Author: maha6913
 */

#include <utils/library/unlimitednaturalfunctions/UnlimitedNaturalLessThanFunctionBehaviorExecution.h>

#include <fuml/Debug.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <utils/library/LibraryModel.h>

using namespace fuml::library::unlimitednaturalfunctions;

UnlimitedNaturalLessThanFunctionBehaviorExecution::UnlimitedNaturalLessThanFunctionBehaviorExecution()
{
	this->types->push_back(fuml::library::LibraryModel::Instance()->UnlimitedNaturalFunctions_lessThan);
}

bool UnlimitedNaturalLessThanFunctionBehaviorExecution::doUnlimitedNaturalFunction(const std::shared_ptr<std::vector<int>>& arguments)
{
	int i1 = arguments->at(0);
	int i2 = arguments->at(1);

	// This function returns true if i1 < i2, where a value of -1 means
	// "unbounded", which is the highest possible value.
	bool b = ((i1 >= 0) && ((i2 < 0) || (i1 < i2)));

	fuml::Debug::println("[doBody] UnlimitedNatural Less Than result = " + std::to_string(b));
	return b;
}

ValuePtr UnlimitedNaturalLessThanFunctionBehaviorExecution::new_()
{
	std::shared_ptr<UnlimitedNaturalLessThanFunctionBehaviorExecution> newValue(new UnlimitedNaturalLessThanFunctionBehaviorExecution());
	newValue->setThisObject_Ptr(newValue);
	return newValue;
}
