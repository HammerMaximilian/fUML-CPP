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
#include <utils/library/FoundationalModelLibraryModel.h>


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
		primechecker_printIsPrime.reset(new OpaqueBehavior());
		this->addToElementRepository("printIsPrime", primechecker_printIsPrime);
		primechecker_checkIfPrime.reset(new Activity());
		this->addToElementRepository("checkIfPrime", primechecker_checkIfPrime);
			primechecker_checkIfPrime_ControlFlow0.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow0", primechecker_checkIfPrime_ControlFlow0);
				primechecker_checkIfPrime_ControlFlow0_LiteralBoolean1.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean1", primechecker_checkIfPrime_ControlFlow0_LiteralBoolean1);
			primechecker_checkIfPrime_ObjectFlow2.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow2", primechecker_checkIfPrime_ObjectFlow2);
				primechecker_checkIfPrime_ObjectFlow2_LiteralInteger3.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger3", primechecker_checkIfPrime_ObjectFlow2_LiteralInteger3);
				primechecker_checkIfPrime_ObjectFlow2_LiteralBoolean4.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean4", primechecker_checkIfPrime_ObjectFlow2_LiteralBoolean4);
			primechecker_checkIfPrime_conditionOk.reset(new DecisionNode());
			this->addToElementRepository("conditionOk", primechecker_checkIfPrime_conditionOk);
			primechecker_checkIfPrime_ObjectFlow5.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow5", primechecker_checkIfPrime_ObjectFlow5);
				primechecker_checkIfPrime_ObjectFlow5_LiteralBoolean6.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean6", primechecker_checkIfPrime_ObjectFlow5_LiteralBoolean6);
				primechecker_checkIfPrime_ObjectFlow5_LiteralInteger7.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger7", primechecker_checkIfPrime_ObjectFlow5_LiteralInteger7);
			primechecker_checkIfPrime_callCheckLoopCondition.reset(new CallBehaviorAction());
			this->addToElementRepository("callCheckLoopCondition", primechecker_checkIfPrime_callCheckLoopCondition);
				primechecker_checkIfPrime_callCheckLoopCondition_number.reset(new InputPin());
				this->addToElementRepository("number", primechecker_checkIfPrime_callCheckLoopCondition_number);
					primechecker_checkIfPrime_callCheckLoopCondition_number_LiteralInteger8.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger8", primechecker_checkIfPrime_callCheckLoopCondition_number_LiteralInteger8);
					primechecker_checkIfPrime_callCheckLoopCondition_number_LiteralUnlimitedNatural9.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural9", primechecker_checkIfPrime_callCheckLoopCondition_number_LiteralUnlimitedNatural9);
				primechecker_checkIfPrime_callCheckLoopCondition_conditionOk.reset(new OutputPin());
				this->addToElementRepository("conditionOk", primechecker_checkIfPrime_callCheckLoopCondition_conditionOk);
					primechecker_checkIfPrime_callCheckLoopCondition_conditionOk_LiteralInteger10.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger10", primechecker_checkIfPrime_callCheckLoopCondition_conditionOk_LiteralInteger10);
					primechecker_checkIfPrime_callCheckLoopCondition_conditionOk_LiteralUnlimitedNatural11.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural11", primechecker_checkIfPrime_callCheckLoopCondition_conditionOk_LiteralUnlimitedNatural11);
				primechecker_checkIfPrime_callCheckLoopCondition_in_i.reset(new InputPin());
				this->addToElementRepository("in_i", primechecker_checkIfPrime_callCheckLoopCondition_in_i);
					primechecker_checkIfPrime_callCheckLoopCondition_in_i_LiteralUnlimitedNatural12.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural12", primechecker_checkIfPrime_callCheckLoopCondition_in_i_LiteralUnlimitedNatural12);
					primechecker_checkIfPrime_callCheckLoopCondition_in_i_LiteralInteger13.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger13", primechecker_checkIfPrime_callCheckLoopCondition_in_i_LiteralInteger13);
				primechecker_checkIfPrime_callCheckLoopCondition_out_i.reset(new OutputPin());
				this->addToElementRepository("out_i", primechecker_checkIfPrime_callCheckLoopCondition_out_i);
					primechecker_checkIfPrime_callCheckLoopCondition_out_i_LiteralInteger14.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger14", primechecker_checkIfPrime_callCheckLoopCondition_out_i_LiteralInteger14);
					primechecker_checkIfPrime_callCheckLoopCondition_out_i_LiteralUnlimitedNatural15.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural15", primechecker_checkIfPrime_callCheckLoopCondition_out_i_LiteralUnlimitedNatural15);
			primechecker_checkIfPrime_ObjectFlow16.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow16", primechecker_checkIfPrime_ObjectFlow16);
				primechecker_checkIfPrime_ObjectFlow16_LiteralInteger17.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger17", primechecker_checkIfPrime_ObjectFlow16_LiteralInteger17);
				primechecker_checkIfPrime_ObjectFlow16_LiteralBoolean18.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean18", primechecker_checkIfPrime_ObjectFlow16_LiteralBoolean18);
			primechecker_checkIfPrime_ControlFlow19.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow19", primechecker_checkIfPrime_ControlFlow19);
			primechecker_checkIfPrime_ObjectFlow20.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow20", primechecker_checkIfPrime_ObjectFlow20);
				primechecker_checkIfPrime_ObjectFlow20_LiteralBoolean21.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean21", primechecker_checkIfPrime_ObjectFlow20_LiteralBoolean21);
				primechecker_checkIfPrime_ObjectFlow20_LiteralInteger22.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger22", primechecker_checkIfPrime_ObjectFlow20_LiteralInteger22);
			primechecker_checkIfPrime_ObjectFlow23.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow23", primechecker_checkIfPrime_ObjectFlow23);
				primechecker_checkIfPrime_ObjectFlow23_LiteralBoolean24.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean24", primechecker_checkIfPrime_ObjectFlow23_LiteralBoolean24);
				primechecker_checkIfPrime_ObjectFlow23_LiteralInteger25.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger25", primechecker_checkIfPrime_ObjectFlow23_LiteralInteger25);
			primechecker_checkIfPrime_ObjectFlow26.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow26", primechecker_checkIfPrime_ObjectFlow26);
				primechecker_checkIfPrime_ObjectFlow26_LiteralBoolean27.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean27", primechecker_checkIfPrime_ObjectFlow26_LiteralBoolean27);
				primechecker_checkIfPrime_ObjectFlow26_LiteralInteger28.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger28", primechecker_checkIfPrime_ObjectFlow26_LiteralInteger28);
			primechecker_checkIfPrime_ControlFlow29.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow29", primechecker_checkIfPrime_ControlFlow29);
				primechecker_checkIfPrime_ControlFlow29_LiteralBoolean30.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean30", primechecker_checkIfPrime_ControlFlow29_LiteralBoolean30);
			primechecker_checkIfPrime_ForkNumber.reset(new ForkNode());
			this->addToElementRepository("ForkNumber", primechecker_checkIfPrime_ForkNumber);
			primechecker_checkIfPrime_callPrintIsPrime.reset(new CallBehaviorAction());
			this->addToElementRepository("callPrintIsPrime", primechecker_checkIfPrime_callPrintIsPrime);
			primechecker_checkIfPrime_ControlFlow31.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow31", primechecker_checkIfPrime_ControlFlow31);
			primechecker_checkIfPrime_initializeLoopVariable.reset(new ValueSpecificationAction());
			this->addToElementRepository("initializeLoopVariable", primechecker_checkIfPrime_initializeLoopVariable);
				primechecker_checkIfPrime_initializeLoopVariable_result.reset(new OutputPin());
				this->addToElementRepository("result", primechecker_checkIfPrime_initializeLoopVariable_result);
					primechecker_checkIfPrime_initializeLoopVariable_result_LiteralUnlimitedNatural32.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural32", primechecker_checkIfPrime_initializeLoopVariable_result_LiteralUnlimitedNatural32);
					primechecker_checkIfPrime_initializeLoopVariable_result_LiteralInteger33.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger33", primechecker_checkIfPrime_initializeLoopVariable_result_LiteralInteger33);
				primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger34.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger34", primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger34);
			primechecker_checkIfPrime_ControlFlow35.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow35", primechecker_checkIfPrime_ControlFlow35);
			primechecker_checkIfPrime_1_Or_0.reset(new DecisionNode());
			this->addToElementRepository("1_Or_0", primechecker_checkIfPrime_1_Or_0);
			primechecker_checkIfPrime_callIncrement.reset(new CallBehaviorAction());
			this->addToElementRepository("callIncrement", primechecker_checkIfPrime_callIncrement);
				primechecker_checkIfPrime_callIncrement_out_i.reset(new OutputPin());
				this->addToElementRepository("out_i", primechecker_checkIfPrime_callIncrement_out_i);
					primechecker_checkIfPrime_callIncrement_out_i_LiteralUnlimitedNatural36.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural36", primechecker_checkIfPrime_callIncrement_out_i_LiteralUnlimitedNatural36);
					primechecker_checkIfPrime_callIncrement_out_i_LiteralInteger37.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger37", primechecker_checkIfPrime_callIncrement_out_i_LiteralInteger37);
					primechecker_checkIfPrime_callIncrement_out_i_LiteralInteger38.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger38", primechecker_checkIfPrime_callIncrement_out_i_LiteralInteger38);
				primechecker_checkIfPrime_callIncrement_in_i.reset(new InputPin());
				this->addToElementRepository("in_i", primechecker_checkIfPrime_callIncrement_in_i);
					primechecker_checkIfPrime_callIncrement_in_i_LiteralUnlimitedNatural39.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural39", primechecker_checkIfPrime_callIncrement_in_i_LiteralUnlimitedNatural39);
					primechecker_checkIfPrime_callIncrement_in_i_LiteralInteger40.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger40", primechecker_checkIfPrime_callIncrement_in_i_LiteralInteger40);
					primechecker_checkIfPrime_callIncrement_in_i_LiteralInteger41.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger41", primechecker_checkIfPrime_callIncrement_in_i_LiteralInteger41);
			primechecker_checkIfPrime_MergeNumber.reset(new MergeNode());
			this->addToElementRepository("MergeNumber", primechecker_checkIfPrime_MergeNumber);
			primechecker_checkIfPrime_ObjectFlow42.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow42", primechecker_checkIfPrime_ObjectFlow42);
				primechecker_checkIfPrime_ObjectFlow42_LiteralInteger43.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger43", primechecker_checkIfPrime_ObjectFlow42_LiteralInteger43);
				primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean44.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean44", primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean44);
			primechecker_checkIfPrime_callDoPrimeCheck.reset(new CallBehaviorAction());
			this->addToElementRepository("callDoPrimeCheck", primechecker_checkIfPrime_callDoPrimeCheck);
				primechecker_checkIfPrime_callDoPrimeCheck_out_number.reset(new OutputPin());
				this->addToElementRepository("out_number", primechecker_checkIfPrime_callDoPrimeCheck_out_number);
				primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime.reset(new OutputPin());
				this->addToElementRepository("isNotPrime", primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime);
					primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime_LiteralUnlimitedNatural45.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural45", primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime_LiteralUnlimitedNatural45);
					primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime_LiteralInteger46.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger46", primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime_LiteralInteger46);
				primechecker_checkIfPrime_callDoPrimeCheck_out_i.reset(new OutputPin());
				this->addToElementRepository("out_i", primechecker_checkIfPrime_callDoPrimeCheck_out_i);
					primechecker_checkIfPrime_callDoPrimeCheck_out_i_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", primechecker_checkIfPrime_callDoPrimeCheck_out_i_LiteralInteger47);
					primechecker_checkIfPrime_callDoPrimeCheck_out_i_LiteralUnlimitedNatural48.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural48", primechecker_checkIfPrime_callDoPrimeCheck_out_i_LiteralUnlimitedNatural48);
				primechecker_checkIfPrime_callDoPrimeCheck_in_number.reset(new InputPin());
				this->addToElementRepository("in_number", primechecker_checkIfPrime_callDoPrimeCheck_in_number);
					primechecker_checkIfPrime_callDoPrimeCheck_in_number_LiteralUnlimitedNatural49.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural49", primechecker_checkIfPrime_callDoPrimeCheck_in_number_LiteralUnlimitedNatural49);
					primechecker_checkIfPrime_callDoPrimeCheck_in_number_LiteralInteger50.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger50", primechecker_checkIfPrime_callDoPrimeCheck_in_number_LiteralInteger50);
				primechecker_checkIfPrime_callDoPrimeCheck_in_i.reset(new InputPin());
				this->addToElementRepository("in_i", primechecker_checkIfPrime_callDoPrimeCheck_in_i);
					primechecker_checkIfPrime_callDoPrimeCheck_in_i_LiteralInteger51.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger51", primechecker_checkIfPrime_callDoPrimeCheck_in_i_LiteralInteger51);
					primechecker_checkIfPrime_callDoPrimeCheck_in_i_LiteralUnlimitedNatural52.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural52", primechecker_checkIfPrime_callDoPrimeCheck_in_i_LiteralUnlimitedNatural52);
			primechecker_checkIfPrime_isNotPrime.reset(new DecisionNode());
			this->addToElementRepository("isNotPrime", primechecker_checkIfPrime_isNotPrime);
			primechecker_checkIfPrime_ControlFlow53.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow53", primechecker_checkIfPrime_ControlFlow53);
			primechecker_checkIfPrime_callEnterNumber.reset(new CallBehaviorAction());
			this->addToElementRepository("callEnterNumber", primechecker_checkIfPrime_callEnterNumber);
				primechecker_checkIfPrime_callEnterNumber_value.reset(new OutputPin());
				this->addToElementRepository("value", primechecker_checkIfPrime_callEnterNumber_value);
					primechecker_checkIfPrime_callEnterNumber_value_LiteralInteger54.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger54", primechecker_checkIfPrime_callEnterNumber_value_LiteralInteger54);
					primechecker_checkIfPrime_callEnterNumber_value_LiteralInteger55.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger55", primechecker_checkIfPrime_callEnterNumber_value_LiteralInteger55);
					primechecker_checkIfPrime_callEnterNumber_value_LiteralUnlimitedNatural56.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural56", primechecker_checkIfPrime_callEnterNumber_value_LiteralUnlimitedNatural56);
			primechecker_checkIfPrime_MergeIsNotPrime.reset(new MergeNode());
			this->addToElementRepository("MergeIsNotPrime", primechecker_checkIfPrime_MergeIsNotPrime);
			primechecker_checkIfPrime_Merge_i.reset(new MergeNode());
			this->addToElementRepository("Merge_i", primechecker_checkIfPrime_Merge_i);
			primechecker_checkIfPrime_ControlFlow57.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow57", primechecker_checkIfPrime_ControlFlow57);
				primechecker_checkIfPrime_ControlFlow57_LiteralBoolean58.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean58", primechecker_checkIfPrime_ControlFlow57_LiteralBoolean58);
			primechecker_checkIfPrime_ObjectFlow59.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow59", primechecker_checkIfPrime_ObjectFlow59);
				primechecker_checkIfPrime_ObjectFlow59_LiteralBoolean60.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean60", primechecker_checkIfPrime_ObjectFlow59_LiteralBoolean60);
				primechecker_checkIfPrime_ObjectFlow59_LiteralInteger61.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger61", primechecker_checkIfPrime_ObjectFlow59_LiteralInteger61);
			primechecker_checkIfPrime_InitialNode1.reset(new InitialNode());
			this->addToElementRepository("InitialNode1", primechecker_checkIfPrime_InitialNode1);
			primechecker_checkIfPrime_callPrintIsNotPrime.reset(new CallBehaviorAction());
			this->addToElementRepository("callPrintIsNotPrime", primechecker_checkIfPrime_callPrintIsNotPrime);
			primechecker_checkIfPrime_callCheckIf_1_Or_0.reset(new CallBehaviorAction());
			this->addToElementRepository("callCheckIf_1_Or_0", primechecker_checkIfPrime_callCheckIf_1_Or_0);
				primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number.reset(new InputPin());
				this->addToElementRepository("in_number", primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number);
					primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number_LiteralInteger62.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger62", primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number_LiteralInteger62);
					primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number_LiteralUnlimitedNatural63.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural63", primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number_LiteralUnlimitedNatural63);
					primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number_LiteralInteger64.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger64", primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number_LiteralInteger64);
				primechecker_checkIfPrime_callCheckIf_1_Or_0_result.reset(new OutputPin());
				this->addToElementRepository("result", primechecker_checkIfPrime_callCheckIf_1_Or_0_result);
					primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralInteger65.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger65", primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralInteger65);
					primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralInteger66.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger66", primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralInteger66);
					primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralUnlimitedNatural67.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural67", primechecker_checkIfPrime_callCheckIf_1_Or_0_result_LiteralUnlimitedNatural67);
				primechecker_checkIfPrime_callCheckIf_1_Or_0_out_number.reset(new OutputPin());
				this->addToElementRepository("out_number", primechecker_checkIfPrime_callCheckIf_1_Or_0_out_number);
					primechecker_checkIfPrime_callCheckIf_1_Or_0_out_number_LiteralInteger68.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger68", primechecker_checkIfPrime_callCheckIf_1_Or_0_out_number_LiteralInteger68);
			primechecker_checkIfPrime_ObjectFlow69.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow69", primechecker_checkIfPrime_ObjectFlow69);
				primechecker_checkIfPrime_ObjectFlow69_LiteralBoolean70.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean70", primechecker_checkIfPrime_ObjectFlow69_LiteralBoolean70);
				primechecker_checkIfPrime_ObjectFlow69_LiteralInteger71.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger71", primechecker_checkIfPrime_ObjectFlow69_LiteralInteger71);
			primechecker_checkIfPrime_FinalIsPrime.reset(new ActivityFinalNode());
			this->addToElementRepository("FinalIsPrime", primechecker_checkIfPrime_FinalIsPrime);
			primechecker_checkIfPrime_ObjectFlow72.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow72", primechecker_checkIfPrime_ObjectFlow72);
				primechecker_checkIfPrime_ObjectFlow72_LiteralBoolean73.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean73", primechecker_checkIfPrime_ObjectFlow72_LiteralBoolean73);
				primechecker_checkIfPrime_ObjectFlow72_LiteralInteger74.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger74", primechecker_checkIfPrime_ObjectFlow72_LiteralInteger74);
			primechecker_checkIfPrime_ObjectFlow75.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow75", primechecker_checkIfPrime_ObjectFlow75);
				primechecker_checkIfPrime_ObjectFlow75_LiteralInteger76.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger76", primechecker_checkIfPrime_ObjectFlow75_LiteralInteger76);
				primechecker_checkIfPrime_ObjectFlow75_LiteralBoolean77.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean77", primechecker_checkIfPrime_ObjectFlow75_LiteralBoolean77);
			primechecker_checkIfPrime_ObjectFlow78.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow78", primechecker_checkIfPrime_ObjectFlow78);
				primechecker_checkIfPrime_ObjectFlow78_LiteralInteger79.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger79", primechecker_checkIfPrime_ObjectFlow78_LiteralInteger79);
				primechecker_checkIfPrime_ObjectFlow78_LiteralBoolean80.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean80", primechecker_checkIfPrime_ObjectFlow78_LiteralBoolean80);
			primechecker_checkIfPrime_ControlFlow81.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow81", primechecker_checkIfPrime_ControlFlow81);
			primechecker_checkIfPrime_MergeControl.reset(new MergeNode());
			this->addToElementRepository("MergeControl", primechecker_checkIfPrime_MergeControl);
			primechecker_checkIfPrime_ObjectFlow82.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow82", primechecker_checkIfPrime_ObjectFlow82);
				primechecker_checkIfPrime_ObjectFlow82_LiteralInteger83.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger83", primechecker_checkIfPrime_ObjectFlow82_LiteralInteger83);
				primechecker_checkIfPrime_ObjectFlow82_LiteralBoolean84.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean84", primechecker_checkIfPrime_ObjectFlow82_LiteralBoolean84);
			primechecker_checkIfPrime_ControlFlow85.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow85", primechecker_checkIfPrime_ControlFlow85);
				primechecker_checkIfPrime_ControlFlow85_LiteralBoolean86.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean86", primechecker_checkIfPrime_ControlFlow85_LiteralBoolean86);
			primechecker_checkIfPrime_ControlFlow87.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow87", primechecker_checkIfPrime_ControlFlow87);
				primechecker_checkIfPrime_ControlFlow87_LiteralBoolean88.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean88", primechecker_checkIfPrime_ControlFlow87_LiteralBoolean88);
			primechecker_checkIfPrime_ObjectFlow89.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow89", primechecker_checkIfPrime_ObjectFlow89);
				primechecker_checkIfPrime_ObjectFlow89_LiteralInteger90.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger90", primechecker_checkIfPrime_ObjectFlow89_LiteralInteger90);
				primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean91.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean91", primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean91);
			primechecker_checkIfPrime_ControlFlow92.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow92", primechecker_checkIfPrime_ControlFlow92);
				primechecker_checkIfPrime_ControlFlow92_LiteralBoolean93.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean93", primechecker_checkIfPrime_ControlFlow92_LiteralBoolean93);
			primechecker_checkIfPrime_FinalIsNotPrime.reset(new ActivityFinalNode());
			this->addToElementRepository("FinalIsNotPrime", primechecker_checkIfPrime_FinalIsNotPrime);
			primechecker_checkIfPrime_ControlFlow94.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow94", primechecker_checkIfPrime_ControlFlow94);
		primechecker_increment.reset(new OpaqueBehavior());
		this->addToElementRepository("increment", primechecker_increment);
			primechecker_increment_in_i.reset(new Parameter());
			this->addToElementRepository("in_i", primechecker_increment_in_i);
			primechecker_increment_out_i.reset(new Parameter());
			this->addToElementRepository("out_i", primechecker_increment_out_i);
		primechecker_enterNumber.reset(new OpaqueBehavior());
		this->addToElementRepository("enterNumber", primechecker_enterNumber);
			primechecker_enterNumber_value.reset(new Parameter());
			this->addToElementRepository("value", primechecker_enterNumber_value);
		primechecker_checkLoopCondition.reset(new OpaqueBehavior());
		this->addToElementRepository("checkLoopCondition", primechecker_checkLoopCondition);
			primechecker_checkLoopCondition_number.reset(new Parameter());
			this->addToElementRepository("number", primechecker_checkLoopCondition_number);
			primechecker_checkLoopCondition_in_i.reset(new Parameter());
			this->addToElementRepository("in_i", primechecker_checkLoopCondition_in_i);
			primechecker_checkLoopCondition_out_i.reset(new Parameter());
			this->addToElementRepository("out_i", primechecker_checkLoopCondition_out_i);
			primechecker_checkLoopCondition_conditionOk.reset(new Parameter());
			this->addToElementRepository("conditionOk", primechecker_checkLoopCondition_conditionOk);
		primechecker_doPrimeCheck.reset(new OpaqueBehavior());
		this->addToElementRepository("doPrimeCheck", primechecker_doPrimeCheck);
			primechecker_doPrimeCheck_number.reset(new Parameter());
			this->addToElementRepository("number", primechecker_doPrimeCheck_number);
			primechecker_doPrimeCheck_isNotPrime.reset(new Parameter());
			this->addToElementRepository("isNotPrime", primechecker_doPrimeCheck_isNotPrime);
			primechecker_doPrimeCheck_out_number.reset(new Parameter());
			this->addToElementRepository("out_number", primechecker_doPrimeCheck_out_number);
			primechecker_doPrimeCheck_in_i.reset(new Parameter());
			this->addToElementRepository("in_i", primechecker_doPrimeCheck_in_i);
			primechecker_doPrimeCheck_out_i.reset(new Parameter());
			this->addToElementRepository("out_i", primechecker_doPrimeCheck_out_i);
		primechecker_printIsNotPrime.reset(new OpaqueBehavior());
		this->addToElementRepository("printIsNotPrime", primechecker_printIsNotPrime);
		primechecker_checkIf_1_Or_0.reset(new OpaqueBehavior());
		this->addToElementRepository("checkIf_1_Or_0", primechecker_checkIf_1_Or_0);
			primechecker_checkIf_1_Or_0_result.reset(new Parameter());
			this->addToElementRepository("result", primechecker_checkIf_1_Or_0_result);
			primechecker_checkIf_1_Or_0_in_number.reset(new Parameter());
			this->addToElementRepository("in_number", primechecker_checkIf_1_Or_0_in_number);
			primechecker_checkIf_1_Or_0_out_number.reset(new Parameter());
			this->addToElementRepository("out_number", primechecker_checkIf_1_Or_0_out_number);

	// Initialize public members
	/*
	 * Model primechecker
	 */
	primechecker->setThisPackagePtr(primechecker);
	primechecker->setName("primechecker");
	primechecker->setVisibility(VisibilityKind::public_);
		// OpaqueBehavior printIsPrime
		primechecker_printIsPrime->setThisClass_Ptr(primechecker_printIsPrime);
		primechecker_printIsPrime->setName("printIsPrime");
		primechecker_printIsPrime->setVisibility(VisibilityKind::public_);
		primechecker_printIsPrime->addLanguage("C++");
		primechecker_printIsPrime->addBody("std::cout<<\"Number is prime\"<<std::endl;");
	primechecker->addPackagedElement(primechecker_printIsPrime);
		// Activity checkIfPrime
		primechecker_checkIfPrime->setThisActivityPtr(primechecker_checkIfPrime);
		primechecker_checkIfPrime->setName("checkIfPrime");
		primechecker_checkIfPrime->setVisibility(VisibilityKind::public_);
			// DecisionNode conditionOk
			primechecker_checkIfPrime_conditionOk->setThisElementPtr(primechecker_checkIfPrime_conditionOk);
			primechecker_checkIfPrime_conditionOk->setName("conditionOk");
			primechecker_checkIfPrime_conditionOk->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_conditionOk);
			// DecisionNode isNotPrime
			primechecker_checkIfPrime_isNotPrime->setThisElementPtr(primechecker_checkIfPrime_isNotPrime);
			primechecker_checkIfPrime_isNotPrime->setName("isNotPrime");
			primechecker_checkIfPrime_isNotPrime->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_isNotPrime);
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
			// MergeNode MergeIsNotPrime
			primechecker_checkIfPrime_MergeIsNotPrime->setThisElementPtr(primechecker_checkIfPrime_MergeIsNotPrime);
			primechecker_checkIfPrime_MergeIsNotPrime->setName("MergeIsNotPrime");
			primechecker_checkIfPrime_MergeIsNotPrime->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_MergeIsNotPrime);
			// MergeNode Merge_i
			primechecker_checkIfPrime_Merge_i->setThisElementPtr(primechecker_checkIfPrime_Merge_i);
			primechecker_checkIfPrime_Merge_i->setName("Merge_i");
			primechecker_checkIfPrime_Merge_i->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_Merge_i);
			// InitialNode InitialNode1
			primechecker_checkIfPrime_InitialNode1->setThisElementPtr(primechecker_checkIfPrime_InitialNode1);
			primechecker_checkIfPrime_InitialNode1->setName("InitialNode1");
			primechecker_checkIfPrime_InitialNode1->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_InitialNode1);
			// CallBehaviorAction callPrintIsNotPrime
			primechecker_checkIfPrime_callPrintIsNotPrime->setThisExecutableNodePtr(primechecker_checkIfPrime_callPrintIsNotPrime);
			primechecker_checkIfPrime_callPrintIsNotPrime->setName("callPrintIsNotPrime");
			primechecker_checkIfPrime_callPrintIsNotPrime->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_callPrintIsNotPrime->setBehavior(primechecker_printIsNotPrime);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_callPrintIsNotPrime);
			// CallBehaviorAction callCheckIf_1_Or_0
			primechecker_checkIfPrime_callCheckIf_1_Or_0->setThisExecutableNodePtr(primechecker_checkIfPrime_callCheckIf_1_Or_0);
			primechecker_checkIfPrime_callCheckIf_1_Or_0->setName("callCheckIf_1_Or_0");
			primechecker_checkIfPrime_callCheckIf_1_Or_0->setVisibility(VisibilityKind::public_);
			// OutputPin out_number
				primechecker_checkIfPrime_callCheckIf_1_Or_0_out_number->setThisElementPtr(primechecker_checkIfPrime_callCheckIf_1_Or_0_out_number);
				primechecker_checkIfPrime_callCheckIf_1_Or_0_out_number->setName("out_number");
				primechecker_checkIfPrime_callCheckIf_1_Or_0_out_number->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callCheckIf_1_Or_0_out_number->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkIfPrime_callCheckIf_1_Or_0->addResult(primechecker_checkIfPrime_callCheckIf_1_Or_0_out_number);
				// OutputPin result
				primechecker_checkIfPrime_callCheckIf_1_Or_0_result->setThisElementPtr(primechecker_checkIfPrime_callCheckIf_1_Or_0_result);
				primechecker_checkIfPrime_callCheckIf_1_Or_0_result->setName("result");
				primechecker_checkIfPrime_callCheckIf_1_Or_0_result->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callCheckIf_1_Or_0_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			primechecker_checkIfPrime_callCheckIf_1_Or_0->addResult(primechecker_checkIfPrime_callCheckIf_1_Or_0_result);
			primechecker_checkIfPrime_callCheckIf_1_Or_0->setBehavior(primechecker_checkIf_1_Or_0);
				// InputPin in_number
				primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number->setThisElementPtr(primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number);
				primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number->setName("in_number");
				primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkIfPrime_callCheckIf_1_Or_0->addArgument(primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_callCheckIf_1_Or_0);
			// ForkNode ForkNumber
			primechecker_checkIfPrime_ForkNumber->setThisElementPtr(primechecker_checkIfPrime_ForkNumber);
			primechecker_checkIfPrime_ForkNumber->setName("ForkNumber");
			primechecker_checkIfPrime_ForkNumber->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_ForkNumber);
			// CallBehaviorAction callPrintIsPrime
			primechecker_checkIfPrime_callPrintIsPrime->setThisExecutableNodePtr(primechecker_checkIfPrime_callPrintIsPrime);
			primechecker_checkIfPrime_callPrintIsPrime->setName("callPrintIsPrime");
			primechecker_checkIfPrime_callPrintIsPrime->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_callPrintIsPrime->setBehavior(primechecker_printIsPrime);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_callPrintIsPrime);
			// ActivityFinalNode FinalIsPrime
			primechecker_checkIfPrime_FinalIsPrime->setThisElementPtr(primechecker_checkIfPrime_FinalIsPrime);
			primechecker_checkIfPrime_FinalIsPrime->setName("FinalIsPrime");
			primechecker_checkIfPrime_FinalIsPrime->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_FinalIsPrime);
			// ValueSpecificationAction initializeLoopVariable
			primechecker_checkIfPrime_initializeLoopVariable->setThisExecutableNodePtr(primechecker_checkIfPrime_initializeLoopVariable);
			primechecker_checkIfPrime_initializeLoopVariable->setName("initializeLoopVariable");
			primechecker_checkIfPrime_initializeLoopVariable->setVisibility(VisibilityKind::public_);
			
				// LiteralInteger LiteralInteger34
				primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger34->setThisElementPtr(primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger34);
				primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger34->setName("LiteralInteger34");
				primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger34->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger34->setValue(2);
			primechecker_checkIfPrime_initializeLoopVariable->setValue(primechecker_checkIfPrime_initializeLoopVariable_LiteralInteger34);
				// OutputPin result
				primechecker_checkIfPrime_initializeLoopVariable_result->setThisElementPtr(primechecker_checkIfPrime_initializeLoopVariable_result);
				primechecker_checkIfPrime_initializeLoopVariable_result->setName("result");
				primechecker_checkIfPrime_initializeLoopVariable_result->setVisibility(VisibilityKind::public_);
				
				primechecker_checkIfPrime_initializeLoopVariable_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkIfPrime_initializeLoopVariable->setResult(primechecker_checkIfPrime_initializeLoopVariable_result);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_initializeLoopVariable);
			// MergeNode MergeControl
			primechecker_checkIfPrime_MergeControl->setThisElementPtr(primechecker_checkIfPrime_MergeControl);
			primechecker_checkIfPrime_MergeControl->setName("MergeControl");
			primechecker_checkIfPrime_MergeControl->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_MergeControl);
			// DecisionNode 1_Or_0
			primechecker_checkIfPrime_1_Or_0->setThisElementPtr(primechecker_checkIfPrime_1_Or_0);
			primechecker_checkIfPrime_1_Or_0->setName("1_Or_0");
			primechecker_checkIfPrime_1_Or_0->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_1_Or_0);
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
			// MergeNode MergeNumber
			primechecker_checkIfPrime_MergeNumber->setThisElementPtr(primechecker_checkIfPrime_MergeNumber);
			primechecker_checkIfPrime_MergeNumber->setName("MergeNumber");
			primechecker_checkIfPrime_MergeNumber->setVisibility(VisibilityKind::public_);
		primechecker_checkIfPrime->addNode(primechecker_checkIfPrime_MergeNumber);
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
			// ControlFlow ControlFlow0 from 1_Or_0 to MergeControl
			primechecker_checkIfPrime_ControlFlow0->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow0);
			primechecker_checkIfPrime_ControlFlow0->setName("ControlFlow0");
			primechecker_checkIfPrime_ControlFlow0->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow0->setSource(primechecker_checkIfPrime_1_Or_0);
			primechecker_checkIfPrime_ControlFlow0->setTarget(primechecker_checkIfPrime_MergeControl);
				// LiteralBoolean LiteralBoolean1
				primechecker_checkIfPrime_ControlFlow0_LiteralBoolean1->setThisElementPtr(primechecker_checkIfPrime_ControlFlow0_LiteralBoolean1);
				primechecker_checkIfPrime_ControlFlow0_LiteralBoolean1->setName("LiteralBoolean1");
				primechecker_checkIfPrime_ControlFlow0_LiteralBoolean1->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ControlFlow0_LiteralBoolean1->setValue(false);
			primechecker_checkIfPrime_ControlFlow0->setGuard(primechecker_checkIfPrime_ControlFlow0_LiteralBoolean1);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow0);
			// ObjectFlow ObjectFlow2 from isNotPrime to isNotPrime
			primechecker_checkIfPrime_ObjectFlow2->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow2);
			primechecker_checkIfPrime_ObjectFlow2->setName("ObjectFlow2");
			primechecker_checkIfPrime_ObjectFlow2->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow2->setSource(primechecker_checkIfPrime_callDoPrimeCheck_isNotPrime);
			primechecker_checkIfPrime_ObjectFlow2->setTarget(primechecker_checkIfPrime_isNotPrime);
				// LiteralBoolean LiteralBoolean4
				primechecker_checkIfPrime_ObjectFlow2_LiteralBoolean4->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow2_LiteralBoolean4);
				primechecker_checkIfPrime_ObjectFlow2_LiteralBoolean4->setName("LiteralBoolean4");
				primechecker_checkIfPrime_ObjectFlow2_LiteralBoolean4->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow2_LiteralBoolean4->setValue(true);
			primechecker_checkIfPrime_ObjectFlow2->setGuard(primechecker_checkIfPrime_ObjectFlow2_LiteralBoolean4);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow2);
			// ObjectFlow ObjectFlow5 from out_i to in_i
			primechecker_checkIfPrime_ObjectFlow5->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow5);
			primechecker_checkIfPrime_ObjectFlow5->setName("ObjectFlow5");
			primechecker_checkIfPrime_ObjectFlow5->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow5->setSource(primechecker_checkIfPrime_callCheckLoopCondition_out_i);
			primechecker_checkIfPrime_ObjectFlow5->setTarget(primechecker_checkIfPrime_callDoPrimeCheck_in_i);
				// LiteralBoolean LiteralBoolean6
				primechecker_checkIfPrime_ObjectFlow5_LiteralBoolean6->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow5_LiteralBoolean6);
				primechecker_checkIfPrime_ObjectFlow5_LiteralBoolean6->setName("LiteralBoolean6");
				primechecker_checkIfPrime_ObjectFlow5_LiteralBoolean6->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow5_LiteralBoolean6->setValue(true);
			primechecker_checkIfPrime_ObjectFlow5->setGuard(primechecker_checkIfPrime_ObjectFlow5_LiteralBoolean6);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow5);
			// ObjectFlow ObjectFlow16 from out_number to MergeNumber
			primechecker_checkIfPrime_ObjectFlow16->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow16);
			primechecker_checkIfPrime_ObjectFlow16->setName("ObjectFlow16");
			primechecker_checkIfPrime_ObjectFlow16->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow16->setSource(primechecker_checkIfPrime_callCheckIf_1_Or_0_out_number);
			primechecker_checkIfPrime_ObjectFlow16->setTarget(primechecker_checkIfPrime_MergeNumber);
				// LiteralBoolean LiteralBoolean18
				primechecker_checkIfPrime_ObjectFlow16_LiteralBoolean18->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow16_LiteralBoolean18);
				primechecker_checkIfPrime_ObjectFlow16_LiteralBoolean18->setName("LiteralBoolean18");
				primechecker_checkIfPrime_ObjectFlow16_LiteralBoolean18->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow16_LiteralBoolean18->setValue(true);
			primechecker_checkIfPrime_ObjectFlow16->setGuard(primechecker_checkIfPrime_ObjectFlow16_LiteralBoolean18);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow16);
			// ControlFlow ControlFlow19 from callPrintIsPrime to FinalIsPrime
			primechecker_checkIfPrime_ControlFlow19->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow19);
			primechecker_checkIfPrime_ControlFlow19->setName("ControlFlow19");
			primechecker_checkIfPrime_ControlFlow19->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow19->setSource(primechecker_checkIfPrime_callPrintIsPrime);
			primechecker_checkIfPrime_ControlFlow19->setTarget(primechecker_checkIfPrime_FinalIsPrime);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow19);
			// ObjectFlow ObjectFlow20 from conditionOk to conditionOk
			primechecker_checkIfPrime_ObjectFlow20->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow20);
			primechecker_checkIfPrime_ObjectFlow20->setName("ObjectFlow20");
			primechecker_checkIfPrime_ObjectFlow20->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow20->setSource(primechecker_checkIfPrime_callCheckLoopCondition_conditionOk);
			primechecker_checkIfPrime_ObjectFlow20->setTarget(primechecker_checkIfPrime_conditionOk);
				// LiteralBoolean LiteralBoolean21
				primechecker_checkIfPrime_ObjectFlow20_LiteralBoolean21->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow20_LiteralBoolean21);
				primechecker_checkIfPrime_ObjectFlow20_LiteralBoolean21->setName("LiteralBoolean21");
				primechecker_checkIfPrime_ObjectFlow20_LiteralBoolean21->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow20_LiteralBoolean21->setValue(true);
			primechecker_checkIfPrime_ObjectFlow20->setGuard(primechecker_checkIfPrime_ObjectFlow20_LiteralBoolean21);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow20);
			// ObjectFlow ObjectFlow23 from result to 1_Or_0
			primechecker_checkIfPrime_ObjectFlow23->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow23);
			primechecker_checkIfPrime_ObjectFlow23->setName("ObjectFlow23");
			primechecker_checkIfPrime_ObjectFlow23->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow23->setSource(primechecker_checkIfPrime_callCheckIf_1_Or_0_result);
			primechecker_checkIfPrime_ObjectFlow23->setTarget(primechecker_checkIfPrime_1_Or_0);
				// LiteralBoolean LiteralBoolean24
				primechecker_checkIfPrime_ObjectFlow23_LiteralBoolean24->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow23_LiteralBoolean24);
				primechecker_checkIfPrime_ObjectFlow23_LiteralBoolean24->setName("LiteralBoolean24");
				primechecker_checkIfPrime_ObjectFlow23_LiteralBoolean24->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow23_LiteralBoolean24->setValue(true);
			primechecker_checkIfPrime_ObjectFlow23->setGuard(primechecker_checkIfPrime_ObjectFlow23_LiteralBoolean24);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow23);
			// ObjectFlow ObjectFlow26 from ForkNumber to in_number
			primechecker_checkIfPrime_ObjectFlow26->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow26);
			primechecker_checkIfPrime_ObjectFlow26->setName("ObjectFlow26");
			primechecker_checkIfPrime_ObjectFlow26->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow26->setSource(primechecker_checkIfPrime_ForkNumber);
			primechecker_checkIfPrime_ObjectFlow26->setTarget(primechecker_checkIfPrime_callDoPrimeCheck_in_number);
				// LiteralBoolean LiteralBoolean27
				primechecker_checkIfPrime_ObjectFlow26_LiteralBoolean27->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow26_LiteralBoolean27);
				primechecker_checkIfPrime_ObjectFlow26_LiteralBoolean27->setName("LiteralBoolean27");
				primechecker_checkIfPrime_ObjectFlow26_LiteralBoolean27->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow26_LiteralBoolean27->setValue(true);
			primechecker_checkIfPrime_ObjectFlow26->setGuard(primechecker_checkIfPrime_ObjectFlow26_LiteralBoolean27);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow26);
			// ControlFlow ControlFlow29 from conditionOk to callPrintIsPrime
			primechecker_checkIfPrime_ControlFlow29->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow29);
			primechecker_checkIfPrime_ControlFlow29->setName("ControlFlow29");
			primechecker_checkIfPrime_ControlFlow29->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow29->setSource(primechecker_checkIfPrime_conditionOk);
			primechecker_checkIfPrime_ControlFlow29->setTarget(primechecker_checkIfPrime_callPrintIsPrime);
				// LiteralBoolean LiteralBoolean30
				primechecker_checkIfPrime_ControlFlow29_LiteralBoolean30->setThisElementPtr(primechecker_checkIfPrime_ControlFlow29_LiteralBoolean30);
				primechecker_checkIfPrime_ControlFlow29_LiteralBoolean30->setName("LiteralBoolean30");
				primechecker_checkIfPrime_ControlFlow29_LiteralBoolean30->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ControlFlow29_LiteralBoolean30->setValue(false);
			primechecker_checkIfPrime_ControlFlow29->setGuard(primechecker_checkIfPrime_ControlFlow29_LiteralBoolean30);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow29);
			// ControlFlow ControlFlow31 from MergeIsNotPrime to callPrintIsNotPrime
			primechecker_checkIfPrime_ControlFlow31->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow31);
			primechecker_checkIfPrime_ControlFlow31->setName("ControlFlow31");
			primechecker_checkIfPrime_ControlFlow31->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow31->setSource(primechecker_checkIfPrime_MergeIsNotPrime);
			primechecker_checkIfPrime_ControlFlow31->setTarget(primechecker_checkIfPrime_callPrintIsNotPrime);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow31);
			// ControlFlow ControlFlow35 from callPrintIsNotPrime to FinalIsNotPrime
			primechecker_checkIfPrime_ControlFlow35->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow35);
			primechecker_checkIfPrime_ControlFlow35->setName("ControlFlow35");
			primechecker_checkIfPrime_ControlFlow35->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow35->setSource(primechecker_checkIfPrime_callPrintIsNotPrime);
			primechecker_checkIfPrime_ControlFlow35->setTarget(primechecker_checkIfPrime_FinalIsNotPrime);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow35);
			// ObjectFlow ObjectFlow42 from value to in_number
			primechecker_checkIfPrime_ObjectFlow42->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow42);
			primechecker_checkIfPrime_ObjectFlow42->setName("ObjectFlow42");
			primechecker_checkIfPrime_ObjectFlow42->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow42->setSource(primechecker_checkIfPrime_callEnterNumber_value);
			primechecker_checkIfPrime_ObjectFlow42->setTarget(primechecker_checkIfPrime_callCheckIf_1_Or_0_in_number);
				// LiteralBoolean LiteralBoolean44
				primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean44->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean44);
				primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean44->setName("LiteralBoolean44");
				primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean44->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean44->setValue(true);
			primechecker_checkIfPrime_ObjectFlow42->setGuard(primechecker_checkIfPrime_ObjectFlow42_LiteralBoolean44);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow42);
			// ControlFlow ControlFlow53 from InitialNode1 to callEnterNumber
			primechecker_checkIfPrime_ControlFlow53->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow53);
			primechecker_checkIfPrime_ControlFlow53->setName("ControlFlow53");
			primechecker_checkIfPrime_ControlFlow53->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow53->setSource(primechecker_checkIfPrime_InitialNode1);
			primechecker_checkIfPrime_ControlFlow53->setTarget(primechecker_checkIfPrime_callEnterNumber);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow53);
			// ControlFlow ControlFlow57 from 1_Or_0 to MergeIsNotPrime
			primechecker_checkIfPrime_ControlFlow57->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow57);
			primechecker_checkIfPrime_ControlFlow57->setName("ControlFlow57");
			primechecker_checkIfPrime_ControlFlow57->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow57->setSource(primechecker_checkIfPrime_1_Or_0);
			primechecker_checkIfPrime_ControlFlow57->setTarget(primechecker_checkIfPrime_MergeIsNotPrime);
				// LiteralBoolean LiteralBoolean58
				primechecker_checkIfPrime_ControlFlow57_LiteralBoolean58->setThisElementPtr(primechecker_checkIfPrime_ControlFlow57_LiteralBoolean58);
				primechecker_checkIfPrime_ControlFlow57_LiteralBoolean58->setName("LiteralBoolean58");
				primechecker_checkIfPrime_ControlFlow57_LiteralBoolean58->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ControlFlow57_LiteralBoolean58->setValue(true);
			primechecker_checkIfPrime_ControlFlow57->setGuard(primechecker_checkIfPrime_ControlFlow57_LiteralBoolean58);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow57);
			// ObjectFlow ObjectFlow59 from result to Merge_i
			primechecker_checkIfPrime_ObjectFlow59->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow59);
			primechecker_checkIfPrime_ObjectFlow59->setName("ObjectFlow59");
			primechecker_checkIfPrime_ObjectFlow59->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow59->setSource(primechecker_checkIfPrime_initializeLoopVariable_result);
			primechecker_checkIfPrime_ObjectFlow59->setTarget(primechecker_checkIfPrime_Merge_i);
				// LiteralBoolean LiteralBoolean60
				primechecker_checkIfPrime_ObjectFlow59_LiteralBoolean60->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow59_LiteralBoolean60);
				primechecker_checkIfPrime_ObjectFlow59_LiteralBoolean60->setName("LiteralBoolean60");
				primechecker_checkIfPrime_ObjectFlow59_LiteralBoolean60->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow59_LiteralBoolean60->setValue(true);
			primechecker_checkIfPrime_ObjectFlow59->setGuard(primechecker_checkIfPrime_ObjectFlow59_LiteralBoolean60);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow59);
			// ObjectFlow ObjectFlow69 from MergeNumber to ForkNumber
			primechecker_checkIfPrime_ObjectFlow69->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow69);
			primechecker_checkIfPrime_ObjectFlow69->setName("ObjectFlow69");
			primechecker_checkIfPrime_ObjectFlow69->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow69->setSource(primechecker_checkIfPrime_MergeNumber);
			primechecker_checkIfPrime_ObjectFlow69->setTarget(primechecker_checkIfPrime_ForkNumber);
				// LiteralBoolean LiteralBoolean70
				primechecker_checkIfPrime_ObjectFlow69_LiteralBoolean70->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow69_LiteralBoolean70);
				primechecker_checkIfPrime_ObjectFlow69_LiteralBoolean70->setName("LiteralBoolean70");
				primechecker_checkIfPrime_ObjectFlow69_LiteralBoolean70->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow69_LiteralBoolean70->setValue(true);
			primechecker_checkIfPrime_ObjectFlow69->setGuard(primechecker_checkIfPrime_ObjectFlow69_LiteralBoolean70);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow69);
			// ObjectFlow ObjectFlow72 from out_i to in_i
			primechecker_checkIfPrime_ObjectFlow72->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow72);
			primechecker_checkIfPrime_ObjectFlow72->setName("ObjectFlow72");
			primechecker_checkIfPrime_ObjectFlow72->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow72->setSource(primechecker_checkIfPrime_callDoPrimeCheck_out_i);
			primechecker_checkIfPrime_ObjectFlow72->setTarget(primechecker_checkIfPrime_callIncrement_in_i);
				// LiteralBoolean LiteralBoolean73
				primechecker_checkIfPrime_ObjectFlow72_LiteralBoolean73->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow72_LiteralBoolean73);
				primechecker_checkIfPrime_ObjectFlow72_LiteralBoolean73->setName("LiteralBoolean73");
				primechecker_checkIfPrime_ObjectFlow72_LiteralBoolean73->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow72_LiteralBoolean73->setValue(true);
			primechecker_checkIfPrime_ObjectFlow72->setGuard(primechecker_checkIfPrime_ObjectFlow72_LiteralBoolean73);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow72);
			// ObjectFlow ObjectFlow75 from out_number to MergeNumber
			primechecker_checkIfPrime_ObjectFlow75->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow75);
			primechecker_checkIfPrime_ObjectFlow75->setName("ObjectFlow75");
			primechecker_checkIfPrime_ObjectFlow75->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow75->setSource(primechecker_checkIfPrime_callDoPrimeCheck_out_number);
			primechecker_checkIfPrime_ObjectFlow75->setTarget(primechecker_checkIfPrime_MergeNumber);
				// LiteralBoolean LiteralBoolean77
				primechecker_checkIfPrime_ObjectFlow75_LiteralBoolean77->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow75_LiteralBoolean77);
				primechecker_checkIfPrime_ObjectFlow75_LiteralBoolean77->setName("LiteralBoolean77");
				primechecker_checkIfPrime_ObjectFlow75_LiteralBoolean77->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow75_LiteralBoolean77->setValue(true);
			primechecker_checkIfPrime_ObjectFlow75->setGuard(primechecker_checkIfPrime_ObjectFlow75_LiteralBoolean77);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow75);
			// ObjectFlow ObjectFlow78 from Merge_i to in_i
			primechecker_checkIfPrime_ObjectFlow78->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow78);
			primechecker_checkIfPrime_ObjectFlow78->setName("ObjectFlow78");
			primechecker_checkIfPrime_ObjectFlow78->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow78->setSource(primechecker_checkIfPrime_Merge_i);
			primechecker_checkIfPrime_ObjectFlow78->setTarget(primechecker_checkIfPrime_callCheckLoopCondition_in_i);
				// LiteralBoolean LiteralBoolean80
				primechecker_checkIfPrime_ObjectFlow78_LiteralBoolean80->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow78_LiteralBoolean80);
				primechecker_checkIfPrime_ObjectFlow78_LiteralBoolean80->setName("LiteralBoolean80");
				primechecker_checkIfPrime_ObjectFlow78_LiteralBoolean80->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow78_LiteralBoolean80->setValue(true);
			primechecker_checkIfPrime_ObjectFlow78->setGuard(primechecker_checkIfPrime_ObjectFlow78_LiteralBoolean80);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow78);
			// ControlFlow ControlFlow81 from callCheckLoopCondition to MergeControl
			primechecker_checkIfPrime_ControlFlow81->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow81);
			primechecker_checkIfPrime_ControlFlow81->setName("ControlFlow81");
			primechecker_checkIfPrime_ControlFlow81->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow81->setSource(primechecker_checkIfPrime_callCheckLoopCondition);
			primechecker_checkIfPrime_ControlFlow81->setTarget(primechecker_checkIfPrime_MergeControl);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow81);
			// ObjectFlow ObjectFlow82 from out_i to Merge_i
			primechecker_checkIfPrime_ObjectFlow82->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow82);
			primechecker_checkIfPrime_ObjectFlow82->setName("ObjectFlow82");
			primechecker_checkIfPrime_ObjectFlow82->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow82->setSource(primechecker_checkIfPrime_callIncrement_out_i);
			primechecker_checkIfPrime_ObjectFlow82->setTarget(primechecker_checkIfPrime_Merge_i);
				// LiteralBoolean LiteralBoolean84
				primechecker_checkIfPrime_ObjectFlow82_LiteralBoolean84->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow82_LiteralBoolean84);
				primechecker_checkIfPrime_ObjectFlow82_LiteralBoolean84->setName("LiteralBoolean84");
				primechecker_checkIfPrime_ObjectFlow82_LiteralBoolean84->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow82_LiteralBoolean84->setValue(true);
			primechecker_checkIfPrime_ObjectFlow82->setGuard(primechecker_checkIfPrime_ObjectFlow82_LiteralBoolean84);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow82);
			// ControlFlow ControlFlow85 from conditionOk to callDoPrimeCheck
			primechecker_checkIfPrime_ControlFlow85->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow85);
			primechecker_checkIfPrime_ControlFlow85->setName("ControlFlow85");
			primechecker_checkIfPrime_ControlFlow85->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow85->setSource(primechecker_checkIfPrime_conditionOk);
			primechecker_checkIfPrime_ControlFlow85->setTarget(primechecker_checkIfPrime_callDoPrimeCheck);
				// LiteralBoolean LiteralBoolean86
				primechecker_checkIfPrime_ControlFlow85_LiteralBoolean86->setThisElementPtr(primechecker_checkIfPrime_ControlFlow85_LiteralBoolean86);
				primechecker_checkIfPrime_ControlFlow85_LiteralBoolean86->setName("LiteralBoolean86");
				primechecker_checkIfPrime_ControlFlow85_LiteralBoolean86->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ControlFlow85_LiteralBoolean86->setValue(true);
			primechecker_checkIfPrime_ControlFlow85->setGuard(primechecker_checkIfPrime_ControlFlow85_LiteralBoolean86);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow85);
			// ControlFlow ControlFlow87 from isNotPrime to callIncrement
			primechecker_checkIfPrime_ControlFlow87->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow87);
			primechecker_checkIfPrime_ControlFlow87->setName("ControlFlow87");
			primechecker_checkIfPrime_ControlFlow87->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow87->setSource(primechecker_checkIfPrime_isNotPrime);
			primechecker_checkIfPrime_ControlFlow87->setTarget(primechecker_checkIfPrime_callIncrement);
				// LiteralBoolean LiteralBoolean88
				primechecker_checkIfPrime_ControlFlow87_LiteralBoolean88->setThisElementPtr(primechecker_checkIfPrime_ControlFlow87_LiteralBoolean88);
				primechecker_checkIfPrime_ControlFlow87_LiteralBoolean88->setName("LiteralBoolean88");
				primechecker_checkIfPrime_ControlFlow87_LiteralBoolean88->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ControlFlow87_LiteralBoolean88->setValue(false);
			primechecker_checkIfPrime_ControlFlow87->setGuard(primechecker_checkIfPrime_ControlFlow87_LiteralBoolean88);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow87);
			// ObjectFlow ObjectFlow89 from ForkNumber to number
			primechecker_checkIfPrime_ObjectFlow89->setThisActivityEdgePtr(primechecker_checkIfPrime_ObjectFlow89);
			primechecker_checkIfPrime_ObjectFlow89->setName("ObjectFlow89");
			primechecker_checkIfPrime_ObjectFlow89->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ObjectFlow89->setSource(primechecker_checkIfPrime_ForkNumber);
			primechecker_checkIfPrime_ObjectFlow89->setTarget(primechecker_checkIfPrime_callCheckLoopCondition_number);
				// LiteralBoolean LiteralBoolean91
				primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean91->setThisElementPtr(primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean91);
				primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean91->setName("LiteralBoolean91");
				primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean91->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean91->setValue(true);
			primechecker_checkIfPrime_ObjectFlow89->setGuard(primechecker_checkIfPrime_ObjectFlow89_LiteralBoolean91);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ObjectFlow89);
			// ControlFlow ControlFlow92 from isNotPrime to MergeIsNotPrime
			primechecker_checkIfPrime_ControlFlow92->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow92);
			primechecker_checkIfPrime_ControlFlow92->setName("ControlFlow92");
			primechecker_checkIfPrime_ControlFlow92->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow92->setSource(primechecker_checkIfPrime_isNotPrime);
			primechecker_checkIfPrime_ControlFlow92->setTarget(primechecker_checkIfPrime_MergeIsNotPrime);
				// LiteralBoolean LiteralBoolean93
				primechecker_checkIfPrime_ControlFlow92_LiteralBoolean93->setThisElementPtr(primechecker_checkIfPrime_ControlFlow92_LiteralBoolean93);
				primechecker_checkIfPrime_ControlFlow92_LiteralBoolean93->setName("LiteralBoolean93");
				primechecker_checkIfPrime_ControlFlow92_LiteralBoolean93->setVisibility(VisibilityKind::public_);
				primechecker_checkIfPrime_ControlFlow92_LiteralBoolean93->setValue(true);
			primechecker_checkIfPrime_ControlFlow92->setGuard(primechecker_checkIfPrime_ControlFlow92_LiteralBoolean93);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow92);
			// ControlFlow ControlFlow94 from MergeControl to callCheckLoopCondition
			primechecker_checkIfPrime_ControlFlow94->setThisActivityEdgePtr(primechecker_checkIfPrime_ControlFlow94);
			primechecker_checkIfPrime_ControlFlow94->setName("ControlFlow94");
			primechecker_checkIfPrime_ControlFlow94->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIfPrime_ControlFlow94->setSource(primechecker_checkIfPrime_MergeControl);
			primechecker_checkIfPrime_ControlFlow94->setTarget(primechecker_checkIfPrime_callCheckLoopCondition);
		primechecker_checkIfPrime->addEdge(primechecker_checkIfPrime_ControlFlow94);
	primechecker->addPackagedElement(primechecker_checkIfPrime);
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
		// OpaqueBehavior printIsNotPrime
		primechecker_printIsNotPrime->setThisClass_Ptr(primechecker_printIsNotPrime);
		primechecker_printIsNotPrime->setName("printIsNotPrime");
		primechecker_printIsNotPrime->setVisibility(VisibilityKind::public_);
		primechecker_printIsNotPrime->addLanguage("C++");
		primechecker_printIsNotPrime->addBody("std::cout<<\"Number is not prime\"<<std::endl;");
	primechecker->addPackagedElement(primechecker_printIsNotPrime);
		// OpaqueBehavior checkIf_1_Or_0
		primechecker_checkIf_1_Or_0->setThisClass_Ptr(primechecker_checkIf_1_Or_0);
		primechecker_checkIf_1_Or_0->setName("checkIf_1_Or_0");
		primechecker_checkIf_1_Or_0->setVisibility(VisibilityKind::public_);
			// Parameter in_number
			primechecker_checkIf_1_Or_0_in_number->setThisElementPtr(primechecker_checkIf_1_Or_0_in_number);
			primechecker_checkIf_1_Or_0_in_number->setName("in_number");
			primechecker_checkIf_1_Or_0_in_number->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIf_1_Or_0_in_number->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		primechecker_checkIf_1_Or_0->addOwnedParameter(primechecker_checkIf_1_Or_0_in_number);
			// Parameter out_number
			primechecker_checkIf_1_Or_0_out_number->setThisElementPtr(primechecker_checkIf_1_Or_0_out_number);
			primechecker_checkIf_1_Or_0_out_number->setName("out_number");
			primechecker_checkIf_1_Or_0_out_number->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIf_1_Or_0_out_number->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			primechecker_checkIf_1_Or_0_out_number->setDirection(ParameterDirectionKind::out);
		primechecker_checkIf_1_Or_0->addOwnedParameter(primechecker_checkIf_1_Or_0_out_number);
			// Parameter result
			primechecker_checkIf_1_Or_0_result->setThisElementPtr(primechecker_checkIf_1_Or_0_result);
			primechecker_checkIf_1_Or_0_result->setName("result");
			primechecker_checkIf_1_Or_0_result->setVisibility(VisibilityKind::public_);
			
			primechecker_checkIf_1_Or_0_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			primechecker_checkIf_1_Or_0_result->setDirection(ParameterDirectionKind::return_);
		primechecker_checkIf_1_Or_0->addOwnedParameter(primechecker_checkIf_1_Or_0_result);
		primechecker_checkIf_1_Or_0->addLanguage("C++");
		primechecker_checkIf_1_Or_0->addBody("int number = std::dynamic_pointer_cast<IntegerValue>(inputParameters->at(0)->values->at(0))->value;  fuml::Debug::println(\"[doBody] number = \" + std::to_string(number));  bool resultBoolean = (number == 0 || number == 1);  outputParameters->at(0)->values = inputParameters->at(0)->values;  BooleanValuePtr result(new BooleanValue()); result->value = resultBoolean; result->type = this->locus->factory->getBuiltInType(\"Boolean\");  fuml::Debug::println(\"[doBody] result = \" + std::to_string(resultBoolean));  outputParameters->at(1)->values->push_back(result);");
	primechecker->addPackagedElement(primechecker_checkIf_1_Or_0);
}
