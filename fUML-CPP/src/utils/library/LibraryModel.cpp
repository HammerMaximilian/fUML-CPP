/*
 * LibraryModel.cpp
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#include <utils/library/LibraryModel.h>

#include <stdexcept>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <fuml/syntax/classification/Parameter.h>

using namespace fuml::library;

const std::shared_ptr<LibraryModel>& LibraryModel::Instance()
{
	static std::shared_ptr<LibraryModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new LibraryModel());
		instance->initializeInMemoryModel();
	}
	return instance;
}

BehaviorPtr LibraryModel::getMainBehavior()
{
	throw std::runtime_error("'getMainBehavior' is unimplemented for LibraryModel since LibraryModel does not have any main behavior");
}

void LibraryModel::initializeInMemoryModel()
{
	/*
	 * Create in-memory model elements
	 */

	/*
	 * Boolean functions
	 */
	//FunctionBehavior And
	BooleanFunctions_And.reset(new FunctionBehavior());
	BooleanFunctions_And->setThisClass_Ptr(BooleanFunctions_And);
	BooleanFunctions_And->setName("And");
		//Parameter x
		BooleanFunctions_And_x.reset(new Parameter());
		BooleanFunctions_And_x->setName("x");
		//BooleanFunctions_And_x->setType(Boolean);
		BooleanFunctions_And_x->setLower(1);
		BooleanFunctions_And_x->setUpper(1);
		BooleanFunctions_And_x->setDirection(ParameterDirectionKind::in);
	BooleanFunctions_And->addOwnedParameter(BooleanFunctions_And_x);
		//Parameter y
		BooleanFunctions_And_y.reset(new Parameter());
		BooleanFunctions_And_y->setName("y");
		//BooleanFunctions_And_y->setType(Boolean);
		BooleanFunctions_And_y->setLower(1);
		BooleanFunctions_And_y->setUpper(1);
		BooleanFunctions_And_y->setDirection(ParameterDirectionKind::in);
	BooleanFunctions_And->addOwnedParameter(BooleanFunctions_And_y);
		//Parameter result
		BooleanFunctions_And_result.reset(new Parameter());
		BooleanFunctions_And_result->setName("result");
		//BooleanFunctions_And_result->setType(Boolean);
		BooleanFunctions_And_result->setLower(1);
		BooleanFunctions_And_result->setUpper(1);
		BooleanFunctions_And_result->setDirection(ParameterDirectionKind::return_);
	BooleanFunctions_And->addOwnedParameter(BooleanFunctions_And_result);

	//FunctionBehavior Implies
	BooleanFunctions_Implies.reset(new FunctionBehavior());
	BooleanFunctions_Implies->setThisClass_Ptr(BooleanFunctions_Implies);
	BooleanFunctions_Implies->setName("Implies");
		//Parameter x
		BooleanFunctions_Implies_x.reset(new Parameter());
		BooleanFunctions_Implies_x->setName("x");
		//BooleanFunctions_Implies_x->setType(Boolean);
		BooleanFunctions_Implies_x->setLower(1);
		BooleanFunctions_Implies_x->setUpper(1);
		BooleanFunctions_Implies_x->setDirection(ParameterDirectionKind::in);
	BooleanFunctions_Implies->addOwnedParameter(BooleanFunctions_Implies_x);
		//Parameter y
		BooleanFunctions_Implies_y.reset(new Parameter());
		BooleanFunctions_Implies_y->setName("y");
		//BooleanFunctions_Implies_y->setType(Boolean);
		BooleanFunctions_Implies_y->setLower(1);
		BooleanFunctions_Implies_y->setUpper(1);
		BooleanFunctions_Implies_y->setDirection(ParameterDirectionKind::in);
	BooleanFunctions_Implies->addOwnedParameter(BooleanFunctions_Implies_y);
		//Parameter result
		BooleanFunctions_Implies_result.reset(new Parameter());
		BooleanFunctions_Implies_result->setName("result");
		//BooleanFunctions_Implies_result->setType(Boolean);
		BooleanFunctions_Implies_result->setLower(1);
		BooleanFunctions_Implies_result->setUpper(1);
		BooleanFunctions_Implies_result->setDirection(ParameterDirectionKind::return_);
	BooleanFunctions_Implies->addOwnedParameter(BooleanFunctions_Implies_result);

	//FunctionBehavior Not
	BooleanFunctions_Not.reset(new FunctionBehavior());
	BooleanFunctions_Not->setThisClass_Ptr(BooleanFunctions_Not);
	BooleanFunctions_Not->setName("Not");
		//Parameter x
		BooleanFunctions_Not_x.reset(new Parameter());
		BooleanFunctions_Not_x->setName("x");
		//BooleanFunctions_Not_x->setType(Boolean);
		BooleanFunctions_Not_x->setLower(1);
		BooleanFunctions_Not_x->setUpper(1);
		BooleanFunctions_Not_x->setDirection(ParameterDirectionKind::in);
	BooleanFunctions_Not->addOwnedParameter(BooleanFunctions_Not_x);
		//Parameter result
		BooleanFunctions_Not_result.reset(new Parameter());
		BooleanFunctions_Not_result->setName("result");
		//BooleanFunctions_Not_result->setType(Boolean);
		BooleanFunctions_Not_result->setLower(1);
		BooleanFunctions_Not_result->setUpper(1);
		BooleanFunctions_Not_result->setDirection(ParameterDirectionKind::return_);
	BooleanFunctions_Not->addOwnedParameter(BooleanFunctions_Not_result);

	//FunctionBehavior Or
	BooleanFunctions_Or.reset(new FunctionBehavior());
	BooleanFunctions_Or->setThisClass_Ptr(BooleanFunctions_Or);
	BooleanFunctions_Or->setName("Or");
		//Parameter x
		BooleanFunctions_Or_x.reset(new Parameter());
		BooleanFunctions_Or_x->setName("x");
		//BooleanFunctions_Or_x->setType(Boolean);
		BooleanFunctions_Or_x->setLower(1);
		BooleanFunctions_Or_x->setUpper(1);
		BooleanFunctions_Or_x->setDirection(ParameterDirectionKind::in);
	BooleanFunctions_Or->addOwnedParameter(BooleanFunctions_Or_x);
		//Parameter y
		BooleanFunctions_Or_y.reset(new Parameter());
		BooleanFunctions_Or_y->setName("y");
		//BooleanFunctions_Or_y->setType(Boolean);
		BooleanFunctions_Or_y->setLower(1);
		BooleanFunctions_Or_y->setUpper(1);
		BooleanFunctions_Or_y->setDirection(ParameterDirectionKind::in);
	BooleanFunctions_Or->addOwnedParameter(BooleanFunctions_Or_y);
		//Parameter result
		BooleanFunctions_Or_result.reset(new Parameter());
		BooleanFunctions_Or_result->setName("result");
		//BooleanFunctions_Or_result->setType(Boolean);
		BooleanFunctions_Or_result->setLower(1);
		BooleanFunctions_Or_result->setUpper(1);
		BooleanFunctions_Or_result->setDirection(ParameterDirectionKind::return_);
	BooleanFunctions_Or->addOwnedParameter(BooleanFunctions_Or_result);

	//FunctionBehavior ToBoolean
	BooleanFunctions_ToBoolean.reset(new FunctionBehavior());
	BooleanFunctions_ToBoolean->setThisClass_Ptr(BooleanFunctions_ToBoolean);
	BooleanFunctions_ToBoolean->setName("ToBoolean");
		//Parameter x
		BooleanFunctions_ToBoolean_x.reset(new Parameter());
		BooleanFunctions_ToBoolean_x->setName("x");
		//BooleanFunctions_ToBoolean_x->setType(String));
		BooleanFunctions_ToBoolean_x->setLower(1);
		BooleanFunctions_ToBoolean_x->setUpper(1);
		BooleanFunctions_ToBoolean_x->setDirection(ParameterDirectionKind::in);
	BooleanFunctions_ToBoolean->addOwnedParameter(BooleanFunctions_ToBoolean_x);
		//Parameter result
		BooleanFunctions_ToBoolean_result.reset(new Parameter());
		BooleanFunctions_ToBoolean_result->setName("result");
		//BooleanFunctions_ToBoolean_result->setType(Boolean);
		BooleanFunctions_ToBoolean_result->setLower(0);
		BooleanFunctions_ToBoolean_result->setUpper(1);
		BooleanFunctions_ToBoolean_result->setDirection(ParameterDirectionKind::return_);
	BooleanFunctions_ToBoolean->addOwnedParameter(BooleanFunctions_ToBoolean_result);

	//FunctionBehavior ToString
	BooleanFunctions_ToString.reset(new FunctionBehavior());
	BooleanFunctions_ToString->setThisClass_Ptr(BooleanFunctions_ToString);
	BooleanFunctions_ToString->setName("ToString");
		//Parameter x
		BooleanFunctions_ToString_x.reset(new Parameter());
		BooleanFunctions_ToString_x->setName("x");
		//BooleanFunctions_ToString_x->setType(Boolean);
		BooleanFunctions_ToString_x->setLower(1);
		BooleanFunctions_ToString_x->setUpper(1);
		BooleanFunctions_ToString_x->setDirection(ParameterDirectionKind::in);
	BooleanFunctions_ToString->addOwnedParameter(BooleanFunctions_ToString_x);
		//Parameter result
		BooleanFunctions_ToString_result.reset(new Parameter());
		BooleanFunctions_ToString_result->setName("result");
		//BooleanFunctions_ToString_result->setType(String);
		BooleanFunctions_ToString_result->setLower(1);
		BooleanFunctions_ToString_result->setUpper(1);
		BooleanFunctions_ToString_result->setDirection(ParameterDirectionKind::return_);
	BooleanFunctions_ToString->addOwnedParameter(BooleanFunctions_ToString_result);

	//FunctionBehavior Xor
	BooleanFunctions_Xor.reset(new FunctionBehavior());
	BooleanFunctions_Xor->setThisClass_Ptr(BooleanFunctions_Xor);
	BooleanFunctions_Xor->setName("Xor");
		//Parameter x
		BooleanFunctions_Xor_x.reset(new Parameter());
		BooleanFunctions_Xor_x->setName("x");
		//BooleanFunctions_Xor_x->setType(Boolean);
		BooleanFunctions_Xor_x->setLower(1);
		BooleanFunctions_Xor_x->setUpper(1);
		BooleanFunctions_Xor_x->setDirection(ParameterDirectionKind::in);
	BooleanFunctions_Xor->addOwnedParameter(BooleanFunctions_Xor_x);
		//Parameter y
		BooleanFunctions_Xor_y.reset(new Parameter());
		BooleanFunctions_Xor_y->setName("y");
		//BooleanFunctions_Xor_y->setType(Boolean);
		BooleanFunctions_Xor_y->setLower(1);
		BooleanFunctions_Xor_y->setUpper(1);
		BooleanFunctions_Xor_y->setDirection(ParameterDirectionKind::in);
	BooleanFunctions_Xor->addOwnedParameter(BooleanFunctions_Xor_y);
		//Parameter result
		BooleanFunctions_Xor_result.reset(new Parameter());
		BooleanFunctions_Xor_result->setName("result");
		//BooleanFunctions_Xor_result->setType(Boolean);
		BooleanFunctions_Xor_result->setLower(1);
		BooleanFunctions_Xor_result->setUpper(1);
		BooleanFunctions_Xor_result->setDirection(ParameterDirectionKind::return_);
	BooleanFunctions_Xor->addOwnedParameter(BooleanFunctions_Xor_result);
}


