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
#include <fuml/syntax/structuredclassifiers/Class_.h>
#include <fuml/syntax/simpleclassifiers/PrimitiveType.h>
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
		BooleanFunctions_Implies_x->setDirection(ParameterDirectionKind::in);
	BooleanFunctions_Implies->addOwnedParameter(BooleanFunctions_Implies_x);
		//Parameter y
		BooleanFunctions_Implies_y.reset(new Parameter());
		BooleanFunctions_Implies_y->setName("y");
		BooleanFunctions_Implies_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		BooleanFunctions_Implies_y->setDirection(ParameterDirectionKind::in);
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
		BooleanFunctions_Not_x->setDirection(ParameterDirectionKind::in);
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
		BooleanFunctions_Or_x->setDirection(ParameterDirectionKind::in);
	BooleanFunctions_Or->addOwnedParameter(BooleanFunctions_Or_x);
		//Parameter y
		BooleanFunctions_Or_y.reset(new Parameter());
		BooleanFunctions_Or_y->setName("y");
		BooleanFunctions_Or_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		BooleanFunctions_Or_y->setDirection(ParameterDirectionKind::in);
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
		BooleanFunctions_ToBoolean_x->setDirection(ParameterDirectionKind::in);
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
		BooleanFunctions_ToString_x->setDirection(ParameterDirectionKind::in);
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
		BooleanFunctions_Xor_x->setDirection(ParameterDirectionKind::in);
	BooleanFunctions_Xor->addOwnedParameter(BooleanFunctions_Xor_x);
		//Parameter y
		BooleanFunctions_Xor_y.reset(new Parameter());
		BooleanFunctions_Xor_y->setName("y");
		BooleanFunctions_Xor_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Boolean);
		BooleanFunctions_Xor_y->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_Abs_x->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_Div_x->setDirection(ParameterDirectionKind::in);
	IntegerFunctions_Div->addOwnedParameter(IntegerFunctions_Div_x);
		//Parameter y
		IntegerFunctions_Div_y.reset(new Parameter());
		IntegerFunctions_Div_y->setName("y");
		IntegerFunctions_Div_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_Div_y->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_Max_x->setDirection(ParameterDirectionKind::in);
	IntegerFunctions_Max->addOwnedParameter(IntegerFunctions_Max_x);
		//Parameter y
		IntegerFunctions_Max_y.reset(new Parameter());
		IntegerFunctions_Max_y->setName("y");
		IntegerFunctions_Max_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_Max_y->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_Min_x->setDirection(ParameterDirectionKind::in);
	IntegerFunctions_Min->addOwnedParameter(IntegerFunctions_Min_x);
		//Parameter y
		IntegerFunctions_Min_y.reset(new Parameter());
		IntegerFunctions_Min_y->setName("y");
		IntegerFunctions_Min_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_Min_y->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_Mod_x->setDirection(ParameterDirectionKind::in);
	IntegerFunctions_Mod->addOwnedParameter(IntegerFunctions_Mod_x);
		//Parameter y
		IntegerFunctions_Mod_y = nullptr;
		IntegerFunctions_Mod_y.reset(new Parameter());
		IntegerFunctions_Mod_y->setName("y");
		IntegerFunctions_Mod_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_Mod_y->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_Neg_x->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_ToInteger_x->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_ToString_x->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_ToUnlimitedNatural_x->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_divide_x->setDirection(ParameterDirectionKind::in);
	IntegerFunctions_divide->addOwnedParameter(IntegerFunctions_divide_x);
		//Parameter y
		IntegerFunctions_divide_y.reset(new Parameter());
		IntegerFunctions_divide_y->setName("y");
		IntegerFunctions_divide_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_divide_y->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_greaterOrEqual_x->setDirection(ParameterDirectionKind::in);
	IntegerFunctions_greaterOrEqual->addOwnedParameter(IntegerFunctions_greaterOrEqual_x);
		//Parameter y
		IntegerFunctions_greaterOrEqual_y.reset(new Parameter());
		IntegerFunctions_greaterOrEqual_y->setName("y");
		IntegerFunctions_greaterOrEqual_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_greaterOrEqual_y->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_greaterThan_x->setDirection(ParameterDirectionKind::in);
	IntegerFunctions_greaterThan->addOwnedParameter(IntegerFunctions_greaterThan_x);
		//Parameter y
		IntegerFunctions_greaterThan_y.reset(new Parameter());
		IntegerFunctions_greaterThan_y->setName("y");
		IntegerFunctions_greaterThan_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_greaterThan_y->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_lessOrEqual_x->setDirection(ParameterDirectionKind::in);
	IntegerFunctions_lessOrEqual->addOwnedParameter(IntegerFunctions_lessOrEqual_x);
		//Parameter y
		IntegerFunctions_lessOrEqual_y.reset(new Parameter());
		IntegerFunctions_lessOrEqual_y->setName("y");
		IntegerFunctions_lessOrEqual_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_lessOrEqual_y->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_lessThan_x->setDirection(ParameterDirectionKind::in);
	IntegerFunctions_lessThan->addOwnedParameter(IntegerFunctions_lessThan_x);
		//Parameter y
		IntegerFunctions_lessThan_y.reset(new Parameter());
		IntegerFunctions_lessThan_y->setName("y");
		IntegerFunctions_lessThan_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_lessThan_y->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_minus_x->setDirection(ParameterDirectionKind::in);
	IntegerFunctions_minus->addOwnedParameter(IntegerFunctions_minus_x);
		//Parameter y
		IntegerFunctions_minus_y.reset(new Parameter());
		IntegerFunctions_minus_y->setName("y");
		IntegerFunctions_minus_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_minus_y->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_plus_x->setDirection(ParameterDirectionKind::in);
	IntegerFunctions_plus->addOwnedParameter(IntegerFunctions_plus_x);
		//Parameter y
		IntegerFunctions_plus_y.reset(new Parameter());
		IntegerFunctions_plus_y->setName("y");
		IntegerFunctions_plus_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_plus_y->setDirection(ParameterDirectionKind::in);
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
		IntegerFunctions_times_x->setDirection(ParameterDirectionKind::in);
	IntegerFunctions_times->addOwnedParameter(IntegerFunctions_times_x);
		//Parameter y
		IntegerFunctions_times_y.reset(new Parameter());
		IntegerFunctions_times_y->setName("y");
		IntegerFunctions_times_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		IntegerFunctions_times_y->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_Abs_x->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_Floor_x->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_Inv_x->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_Max_x->setDirection(ParameterDirectionKind::in);
	RealFunctions_Max->addOwnedParameter(RealFunctions_Max_x);
		//Parameter y
		RealFunctions_Max_y.reset(new Parameter());
		RealFunctions_Max_y->setName("y");
		RealFunctions_Max_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_Max_y->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_Min_x->setDirection(ParameterDirectionKind::in);
	RealFunctions_Min->addOwnedParameter(RealFunctions_Min_x);
		//Parameter y
		RealFunctions_Min_y.reset(new Parameter());
		RealFunctions_Min_y->setName("y");
		RealFunctions_Min_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_Min_y->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_Neg_x->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_Round_x->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_ToInteger_x->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_ToReal_x->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_ToString_x->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_divide_x->setDirection(ParameterDirectionKind::in);
	RealFunctions_divide->addOwnedParameter(RealFunctions_divide_x);
		//Parameter y
		RealFunctions_divide_y.reset(new Parameter());
		RealFunctions_divide_y->setName("y");
		RealFunctions_divide_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		RealFunctions_divide_y->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_greaterOrEqual_x->setDirection(ParameterDirectionKind::in);
	RealFunctions_greaterOrEqual->addOwnedParameter(RealFunctions_greaterOrEqual_x);
		//Parameter y
		RealFunctions_greaterOrEqual_y.reset(new Parameter());
		RealFunctions_greaterOrEqual_y->setName("y");
		RealFunctions_greaterOrEqual_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_greaterOrEqual_y->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_greaterThan_x->setDirection(ParameterDirectionKind::in);
	RealFunctions_greaterThan->addOwnedParameter(RealFunctions_greaterThan_x);
		//Parameter y
		RealFunctions_greaterThan_y.reset(new Parameter());
		RealFunctions_greaterThan_y->setName("y");
		RealFunctions_greaterThan_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_greaterThan_y->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_lessOrEqual_x->setDirection(ParameterDirectionKind::in);
	RealFunctions_lessOrEqual->addOwnedParameter(RealFunctions_lessOrEqual_x);
		//Parameter y
		RealFunctions_lessOrEqual_y.reset(new Parameter());
		RealFunctions_lessOrEqual_y->setName("y");
		RealFunctions_lessOrEqual_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_lessOrEqual_y->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_lessThan_x->setDirection(ParameterDirectionKind::in);
	RealFunctions_lessThan->addOwnedParameter(RealFunctions_lessThan_x);
		//Parameter y
		RealFunctions_lessThan_y.reset(new Parameter());
		RealFunctions_lessThan_y->setName("y");
		RealFunctions_lessThan_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_lessThan_y->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_minus_x->setDirection(ParameterDirectionKind::in);
	RealFunctions_minus->addOwnedParameter(RealFunctions_minus_x);
		//Parameter y
		RealFunctions_minus_y.reset(new Parameter());
		RealFunctions_minus_y->setName("y");
		RealFunctions_minus_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_minus_y->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_plus_x->setDirection(ParameterDirectionKind::in);
	RealFunctions_plus->addOwnedParameter(RealFunctions_plus_x);
		//Parameter y
		RealFunctions_plus_y.reset(new Parameter());
		RealFunctions_plus_y->setName("y");
		RealFunctions_plus_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_plus_y->setDirection(ParameterDirectionKind::in);
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
		RealFunctions_times_x->setDirection(ParameterDirectionKind::in);
	RealFunctions_times->addOwnedParameter(RealFunctions_times_x);
		//Parameter y
		RealFunctions_times_y.reset(new Parameter());
		RealFunctions_times_y->setName("y");
		RealFunctions_times_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Real);
		RealFunctions_times_y->setDirection(ParameterDirectionKind::in);
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
		StringFunctions_Concat_x->setDirection(ParameterDirectionKind::in);
	StringFunctions_Concat->addOwnedParameter(StringFunctions_Concat_x);
		//Parameter y
		StringFunctions_Concat_y.reset(new Parameter());
		StringFunctions_Concat_y->setName("y");
		StringFunctions_Concat_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
		StringFunctions_Concat_y->setDirection(ParameterDirectionKind::in);
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
		StringFunctions_Size_x->setDirection(ParameterDirectionKind::in);
	StringFunctions_Size->addOwnedParameter(StringFunctions_Size_x);
	//FunctionBehavior Substring
	StringFunctions_Substring.reset(new FunctionBehavior());
	StringFunctions_Substring->setThisClass_Ptr(StringFunctions_Substring);
	StringFunctions_Substring->setName("Substring");
		//Parameter lower
		StringFunctions_Substring_lower.reset(new Parameter());
		StringFunctions_Substring_lower->setName("lower");
		StringFunctions_Substring_lower->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->Integer);
		StringFunctions_Substring_lower->setDirection(ParameterDirectionKind::in);
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
		StringFunctions_Substring_upper->setDirection(ParameterDirectionKind::in);
	StringFunctions_Substring->addOwnedParameter(StringFunctions_Substring_upper);
		//Parameter x
		StringFunctions_Substring_x.reset(new Parameter());
		StringFunctions_Substring_x->setName("x");
		StringFunctions_Substring_x->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->String);
		StringFunctions_Substring_x->setDirection(ParameterDirectionKind::in);
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
		UnlimitedNaturalFunctions_Max_x->setDirection(ParameterDirectionKind::in);
	UnlimitedNaturalFunctions_Max->addOwnedParameter(UnlimitedNaturalFunctions_Max_x);
		//Parameter y
		UnlimitedNaturalFunctions_Max_y.reset(new Parameter());
		UnlimitedNaturalFunctions_Max_y->setName("y");
		UnlimitedNaturalFunctions_Max_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
		UnlimitedNaturalFunctions_Max_y->setDirection(ParameterDirectionKind::in);
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
		UnlimitedNaturalFunctions_Min_x->setDirection(ParameterDirectionKind::in);
	UnlimitedNaturalFunctions_Min->addOwnedParameter(UnlimitedNaturalFunctions_Min_x);
		//Parameter y
		UnlimitedNaturalFunctions_Min_y.reset(new Parameter());
		UnlimitedNaturalFunctions_Min_y->setName("y");
		UnlimitedNaturalFunctions_Min_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
		UnlimitedNaturalFunctions_Min_y->setDirection(ParameterDirectionKind::in);
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
		UnlimitedNaturalFunctions_ToInteger_x->setDirection(ParameterDirectionKind::in);
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
		UnlimitedNaturalFunctions_ToString_x->setDirection(ParameterDirectionKind::in);
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
		UnlimitedNaturalFunctions_ToUnlimitedNatural_x->setDirection(ParameterDirectionKind::in);
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
		UnlimitedNaturalFunctions_greaterOrEqual_x->setDirection(ParameterDirectionKind::in);
	UnlimitedNaturalFunctions_greaterOrEqual->addOwnedParameter(UnlimitedNaturalFunctions_greaterOrEqual_x);
		//Parameter y
		UnlimitedNaturalFunctions_greaterOrEqual_y.reset(new Parameter());
		UnlimitedNaturalFunctions_greaterOrEqual_y->setName("y");
		UnlimitedNaturalFunctions_greaterOrEqual_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
		UnlimitedNaturalFunctions_greaterOrEqual_y->setDirection(ParameterDirectionKind::in);
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
		UnlimitedNaturalFunctions_greaterThan_x->setDirection(ParameterDirectionKind::in);
	UnlimitedNaturalFunctions_greaterThan->addOwnedParameter(UnlimitedNaturalFunctions_greaterThan_x);
		//Parameter y
		UnlimitedNaturalFunctions_greaterThan_y.reset(new Parameter());
		UnlimitedNaturalFunctions_greaterThan_y->setName("y");
		UnlimitedNaturalFunctions_greaterThan_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
		UnlimitedNaturalFunctions_greaterThan_y->setDirection(ParameterDirectionKind::in);
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
		UnlimitedNaturalFunctions_lessOrEqual_x->setDirection(ParameterDirectionKind::in);
	UnlimitedNaturalFunctions_lessOrEqual->addOwnedParameter(UnlimitedNaturalFunctions_lessOrEqual_x);
		//Parameter y
		UnlimitedNaturalFunctions_lessOrEqual_y.reset(new Parameter());
		UnlimitedNaturalFunctions_lessOrEqual_y->setName("y");
		UnlimitedNaturalFunctions_lessOrEqual_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
		UnlimitedNaturalFunctions_lessOrEqual_y->setDirection(ParameterDirectionKind::in);
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
		UnlimitedNaturalFunctions_lessThan_x->setDirection(ParameterDirectionKind::in);
	UnlimitedNaturalFunctions_lessThan->addOwnedParameter(UnlimitedNaturalFunctions_lessThan_x);
		//Parameter y
		UnlimitedNaturalFunctions_lessThan_y.reset(new Parameter());
		UnlimitedNaturalFunctions_lessThan_y->setName("y");
		UnlimitedNaturalFunctions_lessThan_y->setType(fuml::primitivetypes::PrimitiveTypesModel::Instance()->UnlimitedNatural);
		UnlimitedNaturalFunctions_lessThan_y->setDirection(ParameterDirectionKind::in);
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
		ListFunctions_ListSize_list->setDirection(ParameterDirectionKind::in);
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
		ListFunctions_ListGet_index->setDirection(ParameterDirectionKind::in);
	ListFunctions_ListGet->addOwnedParameter(ListFunctions_ListGet_index);
		//Parameter list
		ListFunctions_ListGet_list.reset(new Parameter());
		ListFunctions_ListGet_list->setName("list");
		ListFunctions_ListGet_list->setLower(0);
		ListFunctions_ListGet_list->setUpper(-1);
		ListFunctions_ListGet_list->setDirection(ParameterDirectionKind::in);
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
		ListFunctions_ListConcat_list1->setDirection(ParameterDirectionKind::in);
	ListFunctions_ListConcat->addOwnedParameter(ListFunctions_ListConcat_list1);
		//Parameter list
		ListFunctions_ListConcat_list2.reset(new Parameter());
		ListFunctions_ListConcat_list2->setName("list2");
		ListFunctions_ListConcat_list2->setLower(0);
		ListFunctions_ListConcat_list2->setUpper(-1);
		ListFunctions_ListConcat_list2->setDirection(ParameterDirectionKind::in);
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
}


