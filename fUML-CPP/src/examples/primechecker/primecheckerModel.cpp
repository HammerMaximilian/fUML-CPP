/*
 * primecheckerModel.cpp
 * 
 * Auto-generated file
 */

#include "primecheckerModel.h"

#include <fuml/syntax/values/LiteralInteger.h>
#include <fuml/syntax/activities/Activity.h>
#include <fuml/syntax/activities/ActivityFinalNode.h>
#include <fuml/syntax/actions/InputPin.h>
#include <fuml/syntax/actions/ValueSpecificationAction.h>
#include <fuml/syntax/actions/CallBehaviorAction.h>
#include <fuml/syntax/simpleclassifiers/PrimitiveType.h>
#include <fuml/syntax/values/LiteralUnlimitedNatural.h>
#include <fuml/syntax/activities/ControlFlow.h>
#include <utils/library/LibraryModel.h>
#include <fuml/syntax/activities/ForkNode.h>
#include <fuml/syntax/activities/MergeNode.h>
#include <fuml/syntax/activities/InitialNode.h>
#include <fuml/syntax/activities/DecisionNode.h>
#include <fuml/syntax/activities/ObjectFlow.h>
#include <fuml/syntax/classification/Parameter.h>
#include <fuml/syntax/actions/OutputPin.h>
#include <fuml/syntax/commonstructure/PackageImport.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <fuml/syntax/packages/Package.h>
#include <fuml/syntax/values/LiteralBoolean.h>
#include <fuml/syntax/commonbehavior/OpaqueBehavior.h>


/*
 *	TODO: Generate includes for metaclasses
 */

/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace primechecker;
using namespace fuml::primitivetypes;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

primecheckerModel::primecheckerModel()
{
	/* Start of user code : Additional model initializations
 	 * This section may be used to do any additional model initialization,
	 * for example initializing user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

primecheckerModel::~primecheckerModel()
{
	/* Start of user code : Additional model cleanup
 	 * This section may be used to do any additional model cleanup,
	 * for example freeing memory for user-defined members.
 	 * It will not be overwritten by future generation processes.
 	 */

	/*
 	 * End of user code
 	 */
}

const std::shared_ptr<primecheckerModel>& primecheckerModel::Instance()
{
	static std::shared_ptr<primecheckerModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new primecheckerModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void primecheckerModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model primechecker
	 */
	primechecker.reset(new Package());
	this->addToElementRepository("primechecker", primechecker);
		primechecker_enterNumber.reset(new OpaqueBehavior());
		this->addToElementRepository("enterNumber", primechecker_enterNumber);
			primechecker_enterNumber_value.reset(new Parameter());
			this->addToElementRepository("value", primechecker_enterNumber_value);
		primechecker_printIsNotPrime.reset(new OpaqueBehavior());
		this->addToElementRepository("printIsNotPrime", primechecker_printIsNotPrime);
		primechecker_checkIfPrime.reset(new Activity());
		this->addToElementRepository("checkIfPrime", primechecker_checkIfPrime);
			primechecker_checkIfPrime_ObjectFlow0.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow0", primechecker_checkIfPrime_ObjectFlow0);
				primechecker_checkIfPrime_ObjectFlow0_LiteralInteger1.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger1", primechecker_checkIfPrime_ObjectFlow0_LiteralInteger1);
				primechecker_checkIfPrime_ObjectFlow0_LiteralBoolean2.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean2", primechecker_checkIfPrime_ObjectFlow0_LiteralBoolean2);
			primechecker_checkIfPrime_ObjectFlow3.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow3", primechecker_checkIfPrime_ObjectFlow3);
				primechecker_checkIfPrime_ObjectFlow3_LiteralInteger4.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger4", primechecker_checkIfPrime_ObjectFlow3_LiteralInteger4);
				primechecker_checkIfPrime_ObjectFlow3_LiteralBoolean5.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean5", primechecker_checkIfPrime_ObjectFlow3_LiteralBoolean5);
			primechecker_checkIfPrime_ObjectFlow6.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow6", primechecker_checkIfPrime_ObjectFlow6);
				primechecker_checkIfPrime_ObjectFlow6_LiteralInteger7.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger7", primechecker_checkIfPrime_ObjectFlow6_LiteralInteger7);
				primechecker_checkIfPrime_ObjectFlow6_LiteralBoolean8.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean8", primechecker_checkIfPrime_ObjectFlow6_LiteralBoolean8);
			primechecker_checkIfPrime_callDoPrimeCheck.reset(new CallBehaviorAction());
			this->addToElementRepository("callDoPrimeCheck", primechecker_checkIfPrime_callDoPrimeCheck);
				primechecker_checkIfPrime_callDoPrimeCheck_out_number.reset(new OutputPin());
				this->addToElementRepository("out_number", primechecker_checkIfPrime_callDoPrimeCheck_out_number);
				primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime.reset(new OutputPin());
				this->addToElementRepository("isNotPrime", primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime);
					primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime_LiteralUnlimitedNatural9.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural9", primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime_LiteralUnlimitedNatural9);
					primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime_LiteralInteger10.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger10", primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime_LiteralInteger10);
				primechecker_checkIfPrime_callDoPrimeCheck_in_number.reset(new InputPin());
				this->addToElementRepository("in_number", primechecker_checkIfPrime_callDoPrimeCheck_in_number);
					primechecker_checkIfPrime_callDoPrimeCheck_in_number_LiteralUnlimitedNatural11.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural11", primechecker_checkIfPrime_callDoPrimeCheck_in_number_LiteralUnlimitedNatural11);
					primechecker_checkIfPrime_callDoPrimeCheck_in_number_LiteralInteger12.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger12", primechecker_checkIfPrime_callDoPrimeCheck_in_number_LiteralInteger12);
				primechecker_checkIfPrime_callDoPrimeCheck_in_i.reset(new InputPin());
				this->addToElementRepository("in_i", primechecker_checkIfPrime_callDoPrimeCheck_in_i);
					primechecker_checkIfPrime_callDoPrimeCheck_in_i_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural13", primechecker_checkIfPrime_callDoPrimeCheck_in_i_LiteralUnlimitedNatural13);
					primechecker_checkIfPrime_callDoPrimeCheck_in_i_LiteralInteger14.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger14", primechecker_checkIfPrime_callDoPrimeCheck_in_i_LiteralInteger14);
				primechecker_checkIfPrime_callDoPrimeCheck_out_i.reset(new OutputPin());
				this->addToElementRepository("out_i", primechecker_checkIfPrime_callDoPrimeCheck_out_i);
					primechecker_checkIfPrime_callDoPrimeCheck_out_i_LiteralInteger15.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger15", primechecker_checkIfPrime_callDoPrimeCheck_out_i_LiteralInteger15);
					primechecker_checkIfPrime_callDoPrimeCheck_out_i_LiteralUnlimitedNatural16.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural16", primechecker_checkIfPrime_callDoPrimeCheck_out_i_LiteralUnlimitedNatural16);
			primechecker_checkIfPrime_callCheckIf_1_Or_0.reset(new CallBehaviorAction());
			this->addToElementRepository("callCheckIf_1_Or_0", primechecker_checkIfPrime_callCheckIf_1_Or_0);
				primechecker_checkIfPrime_callCheckIf_1_Or_0_result.reset(new OutputPin());
				this->addToElementRepository("result", primechecker_checkIfPrime_callCheckIf_1_Or_0_result);
					primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralUnlimitedNatural17.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural17", primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralUnlimitedNatural17);
					primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralInteger18.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger18", primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralInteger18);
					primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralInteger19.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger19", primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralInteger19);
				primechecker_checkIfPrime_callCheckIf_1_Or_0_number.reset(new InputPin());
				this->addToElementRepository("number", primechecker_checkIfPrime_callCheckIf_1_Or_0_number);
					primechecker_checkIfPrime_callCheckIf_1_Or_0_number_LiteralInteger20.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger20", primechecker_checkIfPrime_callCheckIf_1_Or_0_number_LiteralInteger20);
					primechecker_checkIfPrime_callCheckIf_1_Or_0_number_LiteralInteger21.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger21", primechecker_checkIfPrime_callCheckIf_1_Or_0_number_LiteralInteger21);
					primechecker_checkIfPrime_callCheckIf_1_Or_0_number_LiteralUnlimitedNatural22.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural22", primechecker_checkIfPrime_callCheckIf_1_Or_0_number_LiteralUnlimitedNatural22);
			primechecker_checkIfPrime_callPrintIsPrime.reset(new CallBehaviorAction());
			this->addToElementRepository("callPrintIsPrime", primechecker_checkIfPrime_callPrintIsPrime);
			primechecker_checkIfPrime_ControlFlow23.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow23", primechecker_checkIfPrime_ControlFlow23);
			primechecker_checkIfPrime_callPrintIsNotPrime.reset(new CallBehaviorAction());
			this->addToElementRepository("callPrintIsNotPrime", primechecker_checkIfPrime_callPrintIsNotPrime);
			primechecker_checkIfPrime_ObjectFlow24.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow24", primechecker_checkIfPrime_ObjectFlow24);
				primechecker_checkIfPrime_ObjectFlow24_LiteralInteger25.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger25", primechecker_checkIfPrime_ObjectFlow24_LiteralInteger25);
				primechecker_checkIfPrime_ObjectFlow24_LiteralBoolean26.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean26", primechecker_checkIfPrime_ObjectFlow24_LiteralBoolean26);
			primechecker_checkIfPrime_ControlFlow27.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow27", primechecker_checkIfPrime_ControlFlow27);
				primechecker_checkIfPrime_ControlFlow27_LiteralBoolean28.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean28", primechecker_checkIfPrime_ControlFlow27_LiteralBoolean28);
			primechecker_checkIfPrime_initializeLoopVariable.reset(new ValueSpecificationAction());
			this->addToElementRepository("initializeLoopVariable", primechecker_checkIfPrime_initializeLoopVariable);
				primechecker_checkIfPrime_initializeLoopVariable_result.reset(new OutputPin());
				this->addToElementRepository("result", primechecker_checkIfPrime_initializeLoopVariable_result);
					primechecker_checkIfPrime_initializeLoopVariable_result_LiteralUnlimitedNatural29.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural29", primechecker_checkIfPrime_initializeLoopVariable_result_LiteralUnlimitedNatural29);
					primechecker_checkIfPrime_initializeLoopVariable_result_LiteralInteger30.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger30", primechecker_checkIfPrime_initializeLoopVariable_result_LiteralInteger30);
				primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger31.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger31", primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger31);
			primechecker_checkIfPrime_MergeIsNotPrime.reset(new MergeNode());
			this->addToElementRepository("MergeIsNotPrime", primechecker_checkIfPrime_MergeIsNotPrime);
			primechecker_checkIfPrime_ControlFlow32.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow32", primechecker_checkIfPrime_ControlFlow32);
			primechecker_checkIfPrime_ForkNumber.reset(new ForkNode());
			this->addToElementRepository("ForkNumber", primechecker_checkIfPrime_ForkNumber);
			primechecker_checkIfPrime_ControlFlow33.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow33", primechecker_checkIfPrime_ControlFlow33);
				primechecker_checkIfPrime_ControlFlow33_LiteralBoolean34.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean34", primechecker_checkIfPrime_ControlFlow33_LiteralBoolean34);
			primechecker_checkIfPrime_FinalIsPrime.reset(new ActivityFinalNode());
			this->addToElementRepository("FinalIsPrime", primechecker_checkIfPrime_FinalIsPrime);
			primechecker_checkIfPrime_InitialNode1.reset(new InitialNode());
			this->addToElementRepository("InitialNode1", primechecker_checkIfPrime_InitialNode1);
			primechecker_checkIfPrime_ControlFlow35.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow35", primechecker_checkIfPrime_ControlFlow35);
			primechecker_checkIfPrime_FinalIsNotPrime.reset(new ActivityFinalNode());
			this->addToElementRepository("FinalIsNotPrime", primechecker_checkIfPrime_FinalIsNotPrime);
			primechecker_checkIfPrime_ControlFlow36.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow36", primechecker_checkIfPrime_ControlFlow36);
				primechecker_checkIfPrime_ControlFlow36_LiteralBoolean37.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean37", primechecker_checkIfPrime_ControlFlow36_LiteralBoolean37);
			primechecker_checkIfPrime_ObjectFlow38.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow38", primechecker_checkIfPrime_ObjectFlow38);
				primechecker_checkIfPrime_ObjectFlow38_LiteralBoolean39.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean39", primechecker_checkIfPrime_ObjectFlow38_LiteralBoolean39);
				primechecker_checkIfPrime_ObjectFlow38_LiteralInteger40.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger40", primechecker_checkIfPrime_ObjectFlow38_LiteralInteger40);
			primechecker_checkIfPrime_isNotPrime.reset(new DecisionNode());
			this->addToElementRepository("isNotPrime", primechecker_checkIfPrime_isNotPrime);
			primechecker_checkIfPrime_ControlFlow41.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow41", primechecker_checkIfPrime_ControlFlow41);
			primechecker_checkIfPrime_ObjectFlow42.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow42", primechecker_checkIfPrime_ObjectFlow42);
				primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean43.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean43", primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean43);
				primechecker_checkIfPrime_ObjectFlow42_LiteralInteger44.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger44", primechecker_checkIfPrime_ObjectFlow42_LiteralInteger44);
			primechecker_checkIfPrime_conditionOk.reset(new DecisionNode());
			this->addToElementRepository("conditionOk", primechecker_checkIfPrime_conditionOk);
			primechecker_checkIfPrime_callIncrement.reset(new CallBehaviorAction());
			this->addToElementRepository("callIncrement", primechecker_checkIfPrime_callIncrement);
				primechecker_checkIfPrime_callIncrement_out_i.reset(new OutputPin());
				this->addToElementRepository("out_i", primechecker_checkIfPrime_callIncrement_out_i);
					primechecker_checkIfPrime_callIncrement_out_i_LiteralUnlimitedNatural45.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural45", primechecker_checkIfPrime_callIncrement_out_i_LiteralUnlimitedNatural45);
					primechecker_checkIfPrime_callIncrement_out_i_LiteralInteger46.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger46", primechecker_checkIfPrime_callIncrement_out_i_LiteralInteger46);
					primechecker_checkIfPrime_callIncrement_out_i_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", primechecker_checkIfPrime_callIncrement_out_i_LiteralInteger47);
				primechecker_checkIfPrime_callIncrement_in_i.reset(new InputPin());
				this->addToElementRepository("in_i", primechecker_checkIfPrime_callIncrement_in_i);
					primechecker_checkIfPrime_callIncrement_in_i_LiteralInteger48.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger48", primechecker_checkIfPrime_callIncrement_in_i_LiteralInteger48);
					primechecker_checkIfPrime_callIncrement_in_i_LiteralUnlimitedNatural49.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural49", primechecker_checkIfPrime_callIncrement_in_i_LiteralUnlimitedNatural49);
					primechecker_checkIfPrime_callIncrement_in_i_LiteralInteger50.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger50", primechecker_checkIfPrime_callIncrement_in_i_LiteralInteger50);
			primechecker_checkIfPrime_ControlFlow51.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow51", primechecker_checkIfPrime_ControlFlow51);
				primechecker_checkIfPrime_ControlFlow51_LiteralBoolean52.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean52", primechecker_checkIfPrime_ControlFlow51_LiteralBoolean52);
			primechecker_checkIfPrime_ControlFlow53.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow53", primechecker_checkIfPrime_ControlFlow53);
				primechecker_checkIfPrime_ControlFlow53_LiteralBoolean54.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean54", primechecker_checkIfPrime_ControlFlow53_LiteralBoolean54);
			primechecker_checkIfPrime_callCheckLoopCondition.reset(new CallBehaviorAction());
			this->addToElementRepository("callCheckLoopCondition", primechecker_checkIfPrime_callCheckLoopCondition);
				primechecker_checkIfPrime_callCheckLoopCondition_conditionOk.reset(new OutputPin());
				this->addToElementRepository("conditionOk", primechecker_checkIfPrime_callCheckLoopCondition_conditionOk);
					primechecker_checkIfPrime_callCheckLoopCondition_conditionOk_LiteralUnlimitedNatural55.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural55", primechecker_checkIfPrime_callCheckLoopCondition_conditionOk_LiteralUnlimitedNatural55);
					primechecker_checkIfPrime_callCheckLoopCondition_conditionOk_LiteralInteger56.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger56", primechecker_checkIfPrime_callCheckLoopCondition_conditionOk_LiteralInteger56);
				primechecker_checkIfPrime_callCheckLoopCondition_in_i.reset(new InputPin());
				this->addToElementRepository("in_i", primechecker_checkIfPrime_callCheckLoopCondition_in_i);
					primechecker_checkIfPrime_callCheckLoopCondition_in_i_LiteralInteger57.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger57", primechecker_checkIfPrime_callCheckLoopCondition_in_i_LiteralInteger57);
					primechecker_checkIfPrime_callCheckLoopCondition_in_i_LiteralUnlimitedNatural58.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural58", primechecker_checkIfPrime_callCheckLoopCondition_in_i_LiteralUnlimitedNatural58);
				primechecker_checkIfPrime_callCheckLoopCondition_number.reset(new InputPin());
				this->addToElementRepository("number", primechecker_checkIfPrime_callCheckLoopCondition_number);
					primechecker_checkIfPrime_callCheckLoopCondition_number_LiteralInteger59.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger59", primechecker_checkIfPrime_callCheckLoopCondition_number_LiteralInteger59);
					primechecker_checkIfPrime_callCheckLoopCondition_number_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural60", primechecker_checkIfPrime_callCheckLoopCondition_number_LiteralUnlimitedNatural60);
				primechecker_checkIfPrime_callCheckLoopCondition_out_i.reset(new OutputPin());
				this->addToElementRepository("out_i", primechecker_checkIfPrime_callCheckLoopCondition_out_i);
					primechecker_checkIfPrime_callCheckLoopCondition_out_i_LiteralUnlimitedNatural61.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural61", primechecker_checkIfPrime_callCheckLoopCondition_out_i_LiteralUnlimitedNatural61);
					primechecker_checkIfPrime_callCheckLoopCondition_out_i_LiteralInteger62.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger62", primechecker_checkIfPrime_callCheckLoopCondition_out_i_LiteralInteger62);
			primechecker_checkIfPrime_ControlFlow63.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow63", primechecker_checkIfPrime_ControlFlow63);
				primechecker_checkIfPrime_ControlFlow63_LiteralBoolean64.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean64", primechecker_checkIfPrime_ControlFlow63_LiteralBoolean64);
			primechecker_checkIfPrime_Merge_i.reset(new MergeNode());
			this->addToElementRepository("Merge_i", primechecker_checkIfPrime_Merge_i);
			primechecker_checkIfPrime_ObjectFlow65.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow65", primechecker_checkIfPrime_ObjectFlow65);
				primechecker_checkIfPrime_ObjectFlow65_LiteralInteger66.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger66", primechecker_checkIfPrime_ObjectFlow65_LiteralInteger66);
				primechecker_checkIfPrime_ObjectFlow65_LiteralBoolean67.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean67", primechecker_checkIfPrime_ObjectFlow65_LiteralBoolean67);
			primechecker_checkIfPrime_ObjectFlow68.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow68", primechecker_checkIfPrime_ObjectFlow68);
				primechecker_checkIfPrime_ObjectFlow68_LiteralInteger69.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger69", primechecker_checkIfPrime_ObjectFlow68_LiteralInteger69);
				primechecker_checkIfPrime_ObjectFlow68_LiteralBoolean70.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean70", primechecker_checkIfPrime_ObjectFlow68_LiteralBoolean70);
			primechecker_checkIfPrime_ObjectFlow71.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow71", primechecker_checkIfPrime_ObjectFlow71);
				primechecker_checkIfPrime_ObjectFlow71_LiteralBoolean72.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean72", primechecker_checkIfPrime_ObjectFlow71_LiteralBoolean72);
				primechecker_checkIfPrime_ObjectFlow71_LiteralInteger73.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger73", primechecker_checkIfPrime_ObjectFlow71_LiteralInteger73);
			primechecker_checkIfPrime_MergeNumber.reset(new MergeNode());
			this->addToElementRepository("MergeNumber", primechecker_checkIfPrime_MergeNumber);
			primechecker_checkIfPrime_ObjectFlow74.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow74", primechecker_checkIfPrime_ObjectFlow74);
				primechecker_checkIfPrime_ObjectFlow74_LiteralInteger75.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger75", primechecker_checkIfPrime_ObjectFlow74_LiteralInteger75);
				primechecker_checkIfPrime_ObjectFlow74_LiteralBoolean76.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean76", primechecker_checkIfPrime_ObjectFlow74_LiteralBoolean76);
			primechecker_checkIfPrime_ObjectFlow77.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow77", primechecker_checkIfPrime_ObjectFlow77);
				primechecker_checkIfPrime_ObjectFlow77_LiteralInteger78.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger78", primechecker_checkIfPrime_ObjectFlow77_LiteralInteger78);
				primechecker_checkIfPrime_ObjectFlow77_LiteralBoolean79.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean79", primechecker_checkIfPrime_ObjectFlow77_LiteralBoolean79);
			primechecker_checkIfPrime_ObjectFlow80.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow80", primechecker_checkIfPrime_ObjectFlow80);
				primechecker_checkIfPrime_ObjectFlow80_LiteralBoolean81.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean81", primechecker_checkIfPrime_ObjectFlow80_LiteralBoolean81);
				primechecker_checkIfPrime_ObjectFlow80_LiteralInteger82.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger82", primechecker_checkIfPrime_ObjectFlow80_LiteralInteger82);
			primechecker_checkIfPrime_callEnterNumber.reset(new CallBehaviorAction());
			this->addToElementRepository("callEnterNumber", primechecker_checkIfPrime_callEnterNumber);
				primechecker_checkIfPrime_callEnterNumber_value.reset(new OutputPin());
				this->addToElementRepository("value", primechecker_checkIfPrime_callEnterNumber_value);
					primechecker_checkIfPrime_callEnterNumber_value_LiteralInteger83.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger83", primechecker_checkIfPrime_callEnterNumber_value_LiteralInteger83);
					primechecker_checkIfPrime_callEnterNumber_value_LiteralInteger84.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger84", primechecker_checkIfPrime_callEnterNumber_value_LiteralInteger84);
					primechecker_checkIfPrime_callEnterNumber_value_LiteralUnlimitedNatural85.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural85", primechecker_checkIfPrime_callEnterNumber_value_LiteralUnlimitedNatural85);
			primechecker_checkIfPrime_ObjectFlow86.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow86", primechecker_checkIfPrime_ObjectFlow86);
				primechecker_checkIfPrime_ObjectFlow86_LiteralInteger87.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger87", primechecker_checkIfPrime_ObjectFlow86_LiteralInteger87);
				primechecker_checkIfPrime_ObjectFlow86_LiteralBoolean88.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean88", primechecker_checkIfPrime_ObjectFlow86_LiteralBoolean88);
			primechecker_checkIfPrime_1_Or_0.reset(new DecisionNode());
			this->addToElementRepository("1_Or_0", primechecker_checkIfPrime_1_Or_0);
			primechecker_checkIfPrime_ObjectFlow89.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow89", primechecker_checkIfPrime_ObjectFlow89);
				primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean90.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean90", primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean90);
				primechecker_checkIfPrime_ObjectFlow89_LiteralInteger91.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger91", primechecker_checkIfPrime_ObjectFlow89_LiteralInteger91);
		primechecker_printIsPrime.reset(new OpaqueBehavior());
		this->addToElementRepository("printIsPrime", primechecker_printIsPrime);
		primechecker_increment.reset(new OpaqueBehavior());
		this->addToElementRepository("increment", primechecker_increment);
			primechecker_increment_in_i.reset(new Parameter());
			this->addToElementRepository("in_i", primechecker_increment_in_i);
			primechecker_increment_out_i.reset(new Parameter());
			this->addToElementRepository("out_i", primechecker_increment_out_i);
		primechecker_doPrimeCheck.reset(new OpaqueBehavior());
		this->addToElementRepository("doPrimeCheck", primechecker_doPrimeCheck);
			primechecker_doPrimeCheck_in_i.reset(new Parameter());
			this->addToElementRepository("in_i", primechecker_doPrimeCheck_in_i);
			primechecker_doPrimeCheck_out_number.reset(new Parameter());
			this->addToElementRepository("out_number", primechecker_doPrimeCheck_out_number);
			primechecker_doPrimeCheck_number.reset(new Parameter());
			this->addToElementRepository("number", primechecker_doPrimeCheck_number);
			primechecker_doPrimeCheck_out_i.reset(new Parameter());
			this->addToElementRepository("out_i", primechecker_doPrimeCheck_out_i);
			primechecker_doPrimeCheck_isNotPrime.reset(new Parameter());
			this->addToElementRepository("isNotPrime", primechecker_doPrimeCheck_isNotPrime);
		primechecker_checkIf_1_Or_0.reset(new OpaqueBehavior());
		this->addToElementRepository("checkIf_1_Or_0", primechecker_checkIf_1_Or_0);
			primechecker_checkIf_1_Or_0_result.reset(new Parameter());
			this->addToElementRepository("result", primechecker_checkIf_1_Or_0_result);
			primechecker_checkIf_1_Or_0_number.reset(new Parameter());
			this->addToElementRepository("number", primechecker_checkIf_1_Or_0_number);
		primechecker_checkLoopCondition.reset(new OpaqueBehavior());
		this->addToElementRepository("checkLoopCondition", primechecker_checkLoopCondition);
			primechecker_checkLoopCondition_out_i.reset(new Parameter());
			this->addToElementRepository("out_i", primechecker_checkLoopCondition_out_i);
			primechecker_checkLoopCondition_conditionOk.reset(new Parameter());
			this->addToElementRepository("conditionOk", primechecker_checkLoopCondition_conditionOk);
			primechecker_checkLoopCondition_number.reset(new Parameter());
			this->addToElementRepository("number", primechecker_checkLoopCondition_number);
			primechecker_checkLoopCondition_in_i.reset(new Parameter());
			this->addToElementRepository("in_i", primechecker_checkLoopCondition_in_i);

	// Initialize public members
	/*
	 * Model primechecker
	 */
	primechecker->setThisPackagePtr(primechecker);
	primechecker->setName("primechecker");
	primechecker->setVisibility(VisibilityKind::public_);
		// OpaqueBehavior enterNumber
		primechecker_enterNumber->setThisClass_Ptr(primechecker_enterNumber);
		primechecker_enterNumber->setName("enterNumber");
		primechecker_enterNumber->setVisibility(VisibilityKind::public_);
			// Parameter value
			primechecker_enterNumber_value->setThisElementPtr(primechecker_enterNumber_value);
			primechecker_enterNumber_value->setName("value");
			primechecker_enterNumber_value->setVisibility(VisibilityKind::public_);
			
			primechecker_enterNumber_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_enterNumber_value->setDirection(ParameterDirectionKind::return_);
		primechecker_enterNumber->addOwnedParameter(primechecker_enterNumber_value);
		primechecker_enterNumber->addLanguage("C++");
		primechecker_enterNumber->addBody("int value;  std::cout << \"Please enter a positive number: \"; std::cin >>value;  IntegerValuePtr result(new IntegerValue()); result->value = value; result->type = this->locus->factory->getBuiltInType(\"Integer\");  fuml::Debug::println(\"[doBody] value = \" + std::to_string(value));  outputParameters->at(0)->values->push_back(result);");
	primechecker->addPackagedElement(primechecker_enterNumber);
		// OpaqueBehavior printIsNotPrime
		primechecker_printIsNotPrime->setThisClass_Ptr(primechecker_printIsNotPrime);
		primechecker_printIsNotPrime->setName("printIsNotPrime");
		primechecker_printIsNotPrime->setVisibility(VisibilityKind::public_);
		primechecker_printIsNotPrime->addLanguage("C++");
		primechecker_printIsNotPrime->addBody("std::cout<<\"Number is not prime\"<<std::endl;");
	primechecker->addPackagedElement(primechecker_printIsNotPrime);
		// Activity checkIfPrime
		primechecker_checkIfPrime->setThisActivityPtr(primechecker_checkIfPrime);
		primechecker_checkIfPrime->setName("checkIfPrime");
		primechecker_checkIfPrime->setVisibility(VisibilityKind::public_);
			// ActivityFinalNode FinalIsPrime
			primechecker_checkIfPrime_FinalIsPrime->setThisElementPtr(primechecker_checkIfPrime_FinalIsPrime);
			primechecker_checkIfPrime_FinalIsPrime->setName("FinalIsPrime");
			primechecker_checkIfPrime_FinalIsPrime->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_FinalIsPrime);
			// InitialNode InitialNode1
			primechecker_checkIfPrime_InitialNode1->setThisElementPtr(primechecker_checkIfPrime_InitialNode1);
			primechecker_checkIfPrime_InitialNode1->setName("InitialNode1");
			primechecker_checkIfPrime_InitialNode1->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_InitialNode1);
			// ActivityFinalNode FinalIsNotPrime
			primechecker_checkIfPrime_FinalIsNotPrime->setThisElementPtr(primechecker_checkIfPrime_FinalIsNotPrime);
			primechecker_checkIfPrime_FinalIsNotPrime->setName("FinalIsNotPrime");
			primechecker_checkIfPrime_FinalIsNotPrime->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_FinalIsNotPrime);
			// CallBehaviorAction callDoPrimeCheck
			primechecker_checkIfPrime_callDoPrimeCheck->setThisExecutableNodePtr(primechecker_checkIfPrime_callDoPrimeCheck);
			primechecker_checkIfPrime_callDoPrimeCheck->setName("callDoPrimeCheck");
			primechecker_checkIfPrime_callDoPrimeCheck->setVisibility(VisibilityKind::public_);
			// OutputPin out_number
				primechecker_checkIfPrime_callDoPrimeCheck_out_number->setThisElementPtr(primechecker_checkIfPrime_callDoPrimeCheck_out_number);
				primechecker_checkIfPrime_callDoPrimeCheck_out_number->setName("out_number");
				primechecker_checkIfPrime_callDoPrimeCheck_out_number->setVisibility(VisibilityKind::public_);
			primechecker_checkIfPrime_callDoPrimeCheck->addResult(primechecker_checkIfPrime_callDoPrimeCheck_out_number);
				// OutputPin out_i
				primechecker_checkIfPrime_callDoPrimeCheck_out_i->setThisElementPtr(primechecker_checkIfPrime_callDoPrimeCheck_out_i);
				primechecker_checkIfPrime_callDoPrimeCheck_out_i->setName("out_i");
				primechecker_checkIfPrime_callDoPrimeCheck_out_i->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callDoPrimeCheck_out_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkIfPrime_callDoPrimeCheck->addResult(primechecker_checkIfPrime_callDoPrimeCheck_out_i);
				// OutputPin isNotPrime
				primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime->setThisElementPtr(primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime);
				primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime->setName("isNotPrime");
				primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			primechecker_checkIfPrime_callDoPrimeCheck->addResult(primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime);
			primechecker_checkIfPrime_callDoPrimeCheck->setBehavior(primechecker_doPrimeCheck);
				// InputPin in_number
				primechecker_checkIfPrime_callDoPrimeCheck_in_number->setThisElementPtr(primechecker_checkIfPrime_callDoPrimeCheck_in_number);
				primechecker_checkIfPrime_callDoPrimeCheck_in_number->setName("in_number");
				primechecker_checkIfPrime_callDoPrimeCheck_in_number->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callDoPrimeCheck_in_number->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkIfPrime_callDoPrimeCheck->addArgument(primechecker_checkIfPrime_callDoPrimeCheck_in_number);
				// InputPin in_i
				primechecker_checkIfPrime_callDoPrimeCheck_in_i->setThisElementPtr(primechecker_checkIfPrime_callDoPrimeCheck_in_i);
				primechecker_checkIfPrime_callDoPrimeCheck_in_i->setName("in_i");
				primechecker_checkIfPrime_callDoPrimeCheck_in_i->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callDoPrimeCheck_in_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkIfPrime_callDoPrimeCheck->addArgument(primechecker_checkIfPrime_callDoPrimeCheck_in_i);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_callDoPrimeCheck);
			// DecisionNode isNotPrime
			primechecker_checkIfPrime_isNotPrime->setThisElementPtr(primechecker_checkIfPrime_isNotPrime);
			primechecker_checkIfPrime_isNotPrime->setName("isNotPrime");
			primechecker_checkIfPrime_isNotPrime->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_isNotPrime);
			// DecisionNode conditionOk
			primechecker_checkIfPrime_conditionOk->setThisElementPtr(primechecker_checkIfPrime_conditionOk);
			primechecker_checkIfPrime_conditionOk->setName("conditionOk");
			primechecker_checkIfPrime_conditionOk->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_conditionOk);
			// CallBehaviorAction callCheckIf_1_Or_0
			primechecker_checkIfPrime_callCheckIf_1_Or_0->setThisExecutableNodePtr(primechecker_checkIfPrime_callCheckIf_1_Or_0);
			primechecker_checkIfPrime_callCheckIf_1_Or_0->setName("callCheckIf_1_Or_0");
			primechecker_checkIfPrime_callCheckIf_1_Or_0->setVisibility(VisibilityKind::public_);
			// OutputPin result
				primechecker_checkIfPrime_callCheckIf_1_Or_0_result->setThisElementPtr(primechecker_checkIfPrime_callCheckIf_1_Or_0_result);
				primechecker_checkIfPrime_callCheckIf_1_Or_0_result->setName("result");
				primechecker_checkIfPrime_callCheckIf_1_Or_0_result->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callCheckIf_1_Or_0_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			primechecker_checkIfPrime_callCheckIf_1_Or_0->addResult(primechecker_checkIfPrime_callCheckIf_1_Or_0_result);
			primechecker_checkIfPrime_callCheckIf_1_Or_0->setBehavior(primechecker_checkIf_1_Or_0);
				// InputPin number
				primechecker_checkIfPrime_callCheckIf_1_Or_0_number->setThisElementPtr(primechecker_checkIfPrime_callCheckIf_1_Or_0_number);
				primechecker_checkIfPrime_callCheckIf_1_Or_0_number->setName("number");
				primechecker_checkIfPrime_callCheckIf_1_Or_0_number->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callCheckIf_1_Or_0_number->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkIfPrime_callCheckIf_1_Or_0->addArgument(primechecker_checkIfPrime_callCheckIf_1_Or_0_number);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_callCheckIf_1_Or_0);
			// CallBehaviorAction callIncrement
			primechecker_checkIfPrime_callIncrement->setThisExecutableNodePtr(primechecker_checkIfPrime_callIncrement);
			primechecker_checkIfPrime_callIncrement->setName("callIncrement");
			primechecker_checkIfPrime_callIncrement->setVisibility(VisibilityKind::public_);
			// OutputPin out_i
				primechecker_checkIfPrime_callIncrement_out_i->setThisElementPtr(primechecker_checkIfPrime_callIncrement_out_i);
				primechecker_checkIfPrime_callIncrement_out_i->setName("out_i");
				primechecker_checkIfPrime_callIncrement_out_i->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callIncrement_out_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkIfPrime_callIncrement->addResult(primechecker_checkIfPrime_callIncrement_out_i);
			primechecker_checkIfPrime_callIncrement->setBehavior(primechecker_increment);
				// InputPin in_i
				primechecker_checkIfPrime_callIncrement_in_i->setThisElementPtr(primechecker_checkIfPrime_callIncrement_in_i);
				primechecker_checkIfPrime_callIncrement_in_i->setName("in_i");
				primechecker_checkIfPrime_callIncrement_in_i->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callIncrement_in_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkIfPrime_callIncrement->addArgument(primechecker_checkIfPrime_callIncrement_in_i);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_callIncrement);
			// CallBehaviorAction callPrintIsPrime
			primechecker_checkIfPrime_callPrintIsPrime->setThisExecutableNodePtr(primechecker_checkIfPrime_callPrintIsPrime);
			primechecker_checkIfPrime_callPrintIsPrime->setName("callPrintIsPrime");
			primechecker_checkIfPrime_callPrintIsPrime->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_callPrintIsPrime->setBehavior(primechecker_printIsPrime);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_callPrintIsPrime);
			// CallBehaviorAction callCheckLoopCondition
			primechecker_checkIfPrime_callCheckLoopCondition->setThisExecutableNodePtr(primechecker_checkIfPrime_callCheckLoopCondition);
			primechecker_checkIfPrime_callCheckLoopCondition->setName("callCheckLoopCondition");
			primechecker_checkIfPrime_callCheckLoopCondition->setVisibility(VisibilityKind::public_);
			// OutputPin out_i
				primechecker_checkIfPrime_callCheckLoopCondition_out_i->setThisElementPtr(primechecker_checkIfPrime_callCheckLoopCondition_out_i);
				primechecker_checkIfPrime_callCheckLoopCondition_out_i->setName("out_i");
				primechecker_checkIfPrime_callCheckLoopCondition_out_i->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callCheckLoopCondition_out_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkIfPrime_callCheckLoopCondition->addResult(primechecker_checkIfPrime_callCheckLoopCondition_out_i);
				// OutputPin conditionOk
				primechecker_checkIfPrime_callCheckLoopCondition_conditionOk->setThisElementPtr(primechecker_checkIfPrime_callCheckLoopCondition_conditionOk);
				primechecker_checkIfPrime_callCheckLoopCondition_conditionOk->setName("conditionOk");
				primechecker_checkIfPrime_callCheckLoopCondition_conditionOk->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callCheckLoopCondition_conditionOk->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			primechecker_checkIfPrime_callCheckLoopCondition->addResult(primechecker_checkIfPrime_callCheckLoopCondition_conditionOk);
			primechecker_checkIfPrime_callCheckLoopCondition->setBehavior(primechecker_checkLoopCondition);
				// InputPin number
				primechecker_checkIfPrime_callCheckLoopCondition_number->setThisElementPtr(primechecker_checkIfPrime_callCheckLoopCondition_number);
				primechecker_checkIfPrime_callCheckLoopCondition_number->setName("number");
				primechecker_checkIfPrime_callCheckLoopCondition_number->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callCheckLoopCondition_number->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkIfPrime_callCheckLoopCondition->addArgument(primechecker_checkIfPrime_callCheckLoopCondition_number);
				// InputPin in_i
				primechecker_checkIfPrime_callCheckLoopCondition_in_i->setThisElementPtr(primechecker_checkIfPrime_callCheckLoopCondition_in_i);
				primechecker_checkIfPrime_callCheckLoopCondition_in_i->setName("in_i");
				primechecker_checkIfPrime_callCheckLoopCondition_in_i->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callCheckLoopCondition_in_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkIfPrime_callCheckLoopCondition->addArgument(primechecker_checkIfPrime_callCheckLoopCondition_in_i);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_callCheckLoopCondition);
			// CallBehaviorAction callPrintIsNotPrime
			primechecker_checkIfPrime_callPrintIsNotPrime->setThisExecutableNodePtr(primechecker_checkIfPrime_callPrintIsNotPrime);
			primechecker_checkIfPrime_callPrintIsNotPrime->setName("callPrintIsNotPrime");
			primechecker_checkIfPrime_callPrintIsNotPrime->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_callPrintIsNotPrime->setBehavior(primechecker_printIsNotPrime);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_callPrintIsNotPrime);
			// MergeNode Merge_i
			primechecker_checkIfPrime_Merge_i->setThisElementPtr(primechecker_checkIfPrime_Merge_i);
			primechecker_checkIfPrime_Merge_i->setName("Merge_i");
			primechecker_checkIfPrime_Merge_i->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_Merge_i);
			// MergeNode MergeNumber
			primechecker_checkIfPrime_MergeNumber->setThisElementPtr(primechecker_checkIfPrime_MergeNumber);
			primechecker_checkIfPrime_MergeNumber->setName("MergeNumber");
			primechecker_checkIfPrime_MergeNumber->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_MergeNumber);
			// ValueSpecificationAction initializeLoopVariable
			primechecker_checkIfPrime_initializeLoopVariable->setThisExecutableNodePtr(primechecker_checkIfPrime_initializeLoopVariable);
			primechecker_checkIfPrime_initializeLoopVariable->setName("initializeLoopVariable");
			primechecker_checkIfPrime_initializeLoopVariable->setVisibility(VisibilityKind::public_);
			
				// LiteralInteger LiteralInteger31
				primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger31->setThisElementPtr(primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger31);
				primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger31->setName("LiteralInteger31");
				primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger31->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger31->setValue(2);
			primechecker_checkIfPrime_initializeLoopVariable->setValue(primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger31);
				// OutputPin result
				primechecker_checkIfPrime_initializeLoopVariable_result->setThisElementPtr(primechecker_checkIfPrime_initializeLoopVariable_result);
				primechecker_checkIfPrime_initializeLoopVariable_result->setName("result");
				primechecker_checkIfPrime_initializeLoopVariable_result->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_initializeLoopVariable_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkIfPrime_initializeLoopVariable->setResult(primechecker_checkIfPrime_initializeLoopVariable_result);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_initializeLoopVariable);
			// MergeNode MergeIsNotPrime
			primechecker_checkIfPrime_MergeIsNotPrime->setThisElementPtr(primechecker_checkIfPrime_MergeIsNotPrime);
			primechecker_checkIfPrime_MergeIsNotPrime->setName("MergeIsNotPrime");
			primechecker_checkIfPrime_MergeIsNotPrime->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_MergeIsNotPrime);
			// CallBehaviorAction callEnterNumber
			primechecker_checkIfPrime_callEnterNumber->setThisExecutableNodePtr(primechecker_checkIfPrime_callEnterNumber);
			primechecker_checkIfPrime_callEnterNumber->setName("callEnterNumber");
			primechecker_checkIfPrime_callEnterNumber->setVisibility(VisibilityKind::public_);
			// OutputPin value
				primechecker_checkIfPrime_callEnterNumber_value->setThisElementPtr(primechecker_checkIfPrime_callEnterNumber_value);
				primechecker_checkIfPrime_callEnterNumber_value->setName("value");
				primechecker_checkIfPrime_callEnterNumber_value->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callEnterNumber_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkIfPrime_callEnterNumber->addResult(primechecker_checkIfPrime_callEnterNumber_value);
			primechecker_checkIfPrime_callEnterNumber->setBehavior(primechecker_enterNumber);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_callEnterNumber);
			// DecisionNode 1_Or_0
			primechecker_checkIfPrime_1_Or_0->setThisElementPtr(primechecker_checkIfPrime_1_Or_0);
			primechecker_checkIfPrime_1_Or_0->setName("1_Or_0");
			primechecker_checkIfPrime_1_Or_0->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_1_Or_0);
			// ForkNode ForkNumber
			primechecker_checkIfPrime_ForkNumber->setThisElementPtr(primechecker_checkIfPrime_ForkNumber);
			primechecker_checkIfPrime_ForkNumber->setName("ForkNumber");
			primechecker_checkIfPrime_ForkNumber->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_ForkNumber);
			// ObjectFlow ObjectFlow0 from out_i to Merge_i
			primechecker_checkIfPrime_ObjectFlow0->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow0);
			primechecker_checkIfPrime_ObjectFlow0->setName("ObjectFlow0");
			primechecker_checkIfPrime_ObjectFlow0->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow0->setSource(primechecker_checkIfPrime_callIncrement_out_i);
			primechecker_checkIfPrime_ObjectFlow0->setTarget(primechecker_checkIfPrime_Merge_i);
				// LiteralBoolean LiteralBoolean2
				primechecker_checkIfPrime_ObjectFlow0_LiteralBoolean2->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow0_LiteralBoolean2);
				primechecker_checkIfPrime_ObjectFlow0_LiteralBoolean2->setName("LiteralBoolean2");
				primechecker_checkIfPrime_ObjectFlow0_LiteralBoolean2->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow0_LiteralBoolean2->setValue(true);
			primechecker_checkIfPrime_ObjectFlow0->setGuard(primechecker_checkIfPrime_ObjectFlow0_LiteralBoolean2);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow0);
			// ObjectFlow ObjectFlow3 from result to 1_Or_0
			primechecker_checkIfPrime_ObjectFlow3->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow3);
			primechecker_checkIfPrime_ObjectFlow3->setName("ObjectFlow3");
			primechecker_checkIfPrime_ObjectFlow3->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow3->setSource(primechecker_checkIfPrime_callCheckIf_1_Or_0_result);
			primechecker_checkIfPrime_ObjectFlow3->setTarget(primechecker_checkIfPrime_1_Or_0);
				// LiteralBoolean LiteralBoolean5
				primechecker_checkIfPrime_ObjectFlow3_LiteralBoolean5->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow3_LiteralBoolean5);
				primechecker_checkIfPrime_ObjectFlow3_LiteralBoolean5->setName("LiteralBoolean5");
				primechecker_checkIfPrime_ObjectFlow3_LiteralBoolean5->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow3_LiteralBoolean5->setValue(true);
			primechecker_checkIfPrime_ObjectFlow3->setGuard(primechecker_checkIfPrime_ObjectFlow3_LiteralBoolean5);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow3);
			// ObjectFlow ObjectFlow6 from ForkNumber to number
			primechecker_checkIfPrime_ObjectFlow6->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow6);
			primechecker_checkIfPrime_ObjectFlow6->setName("ObjectFlow6");
			primechecker_checkIfPrime_ObjectFlow6->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow6->setSource(primechecker_checkIfPrime_ForkNumber);
			primechecker_checkIfPrime_ObjectFlow6->setTarget(primechecker_checkIfPrime_callCheckLoopCondition_number);
				// LiteralBoolean LiteralBoolean8
				primechecker_checkIfPrime_ObjectFlow6_LiteralBoolean8->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow6_LiteralBoolean8);
				primechecker_checkIfPrime_ObjectFlow6_LiteralBoolean8->setName("LiteralBoolean8");
				primechecker_checkIfPrime_ObjectFlow6_LiteralBoolean8->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow6_LiteralBoolean8->setValue(true);
			primechecker_checkIfPrime_ObjectFlow6->setGuard(primechecker_checkIfPrime_ObjectFlow6_LiteralBoolean8);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow6);
			// ControlFlow ControlFlow23 from callPrintIsPrime to FinalIsPrime
			primechecker_checkIfPrime_ControlFlow23->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow23);
			primechecker_checkIfPrime_ControlFlow23->setName("ControlFlow23");
			primechecker_checkIfPrime_ControlFlow23->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow23->setSource(primechecker_checkIfPrime_callPrintIsPrime);
			primechecker_checkIfPrime_ControlFlow23->setTarget(primechecker_checkIfPrime_FinalIsPrime);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow23);
			// ObjectFlow ObjectFlow24 from conditionOk to conditionOk
			primechecker_checkIfPrime_ObjectFlow24->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow24);
			primechecker_checkIfPrime_ObjectFlow24->setName("ObjectFlow24");
			primechecker_checkIfPrime_ObjectFlow24->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow24->setSource(primechecker_checkIfPrime_callCheckLoopCondition_conditionOk);
			primechecker_checkIfPrime_ObjectFlow24->setTarget(primechecker_checkIfPrime_conditionOk);
				// LiteralBoolean LiteralBoolean26
				primechecker_checkIfPrime_ObjectFlow24_LiteralBoolean26->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow24_LiteralBoolean26);
				primechecker_checkIfPrime_ObjectFlow24_LiteralBoolean26->setName("LiteralBoolean26");
				primechecker_checkIfPrime_ObjectFlow24_LiteralBoolean26->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow24_LiteralBoolean26->setValue(true);
			primechecker_checkIfPrime_ObjectFlow24->setGuard(primechecker_checkIfPrime_ObjectFlow24_LiteralBoolean26);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow24);
			// ControlFlow ControlFlow27 from 1_Or_0 to MergeIsNotPrime
			primechecker_checkIfPrime_ControlFlow27->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow27);
			primechecker_checkIfPrime_ControlFlow27->setName("ControlFlow27");
			primechecker_checkIfPrime_ControlFlow27->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow27->setSource(primechecker_checkIfPrime_1_Or_0);
			primechecker_checkIfPrime_ControlFlow27->setTarget(primechecker_checkIfPrime_MergeIsNotPrime);
				// LiteralBoolean LiteralBoolean28
				primechecker_checkIfPrime_ControlFlow27_LiteralBoolean28->setThisElementPtr(primechecker_checkIfPrime_ControlFlow27_LiteralBoolean28);
				primechecker_checkIfPrime_ControlFlow27_LiteralBoolean28->setName("LiteralBoolean28");
				primechecker_checkIfPrime_ControlFlow27_LiteralBoolean28->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ControlFlow27_LiteralBoolean28->setValue(true);
			primechecker_checkIfPrime_ControlFlow27->setGuard(primechecker_checkIfPrime_ControlFlow27_LiteralBoolean28);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow27);
			// ControlFlow ControlFlow32 from callPrintIsNotPrime to FinalIsNotPrime
			primechecker_checkIfPrime_ControlFlow32->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow32);
			primechecker_checkIfPrime_ControlFlow32->setName("ControlFlow32");
			primechecker_checkIfPrime_ControlFlow32->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow32->setSource(primechecker_checkIfPrime_callPrintIsNotPrime);
			primechecker_checkIfPrime_ControlFlow32->setTarget(primechecker_checkIfPrime_FinalIsNotPrime);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow32);
			// ControlFlow ControlFlow33 from conditionOk to callPrintIsPrime
			primechecker_checkIfPrime_ControlFlow33->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow33);
			primechecker_checkIfPrime_ControlFlow33->setName("ControlFlow33");
			primechecker_checkIfPrime_ControlFlow33->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow33->setSource(primechecker_checkIfPrime_conditionOk);
			primechecker_checkIfPrime_ControlFlow33->setTarget(primechecker_checkIfPrime_callPrintIsPrime);
				// LiteralBoolean LiteralBoolean34
				primechecker_checkIfPrime_ControlFlow33_LiteralBoolean34->setThisElementPtr(primechecker_checkIfPrime_ControlFlow33_LiteralBoolean34);
				primechecker_checkIfPrime_ControlFlow33_LiteralBoolean34->setName("LiteralBoolean34");
				primechecker_checkIfPrime_ControlFlow33_LiteralBoolean34->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ControlFlow33_LiteralBoolean34->setValue(false);
			primechecker_checkIfPrime_ControlFlow33->setGuard(primechecker_checkIfPrime_ControlFlow33_LiteralBoolean34);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow33);
			// ControlFlow ControlFlow35 from InitialNode1 to callEnterNumber
			primechecker_checkIfPrime_ControlFlow35->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow35);
			primechecker_checkIfPrime_ControlFlow35->setName("ControlFlow35");
			primechecker_checkIfPrime_ControlFlow35->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow35->setSource(primechecker_checkIfPrime_InitialNode1);
			primechecker_checkIfPrime_ControlFlow35->setTarget(primechecker_checkIfPrime_callEnterNumber);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow35);
			// ControlFlow ControlFlow36 from 1_Or_0 to callCheckLoopCondition
			primechecker_checkIfPrime_ControlFlow36->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow36);
			primechecker_checkIfPrime_ControlFlow36->setName("ControlFlow36");
			primechecker_checkIfPrime_ControlFlow36->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow36->setSource(primechecker_checkIfPrime_1_Or_0);
			primechecker_checkIfPrime_ControlFlow36->setTarget(primechecker_checkIfPrime_callCheckLoopCondition);
				// LiteralBoolean LiteralBoolean37
				primechecker_checkIfPrime_ControlFlow36_LiteralBoolean37->setThisElementPtr(primechecker_checkIfPrime_ControlFlow36_LiteralBoolean37);
				primechecker_checkIfPrime_ControlFlow36_LiteralBoolean37->setName("LiteralBoolean37");
				primechecker_checkIfPrime_ControlFlow36_LiteralBoolean37->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ControlFlow36_LiteralBoolean37->setValue(false);
			primechecker_checkIfPrime_ControlFlow36->setGuard(primechecker_checkIfPrime_ControlFlow36_LiteralBoolean37);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow36);
			// ObjectFlow ObjectFlow38 from MergeNumber to ForkNumber
			primechecker_checkIfPrime_ObjectFlow38->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow38);
			primechecker_checkIfPrime_ObjectFlow38->setName("ObjectFlow38");
			primechecker_checkIfPrime_ObjectFlow38->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow38->setSource(primechecker_checkIfPrime_MergeNumber);
			primechecker_checkIfPrime_ObjectFlow38->setTarget(primechecker_checkIfPrime_ForkNumber);
				// LiteralBoolean LiteralBoolean39
				primechecker_checkIfPrime_ObjectFlow38_LiteralBoolean39->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow38_LiteralBoolean39);
				primechecker_checkIfPrime_ObjectFlow38_LiteralBoolean39->setName("LiteralBoolean39");
				primechecker_checkIfPrime_ObjectFlow38_LiteralBoolean39->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow38_LiteralBoolean39->setValue(true);
			primechecker_checkIfPrime_ObjectFlow38->setGuard(primechecker_checkIfPrime_ObjectFlow38_LiteralBoolean39);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow38);
			// ControlFlow ControlFlow41 from MergeIsNotPrime to callPrintIsNotPrime
			primechecker_checkIfPrime_ControlFlow41->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow41);
			primechecker_checkIfPrime_ControlFlow41->setName("ControlFlow41");
			primechecker_checkIfPrime_ControlFlow41->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow41->setSource(primechecker_checkIfPrime_MergeIsNotPrime);
			primechecker_checkIfPrime_ControlFlow41->setTarget(primechecker_checkIfPrime_callPrintIsNotPrime);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow41);
			// ObjectFlow ObjectFlow42 from out_i to in_i
			primechecker_checkIfPrime_ObjectFlow42->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow42);
			primechecker_checkIfPrime_ObjectFlow42->setName("ObjectFlow42");
			primechecker_checkIfPrime_ObjectFlow42->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow42->setSource(primechecker_checkIfPrime_callDoPrimeCheck_out_i);
			primechecker_checkIfPrime_ObjectFlow42->setTarget(primechecker_checkIfPrime_callIncrement_in_i);
				// LiteralBoolean LiteralBoolean43
				primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean43->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean43);
				primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean43->setName("LiteralBoolean43");
				primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean43->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean43->setValue(true);
			primechecker_checkIfPrime_ObjectFlow42->setGuard(primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean43);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow42);
			// ControlFlow ControlFlow51 from isNotPrime to MergeIsNotPrime
			primechecker_checkIfPrime_ControlFlow51->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow51);
			primechecker_checkIfPrime_ControlFlow51->setName("ControlFlow51");
			primechecker_checkIfPrime_ControlFlow51->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow51->setSource(primechecker_checkIfPrime_isNotPrime);
			primechecker_checkIfPrime_ControlFlow51->setTarget(primechecker_checkIfPrime_MergeIsNotPrime);
				// LiteralBoolean LiteralBoolean52
				primechecker_checkIfPrime_ControlFlow51_LiteralBoolean52->setThisElementPtr(primechecker_checkIfPrime_ControlFlow51_LiteralBoolean52);
				primechecker_checkIfPrime_ControlFlow51_LiteralBoolean52->setName("LiteralBoolean52");
				primechecker_checkIfPrime_ControlFlow51_LiteralBoolean52->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ControlFlow51_LiteralBoolean52->setValue(true);
			primechecker_checkIfPrime_ControlFlow51->setGuard(primechecker_checkIfPrime_ControlFlow51_LiteralBoolean52);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow51);
			// ControlFlow ControlFlow53 from conditionOk to callDoPrimeCheck
			primechecker_checkIfPrime_ControlFlow53->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow53);
			primechecker_checkIfPrime_ControlFlow53->setName("ControlFlow53");
			primechecker_checkIfPrime_ControlFlow53->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow53->setSource(primechecker_checkIfPrime_conditionOk);
			primechecker_checkIfPrime_ControlFlow53->setTarget(primechecker_checkIfPrime_callDoPrimeCheck);
				// LiteralBoolean LiteralBoolean54
				primechecker_checkIfPrime_ControlFlow53_LiteralBoolean54->setThisElementPtr(primechecker_checkIfPrime_ControlFlow53_LiteralBoolean54);
				primechecker_checkIfPrime_ControlFlow53_LiteralBoolean54->setName("LiteralBoolean54");
				primechecker_checkIfPrime_ControlFlow53_LiteralBoolean54->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ControlFlow53_LiteralBoolean54->setValue(true);
			primechecker_checkIfPrime_ControlFlow53->setGuard(primechecker_checkIfPrime_ControlFlow53_LiteralBoolean54);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow53);
			// ControlFlow ControlFlow63 from isNotPrime to callIncrement
			primechecker_checkIfPrime_ControlFlow63->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow63);
			primechecker_checkIfPrime_ControlFlow63->setName("ControlFlow63");
			primechecker_checkIfPrime_ControlFlow63->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow63->setSource(primechecker_checkIfPrime_isNotPrime);
			primechecker_checkIfPrime_ControlFlow63->setTarget(primechecker_checkIfPrime_callIncrement);
				// LiteralBoolean LiteralBoolean64
				primechecker_checkIfPrime_ControlFlow63_LiteralBoolean64->setThisElementPtr(primechecker_checkIfPrime_ControlFlow63_LiteralBoolean64);
				primechecker_checkIfPrime_ControlFlow63_LiteralBoolean64->setName("LiteralBoolean64");
				primechecker_checkIfPrime_ControlFlow63_LiteralBoolean64->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ControlFlow63_LiteralBoolean64->setValue(false);
			primechecker_checkIfPrime_ControlFlow63->setGuard(primechecker_checkIfPrime_ControlFlow63_LiteralBoolean64);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow63);
			// ObjectFlow ObjectFlow65 from ForkNumber to number
			primechecker_checkIfPrime_ObjectFlow65->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow65);
			primechecker_checkIfPrime_ObjectFlow65->setName("ObjectFlow65");
			primechecker_checkIfPrime_ObjectFlow65->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow65->setSource(primechecker_checkIfPrime_ForkNumber);
			primechecker_checkIfPrime_ObjectFlow65->setTarget(primechecker_checkIfPrime_callCheckIf_1_Or_0_number);
				// LiteralBoolean LiteralBoolean67
				primechecker_checkIfPrime_ObjectFlow65_LiteralBoolean67->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow65_LiteralBoolean67);
				primechecker_checkIfPrime_ObjectFlow65_LiteralBoolean67->setName("LiteralBoolean67");
				primechecker_checkIfPrime_ObjectFlow65_LiteralBoolean67->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow65_LiteralBoolean67->setValue(true);
			primechecker_checkIfPrime_ObjectFlow65->setGuard(primechecker_checkIfPrime_ObjectFlow65_LiteralBoolean67);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow65);
			// ObjectFlow ObjectFlow68 from result to Merge_i
			primechecker_checkIfPrime_ObjectFlow68->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow68);
			primechecker_checkIfPrime_ObjectFlow68->setName("ObjectFlow68");
			primechecker_checkIfPrime_ObjectFlow68->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow68->setSource(primechecker_checkIfPrime_initializeLoopVariable_result);
			primechecker_checkIfPrime_ObjectFlow68->setTarget(primechecker_checkIfPrime_Merge_i);
				// LiteralBoolean LiteralBoolean70
				primechecker_checkIfPrime_ObjectFlow68_LiteralBoolean70->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow68_LiteralBoolean70);
				primechecker_checkIfPrime_ObjectFlow68_LiteralBoolean70->setName("LiteralBoolean70");
				primechecker_checkIfPrime_ObjectFlow68_LiteralBoolean70->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow68_LiteralBoolean70->setValue(true);
			primechecker_checkIfPrime_ObjectFlow68->setGuard(primechecker_checkIfPrime_ObjectFlow68_LiteralBoolean70);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow68);
			// ObjectFlow ObjectFlow71 from value to MergeNumber
			primechecker_checkIfPrime_ObjectFlow71->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow71);
			primechecker_checkIfPrime_ObjectFlow71->setName("ObjectFlow71");
			primechecker_checkIfPrime_ObjectFlow71->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow71->setSource(primechecker_checkIfPrime_callEnterNumber_value);
			primechecker_checkIfPrime_ObjectFlow71->setTarget(primechecker_checkIfPrime_MergeNumber);
				// LiteralBoolean LiteralBoolean72
				primechecker_checkIfPrime_ObjectFlow71_LiteralBoolean72->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow71_LiteralBoolean72);
				primechecker_checkIfPrime_ObjectFlow71_LiteralBoolean72->setName("LiteralBoolean72");
				primechecker_checkIfPrime_ObjectFlow71_LiteralBoolean72->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow71_LiteralBoolean72->setValue(true);
			primechecker_checkIfPrime_ObjectFlow71->setGuard(primechecker_checkIfPrime_ObjectFlow71_LiteralBoolean72);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow71);
			// ObjectFlow ObjectFlow74 from Merge_i to in_i
			primechecker_checkIfPrime_ObjectFlow74->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow74);
			primechecker_checkIfPrime_ObjectFlow74->setName("ObjectFlow74");
			primechecker_checkIfPrime_ObjectFlow74->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow74->setSource(primechecker_checkIfPrime_Merge_i);
			primechecker_checkIfPrime_ObjectFlow74->setTarget(primechecker_checkIfPrime_callCheckLoopCondition_in_i);
				// LiteralBoolean LiteralBoolean76
				primechecker_checkIfPrime_ObjectFlow74_LiteralBoolean76->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow74_LiteralBoolean76);
				primechecker_checkIfPrime_ObjectFlow74_LiteralBoolean76->setName("LiteralBoolean76");
				primechecker_checkIfPrime_ObjectFlow74_LiteralBoolean76->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow74_LiteralBoolean76->setValue(true);
			primechecker_checkIfPrime_ObjectFlow74->setGuard(primechecker_checkIfPrime_ObjectFlow74_LiteralBoolean76);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow74);
			// ObjectFlow ObjectFlow77 from out_i to in_i
			primechecker_checkIfPrime_ObjectFlow77->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow77);
			primechecker_checkIfPrime_ObjectFlow77->setName("ObjectFlow77");
			primechecker_checkIfPrime_ObjectFlow77->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow77->setSource(primechecker_checkIfPrime_callCheckLoopCondition_out_i);
			primechecker_checkIfPrime_ObjectFlow77->setTarget(primechecker_checkIfPrime_callDoPrimeCheck_in_i);
				// LiteralBoolean LiteralBoolean79
				primechecker_checkIfPrime_ObjectFlow77_LiteralBoolean79->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow77_LiteralBoolean79);
				primechecker_checkIfPrime_ObjectFlow77_LiteralBoolean79->setName("LiteralBoolean79");
				primechecker_checkIfPrime_ObjectFlow77_LiteralBoolean79->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow77_LiteralBoolean79->setValue(true);
			primechecker_checkIfPrime_ObjectFlow77->setGuard(primechecker_checkIfPrime_ObjectFlow77_LiteralBoolean79);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow77);
			// ObjectFlow ObjectFlow80 from out_number to MergeNumber
			primechecker_checkIfPrime_ObjectFlow80->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow80);
			primechecker_checkIfPrime_ObjectFlow80->setName("ObjectFlow80");
			primechecker_checkIfPrime_ObjectFlow80->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow80->setSource(primechecker_checkIfPrime_callDoPrimeCheck_out_number);
			primechecker_checkIfPrime_ObjectFlow80->setTarget(primechecker_checkIfPrime_MergeNumber);
				// LiteralBoolean LiteralBoolean81
				primechecker_checkIfPrime_ObjectFlow80_LiteralBoolean81->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow80_LiteralBoolean81);
				primechecker_checkIfPrime_ObjectFlow80_LiteralBoolean81->setName("LiteralBoolean81");
				primechecker_checkIfPrime_ObjectFlow80_LiteralBoolean81->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow80_LiteralBoolean81->setValue(true);
			primechecker_checkIfPrime_ObjectFlow80->setGuard(primechecker_checkIfPrime_ObjectFlow80_LiteralBoolean81);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow80);
			// ObjectFlow ObjectFlow86 from isNotPrime to isNotPrime
			primechecker_checkIfPrime_ObjectFlow86->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow86);
			primechecker_checkIfPrime_ObjectFlow86->setName("ObjectFlow86");
			primechecker_checkIfPrime_ObjectFlow86->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow86->setSource(primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime);
			primechecker_checkIfPrime_ObjectFlow86->setTarget(primechecker_checkIfPrime_isNotPrime);
				// LiteralBoolean LiteralBoolean88
				primechecker_checkIfPrime_ObjectFlow86_LiteralBoolean88->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow86_LiteralBoolean88);
				primechecker_checkIfPrime_ObjectFlow86_LiteralBoolean88->setName("LiteralBoolean88");
				primechecker_checkIfPrime_ObjectFlow86_LiteralBoolean88->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow86_LiteralBoolean88->setValue(true);
			primechecker_checkIfPrime_ObjectFlow86->setGuard(primechecker_checkIfPrime_ObjectFlow86_LiteralBoolean88);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow86);
			// ObjectFlow ObjectFlow89 from ForkNumber to in_number
			primechecker_checkIfPrime_ObjectFlow89->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow89);
			primechecker_checkIfPrime_ObjectFlow89->setName("ObjectFlow89");
			primechecker_checkIfPrime_ObjectFlow89->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow89->setSource(primechecker_checkIfPrime_ForkNumber);
			primechecker_checkIfPrime_ObjectFlow89->setTarget(primechecker_checkIfPrime_callDoPrimeCheck_in_number);
				// LiteralBoolean LiteralBoolean90
				primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean90->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean90);
				primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean90->setName("LiteralBoolean90");
				primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean90->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean90->setValue(true);
			primechecker_checkIfPrime_ObjectFlow89->setGuard(primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean90);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow89);
	primechecker->addPackagedElement(primechecker_checkIfPrime);
		// OpaqueBehavior printIsPrime
		primechecker_printIsPrime->setThisClass_Ptr(primechecker_printIsPrime);
		primechecker_printIsPrime->setName("printIsPrime");
		primechecker_printIsPrime->setVisibility(VisibilityKind::public_);
		primechecker_printIsPrime->addLanguage("C++");
		primechecker_printIsPrime->addBody("std::cout<<\"Number is prime\"<<std::endl;");
	primechecker->addPackagedElement(primechecker_printIsPrime);
		// OpaqueBehavior increment
		primechecker_increment->setThisClass_Ptr(primechecker_increment);
		primechecker_increment->setName("increment");
		primechecker_increment->setVisibility(VisibilityKind::public_);
			// Parameter in_i
			primechecker_increment_in_i->setThisElementPtr(primechecker_increment_in_i);
			primechecker_increment_in_i->setName("in_i");
			primechecker_increment_in_i->setVisibility(VisibilityKind::public_);
			
			primechecker_increment_in_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		primechecker_increment->addOwnedParameter(primechecker_increment_in_i);
			// Parameter out_i
			primechecker_increment_out_i->setThisElementPtr(primechecker_increment_out_i);
			primechecker_increment_out_i->setName("out_i");
			primechecker_increment_out_i->setVisibility(VisibilityKind::public_);
			
			primechecker_increment_out_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_increment_out_i->setDirection(ParameterDirectionKind::return_);
		primechecker_increment->addOwnedParameter(primechecker_increment_out_i);
		primechecker_increment->addLanguage("C++");
		primechecker_increment->addBody("int i= std::dynamic_pointer_cast<IntegerValue>(inputParameters->at(0)->values->at(0))->value;  fuml::Debug::println(\"[doBody] i_in = \" + std::to_string(i));  i++;  IntegerValuePtr result(new IntegerValue()); result->value = i; result->type = this->locus->factory->getBuiltInType(\"Integer\");  fuml::Debug::println(\"[doBody] i_out = \" + std::to_string(i));  outputParameters->at(0)->values->push_back(result);");
	primechecker->addPackagedElement(primechecker_increment);
		// OpaqueBehavior doPrimeCheck
		primechecker_doPrimeCheck->setThisClass_Ptr(primechecker_doPrimeCheck);
		primechecker_doPrimeCheck->setName("doPrimeCheck");
		primechecker_doPrimeCheck->setVisibility(VisibilityKind::public_);
			// Parameter number
			primechecker_doPrimeCheck_number->setThisElementPtr(primechecker_doPrimeCheck_number);
			primechecker_doPrimeCheck_number->setName("number");
			primechecker_doPrimeCheck_number->setVisibility(VisibilityKind::public_);
			
			primechecker_doPrimeCheck_number->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		primechecker_doPrimeCheck->addOwnedParameter(primechecker_doPrimeCheck_number);
			// Parameter in_i
			primechecker_doPrimeCheck_in_i->setThisElementPtr(primechecker_doPrimeCheck_in_i);
			primechecker_doPrimeCheck_in_i->setName("in_i");
			primechecker_doPrimeCheck_in_i->setVisibility(VisibilityKind::public_);
			
			primechecker_doPrimeCheck_in_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		primechecker_doPrimeCheck->addOwnedParameter(primechecker_doPrimeCheck_in_i);
			// Parameter out_number
			primechecker_doPrimeCheck_out_number->setThisElementPtr(primechecker_doPrimeCheck_out_number);
			primechecker_doPrimeCheck_out_number->setName("out_number");
			primechecker_doPrimeCheck_out_number->setVisibility(VisibilityKind::public_);
			
			primechecker_doPrimeCheck_out_number->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_doPrimeCheck_out_number->setDirection(ParameterDirectionKind::out);
		primechecker_doPrimeCheck->addOwnedParameter(primechecker_doPrimeCheck_out_number);
			// Parameter out_i
			primechecker_doPrimeCheck_out_i->setThisElementPtr(primechecker_doPrimeCheck_out_i);
			primechecker_doPrimeCheck_out_i->setName("out_i");
			primechecker_doPrimeCheck_out_i->setVisibility(VisibilityKind::public_);
			
			primechecker_doPrimeCheck_out_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_doPrimeCheck_out_i->setDirection(ParameterDirectionKind::out);
		primechecker_doPrimeCheck->addOwnedParameter(primechecker_doPrimeCheck_out_i);
			// Parameter isNotPrime
			primechecker_doPrimeCheck_isNotPrime->setThisElementPtr(primechecker_doPrimeCheck_isNotPrime);
			primechecker_doPrimeCheck_isNotPrime->setName("isNotPrime");
			primechecker_doPrimeCheck_isNotPrime->setVisibility(VisibilityKind::public_);
			
			primechecker_doPrimeCheck_isNotPrime->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			primechecker_doPrimeCheck_isNotPrime->setDirection(ParameterDirectionKind::return_);
		primechecker_doPrimeCheck->addOwnedParameter(primechecker_doPrimeCheck_isNotPrime);
		primechecker_doPrimeCheck->addLanguage("C++");
		primechecker_doPrimeCheck->addBody("int number = std::dynamic_pointer_cast<IntegerValue>(inputParameters->at(0)->values->at(0))->value; int i = std::dynamic_pointer_cast<IntegerValue>(inputParameters->at(1)->values->at(0))->value;  fuml::Debug::println(\"[doBody] number = \" + std::to_string(number)); fuml::Debug::println(\"[doBody] i = \" + std::to_string(i));  bool resultBoolean = (number%i == 0);  outputParameters->at(0)->values = inputParameters->at(0)->values; outputParameters->at(1)->values = inputParameters->at(1)->values;  BooleanValuePtr result(new BooleanValue()); result->value = resultBoolean; result->type = this->locus->factory->getBuiltInType(\"Boolean\");  fuml::Debug::println(\"[doBody] itNotPrime = \" + std::to_string(resultBoolean));  outputParameters->at(2)->values->push_back(result);");
	primechecker->addPackagedElement(primechecker_doPrimeCheck);
		// OpaqueBehavior checkIf_1_Or_0
		primechecker_checkIf_1_Or_0->setThisClass_Ptr(primechecker_checkIf_1_Or_0);
		primechecker_checkIf_1_Or_0->setName("checkIf_1_Or_0");
		primechecker_checkIf_1_Or_0->setVisibility(VisibilityKind::public_);
			// Parameter number
			primechecker_checkIf_1_Or_0_number->setThisElementPtr(primechecker_checkIf_1_Or_0_number);
			primechecker_checkIf_1_Or_0_number->setName("number");
			primechecker_checkIf_1_Or_0_number->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIf_1_Or_0_number->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		primechecker_checkIf_1_Or_0->addOwnedParameter(primechecker_checkIf_1_Or_0_number);
			// Parameter result
			primechecker_checkIf_1_Or_0_result->setThisElementPtr(primechecker_checkIf_1_Or_0_result);
			primechecker_checkIf_1_Or_0_result->setName("result");
			primechecker_checkIf_1_Or_0_result->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIf_1_Or_0_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			primechecker_checkIf_1_Or_0_result->setDirection(ParameterDirectionKind::return_);
		primechecker_checkIf_1_Or_0->addOwnedParameter(primechecker_checkIf_1_Or_0_result);
		primechecker_checkIf_1_Or_0->addLanguage("C++");
		primechecker_checkIf_1_Or_0->addBody("int number = std::dynamic_pointer_cast<IntegerValue>(inputParameters->at(0)->values->at(0))->value;  fuml::Debug::println(\"[doBody] number = \" + std::to_string(number));  bool resultBoolean = (number == 0 || number == 1);  BooleanValuePtr result(new BooleanValue()); result->value = resultBoolean; result->type = this->locus->factory->getBuiltInType(\"Boolean\");  fuml::Debug::println(\"[doBody] result = \" + std::to_string(resultBoolean));  outputParameters->at(0)->values->push_back(result);");
	primechecker->addPackagedElement(primechecker_checkIf_1_Or_0);
		// OpaqueBehavior checkLoopCondition
		primechecker_checkLoopCondition->setThisClass_Ptr(primechecker_checkLoopCondition);
		primechecker_checkLoopCondition->setName("checkLoopCondition");
		primechecker_checkLoopCondition->setVisibility(VisibilityKind::public_);
			// Parameter number
			primechecker_checkLoopCondition_number->setThisElementPtr(primechecker_checkLoopCondition_number);
			primechecker_checkLoopCondition_number->setName("number");
			primechecker_checkLoopCondition_number->setVisibility(VisibilityKind::public_);
			
			primechecker_checkLoopCondition_number->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		primechecker_checkLoopCondition->addOwnedParameter(primechecker_checkLoopCondition_number);
			// Parameter in_i
			primechecker_checkLoopCondition_in_i->setThisElementPtr(primechecker_checkLoopCondition_in_i);
			primechecker_checkLoopCondition_in_i->setName("in_i");
			primechecker_checkLoopCondition_in_i->setVisibility(VisibilityKind::public_);
			
			primechecker_checkLoopCondition_in_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		primechecker_checkLoopCondition->addOwnedParameter(primechecker_checkLoopCondition_in_i);
			// Parameter out_i
			primechecker_checkLoopCondition_out_i->setThisElementPtr(primechecker_checkLoopCondition_out_i);
			primechecker_checkLoopCondition_out_i->setName("out_i");
			primechecker_checkLoopCondition_out_i->setVisibility(VisibilityKind::public_);
			
			primechecker_checkLoopCondition_out_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkLoopCondition_out_i->setDirection(ParameterDirectionKind::out);
		primechecker_checkLoopCondition->addOwnedParameter(primechecker_checkLoopCondition_out_i);
			// Parameter conditionOk
			primechecker_checkLoopCondition_conditionOk->setThisElementPtr(primechecker_checkLoopCondition_conditionOk);
			primechecker_checkLoopCondition_conditionOk->setName("conditionOk");
			primechecker_checkLoopCondition_conditionOk->setVisibility(VisibilityKind::public_);
			
			primechecker_checkLoopCondition_conditionOk->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			primechecker_checkLoopCondition_conditionOk->setDirection(ParameterDirectionKind::return_);
		primechecker_checkLoopCondition->addOwnedParameter(primechecker_checkLoopCondition_conditionOk);
		primechecker_checkLoopCondition->addLanguage("C++");
		primechecker_checkLoopCondition->addBody("int number = std::dynamic_pointer_cast<IntegerValue>(inputParameters->at(0)->values->at(0))->value; int i = std::dynamic_pointer_cast<IntegerValue>(inputParameters->at(1)->values->at(0))->value;  fuml::Debug::println(\"[doBody] number = \" + std::to_string(number)); fuml::Debug::println(\"[doBody] i = \" + std::to_string(i));  bool resultBoolean = (i <= number/2);  outputParameters->at(0)->values = inputParameters->at(1)->values;  BooleanValuePtr result(new BooleanValue()); result->value = resultBoolean; result->type = this->locus->factory->getBuiltInType(\"Boolean\");  fuml::Debug::println(\"[doBody] conditionOk = \" + std::to_string(resultBoolean));  outputParameters->at(1)->values->push_back(result);");
	primechecker->addPackagedElement(primechecker_checkLoopCondition);
}
