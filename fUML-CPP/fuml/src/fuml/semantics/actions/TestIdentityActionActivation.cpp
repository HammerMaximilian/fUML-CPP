/*
 * TestIdentityActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/TestIdentityActionActivation.h>

#include <fuml/semantics/simpleclassifiers/BooleanValue.h>
#include <uml/actions/TestIdentityAction.h>

void TestIdentityActionActivation::doAction()
{
	// Get the values from the first and second input pins and test if they
	// are equal. (Note the equality of references is defined to be that
	// they have identical referents.)
	// If they are equal, place true on the pin execution for the result
	// output pin, otherwise place false.

	TestIdentityActionPtr action = AS(TestIdentityAction, this->node);

	ValuePtr firstValue = this->takeTokens(action->first)->at(0);
	ValuePtr secondValue = this->takeTokens(action->second)->at(0);

	ValuePtr testResult = this->makeBooleanValue(firstValue->equals(secondValue));
	this->putToken(action->result, testResult);

} // TestIdentityAction
