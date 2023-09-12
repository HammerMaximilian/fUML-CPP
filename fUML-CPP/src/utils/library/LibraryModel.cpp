/*
 * LibraryModel.cpp
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#include <utils/library/LibraryModel.h>

#include <fuml/syntax/classification/Parameter.h>
#include <fuml/syntax/commonbehavior/FunctionBehavior.h>
#include <fuml/syntax/simpleclassifiers/Signal.h>
#include <fuml/syntax/classification/Property.h>
#include <fuml/syntax/simpleclassifiers/Reception.h>
#include <fuml/syntax/classification/Operation.h>
#include <fuml/syntax/structuredclassifiers/Class_.h>
#include <fuml/syntax/classification/Generalization.h>
#include <fuml/syntax/simpleclassifiers/PrimitiveType.h>
#include <fuml/syntax/activities/Activity.h>
#include <fuml/syntax/activities/ActivityParameterNode.h>
#include <fuml/syntax/actions/ReadExtentAction.h>
#include <fuml/syntax/actions/CallOperationAction.h>
#include <fuml/syntax/actions/InputPin.h>
#include <fuml/syntax/actions/OutputPin.h>
#include <fuml/syntax/activities/ObjectFlow.h>
#include <stdexcept>
#include <utils/primitivetypes/PrimitiveTypesModel.h>

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
		BooleanFunctions_And_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
	BooleanFunctions_And->addOwnedParameter(BooleanFunctions_And_x);
		//Parameter y
		BooleanFunctions_And_y.reset(new Parameter());
		BooleanFunctions_And_y->setName("y");
		BooleanFunctions_And_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
	BooleanFunctions_And->addOwnedParameter(BooleanFunctions_And_y);
		//Parameter result
		BooleanFunctions_And_result.reset(new Parameter());
		BooleanFunctions_And_result->setName("result");
		BooleanFunctions_And_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		BooleanFunctions_And_result->setDirection(ParameterDirectionKind::return_);
	BooleanFunctions_And->addOwnedParameter(BooleanFunctions_And_result);

	//FunctionBehavior Implies
	BooleanFunctions_Implies.reset(new FunctionBehavior());
	BooleanFunctions_Implies->setThisClass_Ptr(BooleanFunctions_Implies);
	BooleanFunctions_Implies->setName("Implies");
		//Parameter x
		BooleanFunctions_Implies_x.reset(new Parameter());
		BooleanFunctions_Implies_x->setName("x");
		BooleanFunctions_Implies_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
	BooleanFunctions_Implies->addOwnedParameter(BooleanFunctions_Implies_x);
		//Parameter y
		BooleanFunctions_Implies_y.reset(new Parameter());
		BooleanFunctions_Implies_y->setName("y");
		BooleanFunctions_Implies_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
	BooleanFunctions_Implies->addOwnedParameter(BooleanFunctions_Implies_y);
		//Parameter result
		BooleanFunctions_Implies_result.reset(new Parameter());
		BooleanFunctions_Implies_result->setName("result");
		BooleanFunctions_Implies_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		BooleanFunctions_Implies_result->setDirection(ParameterDirectionKind::return_);
	BooleanFunctions_Implies->addOwnedParameter(BooleanFunctions_Implies_result);

	//FunctionBehavior Not
	BooleanFunctions_Not.reset(new FunctionBehavior());
	BooleanFunctions_Not->setThisClass_Ptr(BooleanFunctions_Not);
	BooleanFunctions_Not->setName("Not");
		//Parameter x
		BooleanFunctions_Not_x.reset(new Parameter());
		BooleanFunctions_Not_x->setName("x");
		BooleanFunctions_Not_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
	BooleanFunctions_Not->addOwnedParameter(BooleanFunctions_Not_x);
		//Parameter result
		BooleanFunctions_Not_result.reset(new Parameter());
		BooleanFunctions_Not_result->setName("result");
		BooleanFunctions_Not_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		BooleanFunctions_Not_result->setDirection(ParameterDirectionKind::return_);
	BooleanFunctions_Not->addOwnedParameter(BooleanFunctions_Not_result);

	//FunctionBehavior Or
	BooleanFunctions_Or.reset(new FunctionBehavior());
	BooleanFunctions_Or->setThisClass_Ptr(BooleanFunctions_Or);
	BooleanFunctions_Or->setName("Or");
		//Parameter x
		BooleanFunctions_Or_x.reset(new Parameter());
		BooleanFunctions_Or_x->setName("x");
		BooleanFunctions_Or_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
	BooleanFunctions_Or->addOwnedParameter(BooleanFunctions_Or_x);
		//Parameter y
		BooleanFunctions_Or_y.reset(new Parameter());
		BooleanFunctions_Or_y->setName("y");
		BooleanFunctions_Or_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
	BooleanFunctions_Or->addOwnedParameter(BooleanFunctions_Or_y);
		//Parameter result
		BooleanFunctions_Or_result.reset(new Parameter());
		BooleanFunctions_Or_result->setName("result");
		BooleanFunctions_Or_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		BooleanFunctions_Or_result->setDirection(ParameterDirectionKind::return_);
	BooleanFunctions_Or->addOwnedParameter(BooleanFunctions_Or_result);

	//FunctionBehavior ToBoolean
	BooleanFunctions_ToBoolean.reset(new FunctionBehavior());
	BooleanFunctions_ToBoolean->setThisClass_Ptr(BooleanFunctions_ToBoolean);
	BooleanFunctions_ToBoolean->setName("ToBoolean");
		//Parameter x
		BooleanFunctions_ToBoolean_x.reset(new Parameter());
		BooleanFunctions_ToBoolean_x->setName("x");
		BooleanFunctions_ToBoolean_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
	BooleanFunctions_ToBoolean->addOwnedParameter(BooleanFunctions_ToBoolean_x);
		//Parameter result
		BooleanFunctions_ToBoolean_result.reset(new Parameter());
		BooleanFunctions_ToBoolean_result->setName("result");
		BooleanFunctions_ToBoolean_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		BooleanFunctions_ToBoolean_result->setLower(0);
		BooleanFunctions_ToBoolean_result->setDirection(ParameterDirectionKind::return_);
	BooleanFunctions_ToBoolean->addOwnedParameter(BooleanFunctions_ToBoolean_result);

	//FunctionBehavior ToString
	BooleanFunctions_ToString.reset(new FunctionBehavior());
	BooleanFunctions_ToString->setThisClass_Ptr(BooleanFunctions_ToString);
	BooleanFunctions_ToString->setName("ToString");
		//Parameter x
		BooleanFunctions_ToString_x.reset(new Parameter());
		BooleanFunctions_ToString_x->setName("x");
		BooleanFunctions_ToString_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
	BooleanFunctions_ToString->addOwnedParameter(BooleanFunctions_ToString_x);
		//Parameter result
		BooleanFunctions_ToString_result.reset(new Parameter());
		BooleanFunctions_ToString_result->setName("result");
		BooleanFunctions_ToString_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
		BooleanFunctions_ToString_result->setDirection(ParameterDirectionKind::return_);
	BooleanFunctions_ToString->addOwnedParameter(BooleanFunctions_ToString_result);

	//FunctionBehavior Xor
	BooleanFunctions_Xor.reset(new FunctionBehavior());
	BooleanFunctions_Xor->setThisClass_Ptr(BooleanFunctions_Xor);
	BooleanFunctions_Xor->setName("Xor");
		//Parameter x
		BooleanFunctions_Xor_x.reset(new Parameter());
		BooleanFunctions_Xor_x->setName("x");
		BooleanFunctions_Xor_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
	BooleanFunctions_Xor->addOwnedParameter(BooleanFunctions_Xor_x);
		//Parameter y
		BooleanFunctions_Xor_y.reset(new Parameter());
		BooleanFunctions_Xor_y->setName("y");
		BooleanFunctions_Xor_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
	BooleanFunctions_Xor->addOwnedParameter(BooleanFunctions_Xor_y);
		//Parameter result
		BooleanFunctions_Xor_result.reset(new Parameter());
		BooleanFunctions_Xor_result->setName("result");
		BooleanFunctions_Xor_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		BooleanFunctions_Xor_result->setDirection(ParameterDirectionKind::return_);
	BooleanFunctions_Xor->addOwnedParameter(BooleanFunctions_Xor_result);

	/*
	 * Integer functions
	 */
	//FunctionBehavior Abs
	IntegerFunctions_Abs.reset(new FunctionBehavior());
	IntegerFunctions_Abs->setThisClass_Ptr(IntegerFunctions_Abs);
	IntegerFunctions_Abs->setName("Abs");
		//Parameter result
		IntegerFunctions_Abs_result.reset(new Parameter());
		IntegerFunctions_Abs_result->setName("result");
		IntegerFunctions_Abs_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_Abs_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_Abs->addOwnedParameter(IntegerFunctions_Abs_result);
		//Parameter x
		IntegerFunctions_Abs_x = nullptr;
		IntegerFunctions_Abs_x.reset(new Parameter());
		IntegerFunctions_Abs_x->setName("x");
		IntegerFunctions_Abs_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_Abs->addOwnedParameter(IntegerFunctions_Abs_x);

	//FunctionBehavior Div
	IntegerFunctions_Div.reset(new FunctionBehavior());
	IntegerFunctions_Div->setThisClass_Ptr(IntegerFunctions_Div);
	IntegerFunctions_Div->setName("Div");
		//Parameter result
		IntegerFunctions_Div_result.reset(new Parameter());
		IntegerFunctions_Div_result->setName("result");
		IntegerFunctions_Div_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_Div_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_Div->addOwnedParameter(IntegerFunctions_Div_result);
		//Parameter x
		IntegerFunctions_Div_x.reset(new Parameter());
		IntegerFunctions_Div_x->setName("x");
		IntegerFunctions_Div_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_Div->addOwnedParameter(IntegerFunctions_Div_x);
		//Parameter y
		IntegerFunctions_Div_y.reset(new Parameter());
		IntegerFunctions_Div_y->setName("y");
		IntegerFunctions_Div_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_Div->addOwnedParameter(IntegerFunctions_Div_y);

	//FunctionBehavior Max
	IntegerFunctions_Max.reset(new FunctionBehavior());
	IntegerFunctions_Max->setThisClass_Ptr(IntegerFunctions_Max);
	IntegerFunctions_Max->setName("Max");
		//Parameter result
		IntegerFunctions_Max_result.reset(new Parameter());
		IntegerFunctions_Max_result->setName("result");
		IntegerFunctions_Max_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_Max_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_Max->addOwnedParameter(IntegerFunctions_Max_result);
		//Parameter x
		IntegerFunctions_Max_x.reset(new Parameter());
		IntegerFunctions_Max_x->setName("x");
		IntegerFunctions_Max_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_Max->addOwnedParameter(IntegerFunctions_Max_x);
		//Parameter y
		IntegerFunctions_Max_y.reset(new Parameter());
		IntegerFunctions_Max_y->setName("y");
		IntegerFunctions_Max_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_Max->addOwnedParameter(IntegerFunctions_Max_y);

	//FunctionBehavior Min
	IntegerFunctions_Min.reset(new FunctionBehavior());
	IntegerFunctions_Min->setThisClass_Ptr(IntegerFunctions_Min);
	IntegerFunctions_Min->setName("Min");
		//Parameter result
		IntegerFunctions_Min_result.reset(new Parameter());
		IntegerFunctions_Min_result->setName("result");
		IntegerFunctions_Min_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_Min_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_Min->addOwnedParameter(IntegerFunctions_Min_result);
		//Parameter x
		IntegerFunctions_Min_x.reset(new Parameter());
		IntegerFunctions_Min_x->setName("x");
		IntegerFunctions_Min_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_Min->addOwnedParameter(IntegerFunctions_Min_x);
		//Parameter y
		IntegerFunctions_Min_y.reset(new Parameter());
		IntegerFunctions_Min_y->setName("y");
		IntegerFunctions_Min_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_Min->addOwnedParameter(IntegerFunctions_Min_y);

	//FunctionBehavior Mod
	IntegerFunctions_Mod.reset(new FunctionBehavior());
	IntegerFunctions_Mod->setThisClass_Ptr(IntegerFunctions_Mod);
	IntegerFunctions_Mod->setName("Mod");
		//Parameter result
		IntegerFunctions_Mod_result.reset(new Parameter());
		IntegerFunctions_Mod_result->setName("result");
		IntegerFunctions_Mod_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_Mod_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_Mod->addOwnedParameter(IntegerFunctions_Mod_result);
		//Parameter x
		IntegerFunctions_Mod_x.reset(new Parameter());
		IntegerFunctions_Mod_x->setName("x");
		IntegerFunctions_Mod_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_Mod->addOwnedParameter(IntegerFunctions_Mod_x);
		//Parameter y
		IntegerFunctions_Mod_y = nullptr;
		IntegerFunctions_Mod_y.reset(new Parameter());
		IntegerFunctions_Mod_y->setName("y");
		IntegerFunctions_Mod_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_Mod->addOwnedParameter(IntegerFunctions_Mod_y);

	//FunctionBehavior Neg
	IntegerFunctions_Neg.reset(new FunctionBehavior());
	IntegerFunctions_Neg->setThisClass_Ptr(IntegerFunctions_Neg);
	IntegerFunctions_Neg->setName("Neg");
		//Parameter result
		IntegerFunctions_Neg_result.reset(new Parameter());
		IntegerFunctions_Neg_result->setName("result");
		IntegerFunctions_Neg_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_Neg_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_Neg->addOwnedParameter(IntegerFunctions_Neg_result);
		//Parameter x
		IntegerFunctions_Neg_x.reset(new Parameter());
		IntegerFunctions_Neg_x->setName("x");
		IntegerFunctions_Neg_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_Neg->addOwnedParameter(IntegerFunctions_Neg_x);

	//FunctionBehavior ToInteger
	IntegerFunctions_ToInteger.reset(new FunctionBehavior());
	IntegerFunctions_ToInteger->setThisClass_Ptr(IntegerFunctions_ToInteger);
	IntegerFunctions_ToInteger->setName("ToInteger");
		//Parameter result
		IntegerFunctions_ToInteger_result.reset(new Parameter());
		IntegerFunctions_ToInteger_result->setName("result");
		IntegerFunctions_ToInteger_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_ToInteger_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_ToInteger->addOwnedParameter(IntegerFunctions_ToInteger_result);
		//Parameter x
		IntegerFunctions_ToInteger_x.reset(new Parameter());
		IntegerFunctions_ToInteger_x->setName("x");
		IntegerFunctions_ToInteger_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
	IntegerFunctions_ToInteger->addOwnedParameter(IntegerFunctions_ToInteger_x);

	//FunctionBehavior ToString
	IntegerFunctions_ToString.reset(new FunctionBehavior());
	IntegerFunctions_ToString->setThisClass_Ptr(IntegerFunctions_ToString);
	IntegerFunctions_ToString->setName("ToString");
		//Parameter result
		IntegerFunctions_ToString_result.reset(new Parameter());
		IntegerFunctions_ToString_result->setName("result");
		IntegerFunctions_ToString_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
		IntegerFunctions_ToString_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_ToString->addOwnedParameter(IntegerFunctions_ToString_result);
		//Parameter x
		IntegerFunctions_ToString_x.reset(new Parameter());
		IntegerFunctions_ToString_x->setName("x");
		IntegerFunctions_ToString_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_ToString->addOwnedParameter(IntegerFunctions_ToString_x);

	//FunctionBehavior ToUnlimitedNatural
	IntegerFunctions_ToUnlimitedNatural.reset(new FunctionBehavior());
	IntegerFunctions_ToUnlimitedNatural->setThisClass_Ptr(IntegerFunctions_ToUnlimitedNatural);
	IntegerFunctions_ToUnlimitedNatural->setName("ToUnlimitedNatural");
		//Parameter result
		IntegerFunctions_ToUnlimitedNatural_result.reset(new Parameter());
		IntegerFunctions_ToUnlimitedNatural_result->setName("result");
		IntegerFunctions_ToUnlimitedNatural_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
		IntegerFunctions_ToUnlimitedNatural_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_ToUnlimitedNatural->addOwnedParameter(IntegerFunctions_ToUnlimitedNatural_result);
		//Parameter x
		IntegerFunctions_ToUnlimitedNatural_x.reset(new Parameter());
		IntegerFunctions_ToUnlimitedNatural_x->setName("x");
		IntegerFunctions_ToUnlimitedNatural_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_ToUnlimitedNatural->addOwnedParameter(IntegerFunctions_ToUnlimitedNatural_x);

	//FunctionBehavior divide
	IntegerFunctions_divide.reset(new FunctionBehavior());
	IntegerFunctions_divide->setThisClass_Ptr(IntegerFunctions_divide);
	IntegerFunctions_divide->setName("/");
		//Parameter result
		IntegerFunctions_divide_result.reset(new Parameter());
		IntegerFunctions_divide_result->setName("result");
		IntegerFunctions_divide_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		IntegerFunctions_divide_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_divide->addOwnedParameter(IntegerFunctions_divide_result);
		//Parameter x
		IntegerFunctions_divide_x.reset(new Parameter());
		IntegerFunctions_divide_x->setName("x");
		IntegerFunctions_divide_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_divide->addOwnedParameter(IntegerFunctions_divide_x);
		//Parameter y
		IntegerFunctions_divide_y.reset(new Parameter());
		IntegerFunctions_divide_y->setName("y");
		IntegerFunctions_divide_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_divide->addOwnedParameter(IntegerFunctions_divide_y);
/* NOT PRESENT IN FUML LIBRARY
	//FunctionBehavior equals
	IntegerFunctions_equals.reset(new FunctionBehavior());
	IntegerFunctions_equals->setThisClass_Ptr(IntegerFunctions_equals);
	IntegerFunctions_equals->setName("equals");
		//Parameter result
		IntegerFunctions_equals_result = nullptr;
		//Parameter x
		IntegerFunctions_equals_x = nullptr;
		//Parameter y
		IntegerFunctions_equals_y = nullptr;
*/
	//FunctionBehavior greaterOrEqual
	IntegerFunctions_greaterOrEqual.reset(new FunctionBehavior());
	IntegerFunctions_greaterOrEqual->setThisClass_Ptr(IntegerFunctions_greaterOrEqual);
	IntegerFunctions_greaterOrEqual->setName(">=");
		//Parameter result
		IntegerFunctions_greaterOrEqual_result.reset(new Parameter());
		IntegerFunctions_greaterOrEqual_result->setName("result");
		IntegerFunctions_greaterOrEqual_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		IntegerFunctions_greaterOrEqual_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_greaterOrEqual->addOwnedParameter(IntegerFunctions_greaterOrEqual_result);
		//Parameter x
		IntegerFunctions_greaterOrEqual_x.reset(new Parameter());
		IntegerFunctions_greaterOrEqual_x->setName("x");
		IntegerFunctions_greaterOrEqual_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_greaterOrEqual->addOwnedParameter(IntegerFunctions_greaterOrEqual_x);
		//Parameter y
		IntegerFunctions_greaterOrEqual_y.reset(new Parameter());
		IntegerFunctions_greaterOrEqual_y->setName("y");
		IntegerFunctions_greaterOrEqual_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_greaterOrEqual->addOwnedParameter(IntegerFunctions_greaterOrEqual_y);

	//FunctionBehavior greaterThan
	IntegerFunctions_greaterThan.reset(new FunctionBehavior());
	IntegerFunctions_greaterThan->setThisClass_Ptr(IntegerFunctions_greaterThan);
	IntegerFunctions_greaterThan->setName(">");
		//Parameter result
		IntegerFunctions_greaterThan_result.reset(new Parameter());
		IntegerFunctions_greaterThan_result->setName("result");
		IntegerFunctions_greaterThan_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		IntegerFunctions_greaterThan_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_greaterThan->addOwnedParameter(IntegerFunctions_greaterThan_result);
		//Parameter x
		IntegerFunctions_greaterThan_x.reset(new Parameter());
		IntegerFunctions_greaterThan_x->setName("x");
		IntegerFunctions_greaterThan_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_greaterThan->addOwnedParameter(IntegerFunctions_greaterThan_x);
		//Parameter y
		IntegerFunctions_greaterThan_y.reset(new Parameter());
		IntegerFunctions_greaterThan_y->setName("y");
		IntegerFunctions_greaterThan_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_greaterThan->addOwnedParameter(IntegerFunctions_greaterThan_y);

	//FunctionBehavior lessOrEqual
	IntegerFunctions_lessOrEqual.reset(new FunctionBehavior());
	IntegerFunctions_lessOrEqual->setThisClass_Ptr(IntegerFunctions_lessOrEqual);
	IntegerFunctions_lessOrEqual->setName("<=");
		//Parameter result
		IntegerFunctions_lessOrEqual_result.reset(new Parameter());
		IntegerFunctions_lessOrEqual_result->setName("result");
		IntegerFunctions_lessOrEqual_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		IntegerFunctions_lessOrEqual_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_lessOrEqual->addOwnedParameter(IntegerFunctions_lessOrEqual_result);
		//Parameter x
		IntegerFunctions_lessOrEqual_x.reset(new Parameter());
		IntegerFunctions_lessOrEqual_x->setName("x");
		IntegerFunctions_lessOrEqual_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_lessOrEqual->addOwnedParameter(IntegerFunctions_lessOrEqual_x);
		//Parameter y
		IntegerFunctions_lessOrEqual_y.reset(new Parameter());
		IntegerFunctions_lessOrEqual_y->setName("y");
		IntegerFunctions_lessOrEqual_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_lessOrEqual->addOwnedParameter(IntegerFunctions_lessOrEqual_y);

	//FunctionBehavior lessThan
	IntegerFunctions_lessThan.reset(new FunctionBehavior());
	IntegerFunctions_lessThan->setThisClass_Ptr(IntegerFunctions_lessThan);
	IntegerFunctions_lessThan->setName("<");
		//Parameter result
		IntegerFunctions_lessThan_result.reset(new Parameter());
		IntegerFunctions_lessThan_result->setName("result");
		IntegerFunctions_lessThan_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		IntegerFunctions_lessThan_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_lessThan->addOwnedParameter(IntegerFunctions_lessThan_result);
		//Parameter x
		IntegerFunctions_lessThan_x.reset(new Parameter());
		IntegerFunctions_lessThan_x->setName("x");
		IntegerFunctions_lessThan_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_lessThan->addOwnedParameter(IntegerFunctions_lessThan_x);
		//Parameter y
		IntegerFunctions_lessThan_y.reset(new Parameter());
		IntegerFunctions_lessThan_y->setName("y");
		IntegerFunctions_lessThan_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_lessThan->addOwnedParameter(IntegerFunctions_lessThan_y);

	//FunctionBehavior minus
	IntegerFunctions_minus.reset(new FunctionBehavior());
	IntegerFunctions_minus->setThisClass_Ptr(IntegerFunctions_minus);
	IntegerFunctions_minus->setName("-");
		//Parameter result
		IntegerFunctions_minus_result.reset(new Parameter());
		IntegerFunctions_minus_result->setName("result");
		IntegerFunctions_minus_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_minus_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_minus->addOwnedParameter(IntegerFunctions_minus_result);
		//Parameter x
		IntegerFunctions_minus_x.reset(new Parameter());
		IntegerFunctions_minus_x->setName("x");
		IntegerFunctions_minus_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_minus->addOwnedParameter(IntegerFunctions_minus_x);
		//Parameter y
		IntegerFunctions_minus_y.reset(new Parameter());
		IntegerFunctions_minus_y->setName("y");
		IntegerFunctions_minus_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_minus->addOwnedParameter(IntegerFunctions_minus_y);

	//FunctionBehavior plus
	IntegerFunctions_plus.reset(new FunctionBehavior());
	IntegerFunctions_plus->setThisClass_Ptr(IntegerFunctions_plus);
	IntegerFunctions_plus->setName("+");
		//Parameter result
		IntegerFunctions_plus_result.reset(new Parameter());
		IntegerFunctions_plus_result->setName("result");
		IntegerFunctions_plus_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_plus_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_plus->addOwnedParameter(IntegerFunctions_plus_result);
		//Parameter x
		IntegerFunctions_plus_x.reset(new Parameter());
		IntegerFunctions_plus_x->setName("x");
		IntegerFunctions_plus_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_plus->addOwnedParameter(IntegerFunctions_plus_x);
		//Parameter y
		IntegerFunctions_plus_y.reset(new Parameter());
		IntegerFunctions_plus_y->setName("y");
		IntegerFunctions_plus_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_plus->addOwnedParameter(IntegerFunctions_plus_y);

	//FunctionBehavior times
	IntegerFunctions_times.reset(new FunctionBehavior());
	IntegerFunctions_times->setThisClass_Ptr(IntegerFunctions_times);
	IntegerFunctions_times->setName("*");
		//Parameter result
		IntegerFunctions_times_result.reset(new Parameter());
		IntegerFunctions_times_result->setName("result");
		IntegerFunctions_times_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_times_result->setDirection(ParameterDirectionKind::return_);
	IntegerFunctions_times->addOwnedParameter(IntegerFunctions_times_result);
		//Parameter x
		IntegerFunctions_times_x.reset(new Parameter());
		IntegerFunctions_times_x->setName("x");
		IntegerFunctions_times_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_times->addOwnedParameter(IntegerFunctions_times_x);
		//Parameter y
		IntegerFunctions_times_y.reset(new Parameter());
		IntegerFunctions_times_y->setName("y");
		IntegerFunctions_times_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	IntegerFunctions_times->addOwnedParameter(IntegerFunctions_times_y);

	/*
	 * Real functions
	 */
	//FunctionBehavior Abs
	RealFunctions_Abs.reset(new FunctionBehavior());
	RealFunctions_Abs->setThisClass_Ptr(RealFunctions_Abs);
	RealFunctions_Abs->setName("Abs");
		//Parameter result
		RealFunctions_Abs_result.reset(new Parameter());
		RealFunctions_Abs_result->setName("result");
		RealFunctions_Abs_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_Abs_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_Abs->addOwnedParameter(RealFunctions_Abs_result);
		//Parameter x
		RealFunctions_Abs_x = nullptr;
		RealFunctions_Abs_x.reset(new Parameter());
		RealFunctions_Abs_x->setName("x");
		RealFunctions_Abs_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_Abs->addOwnedParameter(RealFunctions_Abs_x);

	//FunctionBehavior Floor
	RealFunctions_Floor.reset(new FunctionBehavior());
	RealFunctions_Floor->setThisClass_Ptr(RealFunctions_Floor);
	RealFunctions_Floor->setName("Floor");
		//Parameter result
		RealFunctions_Floor_result.reset(new Parameter());
		RealFunctions_Floor_result->setName("result");
		RealFunctions_Floor_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		RealFunctions_Floor_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_Floor->addOwnedParameter(RealFunctions_Floor_result);
		//Parameter x
		RealFunctions_Floor_x.reset(new Parameter());
		RealFunctions_Floor_x->setName("x");
		RealFunctions_Floor_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_Floor->addOwnedParameter(RealFunctions_Floor_x);

	//FunctionBehavior Inv
	RealFunctions_Inv.reset(new FunctionBehavior());
	RealFunctions_Inv->setThisClass_Ptr(RealFunctions_Inv);
	RealFunctions_Inv->setName("Inv");
		//Parameter result
		RealFunctions_Inv_result.reset(new Parameter());
		RealFunctions_Inv_result->setName("result");
		RealFunctions_Inv_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_Inv_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_Inv->addOwnedParameter(RealFunctions_Inv_result);
		//Parameter x
		RealFunctions_Inv_x.reset(new Parameter());
		RealFunctions_Inv_x->setName("x");
		RealFunctions_Inv_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_Inv->addOwnedParameter(RealFunctions_Inv_x);

	//FunctionBehavior Max
	RealFunctions_Max.reset(new FunctionBehavior());
	RealFunctions_Max->setThisClass_Ptr(RealFunctions_Max);
	RealFunctions_Max->setName("Max");
		//Parameter result
		RealFunctions_Max_result.reset(new Parameter());
		RealFunctions_Max_result->setName("result");
		RealFunctions_Max_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_Max_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_Max->addOwnedParameter(RealFunctions_Max_result);
		//Parameter x
		RealFunctions_Max_x.reset(new Parameter());
		RealFunctions_Max_x->setName("x");
		RealFunctions_Max_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_Max->addOwnedParameter(RealFunctions_Max_x);
		//Parameter y
		RealFunctions_Max_y.reset(new Parameter());
		RealFunctions_Max_y->setName("y");
		RealFunctions_Max_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_Max->addOwnedParameter(RealFunctions_Max_y);

	//FunctionBehavior Min
	RealFunctions_Min.reset(new FunctionBehavior());
	RealFunctions_Min->setThisClass_Ptr(RealFunctions_Min);
	RealFunctions_Min->setName("Min");
		//Parameter result
		RealFunctions_Min_result.reset(new Parameter());
		RealFunctions_Min_result->setName("result");
		RealFunctions_Min_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_Min_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_Min->addOwnedParameter(RealFunctions_Min_result);
		//Parameter x
		RealFunctions_Min_x.reset(new Parameter());
		RealFunctions_Min_x->setName("x");
		RealFunctions_Min_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_Min->addOwnedParameter(RealFunctions_Min_x);
		//Parameter y
		RealFunctions_Min_y.reset(new Parameter());
		RealFunctions_Min_y->setName("y");
		RealFunctions_Min_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_Min->addOwnedParameter(RealFunctions_Min_y);

	//FunctionBehavior Neg
	RealFunctions_Neg.reset(new FunctionBehavior());
	RealFunctions_Neg->setThisClass_Ptr(RealFunctions_Neg);
	RealFunctions_Neg->setName("Neg");
		//Parameter result
		RealFunctions_Neg_result.reset(new Parameter());
		RealFunctions_Neg_result->setName("result");
		RealFunctions_Neg_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_Neg_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_Neg->addOwnedParameter(RealFunctions_Neg_result);
		//Parameter x
		RealFunctions_Neg_x.reset(new Parameter());
		RealFunctions_Neg_x->setName("x");
		RealFunctions_Neg_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_Neg->addOwnedParameter(RealFunctions_Neg_x);

	//FunctionBehavior Round
	RealFunctions_Round.reset(new FunctionBehavior());
	RealFunctions_Round->setThisClass_Ptr(RealFunctions_Round);
	RealFunctions_Round->setName("Round");
		//Parameter result
		RealFunctions_Round_result.reset(new Parameter());
		RealFunctions_Round_result->setName("result");
		RealFunctions_Round_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		RealFunctions_Round_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_Round->addOwnedParameter(RealFunctions_Round_result);
		//Parameter x
		RealFunctions_Round_x.reset(new Parameter());
		RealFunctions_Round_x->setName("x");
		RealFunctions_Round_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_Round->addOwnedParameter(RealFunctions_Round_x);

	//FunctionBehavior ToInteger
	RealFunctions_ToInteger.reset(new FunctionBehavior());
	RealFunctions_ToInteger->setThisClass_Ptr(RealFunctions_ToInteger);
	RealFunctions_ToInteger->setName("ToInteger");
		//Parameter result
		RealFunctions_ToInteger_result.reset(new Parameter());
		RealFunctions_ToInteger_result->setName("result");
		RealFunctions_ToInteger_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		RealFunctions_ToInteger_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_ToInteger->addOwnedParameter(RealFunctions_ToInteger_result);
		//Parameter x
		RealFunctions_ToInteger_x.reset(new Parameter());
		RealFunctions_ToInteger_x->setName("x");
		RealFunctions_ToInteger_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_ToInteger->addOwnedParameter(RealFunctions_ToInteger_x);

	//FunctionBehavior ToReal
	RealFunctions_ToReal.reset(new FunctionBehavior());
	RealFunctions_ToReal->setThisClass_Ptr(RealFunctions_ToReal);
	RealFunctions_ToReal->setName("ToReal");
		//Parameter result
		RealFunctions_ToReal_result.reset(new Parameter());
		RealFunctions_ToReal_result->setName("result");
		RealFunctions_ToReal_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_ToReal_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_ToReal->addOwnedParameter(RealFunctions_ToReal_result);
		//Parameter x
		RealFunctions_ToReal_x.reset(new Parameter());
		RealFunctions_ToReal_x->setName("x");
		RealFunctions_ToReal_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
	RealFunctions_ToReal->addOwnedParameter(RealFunctions_ToReal_x);

	//FunctionBehavior ToString
	RealFunctions_ToString.reset(new FunctionBehavior());
	RealFunctions_ToString->setThisClass_Ptr(RealFunctions_ToString);
	RealFunctions_ToString->setName("ToString");
		//Parameter result
		RealFunctions_ToString_result.reset(new Parameter());
		RealFunctions_ToString_result->setName("result");
		RealFunctions_ToString_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
		RealFunctions_ToString_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_ToString->addOwnedParameter(RealFunctions_ToString_result);
		//Parameter x
		RealFunctions_ToString_x.reset(new Parameter());
		RealFunctions_ToString_x->setName("x");
		RealFunctions_ToString_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_ToString->addOwnedParameter(RealFunctions_ToString_x);

	//FunctionBehavior divide
	RealFunctions_divide.reset(new FunctionBehavior());
	RealFunctions_divide->setThisClass_Ptr(RealFunctions_divide);
	RealFunctions_divide->setName("/");
		//Parameter result
		RealFunctions_divide_result.reset(new Parameter());
		RealFunctions_divide_result->setName("result");
		RealFunctions_divide_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_divide_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_divide->addOwnedParameter(RealFunctions_divide_result);
		//Parameter x
		RealFunctions_divide_x.reset(new Parameter());
		RealFunctions_divide_x->setName("x");
		RealFunctions_divide_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	RealFunctions_divide->addOwnedParameter(RealFunctions_divide_x);
		//Parameter y
		RealFunctions_divide_y.reset(new Parameter());
		RealFunctions_divide_y->setName("y");
		RealFunctions_divide_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	RealFunctions_divide->addOwnedParameter(RealFunctions_divide_y);
/* NOT PRESENT IN FUML LIBRARY
	//FunctionBehavior equals
	RealFunctions_equals.reset(new FunctionBehavior());
	RealFunctions_equals->setThisClass_Ptr(RealFunctions_equals);
	RealFunctions_equals->setName("equals");
		//Parameter result
		RealFunctions_equals_result = nullptr;
		//Parameter x
		RealFunctions_equals_x = nullptr;
		//Parameter y
		RealFunctions_equals_y = nullptr;
*/
	//FunctionBehavior greaterOrEqual
	RealFunctions_greaterOrEqual.reset(new FunctionBehavior());
	RealFunctions_greaterOrEqual->setThisClass_Ptr(RealFunctions_greaterOrEqual);
	RealFunctions_greaterOrEqual->setName(">=");
		//Parameter result
		RealFunctions_greaterOrEqual_result.reset(new Parameter());
		RealFunctions_greaterOrEqual_result->setName("result");
		RealFunctions_greaterOrEqual_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		RealFunctions_greaterOrEqual_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_greaterOrEqual->addOwnedParameter(RealFunctions_greaterOrEqual_result);
		//Parameter x
		RealFunctions_greaterOrEqual_x.reset(new Parameter());
		RealFunctions_greaterOrEqual_x->setName("x");
		RealFunctions_greaterOrEqual_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_greaterOrEqual->addOwnedParameter(RealFunctions_greaterOrEqual_x);
		//Parameter y
		RealFunctions_greaterOrEqual_y.reset(new Parameter());
		RealFunctions_greaterOrEqual_y->setName("y");
		RealFunctions_greaterOrEqual_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_greaterOrEqual->addOwnedParameter(RealFunctions_greaterOrEqual_y);

	//FunctionBehavior greaterThan
	RealFunctions_greaterThan.reset(new FunctionBehavior());
	RealFunctions_greaterThan->setThisClass_Ptr(RealFunctions_greaterThan);
	RealFunctions_greaterThan->setName(">");
		//Parameter result
		RealFunctions_greaterThan_result.reset(new Parameter());
		RealFunctions_greaterThan_result->setName("result");
		RealFunctions_greaterThan_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		RealFunctions_greaterThan_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_greaterThan->addOwnedParameter(RealFunctions_greaterThan_result);
		//Parameter x
		RealFunctions_greaterThan_x.reset(new Parameter());
		RealFunctions_greaterThan_x->setName("x");
		RealFunctions_greaterThan_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_greaterThan->addOwnedParameter(RealFunctions_greaterThan_x);
		//Parameter y
		RealFunctions_greaterThan_y.reset(new Parameter());
		RealFunctions_greaterThan_y->setName("y");
		RealFunctions_greaterThan_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_greaterThan->addOwnedParameter(RealFunctions_greaterThan_y);

	//FunctionBehavior lessOrEqual
	RealFunctions_lessOrEqual.reset(new FunctionBehavior());
	RealFunctions_lessOrEqual->setThisClass_Ptr(RealFunctions_lessOrEqual);
	RealFunctions_lessOrEqual->setName("<=");
		//Parameter result
		RealFunctions_lessOrEqual_result.reset(new Parameter());
		RealFunctions_lessOrEqual_result->setName("result");
		RealFunctions_lessOrEqual_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		RealFunctions_lessOrEqual_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_lessOrEqual->addOwnedParameter(RealFunctions_lessOrEqual_result);
		//Parameter x
		RealFunctions_lessOrEqual_x.reset(new Parameter());
		RealFunctions_lessOrEqual_x->setName("x");
		RealFunctions_lessOrEqual_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_lessOrEqual->addOwnedParameter(RealFunctions_lessOrEqual_x);
		//Parameter y
		RealFunctions_lessOrEqual_y.reset(new Parameter());
		RealFunctions_lessOrEqual_y->setName("y");
		RealFunctions_lessOrEqual_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_lessOrEqual->addOwnedParameter(RealFunctions_lessOrEqual_y);

	//FunctionBehavior lessThan
	RealFunctions_lessThan.reset(new FunctionBehavior());
	RealFunctions_lessThan->setThisClass_Ptr(RealFunctions_lessThan);
	RealFunctions_lessThan->setName("<");
		//Parameter result
		RealFunctions_lessThan_result.reset(new Parameter());
		RealFunctions_lessThan_result->setName("result");
		RealFunctions_lessThan_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		RealFunctions_lessThan_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_lessThan->addOwnedParameter(RealFunctions_lessThan_result);
		//Parameter x
		RealFunctions_lessThan_x.reset(new Parameter());
		RealFunctions_lessThan_x->setName("x");
		RealFunctions_lessThan_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_lessThan->addOwnedParameter(RealFunctions_lessThan_x);
		//Parameter y
		RealFunctions_lessThan_y.reset(new Parameter());
		RealFunctions_lessThan_y->setName("y");
		RealFunctions_lessThan_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_lessThan->addOwnedParameter(RealFunctions_lessThan_y);

	//FunctionBehavior minus
	RealFunctions_minus.reset(new FunctionBehavior());
	RealFunctions_minus->setThisClass_Ptr(RealFunctions_minus);
	RealFunctions_minus->setName("-");
		//Parameter result
		RealFunctions_minus_result.reset(new Parameter());
		RealFunctions_minus_result->setName("result");
		RealFunctions_minus_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_minus_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_minus->addOwnedParameter(RealFunctions_minus_result);
		//Parameter x
		RealFunctions_minus_x.reset(new Parameter());
		RealFunctions_minus_x->setName("x");
		RealFunctions_minus_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_minus->addOwnedParameter(RealFunctions_minus_x);
		//Parameter y
		RealFunctions_minus_y.reset(new Parameter());
		RealFunctions_minus_y->setName("y");
		RealFunctions_minus_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_minus->addOwnedParameter(RealFunctions_minus_y);

	//FunctionBehavior plus
	RealFunctions_plus.reset(new FunctionBehavior());
	RealFunctions_plus->setThisClass_Ptr(RealFunctions_plus);
	RealFunctions_plus->setName("+");
		//Parameter result
		RealFunctions_plus_result.reset(new Parameter());
		RealFunctions_plus_result->setName("result");
		RealFunctions_plus_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_plus_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_plus->addOwnedParameter(RealFunctions_plus_result);
		//Parameter x
		RealFunctions_plus_x.reset(new Parameter());
		RealFunctions_plus_x->setName("x");
		RealFunctions_plus_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_plus->addOwnedParameter(RealFunctions_plus_x);
		//Parameter y
		RealFunctions_plus_y.reset(new Parameter());
		RealFunctions_plus_y->setName("y");
		RealFunctions_plus_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_plus->addOwnedParameter(RealFunctions_plus_y);

	//FunctionBehavior times
	RealFunctions_times.reset(new FunctionBehavior());
	RealFunctions_times->setThisClass_Ptr(RealFunctions_times);
	RealFunctions_times->setName("*");
		//Parameter result
		RealFunctions_times_result.reset(new Parameter());
		RealFunctions_times_result->setName("result");
		RealFunctions_times_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_times_result->setDirection(ParameterDirectionKind::return_);
	RealFunctions_times->addOwnedParameter(RealFunctions_times_result);
		//Parameter x
		RealFunctions_times_x.reset(new Parameter());
		RealFunctions_times_x->setName("x");
		RealFunctions_times_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_times->addOwnedParameter(RealFunctions_times_x);
		//Parameter y
		RealFunctions_times_y.reset(new Parameter());
		RealFunctions_times_y->setName("y");
		RealFunctions_times_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
	RealFunctions_times->addOwnedParameter(RealFunctions_times_y);

	/*
	 * String functions
	 */
	//FunctionBehavior Concat
	StringFunctions_Concat.reset(new FunctionBehavior());
	StringFunctions_Concat->setThisClass_Ptr(StringFunctions_Concat);
	StringFunctions_Concat->setName("Concat");
		//Parameter result
		StringFunctions_Concat_result.reset(new Parameter());
		StringFunctions_Concat_result->setName("result");
		StringFunctions_Concat_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
		StringFunctions_Concat_result->setDirection(ParameterDirectionKind::return_);
	StringFunctions_Concat->addOwnedParameter(StringFunctions_Concat_result);
		//Parameter x
		StringFunctions_Concat_x.reset(new Parameter());
		StringFunctions_Concat_x->setName("x");
		StringFunctions_Concat_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
	StringFunctions_Concat->addOwnedParameter(StringFunctions_Concat_x);
		//Parameter y
		StringFunctions_Concat_y.reset(new Parameter());
		StringFunctions_Concat_y->setName("y");
		StringFunctions_Concat_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
	StringFunctions_Concat->addOwnedParameter(StringFunctions_Concat_y);

	//FunctionBehavior Size
	StringFunctions_Size.reset(new FunctionBehavior());
	StringFunctions_Size->setThisClass_Ptr(StringFunctions_Size);
	StringFunctions_Size->setName("Size");
		//Parameter result
		StringFunctions_Size_result.reset(new Parameter());
		StringFunctions_Size_result->setName("result");
		StringFunctions_Size_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		StringFunctions_Size_result->setDirection(ParameterDirectionKind::return_);
	StringFunctions_Size->addOwnedParameter(StringFunctions_Size_result);
		//Parameter x
		StringFunctions_Size_x.reset(new Parameter());
		StringFunctions_Size_x->setName("x");
		StringFunctions_Size_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
	StringFunctions_Size->addOwnedParameter(StringFunctions_Size_x);

	//FunctionBehavior Substring
	StringFunctions_Substring.reset(new FunctionBehavior());
	StringFunctions_Substring->setThisClass_Ptr(StringFunctions_Substring);
	StringFunctions_Substring->setName("Substring");
		//Parameter lower
		StringFunctions_Substring_lower.reset(new Parameter());
		StringFunctions_Substring_lower->setName("lower");
		StringFunctions_Substring_lower->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	StringFunctions_Substring->addOwnedParameter(StringFunctions_Substring_lower);
		//Parameter result
		StringFunctions_Substring_result.reset(new Parameter());
		StringFunctions_Substring_result->setName("result");
		StringFunctions_Substring_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
		StringFunctions_Substring_result->setDirection(ParameterDirectionKind::return_);
	StringFunctions_Substring->addOwnedParameter(StringFunctions_Substring_result);
		//Parameter upper
		StringFunctions_Substring_upper.reset(new Parameter());
		StringFunctions_Substring_upper->setName("upper");
		StringFunctions_Substring_upper->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	StringFunctions_Substring->addOwnedParameter(StringFunctions_Substring_upper);
		//Parameter x
		StringFunctions_Substring_x.reset(new Parameter());
		StringFunctions_Substring_x->setName("x");
		StringFunctions_Substring_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
	StringFunctions_Substring->addOwnedParameter(StringFunctions_Substring_x);

	/*
	 * UnlimitedNatural functions
	 */
	//FunctionBehavior Max
	UnlimitedNaturalFunctions_Max.reset(new FunctionBehavior());
	UnlimitedNaturalFunctions_Max->setThisClass_Ptr(UnlimitedNaturalFunctions_Max);
	UnlimitedNaturalFunctions_Max->setName("Max");
		//Parameter result
		UnlimitedNaturalFunctions_Max_result.reset(new Parameter());
		UnlimitedNaturalFunctions_Max_result->setName("result");
		UnlimitedNaturalFunctions_Max_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
		UnlimitedNaturalFunctions_Max_result->setDirection(ParameterDirectionKind::return_);
	UnlimitedNaturalFunctions_Max->addOwnedParameter(UnlimitedNaturalFunctions_Max_result);
		//Parameter x
		UnlimitedNaturalFunctions_Max_x.reset(new Parameter());
		UnlimitedNaturalFunctions_Max_x->setName("x");
		UnlimitedNaturalFunctions_Max_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
	UnlimitedNaturalFunctions_Max->addOwnedParameter(UnlimitedNaturalFunctions_Max_x);
		//Parameter y
		UnlimitedNaturalFunctions_Max_y.reset(new Parameter());
		UnlimitedNaturalFunctions_Max_y->setName("y");
		UnlimitedNaturalFunctions_Max_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
	UnlimitedNaturalFunctions_Max->addOwnedParameter(UnlimitedNaturalFunctions_Max_y);

	//FunctionBehavior Min
	UnlimitedNaturalFunctions_Min.reset(new FunctionBehavior());
	UnlimitedNaturalFunctions_Min->setThisClass_Ptr(UnlimitedNaturalFunctions_Min);
	UnlimitedNaturalFunctions_Min->setName("Min");
		//Parameter result
		UnlimitedNaturalFunctions_Min_result.reset(new Parameter());
		UnlimitedNaturalFunctions_Min_result->setName("result");
		UnlimitedNaturalFunctions_Min_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
		UnlimitedNaturalFunctions_Min_result->setDirection(ParameterDirectionKind::return_);
	UnlimitedNaturalFunctions_Min->addOwnedParameter(UnlimitedNaturalFunctions_Min_result);
		//Parameter x
		UnlimitedNaturalFunctions_Min_x.reset(new Parameter());
		UnlimitedNaturalFunctions_Min_x->setName("x");
		UnlimitedNaturalFunctions_Min_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
	UnlimitedNaturalFunctions_Min->addOwnedParameter(UnlimitedNaturalFunctions_Min_x);
		//Parameter y
		UnlimitedNaturalFunctions_Min_y.reset(new Parameter());
		UnlimitedNaturalFunctions_Min_y->setName("y");
		UnlimitedNaturalFunctions_Min_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
	UnlimitedNaturalFunctions_Min->addOwnedParameter(UnlimitedNaturalFunctions_Min_y);

	//FunctionBehavior ToInteger
	UnlimitedNaturalFunctions_ToInteger.reset(new FunctionBehavior());
	UnlimitedNaturalFunctions_ToInteger->setThisClass_Ptr(UnlimitedNaturalFunctions_ToInteger);
	UnlimitedNaturalFunctions_ToInteger->setName("ToInteger");
		//Parameter result
		UnlimitedNaturalFunctions_ToInteger_result.reset(new Parameter());
		UnlimitedNaturalFunctions_ToInteger_result->setName("result");
		UnlimitedNaturalFunctions_ToInteger_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		UnlimitedNaturalFunctions_ToInteger_result->setDirection(ParameterDirectionKind::return_);
	UnlimitedNaturalFunctions_ToInteger->addOwnedParameter(UnlimitedNaturalFunctions_ToInteger_result);
		//Parameter x
		UnlimitedNaturalFunctions_ToInteger_x.reset(new Parameter());
		UnlimitedNaturalFunctions_ToInteger_x->setName("x");
		UnlimitedNaturalFunctions_ToInteger_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
	UnlimitedNaturalFunctions_ToInteger->addOwnedParameter(UnlimitedNaturalFunctions_ToInteger_x);

	//FunctionBehavior ToString
	UnlimitedNaturalFunctions_ToString.reset(new FunctionBehavior());
	UnlimitedNaturalFunctions_ToString->setThisClass_Ptr(UnlimitedNaturalFunctions_ToString);
	UnlimitedNaturalFunctions_ToString->setName("ToString");
		//Parameter result
		UnlimitedNaturalFunctions_ToString_result.reset(new Parameter());
		UnlimitedNaturalFunctions_ToString_result->setName("result");
		UnlimitedNaturalFunctions_ToString_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
		UnlimitedNaturalFunctions_ToString_result->setDirection(ParameterDirectionKind::return_);
	UnlimitedNaturalFunctions_ToString->addOwnedParameter(UnlimitedNaturalFunctions_ToString_result);
		//Parameter x
		UnlimitedNaturalFunctions_ToString_x.reset(new Parameter());
		UnlimitedNaturalFunctions_ToString_x->setName("x");
		UnlimitedNaturalFunctions_ToString_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
	UnlimitedNaturalFunctions_ToString->addOwnedParameter(UnlimitedNaturalFunctions_ToString_x);

	//FunctionBehavior ToUnlimitedNatural
	UnlimitedNaturalFunctions_ToUnlimitedNatural.reset(new FunctionBehavior());
	UnlimitedNaturalFunctions_ToUnlimitedNatural->setThisClass_Ptr(UnlimitedNaturalFunctions_ToUnlimitedNatural);
	UnlimitedNaturalFunctions_ToUnlimitedNatural->setName("ToUnlimitedNatural");
		//Parameter result
		UnlimitedNaturalFunctions_ToUnlimitedNatural_result.reset(new Parameter());
		UnlimitedNaturalFunctions_ToUnlimitedNatural_result->setName("result");
		UnlimitedNaturalFunctions_ToUnlimitedNatural_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
		UnlimitedNaturalFunctions_ToUnlimitedNatural_result->setDirection(ParameterDirectionKind::return_);
	UnlimitedNaturalFunctions_ToUnlimitedNatural->addOwnedParameter(UnlimitedNaturalFunctions_ToUnlimitedNatural_result);
		//Parameter x
		UnlimitedNaturalFunctions_ToUnlimitedNatural_x.reset(new Parameter());
		UnlimitedNaturalFunctions_ToUnlimitedNatural_x->setName("x");
		UnlimitedNaturalFunctions_ToUnlimitedNatural_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
	UnlimitedNaturalFunctions_ToUnlimitedNatural->addOwnedParameter(UnlimitedNaturalFunctions_ToUnlimitedNatural_x);
/* NOT PRESENT IN FUML LIBRARY
	//FunctionBehavior equals
	UnlimitedNaturalFunctions_equals.reset(new FunctionBehavior());
	UnlimitedNaturalFunctions_equals->setThisClass_Ptr(UnlimitedNaturalFunctions_equals);
	UnlimitedNaturalFunctions_equals->setName("equals");
		//Parameter result
		UnlimitedNaturalFunctions_equals_result = nullptr;
		//Parameter x
		UnlimitedNaturalFunctions_equals_x = nullptr;
		//Parameter y
		UnlimitedNaturalFunctions_equals_y = nullptr;
*/
	//FunctionBehavior greaterOrEqual
	UnlimitedNaturalFunctions_greaterOrEqual.reset(new FunctionBehavior());
	UnlimitedNaturalFunctions_greaterOrEqual->setThisClass_Ptr(UnlimitedNaturalFunctions_greaterOrEqual);
	UnlimitedNaturalFunctions_greaterOrEqual->setName(">=");
		//Parameter result
		UnlimitedNaturalFunctions_greaterOrEqual_result.reset(new Parameter());
		UnlimitedNaturalFunctions_greaterOrEqual_result->setName("result");
		UnlimitedNaturalFunctions_greaterOrEqual_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		UnlimitedNaturalFunctions_greaterOrEqual_result->setDirection(ParameterDirectionKind::return_);
	UnlimitedNaturalFunctions_greaterOrEqual->addOwnedParameter(UnlimitedNaturalFunctions_greaterOrEqual_result);
		//Parameter x
		UnlimitedNaturalFunctions_greaterOrEqual_x.reset(new Parameter());
		UnlimitedNaturalFunctions_greaterOrEqual_x->setName("x");
		UnlimitedNaturalFunctions_greaterOrEqual_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
	UnlimitedNaturalFunctions_greaterOrEqual->addOwnedParameter(UnlimitedNaturalFunctions_greaterOrEqual_x);
		//Parameter y
		UnlimitedNaturalFunctions_greaterOrEqual_y.reset(new Parameter());
		UnlimitedNaturalFunctions_greaterOrEqual_y->setName("y");
		UnlimitedNaturalFunctions_greaterOrEqual_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
	UnlimitedNaturalFunctions_greaterOrEqual->addOwnedParameter(UnlimitedNaturalFunctions_greaterOrEqual_y);

	//FunctionBehavior greaterThan
	UnlimitedNaturalFunctions_greaterThan.reset(new FunctionBehavior());
	UnlimitedNaturalFunctions_greaterThan->setThisClass_Ptr(UnlimitedNaturalFunctions_greaterThan);
	UnlimitedNaturalFunctions_greaterThan->setName(">");
		//Parameter result
		UnlimitedNaturalFunctions_greaterThan_result.reset(new Parameter());
		UnlimitedNaturalFunctions_greaterThan_result->setName("result");
		UnlimitedNaturalFunctions_greaterThan_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		UnlimitedNaturalFunctions_greaterThan_result->setDirection(ParameterDirectionKind::return_);
	UnlimitedNaturalFunctions_greaterThan->addOwnedParameter(UnlimitedNaturalFunctions_greaterThan_result);
		//Parameter x
		UnlimitedNaturalFunctions_greaterThan_x.reset(new Parameter());
		UnlimitedNaturalFunctions_greaterThan_x->setName("x");
		UnlimitedNaturalFunctions_greaterThan_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
	UnlimitedNaturalFunctions_greaterThan->addOwnedParameter(UnlimitedNaturalFunctions_greaterThan_x);
		//Parameter y
		UnlimitedNaturalFunctions_greaterThan_y.reset(new Parameter());
		UnlimitedNaturalFunctions_greaterThan_y->setName("y");
		UnlimitedNaturalFunctions_greaterThan_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
	UnlimitedNaturalFunctions_greaterThan->addOwnedParameter(UnlimitedNaturalFunctions_greaterThan_y);

	//FunctionBehavior lessOrEqual
	UnlimitedNaturalFunctions_lessOrEqual.reset(new FunctionBehavior());
	UnlimitedNaturalFunctions_lessOrEqual->setThisClass_Ptr(UnlimitedNaturalFunctions_lessOrEqual);
	UnlimitedNaturalFunctions_lessOrEqual->setName("<=");
		//Parameter result
		UnlimitedNaturalFunctions_lessOrEqual_result.reset(new Parameter());
		UnlimitedNaturalFunctions_lessOrEqual_result->setName("result");
		UnlimitedNaturalFunctions_lessOrEqual_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		UnlimitedNaturalFunctions_lessOrEqual_result->setDirection(ParameterDirectionKind::return_);
	UnlimitedNaturalFunctions_lessOrEqual->addOwnedParameter(UnlimitedNaturalFunctions_lessOrEqual_result);
		//Parameter x
		UnlimitedNaturalFunctions_lessOrEqual_x.reset(new Parameter());
		UnlimitedNaturalFunctions_lessOrEqual_x->setName("x");
		UnlimitedNaturalFunctions_lessOrEqual_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
	UnlimitedNaturalFunctions_lessOrEqual->addOwnedParameter(UnlimitedNaturalFunctions_lessOrEqual_x);
		//Parameter y
		UnlimitedNaturalFunctions_lessOrEqual_y.reset(new Parameter());
		UnlimitedNaturalFunctions_lessOrEqual_y->setName("y");
		UnlimitedNaturalFunctions_lessOrEqual_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
	UnlimitedNaturalFunctions_lessOrEqual->addOwnedParameter(UnlimitedNaturalFunctions_lessOrEqual_y);

	//FunctionBehavior lessThan
	UnlimitedNaturalFunctions_lessThan.reset(new FunctionBehavior());
	UnlimitedNaturalFunctions_lessThan->setThisClass_Ptr(UnlimitedNaturalFunctions_lessThan);
	UnlimitedNaturalFunctions_lessThan->setName("<");
		//Parameter result
		UnlimitedNaturalFunctions_lessThan_result.reset(new Parameter());
		UnlimitedNaturalFunctions_lessThan_result->setName("result");
		UnlimitedNaturalFunctions_lessThan_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		UnlimitedNaturalFunctions_lessThan_result->setDirection(ParameterDirectionKind::return_);
	UnlimitedNaturalFunctions_lessThan->addOwnedParameter(UnlimitedNaturalFunctions_lessThan_result);
		//Parameter x
		UnlimitedNaturalFunctions_lessThan_x.reset(new Parameter());
		UnlimitedNaturalFunctions_lessThan_x->setName("x");
		UnlimitedNaturalFunctions_lessThan_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
	UnlimitedNaturalFunctions_lessThan->addOwnedParameter(UnlimitedNaturalFunctions_lessThan_x);
		//Parameter y
		UnlimitedNaturalFunctions_lessThan_y.reset(new Parameter());
		UnlimitedNaturalFunctions_lessThan_y->setName("y");
		UnlimitedNaturalFunctions_lessThan_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
	UnlimitedNaturalFunctions_lessThan->addOwnedParameter(UnlimitedNaturalFunctions_lessThan_y);

	/*
	 * List functions
	 */
	//FunctionBehavior ListSize
	ListFunctions_ListSize.reset(new FunctionBehavior());
	ListFunctions_ListSize->setThisClass_Ptr(ListFunctions_ListSize);
	ListFunctions_ListSize->setName("ListSize");
		//Parameter result
		ListFunctions_ListSize_result.reset(new Parameter());
		ListFunctions_ListSize_result->setName("result");
		ListFunctions_ListSize_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		ListFunctions_ListSize_result->setDirection(ParameterDirectionKind::return_);
	ListFunctions_ListSize->addOwnedParameter(ListFunctions_ListSize_result);
		//Parameter list
		ListFunctions_ListSize_list.reset(new Parameter());
		ListFunctions_ListSize_list->setName("list");
		ListFunctions_ListSize_list->setLower(0);
		ListFunctions_ListSize_list->setUpper(-1);
	ListFunctions_ListSize->addOwnedParameter(ListFunctions_ListSize_list);

	//FunctionBehavior ListGet
	ListFunctions_ListGet.reset(new FunctionBehavior());
	ListFunctions_ListGet->setThisClass_Ptr(ListFunctions_ListGet);
	ListFunctions_ListGet->setName("ListGet");
		//Parameter result
		ListFunctions_ListGet_result.reset(new Parameter());
		ListFunctions_ListGet_result->setName("result");
		ListFunctions_ListGet_result->setDirection(ParameterDirectionKind::return_);
	ListFunctions_ListGet->addOwnedParameter(ListFunctions_ListGet_result);
		//Parameter index
		ListFunctions_ListGet_index.reset(new Parameter());
		ListFunctions_ListGet_index->setName("index");
		ListFunctions_ListGet_index->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	ListFunctions_ListGet->addOwnedParameter(ListFunctions_ListGet_index);
		//Parameter list
		ListFunctions_ListGet_list.reset(new Parameter());
		ListFunctions_ListGet_list->setName("list");
		ListFunctions_ListGet_list->setLower(0);
		ListFunctions_ListGet_list->setUpper(-1);
	ListFunctions_ListGet->addOwnedParameter(ListFunctions_ListGet_list);

	//FunctionBehavior ListConcat
	ListFunctions_ListConcat.reset(new FunctionBehavior());
	ListFunctions_ListConcat->setThisClass_Ptr(ListFunctions_ListConcat);
	ListFunctions_ListConcat->setName("ListConcat");
		//Parameter result
		ListFunctions_ListConcat_result.reset(new Parameter());
		ListFunctions_ListConcat_result->setName("result");
		ListFunctions_ListConcat_result->setLower(0);
		ListFunctions_ListConcat_result->setUpper(-1);
		ListFunctions_ListConcat_result->setDirection(ParameterDirectionKind::return_);
	ListFunctions_ListConcat->addOwnedParameter(ListFunctions_ListConcat_result);
		//Parameter index
		ListFunctions_ListConcat_list1.reset(new Parameter());
		ListFunctions_ListConcat_list1->setName("list1");
		ListFunctions_ListConcat_list1->setLower(0);
		ListFunctions_ListConcat_list1->setUpper(-1);
	ListFunctions_ListConcat->addOwnedParameter(ListFunctions_ListConcat_list1);
		//Parameter list
		ListFunctions_ListConcat_list2.reset(new Parameter());
		ListFunctions_ListConcat_list2->setName("list2");
		ListFunctions_ListConcat_list2->setLower(0);
		ListFunctions_ListConcat_list2->setUpper(-1);
	ListFunctions_ListConcat->addOwnedParameter(ListFunctions_ListConcat_list2);

	/*
	 * Common
	 */
	//Signal Notification
	Notification.reset(new Signal());
	Notification->setThisSignalPtr(Notification);
	Notification->setName("Notification");
		//Property content
		Notification_content.reset(new Property());
		Notification_content->setThisElementPtr(Notification_content);
		Notification_content->setName("content");
		Notification_content->setLower(0);
	Notification->addOwnedAttribute(Notification_content);

	//Class Listener
	Listener.reset(new Class_());
	Listener->setThisClass_Ptr(Listener);
	Listener->setName("Listener");
	Listener->setIsAbstract(true);
	Listener->setIsActive(true);
		//Reception Notification
		Listener_Notification.reset(new Reception());
		Listener_Notification->setThisBehavioralFeaturePtr(Listener_Notification);
		Listener_Notification->setName("Notification");
		Listener_Notification->setSignal(Notification);
	Listener->addOwnedReception(Listener_Notification);

	//DataType Status
	Status.reset(new DataType());
	Status->setThisDataTypePtr(Status);
	Status->setName("Status");
		//Property context
		Status_context.reset(new Property());
		Status_context->setThisElementPtr(Status_context);
		Status_context->setName("context");
		Status_context->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
	Status->addOwnedAttribute(Status_context);
		//Property code
		Status_code.reset(new Property());
		Status_code->setThisElementPtr(Status_code);
		Status_code->setName("code");
		Status_code->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
	Status->addOwnedAttribute(Status_code);
		//Property description
		Status_description.reset(new Property());
		Status_description->setThisElementPtr(Status_description);
		Status_description->setName("description");
		Status_description->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
	Status->addOwnedAttribute(Status_description);

	/*
	 * BasicInputOutput
	 */
	// Class Channel
	Channel.reset(new Class_());
	Channel->setThisClass_Ptr(Channel);
	Channel->setName("Channel");
	Channel->setIsAbstract(true);
		//Operation getName
		Channel_getName.reset(new Operation());
		Channel_getName->setThisOperationPtr(Channel_getName);
		Channel_getName->setName("getName");
		Channel_getName->setIsAbstract(true);
			//Parameter ReturnResult
			Channel_getName_ReturnResult.reset(new Parameter());
			Channel_getName_ReturnResult->setThisElementPtr(Channel_getName_ReturnResult);
			Channel_getName_ReturnResult->setName("ReturnResult");
			Channel_getName_ReturnResult->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
			Channel_getName_ReturnResult->setDirection(ParameterDirectionKind::return_);
		Channel_getName->addOwnedParameter(Channel_getName_ReturnResult);
	Channel->addOwnedOperation(Channel_getName);
		//Operation open
		Channel_open.reset(new Operation());
		Channel_open->setThisOperationPtr(Channel_open);
		Channel_open->setName("open");
		Channel_open->setIsAbstract(true);
			//Parameter errorStatus
			Channel_open_errorStatus.reset(new Parameter());
			Channel_open_errorStatus->setThisElementPtr(Channel_open_errorStatus);
			Channel_open_errorStatus->setName("errorStatus");
			Channel_open_errorStatus->setType(Status);
			Channel_open_errorStatus->setDirection(ParameterDirectionKind::out);
		Channel_open->addOwnedParameter(Channel_open_errorStatus);
	Channel->addOwnedOperation(Channel_open);
		//Operation close
		Channel_close.reset(new Operation());
		Channel_close->setThisOperationPtr(Channel_close);
		Channel_close->setName("close");
		Channel_close->setIsAbstract(true);
			//Parameter errorStatus
			Channel_close_errorStatus.reset(new Parameter());
			Channel_close_errorStatus->setThisElementPtr(Channel_close_errorStatus);
			Channel_close_errorStatus->setName("errorStatus");
			Channel_close_errorStatus->setType(Status);
			Channel_close_errorStatus->setDirection(ParameterDirectionKind::out);
		Channel_close->addOwnedParameter(Channel_close_errorStatus);
	Channel->addOwnedOperation(Channel_close);
		//Operation isOpen
		Channel_isOpen.reset(new Operation());
		Channel_isOpen->setThisOperationPtr(Channel_isOpen);
		Channel_isOpen->setName("isOpen");
		Channel_isOpen->setIsAbstract(true);
			//Parameter ReturnResult
			Channel_isOpen_ReturnResult.reset(new Parameter());
			Channel_isOpen_ReturnResult->setThisElementPtr(Channel_isOpen_ReturnResult);
			Channel_isOpen_ReturnResult->setName("ReturnResult");
			Channel_isOpen_ReturnResult->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
			Channel_isOpen_ReturnResult->setDirection(ParameterDirectionKind::return_);
		Channel_isOpen->addOwnedParameter(Channel_isOpen_ReturnResult);
	Channel->addOwnedOperation(Channel_isOpen);
		//Operation getStatus
		Channel_getStatus.reset(new Operation());
		Channel_getStatus->setThisOperationPtr(Channel_getStatus);
		Channel_getStatus->setName("getStatus");
		Channel_getStatus->setIsAbstract(true);
			//Parameter ReturnResult
			Channel_getStatus_ReturnResult.reset(new Parameter());
			Channel_getStatus_ReturnResult->setThisElementPtr(Channel_getStatus_ReturnResult);
			Channel_getStatus_ReturnResult->setName("ReturnResult");
			Channel_getStatus_ReturnResult->setType(Status);
			Channel_getStatus_ReturnResult->setDirection(ParameterDirectionKind::return_);
		Channel_getStatus->addOwnedParameter(Channel_getStatus_ReturnResult);
	Channel->addOwnedOperation(Channel_getStatus);

	//Class InputChannel
	InputChannel.reset(new Class_());
	InputChannel->setThisClass_Ptr(InputChannel);
	InputChannel->setName("InputChannel");
	InputChannel->setIsAbstract(true);
		//Generalization to Channel
		InputChannel_Generalization_Channel.reset(new Generalization());
		InputChannel_Generalization_Channel->setThisElementPtr(InputChannel_Generalization_Channel);
		InputChannel_Generalization_Channel->setGeneral(Channel);
	InputChannel->addGeneralization(InputChannel_Generalization_Channel);
		//Operation hasMore
		InputChannel_hasMore.reset(new Operation());
		InputChannel_hasMore->setThisOperationPtr(InputChannel_hasMore);
		InputChannel_hasMore->setName("hasMore");
		InputChannel_hasMore->setIsAbstract(true);
			//Parameter ReturnResult
			InputChannel_hasMore_ReturnResult.reset(new Parameter());
			InputChannel_hasMore_ReturnResult->setThisElementPtr(InputChannel_hasMore_ReturnResult);
			InputChannel_hasMore_ReturnResult->setName("ReturnResult");
			InputChannel_hasMore_ReturnResult->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
			InputChannel_hasMore_ReturnResult->setDirection(ParameterDirectionKind::return_);
		InputChannel_hasMore->addOwnedParameter(InputChannel_hasMore_ReturnResult);
	InputChannel->addOwnedOperation(InputChannel_hasMore);
		//Operation read
		InputChannel_read.reset(new Operation());
		InputChannel_read->setThisOperationPtr(InputChannel_read);
		InputChannel_read->setName("read");
		InputChannel_read->setIsAbstract(true);
			//Parameter value
			InputChannel_read_value.reset(new Parameter());
			InputChannel_read_value->setThisElementPtr(InputChannel_read_value);
			InputChannel_read_value->setName("value");
			InputChannel_read_value->setDirection(ParameterDirectionKind::out);
		InputChannel_read->addOwnedParameter(InputChannel_read_value);
			//Parameter errorStatus
			InputChannel_read_errorStatus.reset(new Parameter());
			InputChannel_read_errorStatus->setThisElementPtr(InputChannel_read_errorStatus);
			InputChannel_read_errorStatus->setName("errorStatus");
			InputChannel_read_errorStatus->setType(Status);
			InputChannel_read_errorStatus->setDirection(ParameterDirectionKind::out);
		InputChannel_read->addOwnedParameter(InputChannel_read_errorStatus);
	InputChannel->addOwnedOperation(InputChannel_read);
		//Operation peek
		InputChannel_peek.reset(new Operation());
		InputChannel_peek->setThisOperationPtr(InputChannel_peek);
		InputChannel_peek->setName("peek");
		InputChannel_peek->setIsAbstract(true);
			//Parameter value
			InputChannel_peek_value.reset(new Parameter());
			InputChannel_peek_value->setThisElementPtr(InputChannel_peek_value);
			InputChannel_peek_value->setName("value");
			InputChannel_peek_value->setDirection(ParameterDirectionKind::out);
		InputChannel_peek->addOwnedParameter(InputChannel_peek_value);
			//Parameter errorStatus
			InputChannel_peek_errorStatus.reset(new Parameter());
			InputChannel_peek_errorStatus->setThisElementPtr(InputChannel_peek_errorStatus);
			InputChannel_peek_errorStatus->setName("errorStatus");
			InputChannel_peek_errorStatus->setType(Status);
			InputChannel_peek_errorStatus->setDirection(ParameterDirectionKind::out);
		InputChannel_peek->addOwnedParameter(InputChannel_peek_errorStatus);
	InputChannel->addOwnedOperation(InputChannel_peek);

	//Class OutputChannel
	OutputChannel.reset(new Class_());
	OutputChannel->setThisClass_Ptr(OutputChannel);
	OutputChannel->setName("OutputChannel");
	OutputChannel->setIsAbstract(true);
		//Generalization to Channel
		OutputChannel_Generalization_Channel.reset(new Generalization());
		OutputChannel_Generalization_Channel->setThisElementPtr(OutputChannel_Generalization_Channel);
		OutputChannel_Generalization_Channel->setGeneral(Channel);
	OutputChannel->addGeneralization(OutputChannel_Generalization_Channel);
		//Operation isFull
		OutputChannel_isFull.reset(new Operation());
		OutputChannel_isFull->setThisOperationPtr(OutputChannel_isFull);
		OutputChannel_isFull->setName("isFull");
		OutputChannel_isFull->setIsAbstract(true);
			//Parameter ReturnResult
			OutputChannel_isFull_ReturnResult.reset(new Parameter());
			OutputChannel_isFull_ReturnResult->setThisElementPtr(OutputChannel_isFull_ReturnResult);
			OutputChannel_isFull_ReturnResult->setName("ReturnResult");
			OutputChannel_isFull_ReturnResult->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
			OutputChannel_isFull_ReturnResult->setDirection(ParameterDirectionKind::return_);
		OutputChannel_isFull->addOwnedParameter(OutputChannel_isFull_ReturnResult);
	OutputChannel->addOwnedOperation(OutputChannel_isFull);
		//Operation write
		OutputChannel_write.reset(new Operation());
		OutputChannel_write->setThisOperationPtr(OutputChannel_write);
		OutputChannel_write->setName("write");
		OutputChannel_write->setIsAbstract(true);
			//Parameter value
			OutputChannel_write_value.reset(new Parameter());
			OutputChannel_write_value->setThisElementPtr(OutputChannel_write_value);
			OutputChannel_write_value->setName("value");
		OutputChannel_write->addOwnedParameter(OutputChannel_write_value);
			//Parameter errorStatus
			OutputChannel_write_errorStatus.reset(new Parameter());
			OutputChannel_write_errorStatus->setThisElementPtr(OutputChannel_write_errorStatus);
			OutputChannel_write_errorStatus->setName("errorStatus");
			OutputChannel_write_errorStatus->setType(Status);
			OutputChannel_write_errorStatus->setDirection(ParameterDirectionKind::out);
		OutputChannel_write->addOwnedParameter(OutputChannel_write_errorStatus);
	OutputChannel->addOwnedOperation(OutputChannel_write);

	//Class TextInputChannel
		TextInputChannel.reset(new Class_());
		TextInputChannel->setThisClass_Ptr(TextInputChannel);
		TextInputChannel->setName("TextInputChannel");
		TextInputChannel->setIsAbstract(true);
			//Generalization to Channel
			TextInputChannel_Generalization_InputChannel.reset(new Generalization());
			TextInputChannel_Generalization_InputChannel->setThisElementPtr(TextInputChannel_Generalization_InputChannel);
			TextInputChannel_Generalization_InputChannel->setGeneral(InputChannel);
		TextInputChannel->addGeneralization(TextInputChannel_Generalization_InputChannel);
			//Operation readCharacter
			TextInputChannel_readCharacter.reset(new Operation());
			TextInputChannel_readCharacter->setThisOperationPtr(TextInputChannel_readCharacter);
			TextInputChannel_readCharacter->setName("readCharacter");
				//Parameter ReturnResult
				TextInputChannel_readCharacter_ReturnResult.reset(new Parameter());
				TextInputChannel_readCharacter_ReturnResult->setThisElementPtr(TextInputChannel_readCharacter_ReturnResult);
				TextInputChannel_readCharacter_ReturnResult->setName("ReturnResult");
				TextInputChannel_readCharacter_ReturnResult->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
				TextInputChannel_readCharacter_ReturnResult->setDirection(ParameterDirectionKind::return_);
			TextInputChannel_readCharacter->addOwnedParameter(TextInputChannel_readCharacter_ReturnResult);
				//Parameter errorStatus
				TextInputChannel_readCharacter_errorStatus.reset(new Parameter());
				TextInputChannel_readCharacter_errorStatus->setThisElementPtr(TextInputChannel_readCharacter_errorStatus);
				TextInputChannel_readCharacter_errorStatus->setName("errorStatus");
				TextInputChannel_readCharacter_errorStatus->setType(Status);
				TextInputChannel_readCharacter_errorStatus->setDirection(ParameterDirectionKind::out);
			TextInputChannel_readCharacter->addOwnedParameter(TextInputChannel_readCharacter_errorStatus);
		TextInputChannel->addOwnedOperation(TextInputChannel_readCharacter);
			//Operation peekCharacter
			TextInputChannel_peekCharacter.reset(new Operation());
			TextInputChannel_peekCharacter->setThisOperationPtr(TextInputChannel_peekCharacter);
			TextInputChannel_peekCharacter->setName("peekCharacter");
				//Parameter OwnedParameter
				TextInputChannel_peekCharacter_OwnedParameter.reset(new Parameter());
				TextInputChannel_peekCharacter_OwnedParameter->setThisElementPtr(TextInputChannel_peekCharacter_OwnedParameter);
				TextInputChannel_peekCharacter_OwnedParameter->setName("OwnedParameter");
				TextInputChannel_peekCharacter_OwnedParameter->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
				TextInputChannel_peekCharacter_OwnedParameter->setDirection(ParameterDirectionKind::return_);
			TextInputChannel_peekCharacter->addOwnedParameter(TextInputChannel_peekCharacter_OwnedParameter);
				//Parameter errorStatus
				TextInputChannel_peekCharacter_errorStatus.reset(new Parameter());
				TextInputChannel_peekCharacter_errorStatus->setThisElementPtr(TextInputChannel_peekCharacter_errorStatus);
				TextInputChannel_peekCharacter_errorStatus->setName("errorStatus");
				TextInputChannel_peekCharacter_errorStatus->setType(Status);
				TextInputChannel_peekCharacter_errorStatus->setDirection(ParameterDirectionKind::out);
			TextInputChannel_peekCharacter->addOwnedParameter(TextInputChannel_peekCharacter_errorStatus);
		TextInputChannel->addOwnedOperation(TextInputChannel_peekCharacter);
			//Operation readLine
			TextInputChannel_readLine.reset(new Operation());
			TextInputChannel_readLine->setThisOperationPtr(TextInputChannel_readLine);
			TextInputChannel_readLine->setName("readLine");
				//Parameter ReturnResult
				TextInputChannel_readLine_ReturnResult.reset(new Parameter());
				TextInputChannel_readLine_ReturnResult->setThisElementPtr(TextInputChannel_readLine_ReturnResult);
				TextInputChannel_readLine_ReturnResult->setName("ReturnResult");
				TextInputChannel_readLine_ReturnResult->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
				TextInputChannel_readLine_ReturnResult->setDirection(ParameterDirectionKind::return_);
			TextInputChannel_readLine->addOwnedParameter(TextInputChannel_readLine_ReturnResult);
				//Parameter errorStatus
				TextInputChannel_readLine_errorStatus.reset(new Parameter());
				TextInputChannel_readLine_errorStatus->setThisElementPtr(TextInputChannel_readLine_errorStatus);
				TextInputChannel_readLine_errorStatus->setName("errorStatus");
				TextInputChannel_readLine_errorStatus->setType(Status);
				TextInputChannel_readLine_errorStatus->setDirection(ParameterDirectionKind::out);
			TextInputChannel_readLine->addOwnedParameter(TextInputChannel_readLine_errorStatus);
		TextInputChannel->addOwnedOperation(TextInputChannel_readLine);
			//Operation readInteger
			TextInputChannel_readInteger.reset(new Operation());
			TextInputChannel_readInteger->setThisOperationPtr(TextInputChannel_readInteger);
			TextInputChannel_readInteger->setName("readInteger");
				//Parameter ReturnResult
				TextInputChannel_readInteger_ReturnResult.reset(new Parameter());
				TextInputChannel_readInteger_ReturnResult->setThisElementPtr(TextInputChannel_readInteger_ReturnResult);
				TextInputChannel_readInteger_ReturnResult->setName("ReturnResult");
				TextInputChannel_readInteger_ReturnResult->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
				TextInputChannel_readInteger_ReturnResult->setDirection(ParameterDirectionKind::return_);
			TextInputChannel_readInteger->addOwnedParameter(TextInputChannel_readInteger_ReturnResult);
				//Parameter errorStatus
				TextInputChannel_readInteger_errorStatus.reset(new Parameter());
				TextInputChannel_readInteger_errorStatus->setThisElementPtr(TextInputChannel_readInteger_errorStatus);
				TextInputChannel_readInteger_errorStatus->setName("errorStatus");
				TextInputChannel_readInteger_errorStatus->setType(Status);
				TextInputChannel_readInteger_errorStatus->setDirection(ParameterDirectionKind::out);
			TextInputChannel_readInteger->addOwnedParameter(TextInputChannel_readInteger_errorStatus);
		TextInputChannel->addOwnedOperation(TextInputChannel_readInteger);
			//Operation readReal
			TextInputChannel_readReal.reset(new Operation());
			TextInputChannel_readReal->setThisOperationPtr(TextInputChannel_readReal);
			TextInputChannel_readReal->setName("readReal");
				//Parameter ReturnResult
				TextInputChannel_readReal_ReturnResult.reset(new Parameter());
				TextInputChannel_readReal_ReturnResult->setThisElementPtr(TextInputChannel_readReal_ReturnResult);
				TextInputChannel_readReal_ReturnResult->setName("ReturnResult");
				TextInputChannel_readReal_ReturnResult->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
				TextInputChannel_readReal_ReturnResult->setDirection(ParameterDirectionKind::return_);
			TextInputChannel_readReal->addOwnedParameter(TextInputChannel_readReal_ReturnResult);
				//Parameter errorStatus
				TextInputChannel_readReal_errorStatus.reset(new Parameter());
				TextInputChannel_readReal_errorStatus->setThisElementPtr(TextInputChannel_readReal_errorStatus);
				TextInputChannel_readReal_errorStatus->setName("errorStatus");
				TextInputChannel_readReal_errorStatus->setType(Status);
				TextInputChannel_readReal_errorStatus->setDirection(ParameterDirectionKind::out);
			TextInputChannel_readReal->addOwnedParameter(TextInputChannel_readReal_errorStatus);
		TextInputChannel->addOwnedOperation(TextInputChannel_readReal);
			//Operation readBoolean
			TextInputChannel_readBoolean.reset(new Operation());
			TextInputChannel_readBoolean->setThisOperationPtr(TextInputChannel_readBoolean);
			TextInputChannel_readBoolean->setName("readBoolean");
				//Parameter ReturnResult
				TextInputChannel_readBoolean_ReturnResult.reset(new Parameter());
				TextInputChannel_readBoolean_ReturnResult->setThisElementPtr(TextInputChannel_readBoolean_ReturnResult);
				TextInputChannel_readBoolean_ReturnResult->setName("ReturnResult");
				TextInputChannel_readBoolean_ReturnResult->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
				TextInputChannel_readBoolean_ReturnResult->setDirection(ParameterDirectionKind::return_);
			TextInputChannel_readBoolean->addOwnedParameter(TextInputChannel_readBoolean_ReturnResult);
				//Parameter errorStatus
				TextInputChannel_readBoolean_errorStatus.reset(new Parameter());
				TextInputChannel_readBoolean_errorStatus->setThisElementPtr(TextInputChannel_readBoolean_errorStatus);
				TextInputChannel_readBoolean_errorStatus->setName("errorStatus");
				TextInputChannel_readBoolean_errorStatus->setType(Status);
				TextInputChannel_readBoolean_errorStatus->setDirection(ParameterDirectionKind::out);
			TextInputChannel_readBoolean->addOwnedParameter(TextInputChannel_readBoolean_errorStatus);
		TextInputChannel->addOwnedOperation(TextInputChannel_readBoolean);
			//Operation readUnlimitedNatural
			TextInputChannel_readUnlimitedNatural.reset(new Operation());
			TextInputChannel_readUnlimitedNatural->setThisOperationPtr(TextInputChannel_readUnlimitedNatural);
			TextInputChannel_readUnlimitedNatural->setName("readUnlimitedNatural");
				//Parameter ReturnResult
				TextInputChannel_readUnlimitedNatural_ReturnResult.reset(new Parameter());
				TextInputChannel_readUnlimitedNatural_ReturnResult->setThisElementPtr(TextInputChannel_readUnlimitedNatural_ReturnResult);
				TextInputChannel_readUnlimitedNatural_ReturnResult->setName("ReturnResult");
				TextInputChannel_readUnlimitedNatural_ReturnResult->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
				TextInputChannel_readUnlimitedNatural_ReturnResult->setDirection(ParameterDirectionKind::return_);
			TextInputChannel_readUnlimitedNatural->addOwnedParameter(TextInputChannel_readUnlimitedNatural_ReturnResult);
				//Parameter errorStatus
				TextInputChannel_readUnlimitedNatural_errorStatus.reset(new Parameter());
				TextInputChannel_readUnlimitedNatural_errorStatus->setThisElementPtr(TextInputChannel_readUnlimitedNatural_errorStatus);
				TextInputChannel_readUnlimitedNatural_errorStatus->setName("errorStatus");
				TextInputChannel_readUnlimitedNatural_errorStatus->setType(Status);
				TextInputChannel_readUnlimitedNatural_errorStatus->setDirection(ParameterDirectionKind::out);
			TextInputChannel_readUnlimitedNatural->addOwnedParameter(TextInputChannel_readUnlimitedNatural_errorStatus);
		TextInputChannel->addOwnedOperation(TextInputChannel_readUnlimitedNatural);

	//Class TextOutputChannel
	TextOutputChannel.reset(new Class_());
	TextOutputChannel->setThisClass_Ptr(TextOutputChannel);
	TextOutputChannel->setName("TextOutputChannel");
	TextOutputChannel->setIsAbstract(true);
		//Generalization to Channel
		TextOutputChannel_Generalization_OutputChannel.reset(new Generalization());
		TextOutputChannel_Generalization_OutputChannel->setThisElementPtr(TextOutputChannel_Generalization_OutputChannel);
		TextOutputChannel_Generalization_OutputChannel->setGeneral(OutputChannel);
	TextOutputChannel->addGeneralization(TextOutputChannel_Generalization_OutputChannel);

	//Class StandardInputChannel
	StandardInputChannel.reset(new Class_());
	StandardInputChannel->setThisClass_Ptr(StandardInputChannel);
	StandardInputChannel->setName("StandardInputChannel");
	StandardInputChannel->setIsAbstract(true);
		//Generalization to TextInputChannel
		StandardInputChannel_Generalization_TextInputChannel.reset(new Generalization());
		StandardInputChannel_Generalization_TextInputChannel->setThisElementPtr(StandardInputChannel_Generalization_TextInputChannel);
		StandardInputChannel_Generalization_TextInputChannel->setGeneral(TextInputChannel);
	StandardInputChannel->addGeneralization(StandardInputChannel_Generalization_TextInputChannel);

	//Class StandardOutputChannel
	StandardOutputChannel.reset(new Class_());
	StandardOutputChannel->setThisClass_Ptr(StandardOutputChannel);
	StandardOutputChannel->setName("StandardOutputChannel");
	StandardOutputChannel->setIsAbstract(true);
		//Generalization to TextOutputChannel
		StandardOutputChannel_Generalization_TextOutputChannel.reset(new Generalization());
		StandardOutputChannel_Generalization_TextOutputChannel->setThisElementPtr(StandardOutputChannel_Generalization_TextOutputChannel);
		StandardOutputChannel_Generalization_TextOutputChannel->setGeneral(TextOutputChannel);
	StandardOutputChannel->addGeneralization(StandardOutputChannel_Generalization_TextOutputChannel);
		//Operation writeString
		TextOutputChannel_writeString.reset(new Operation());
		TextOutputChannel_writeString->setThisOperationPtr(TextOutputChannel_writeString);
		TextOutputChannel_writeString->setName("writeString");
			//Parameter value
			TextOutputChannel_writeString_value.reset(new Parameter());
			TextOutputChannel_writeString_value->setThisElementPtr(TextOutputChannel_writeString_value);
			TextOutputChannel_writeString_value->setName("value");
			TextOutputChannel_writeString_value->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
		TextOutputChannel_writeString->addOwnedParameter(TextOutputChannel_writeString_value);
			//Parameter errorStatus
			TextOutputChannel_writeString_errorStatus.reset(new Parameter());
			TextOutputChannel_writeString_errorStatus->setThisElementPtr(TextOutputChannel_writeString_errorStatus);
			TextOutputChannel_writeString_errorStatus->setName("errorStatus");
			TextOutputChannel_writeString_errorStatus->setType(Status);
			TextOutputChannel_writeString_errorStatus->setDirection(ParameterDirectionKind::out);
		TextOutputChannel_writeString->addOwnedParameter(TextOutputChannel_writeString_errorStatus);
	TextOutputChannel->addOwnedOperation(TextOutputChannel_writeString);
		//Operation writeNewLine
		TextOutputChannel_writeNewLine.reset(new Operation());
		TextOutputChannel_writeNewLine->setThisOperationPtr(TextOutputChannel_writeNewLine);
		TextOutputChannel_writeNewLine->setName("writeNewLine");
		TextOutputChannel_writeNewLine->setIsAbstract(true);
			//Parameter errorStatus
			TextOutputChannel_writeNewLine_errorStatus.reset(new Parameter());
			TextOutputChannel_writeNewLine_errorStatus->setThisElementPtr(TextOutputChannel_writeNewLine_errorStatus);
			TextOutputChannel_writeNewLine_errorStatus->setName("errorStatus");
			TextOutputChannel_writeNewLine_errorStatus->setType(Status);
			TextOutputChannel_writeNewLine_errorStatus->setDirection(ParameterDirectionKind::out);
		TextOutputChannel_writeNewLine->addOwnedParameter(TextOutputChannel_writeNewLine_errorStatus);
	TextOutputChannel->addOwnedOperation(TextOutputChannel_writeNewLine);
		//Operation writeLine
		TextOutputChannel_writeLine.reset(new Operation());
		TextOutputChannel_writeLine->setThisOperationPtr(TextOutputChannel_writeLine);
		TextOutputChannel_writeLine->setName("writeLine");
			//Parameter value
			TextOutputChannel_writeLine_value.reset(new Parameter());
			TextOutputChannel_writeLine_value->setThisElementPtr(TextOutputChannel_writeLine_value);
			TextOutputChannel_writeLine_value->setName("value");
			TextOutputChannel_writeLine_value->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
		TextOutputChannel_writeLine->addOwnedParameter(TextOutputChannel_writeLine_value);
			//Parameter errorStatus
			TextOutputChannel_writeLine_errorStatus.reset(new Parameter());
			TextOutputChannel_writeLine_errorStatus->setThisElementPtr(TextOutputChannel_writeLine_errorStatus);
			TextOutputChannel_writeLine_errorStatus->setName("errorStatus");
			TextOutputChannel_writeLine_errorStatus->setType(Status);
			TextOutputChannel_writeLine_errorStatus->setDirection(ParameterDirectionKind::out);
		TextOutputChannel_writeLine->addOwnedParameter(TextOutputChannel_writeLine_errorStatus);
	TextOutputChannel->addOwnedOperation(TextOutputChannel_writeLine);
		//Operation writeInteger
		TextOutputChannel_writeInteger.reset(new Operation());
		TextOutputChannel_writeInteger->setThisOperationPtr(TextOutputChannel_writeInteger);
		TextOutputChannel_writeInteger->setName("writeInteger");
			//Parameter value
			TextOutputChannel_writeInteger_value.reset(new Parameter());
			TextOutputChannel_writeInteger_value->setThisElementPtr(TextOutputChannel_writeInteger_value);
			TextOutputChannel_writeInteger_value->setName("value");
			TextOutputChannel_writeInteger_value->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		TextOutputChannel_writeInteger->addOwnedParameter(TextOutputChannel_writeInteger_value);
			//Parameter errorStatus
			TextOutputChannel_writeInteger_errorStatus.reset(new Parameter());
			TextOutputChannel_writeInteger_errorStatus->setThisElementPtr(TextOutputChannel_writeInteger_errorStatus);
			TextOutputChannel_writeInteger_errorStatus->setName("errorStatus");
			TextOutputChannel_writeInteger_errorStatus->setType(Status);
			TextOutputChannel_writeInteger_errorStatus->setDirection(ParameterDirectionKind::out);
		TextOutputChannel_writeInteger->addOwnedParameter(TextOutputChannel_writeInteger_errorStatus);
	TextOutputChannel->addOwnedOperation(TextOutputChannel_writeInteger);
		//Operation writeReal
		TextOutputChannel_writeReal.reset(new Operation());
		TextOutputChannel_writeReal->setThisOperationPtr(TextOutputChannel_writeReal);
		TextOutputChannel_writeReal->setName("writeReal");
			//Parameter value
			TextOutputChannel_writeReal_value.reset(new Parameter());
			TextOutputChannel_writeReal_value->setThisElementPtr(TextOutputChannel_writeReal_value);
			TextOutputChannel_writeReal_value->setName("value");
			TextOutputChannel_writeReal_value->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		TextOutputChannel_writeReal->addOwnedParameter(TextOutputChannel_writeReal_value);
			//Parameter errorStatus
			TextOutputChannel_writeReal_errorStatus.reset(new Parameter());
			TextOutputChannel_writeReal_errorStatus->setThisElementPtr(TextOutputChannel_writeReal_errorStatus);
			TextOutputChannel_writeReal_errorStatus->setName("errorStatus");
			TextOutputChannel_writeReal_errorStatus->setType(Status);
			TextOutputChannel_writeReal_errorStatus->setDirection(ParameterDirectionKind::out);
		TextOutputChannel_writeReal->addOwnedParameter(TextOutputChannel_writeReal_errorStatus);
	TextOutputChannel->addOwnedOperation(TextOutputChannel_writeReal);
		//Operation writeBoolean
		TextOutputChannel_writeBoolean.reset(new Operation());
		TextOutputChannel_writeBoolean->setThisOperationPtr(TextOutputChannel_writeBoolean);
		TextOutputChannel_writeBoolean->setName("writeBoolean");
			//Parameter value
			TextOutputChannel_writeBoolean_value.reset(new Parameter());
			TextOutputChannel_writeBoolean_value->setThisElementPtr(TextOutputChannel_writeBoolean_value);
			TextOutputChannel_writeBoolean_value->setName("value");
			TextOutputChannel_writeBoolean_value->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		TextOutputChannel_writeBoolean->addOwnedParameter(TextOutputChannel_writeBoolean_value);
			//Parameter errorStatus
			TextOutputChannel_writeBoolean_errorStatus.reset(new Parameter());
			TextOutputChannel_writeBoolean_errorStatus->setThisElementPtr(TextOutputChannel_writeBoolean_errorStatus);
			TextOutputChannel_writeBoolean_errorStatus->setName("errorStatus");
			TextOutputChannel_writeBoolean_errorStatus->setType(Status);
			TextOutputChannel_writeBoolean_errorStatus->setDirection(ParameterDirectionKind::out);
		TextOutputChannel_writeBoolean->addOwnedParameter(TextOutputChannel_writeBoolean_errorStatus);
	TextOutputChannel->addOwnedOperation(TextOutputChannel_writeBoolean);
		//Operation writeUnlimitedNatural
		TextOutputChannel_writeUnlimitedNatural.reset(new Operation());
		TextOutputChannel_writeUnlimitedNatural->setThisOperationPtr(TextOutputChannel_writeUnlimitedNatural);
		TextOutputChannel_writeUnlimitedNatural->setName("writeUnlimitedNatural");
			//Parameter value
			TextOutputChannel_writeUnlimitedNatural_value.reset(new Parameter());
			TextOutputChannel_writeUnlimitedNatural_value->setThisElementPtr(TextOutputChannel_writeUnlimitedNatural_value);
			TextOutputChannel_writeUnlimitedNatural_value->setName("value");
			TextOutputChannel_writeUnlimitedNatural_value->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
		TextOutputChannel_writeUnlimitedNatural->addOwnedParameter(TextOutputChannel_writeUnlimitedNatural_value);
			//Parameter errorStatus
			TextOutputChannel_writeUnlimitedNatural_errorStatus.reset(new Parameter());
			TextOutputChannel_writeUnlimitedNatural_errorStatus->setThisElementPtr(TextOutputChannel_writeUnlimitedNatural_errorStatus);
			TextOutputChannel_writeUnlimitedNatural_errorStatus->setName("errorStatus");
			TextOutputChannel_writeUnlimitedNatural_errorStatus->setType(Status);
			TextOutputChannel_writeUnlimitedNatural_errorStatus->setDirection(ParameterDirectionKind::out);
		TextOutputChannel_writeUnlimitedNatural->addOwnedParameter(TextOutputChannel_writeUnlimitedNatural_errorStatus);
	TextOutputChannel->addOwnedOperation(TextOutputChannel_writeUnlimitedNatural);

	//Activity WriteLine
	WriteLine.reset(new Activity());
	WriteLine->setThisActivityPtr(WriteLine);
	WriteLine->setName("WriteLine");
	WriteLine->isReentrant = false;
		//Parameter value
		WriteLine_value.reset(new Parameter());
		WriteLine_value->setThisElementPtr(WriteLine_value);
		WriteLine_value->setName("value");
		WriteLine_value->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
	WriteLine->addOwnedParameter(WriteLine_value);
		//Parameter errorStatus
		WriteLine_errorStatus.reset(new Parameter());;
		WriteLine_errorStatus->setThisElementPtr(WriteLine_errorStatus);
		WriteLine_errorStatus->setName("errorStatus");
		WriteLine_errorStatus->setType(Status);
		WriteLine_errorStatus->setDirection(ParameterDirectionKind::out);
	WriteLine->addOwnedParameter(WriteLine_errorStatus);
		//ActivityParameterNode value
		WriteLine_ActivityParameterNode_value.reset(new ActivityParameterNode());
		WriteLine_ActivityParameterNode_value->setThisElementPtr(WriteLine_ActivityParameterNode_value);
		WriteLine_ActivityParameterNode_value->setName("value");
		WriteLine_ActivityParameterNode_value->setParameter(WriteLine_value);
		WriteLine_ActivityParameterNode_value->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
	WriteLine->addNode(WriteLine_ActivityParameterNode_value);
		//ActivityParameterNode errorStatus
		WriteLine_ActivityParameterNode_errorStatus.reset(new ActivityParameterNode());
		WriteLine_ActivityParameterNode_errorStatus->setThisElementPtr(WriteLine_ActivityParameterNode_errorStatus);
		WriteLine_ActivityParameterNode_errorStatus->setName("errorStatus");
		WriteLine_ActivityParameterNode_errorStatus->setParameter(WriteLine_errorStatus);
		WriteLine_ActivityParameterNode_errorStatus->setType(Status);
	WriteLine->addNode(WriteLine_ActivityParameterNode_errorStatus);
		//ReadExtentAction StandardOutputChannel
		WriteLine_ReadExtentAction_StandardOutputChannel.reset(new ReadExtentAction());
		WriteLine_ReadExtentAction_StandardOutputChannel->setThisExecutableNodePtr(WriteLine_ReadExtentAction_StandardOutputChannel);
		WriteLine_ReadExtentAction_StandardOutputChannel->setName("StandardOutputChannel");
		WriteLine_ReadExtentAction_StandardOutputChannel->setClassifier(StandardOutputChannel);
			//OutputPin result
			WriteLine_ReadExtentAction_StandardOutputChannel_result.reset(new OutputPin());
			WriteLine_ReadExtentAction_StandardOutputChannel_result->setThisElementPtr(WriteLine_ReadExtentAction_StandardOutputChannel_result);
			WriteLine_ReadExtentAction_StandardOutputChannel_result->setName("result");
			WriteLine_ReadExtentAction_StandardOutputChannel_result->setType(StandardOutputChannel);
			WriteLine_ReadExtentAction_StandardOutputChannel_result->setUpper(-1);
		WriteLine_ReadExtentAction_StandardOutputChannel->setResult(WriteLine_ReadExtentAction_StandardOutputChannel_result);
	WriteLine->addNode(WriteLine_ReadExtentAction_StandardOutputChannel);
		//CallOperationAction writeLine
		WriteLine_CallOperationAction_writeLine.reset(new CallOperationAction());
		WriteLine_CallOperationAction_writeLine->setThisExecutableNodePtr(WriteLine_CallOperationAction_writeLine);
		WriteLine_CallOperationAction_writeLine->setName("writeLine");
		WriteLine_CallOperationAction_writeLine->setOperation(TextOutputChannel_writeLine);
			//InputPin target
			WriteLine_CallOperationAction_writeLine_target.reset(new InputPin());
			WriteLine_CallOperationAction_writeLine_target->setThisElementPtr(WriteLine_CallOperationAction_writeLine_target);
			WriteLine_CallOperationAction_writeLine_target->setName("target");
			WriteLine_CallOperationAction_writeLine_target->setType(TextOutputChannel);
		WriteLine_CallOperationAction_writeLine->setTarget(WriteLine_CallOperationAction_writeLine_target);
			//InputPin value
			WriteLine_CallOperationAction_writeLine_value.reset(new InputPin());
			WriteLine_CallOperationAction_writeLine_value->setThisElementPtr(WriteLine_CallOperationAction_writeLine_value);
			WriteLine_CallOperationAction_writeLine_value->setName("value");
			WriteLine_CallOperationAction_writeLine_value->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
		WriteLine_CallOperationAction_writeLine->addArgument(WriteLine_CallOperationAction_writeLine_value);
			//OutputPin errorStatus
			WriteLine_CallOperationAction_writeLine_errorStatus.reset(new OutputPin());
			WriteLine_CallOperationAction_writeLine_errorStatus->setThisElementPtr(WriteLine_CallOperationAction_writeLine_errorStatus);
			WriteLine_CallOperationAction_writeLine_errorStatus->setName("errorStatus");
			WriteLine_CallOperationAction_writeLine_errorStatus->setType(Status);
		WriteLine_CallOperationAction_writeLine->addResult(WriteLine_CallOperationAction_writeLine_errorStatus);
	WriteLine->addNode(WriteLine_CallOperationAction_writeLine);
		//ObjectFlow from value to writeLine_value
		WriteLine_From_value_To_writeLine_value.reset(new ObjectFlow());
		WriteLine_From_value_To_writeLine_value->setThisActivityEdgePtr(WriteLine_From_value_To_writeLine_value);
		WriteLine_From_value_To_writeLine_value->setName("From_value_To_writeLine_value");
		WriteLine_From_value_To_writeLine_value->setSource(WriteLine_ActivityParameterNode_value);
		WriteLine_From_value_To_writeLine_value->setTarget(WriteLine_CallOperationAction_writeLine_value);
	WriteLine->addEdge(WriteLine_From_value_To_writeLine_value);
		//ObjectFlow from StandardOutputChannel_result to writeLine_target
		WriteLine_From_StandardOutputChannel_result_To_writeLine_target.reset(new ObjectFlow());
		WriteLine_From_StandardOutputChannel_result_To_writeLine_target->setThisActivityEdgePtr(WriteLine_From_StandardOutputChannel_result_To_writeLine_target);
		WriteLine_From_StandardOutputChannel_result_To_writeLine_target->setName("From_StandardOutputChannel_result_To_writeLine_target");
		WriteLine_From_StandardOutputChannel_result_To_writeLine_target->setSource(WriteLine_ReadExtentAction_StandardOutputChannel_result);
		WriteLine_From_StandardOutputChannel_result_To_writeLine_target->setTarget(WriteLine_CallOperationAction_writeLine_target);
	WriteLine->addEdge(WriteLine_From_StandardOutputChannel_result_To_writeLine_target);
		//ObjectFlow from writeLine_errorStatus to errorStatus
		WriteLine_From_writeLine_errorStatus_To_errorStatus.reset(new ObjectFlow());
		WriteLine_From_writeLine_errorStatus_To_errorStatus->setThisActivityEdgePtr(WriteLine_From_writeLine_errorStatus_To_errorStatus);
		WriteLine_From_writeLine_errorStatus_To_errorStatus->setName("From_writeLine_errorStatus_To_errorStatus");
		WriteLine_From_writeLine_errorStatus_To_errorStatus->setSource(WriteLine_CallOperationAction_writeLine_errorStatus);
		WriteLine_From_writeLine_errorStatus_To_errorStatus->setTarget(WriteLine_ActivityParameterNode_errorStatus);
	WriteLine->addEdge(WriteLine_From_writeLine_errorStatus_To_errorStatus);

	//Class ActiveChannel
	ActiveChannel.reset(new Class_());
	ActiveChannel->setThisClass_Ptr(ActiveChannel);
	ActiveChannel->setName("ActiveChannel");
	ActiveChannel->setIsAbstract(true);
	ActiveChannel->setIsActive(true);
		//Generalization to Channel
		ActiveChannel_Generalization_Channel.reset(new Generalization());
		ActiveChannel_Generalization_Channel->setThisElementPtr(ActiveChannel_Generalization_Channel);
		ActiveChannel_Generalization_Channel->setGeneral(Channel);
	ActiveChannel->addGeneralization(ActiveChannel_Generalization_Channel);
		//Operation register
		ActiveChannel_register.reset(new Operation());
		ActiveChannel_register->setThisOperationPtr(ActiveChannel_register);
		ActiveChannel_register->setName("register");
			//Parameter listener
			ActiveChannel_register_listener.reset(new Parameter());
			ActiveChannel_register_listener->setThisElementPtr(ActiveChannel_register_listener);
			ActiveChannel_register_listener->setName("listener");
			ActiveChannel_register_listener->setType(Listener);
		ActiveChannel_register->addOwnedParameter(ActiveChannel_register_listener);
	ActiveChannel->addOwnedOperation(ActiveChannel_register);
		//Operation unregister
		ActiveChannel_unregister.reset(new Operation());
		ActiveChannel_unregister->setThisOperationPtr(ActiveChannel_unregister);
		ActiveChannel_unregister->setName("unregister");
			//Parameter listener
			ActiveChannel_unregister_listener.reset(new Parameter());
			ActiveChannel_unregister_listener->setThisElementPtr(ActiveChannel_unregister_listener);
			ActiveChannel_unregister_listener->setName("listener");
			ActiveChannel_unregister_listener->setType(Listener);
		ActiveChannel_unregister->addOwnedParameter(ActiveChannel_unregister_listener);
	ActiveChannel->addOwnedOperation(ActiveChannel_unregister);

	//Activity ReadLine
	ReadLine.reset(new Activity());
	ReadLine->setThisActivityPtr(ReadLine);
	ReadLine->setName("ReadLine");
	ReadLine->isReentrant = false;
		//Parameter result
		ReadLine_result.reset(new Parameter());
		ReadLine_result->setThisElementPtr(ReadLine_result);
		ReadLine_result->setName("result");
		ReadLine_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
		ReadLine_result->setDirection(ParameterDirectionKind::return_);
	ReadLine->addOwnedParameter(ReadLine_result);
		//Parameter errorStatus
		ReadLine_errorStatus.reset(new Parameter());;
		ReadLine_errorStatus->setThisElementPtr(ReadLine_errorStatus);
		ReadLine_errorStatus->setName("errorStatus");
		ReadLine_errorStatus->setType(Status);
		ReadLine_errorStatus->setDirection(ParameterDirectionKind::out);
	ReadLine->addOwnedParameter(ReadLine_errorStatus);
		//ActivityParameterNode result
		ReadLine_ActivityParameterNode_result.reset(new ActivityParameterNode());
		ReadLine_ActivityParameterNode_result->setThisElementPtr(ReadLine_ActivityParameterNode_result);
		ReadLine_ActivityParameterNode_result->setName("result");
		ReadLine_ActivityParameterNode_result->setParameter(ReadLine_result);
		ReadLine_ActivityParameterNode_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
	ReadLine->addNode(ReadLine_ActivityParameterNode_result);
		//ActivityParameterNode errorStatus
		ReadLine_ActivityParameterNode_errorStatus.reset(new ActivityParameterNode());
		ReadLine_ActivityParameterNode_errorStatus->setThisElementPtr(ReadLine_ActivityParameterNode_errorStatus);
		ReadLine_ActivityParameterNode_errorStatus->setName("errorStatus");
		ReadLine_ActivityParameterNode_errorStatus->setParameter(ReadLine_errorStatus);
		ReadLine_ActivityParameterNode_errorStatus->setType(Status);
	ReadLine->addNode(ReadLine_ActivityParameterNode_errorStatus);
		//ReadExtentAction StandardInputChannel
		ReadLine_ReadExtentAction_StandardInputChannel.reset(new ReadExtentAction());
		ReadLine_ReadExtentAction_StandardInputChannel->setThisExecutableNodePtr(ReadLine_ReadExtentAction_StandardInputChannel);
		ReadLine_ReadExtentAction_StandardInputChannel->setName("StandardInputChannel");
		ReadLine_ReadExtentAction_StandardInputChannel->setClassifier(StandardInputChannel);
			//OutputPin result
			ReadLine_ReadExtentAction_StandardInputChannel_result.reset(new OutputPin());
			ReadLine_ReadExtentAction_StandardInputChannel_result->setThisElementPtr(ReadLine_ReadExtentAction_StandardInputChannel_result);
			ReadLine_ReadExtentAction_StandardInputChannel_result->setName("result");
			ReadLine_ReadExtentAction_StandardInputChannel_result->setType(StandardInputChannel);
			ReadLine_ReadExtentAction_StandardInputChannel_result->setUpper(-1);
		ReadLine_ReadExtentAction_StandardInputChannel->setResult(ReadLine_ReadExtentAction_StandardInputChannel_result);
	ReadLine->addNode(ReadLine_ReadExtentAction_StandardInputChannel);
		//CallOperationAction readLine
		ReadLine_CallOperationAction_readLine.reset(new CallOperationAction());
		ReadLine_CallOperationAction_readLine->setThisExecutableNodePtr(ReadLine_CallOperationAction_readLine);
		ReadLine_CallOperationAction_readLine->setName("readLine");
		ReadLine_CallOperationAction_readLine->setOperation(TextInputChannel_readLine);
			//InputPin target
			ReadLine_CallOperationAction_readLine_target.reset(new InputPin());
			ReadLine_CallOperationAction_readLine_target->setThisElementPtr(ReadLine_CallOperationAction_readLine_target);
			ReadLine_CallOperationAction_readLine_target->setName("target");
			ReadLine_CallOperationAction_readLine_target->setType(TextInputChannel);
		ReadLine_CallOperationAction_readLine->setTarget(ReadLine_CallOperationAction_readLine_target);
			//OutputPin result
			ReadLine_CallOperationAction_readLine_result.reset(new OutputPin());
			ReadLine_CallOperationAction_readLine_result->setThisElementPtr(ReadLine_CallOperationAction_readLine_result);
			ReadLine_CallOperationAction_readLine_result->setName("result");
			ReadLine_CallOperationAction_readLine_result->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
		ReadLine_CallOperationAction_readLine->addResult(ReadLine_CallOperationAction_readLine_result);
			//OutputPin errorStatus
			ReadLine_CallOperationAction_readLine_errorStatus.reset(new OutputPin());
			ReadLine_CallOperationAction_readLine_errorStatus->setThisElementPtr(ReadLine_CallOperationAction_readLine_errorStatus);
			ReadLine_CallOperationAction_readLine_errorStatus->setName("errorStatus");
			ReadLine_CallOperationAction_readLine_errorStatus->setType(Status);
		ReadLine_CallOperationAction_readLine->addResult(ReadLine_CallOperationAction_readLine_errorStatus);
	ReadLine->addNode(ReadLine_CallOperationAction_readLine);
		//ObjectFlow from StandardInputChannel_result to readLine_target
		ReadLine_From_StandardInputChannel_result_To_readLine_target.reset(new ObjectFlow());
		ReadLine_From_StandardInputChannel_result_To_readLine_target->setThisActivityEdgePtr(ReadLine_From_StandardInputChannel_result_To_readLine_target);
		ReadLine_From_StandardInputChannel_result_To_readLine_target->setName("From_StandardInputChannel_result_To_readLine_target");
		ReadLine_From_StandardInputChannel_result_To_readLine_target->setSource(ReadLine_ReadExtentAction_StandardInputChannel_result);
		ReadLine_From_StandardInputChannel_result_To_readLine_target->setTarget(ReadLine_CallOperationAction_readLine_target);
	ReadLine->addEdge(ReadLine_From_StandardInputChannel_result_To_readLine_target);
		//ObjectFlow from readLine_result to result
		ReadLine_From_readLine_result_To_result.reset(new ObjectFlow());
		ReadLine_From_readLine_result_To_result->setThisActivityEdgePtr(ReadLine_From_readLine_result_To_result);
		ReadLine_From_readLine_result_To_result->setName("From_readLine_result_To_result");
		ReadLine_From_readLine_result_To_result->setSource(ReadLine_CallOperationAction_readLine_result);
		ReadLine_From_readLine_result_To_result->setTarget(ReadLine_ActivityParameterNode_result);
	ReadLine->addEdge(ReadLine_From_readLine_result_To_result);
		//ObjectFlow from readLine_errorStatus to errorStatus
		ReadLine_From_readLine_errorStatus_To_errorStatus.reset(new ObjectFlow());
		ReadLine_From_readLine_errorStatus_To_errorStatus->setThisActivityEdgePtr(ReadLine_From_readLine_errorStatus_To_errorStatus);
		ReadLine_From_readLine_errorStatus_To_errorStatus->setName("From_readline_errorStatus_To_errorStatus");
		ReadLine_From_readLine_errorStatus_To_errorStatus->setSource(ReadLine_CallOperationAction_readLine_errorStatus);
		ReadLine_From_readLine_errorStatus_To_errorStatus->setTarget(ReadLine_ActivityParameterNode_errorStatus);
	ReadLine->addEdge(ReadLine_From_readLine_errorStatus_To_errorStatus);
}


