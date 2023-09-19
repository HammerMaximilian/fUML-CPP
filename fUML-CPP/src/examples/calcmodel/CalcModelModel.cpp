/*
 * CalcModelModel.cpp
 * 
 * Auto-generated file
 */

#include "CalcModelModel.h"

#include <fuml/syntax/actions/CallBehaviorAction.h>
#include <fuml/syntax/actions/CallOperationAction.h>
#include <fuml/syntax/actions/OutputPin.h>
#include <fuml/syntax/activities/ActivityFinalNode.h>
#include <fuml/syntax/activities/ControlFlow.h>
#include <fuml/syntax/values/LiteralBoolean.h>
#include <fuml/syntax/activities/InitialNode.h>
#include <fuml/syntax/classification/Property.h>
#include <fuml/syntax/simpleclassifiers/PrimitiveType.h>
#include <fuml/syntax/actions/InputPin.h>
#include <fuml/syntax/activities/Activity.h>
#include <fuml/syntax/activities/DecisionNode.h>
#include <fuml/syntax/structuredclassifiers/Class_.h>
#include <fuml/syntax/values/LiteralInteger.h>
#include <fuml/syntax/classification/Operation.h>
#include <fuml/syntax/values/LiteralString.h>
#include <utils/library/LibraryModel.h>
#include <fuml/syntax/activities/ObjectFlow.h>
#include <fuml/syntax/classification/Parameter.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <fuml/syntax/activities/MergeNode.h>
#include <fuml/syntax/commonbehavior/OpaqueBehavior.h>
#include <fuml/syntax/packages/Package.h>


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

using namespace CalcModel;
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

CalcModelModel::CalcModelModel()
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

CalcModelModel::~CalcModelModel()
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

const std::shared_ptr<CalcModelModel>& CalcModelModel::Instance()
{
	static std::shared_ptr<CalcModelModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new CalcModelModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void CalcModelModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model CalcModel
	 */
	CalcModel.reset(new Package());
	this->addToElementRepository("CalcModel", CalcModel);
		CalcModel_PrimeChecker.reset(new Class_());
		this->addToElementRepository("PrimeChecker", CalcModel_PrimeChecker);
			CalcModel_PrimeChecker_fbNext.reset(new OpaqueBehavior());
			this->addToElementRepository("fbNext", CalcModel_PrimeChecker_fbNext);
			CalcModel_PrimeChecker_obEnterNumber.reset(new OpaqueBehavior());
			this->addToElementRepository("obEnterNumber", CalcModel_PrimeChecker_obEnterNumber);
			CalcModel_PrimeChecker_number.reset(new Property());
			this->addToElementRepository("number", CalcModel_PrimeChecker_number);
				CalcModel_PrimeChecker_number_LiteralInteger0.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger0", CalcModel_PrimeChecker_number_LiteralInteger0);
			CalcModel_PrimeChecker_fbIsNotFinished.reset(new OpaqueBehavior());
			this->addToElementRepository("fbIsNotFinished", CalcModel_PrimeChecker_fbIsNotFinished);
				CalcModel_PrimeChecker_fbIsNotFinished_isNotFinished.reset(new Parameter());
				this->addToElementRepository("isNotFinished", CalcModel_PrimeChecker_fbIsNotFinished_isNotFinished);
			CalcModel_PrimeChecker_fbPrintIsPrime.reset(new OpaqueBehavior());
			this->addToElementRepository("fbPrintIsPrime", CalcModel_PrimeChecker_fbPrintIsPrime);
			CalcModel_PrimeChecker_fbIsOdd.reset(new OpaqueBehavior());
			this->addToElementRepository("fbIsOdd", CalcModel_PrimeChecker_fbIsOdd);
				CalcModel_PrimeChecker_fbIsOdd_isOdd.reset(new Parameter());
				this->addToElementRepository("isOdd", CalcModel_PrimeChecker_fbIsOdd_isOdd);
					CalcModel_PrimeChecker_fbIsOdd_isOdd_LiteralString1.reset(new LiteralString());
					this->addToElementRepository("LiteralString1", CalcModel_PrimeChecker_fbIsOdd_isOdd_LiteralString1);
			CalcModel_PrimeChecker_CheckIfPrime.reset(new Activity());
			this->addToElementRepository("CheckIfPrime", CalcModel_PrimeChecker_CheckIfPrime);
				CalcModel_PrimeChecker_CheckIfPrime_actInputNode.reset(new Parameter());
				this->addToElementRepository("actInputNode", CalcModel_PrimeChecker_CheckIfPrime_actInputNode);
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow2", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2_next_call_To_Merge_weight.reset(new LiteralInteger());
					this->addToElementRepository("next_call_To_Merge_weight", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2_next_call_To_Merge_weight);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2_next_call_To_Merge_guard.reset(new LiteralBoolean());
					this->addToElementRepository("next_call_To_Merge_guard", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2_next_call_To_Merge_guard);
				CalcModel_PrimeChecker_CheckIfPrime_dn_IsOdd.reset(new DecisionNode());
				this->addToElementRepository("dn_IsOdd", CalcModel_PrimeChecker_CheckIfPrime_dn_IsOdd);
				CalcModel_PrimeChecker_CheckIfPrime_coaNext.reset(new CallOperationAction());
				this->addToElementRepository("coaNext", CalcModel_PrimeChecker_CheckIfPrime_coaNext);
					CalcModel_PrimeChecker_CheckIfPrime_coaNext_self.reset(new InputPin());
					this->addToElementRepository("self", CalcModel_PrimeChecker_CheckIfPrime_coaNext_self);
				CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber.reset(new CallOperationAction());
				this->addToElementRepository("coa_enterNumber", CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber);
					CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber_self.reset(new InputPin());
					this->addToElementRepository("self", CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber_self);
				CalcModel_PrimeChecker_CheckIfPrime_dn_divides.reset(new DecisionNode());
				this->addToElementRepository("dn_divides", CalcModel_PrimeChecker_CheckIfPrime_dn_divides);
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow3.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow3", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow3);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow3_isNotFinishedGuard.reset(new LiteralBoolean());
					this->addToElementRepository("isNotFinishedGuard", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow3_isNotFinishedGuard);
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow4.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow4", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow4);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow4_isOddGuard.reset(new LiteralBoolean());
					this->addToElementRepository("isOddGuard", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow4_isOddGuard);
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow5", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5_Initial1_To_enterNumber_weight.reset(new LiteralInteger());
					this->addToElementRepository("Initial1_To_enterNumber_weight", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5_Initial1_To_enterNumber_weight);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5_Initial1_To_enterNumber_guard.reset(new LiteralBoolean());
					this->addToElementRepository("Initial1_To_enterNumber_guard", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5_Initial1_To_enterNumber_guard);
				CalcModel_PrimeChecker_CheckIfPrime_Merge.reset(new MergeNode());
				this->addToElementRepository("Merge", CalcModel_PrimeChecker_CheckIfPrime_Merge);
				CalcModel_PrimeChecker_CheckIfPrime_coaDivides.reset(new CallOperationAction());
				this->addToElementRepository("coaDivides", CalcModel_PrimeChecker_CheckIfPrime_coaDivides);
					CalcModel_PrimeChecker_CheckIfPrime_coaDivides_self.reset(new InputPin());
					this->addToElementRepository("self", CalcModel_PrimeChecker_CheckIfPrime_coaDivides_self);
					CalcModel_PrimeChecker_CheckIfPrime_coaDivides_isDivisible.reset(new OutputPin());
					this->addToElementRepository("isDivisible", CalcModel_PrimeChecker_CheckIfPrime_coaDivides_isDivisible);
				CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished.reset(new CallOperationAction());
				this->addToElementRepository("coaIsNotFinished", CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished);
					CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_self.reset(new InputPin());
					this->addToElementRepository("self", CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_self);
					CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_isNotFinished.reset(new OutputPin());
					this->addToElementRepository("isNotFinished", CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_isNotFinished);
				CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime.reset(new CallBehaviorAction());
				this->addToElementRepository("cbaPrintNotPrime", CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime);
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow6.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow6", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow6);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow6_isNotOdd.reset(new LiteralBoolean());
					this->addToElementRepository("isNotOdd", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow6_isNotOdd);
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow7", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7__To_ActivityFinal1_weight.reset(new LiteralInteger());
					this->addToElementRepository("_To_ActivityFinal1_weight", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7__To_ActivityFinal1_weight);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7__To_ActivityFinal1_guard.reset(new LiteralBoolean());
					this->addToElementRepository("_To_ActivityFinal1_guard", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7__To_ActivityFinal1_guard);
				CalcModel_PrimeChecker_CheckIfPrime_cbaPrintIsPrime.reset(new CallBehaviorAction());
				this->addToElementRepository("cbaPrintIsPrime", CalcModel_PrimeChecker_CheckIfPrime_cbaPrintIsPrime);
				CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal2.reset(new ActivityFinalNode());
				this->addToElementRepository("ActivityFinal2", CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal2);
				CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime2.reset(new CallBehaviorAction());
				this->addToElementRepository("cbaPrintNotPrime2", CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime2);
				CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd.reset(new CallOperationAction());
				this->addToElementRepository("coaIsOdd", CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd);
					CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_self.reset(new InputPin());
					this->addToElementRepository("self", CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_self);
					CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_isOdd.reset(new OutputPin());
					this->addToElementRepository("isOdd", CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_isOdd);
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow8", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8_Merge_To_coaDivides_guard.reset(new LiteralBoolean());
					this->addToElementRepository("Merge_To_coaDivides_guard", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8_Merge_To_coaDivides_guard);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8_Merge_To_coaDivides_weight.reset(new LiteralInteger());
					this->addToElementRepository("Merge_To_coaDivides_weight", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8_Merge_To_coaDivides_weight);
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow9", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9_divides_To__guard.reset(new LiteralBoolean());
					this->addToElementRepository("divides_To__guard", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9_divides_To__guard);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9_divides_To__weight.reset(new LiteralInteger());
					this->addToElementRepository("divides_To__weight", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9_divides_To__weight);
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow10", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10_divides_To_next_call_guard.reset(new LiteralBoolean());
					this->addToElementRepository("divides_To_next_call_guard", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10_divides_To_next_call_guard);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10_divides_To_next_call_weight.reset(new LiteralInteger());
					this->addToElementRepository("divides_To_next_call_weight", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10_divides_To_next_call_weight);
				CalcModel_PrimeChecker_CheckIfPrime_ifIsNotFinished.reset(new ObjectFlow());
				this->addToElementRepository("ifIsNotFinished", CalcModel_PrimeChecker_CheckIfPrime_ifIsNotFinished);
				CalcModel_PrimeChecker_CheckIfPrime_dn_isNotFinished.reset(new DecisionNode());
				this->addToElementRepository("dn_isNotFinished", CalcModel_PrimeChecker_CheckIfPrime_dn_isNotFinished);
				CalcModel_PrimeChecker_CheckIfPrime_ifIsOdd.reset(new ObjectFlow());
				this->addToElementRepository("ifIsOdd", CalcModel_PrimeChecker_CheckIfPrime_ifIsOdd);
				CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal1.reset(new ActivityFinalNode());
				this->addToElementRepository("ActivityFinal1", CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal1);
				CalcModel_PrimeChecker_CheckIfPrime_Initial1.reset(new InitialNode());
				this->addToElementRepository("Initial1", CalcModel_PrimeChecker_CheckIfPrime_Initial1);
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow11", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11__To_ActivityFinal2_guard.reset(new LiteralBoolean());
					this->addToElementRepository("_To_ActivityFinal2_guard", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11__To_ActivityFinal2_guard);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11__To_ActivityFinal2_weight.reset(new LiteralInteger());
					this->addToElementRepository("_To_ActivityFinal2_weight", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11__To_ActivityFinal2_weight);
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow12", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12_isNotFinished_To__weight.reset(new LiteralInteger());
					this->addToElementRepository("isNotFinished_To__weight", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12_isNotFinished_To__weight);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12_isNotFinished_To__guard.reset(new LiteralBoolean());
					this->addToElementRepository("isNotFinished_To__guard", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12_isNotFinished_To__guard);
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow13", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13_enterNumber_To_coaIsOdd_weight.reset(new LiteralInteger());
					this->addToElementRepository("enterNumber_To_coaIsOdd_weight", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13_enterNumber_To_coaIsOdd_weight);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13_enterNumber_To_coaIsOdd_guard.reset(new LiteralBoolean());
					this->addToElementRepository("enterNumber_To_coaIsOdd_guard", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13_enterNumber_To_coaIsOdd_guard);
				CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal3.reset(new ActivityFinalNode());
				this->addToElementRepository("ActivityFinal3", CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal3);
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow14", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14__To_ActivityFinal3_weight.reset(new LiteralInteger());
					this->addToElementRepository("_To_ActivityFinal3_weight", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14__To_ActivityFinal3_weight);
					CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14__To_ActivityFinal3_guard.reset(new LiteralBoolean());
					this->addToElementRepository("_To_ActivityFinal3_guard", CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14__To_ActivityFinal3_guard);
				CalcModel_PrimeChecker_CheckIfPrime_ifDivides.reset(new ObjectFlow());
				this->addToElementRepository("ifDivides", CalcModel_PrimeChecker_CheckIfPrime_ifDivides);
			CalcModel_PrimeChecker_isNotFinished.reset(new Operation());
			this->addToElementRepository("isNotFinished", CalcModel_PrimeChecker_isNotFinished);
				CalcModel_PrimeChecker_isNotFinished_isNotFinished.reset(new Parameter());
				this->addToElementRepository("isNotFinished", CalcModel_PrimeChecker_isNotFinished_isNotFinished);
			CalcModel_PrimeChecker_fbDivides.reset(new OpaqueBehavior());
			this->addToElementRepository("fbDivides", CalcModel_PrimeChecker_fbDivides);
				CalcModel_PrimeChecker_fbDivides_isDivisible.reset(new Parameter());
				this->addToElementRepository("isDivisible", CalcModel_PrimeChecker_fbDivides_isDivisible);
					CalcModel_PrimeChecker_fbDivides_isDivisible_LiteralString15.reset(new LiteralString());
					this->addToElementRepository("LiteralString15", CalcModel_PrimeChecker_fbDivides_isDivisible_LiteralString15);
			CalcModel_PrimeChecker_enterNumber.reset(new Operation());
			this->addToElementRepository("enterNumber", CalcModel_PrimeChecker_enterNumber);
			CalcModel_PrimeChecker_fbPrintNotPrime.reset(new OpaqueBehavior());
			this->addToElementRepository("fbPrintNotPrime", CalcModel_PrimeChecker_fbPrintNotPrime);
			CalcModel_PrimeChecker_isOdd.reset(new Operation());
			this->addToElementRepository("isOdd", CalcModel_PrimeChecker_isOdd);
				CalcModel_PrimeChecker_isOdd_isOdd.reset(new Parameter());
				this->addToElementRepository("isOdd", CalcModel_PrimeChecker_isOdd_isOdd);
			CalcModel_PrimeChecker_divides.reset(new Operation());
			this->addToElementRepository("divides", CalcModel_PrimeChecker_divides);
				CalcModel_PrimeChecker_divides_isDivisible.reset(new Parameter());
				this->addToElementRepository("isDivisible", CalcModel_PrimeChecker_divides_isDivisible);
			CalcModel_PrimeChecker_next.reset(new Operation());
			this->addToElementRepository("next", CalcModel_PrimeChecker_next);
			CalcModel_PrimeChecker_divider.reset(new Property());
			this->addToElementRepository("divider", CalcModel_PrimeChecker_divider);
				CalcModel_PrimeChecker_divider_LiteralInteger16.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger16", CalcModel_PrimeChecker_divider_LiteralInteger16);

	// Initialize public members
	/*
	 * Model CalcModel
	 */
	CalcModel->setThisPackagePtr(CalcModel);
	CalcModel->setName("CalcModel");
	CalcModel->setVisibility(VisibilityKind::public_);
		// Class PrimeChecker
		CalcModel_PrimeChecker->setThisClass_Ptr(CalcModel_PrimeChecker);
		CalcModel_PrimeChecker->setName("PrimeChecker");
		CalcModel_PrimeChecker->setVisibility(VisibilityKind::public_);
		// Property number
			CalcModel_PrimeChecker_number->setThisElementPtr(CalcModel_PrimeChecker_number);
			CalcModel_PrimeChecker_number->setName("number");
			CalcModel_PrimeChecker_number->setVisibility(VisibilityKind::public_);
			
			
			CalcModel_PrimeChecker_number->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		CalcModel_PrimeChecker->addOwnedAttribute(CalcModel_PrimeChecker_number);
			// Property divider
			CalcModel_PrimeChecker_divider->setThisElementPtr(CalcModel_PrimeChecker_divider);
			CalcModel_PrimeChecker_divider->setName("divider");
			CalcModel_PrimeChecker_divider->setVisibility(VisibilityKind::public_);
			
			
			CalcModel_PrimeChecker_divider->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		CalcModel_PrimeChecker->addOwnedAttribute(CalcModel_PrimeChecker_divider);
			// FunctionBehavior fbDivides
			CalcModel_PrimeChecker_fbDivides->setThisClass_Ptr(CalcModel_PrimeChecker_fbDivides);
			CalcModel_PrimeChecker_fbDivides->setName("fbDivides");
			CalcModel_PrimeChecker_fbDivides->setVisibility(VisibilityKind::public_);
				// Parameter isDivisible
				CalcModel_PrimeChecker_fbDivides_isDivisible->setThisElementPtr(CalcModel_PrimeChecker_fbDivides_isDivisible);
				CalcModel_PrimeChecker_fbDivides_isDivisible->setName("isDivisible");
				CalcModel_PrimeChecker_fbDivides_isDivisible->setVisibility(VisibilityKind::public_);
				
				CalcModel_PrimeChecker_fbDivides_isDivisible->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				CalcModel_PrimeChecker_fbDivides_isDivisible->setDirection(ParameterDirectionKind::return_);
			CalcModel_PrimeChecker_fbDivides->addOwnedParameter(CalcModel_PrimeChecker_fbDivides_isDivisible);
			CalcModel_PrimeChecker_fbDivides->addLanguage("CPP");
			CalcModel_PrimeChecker_fbDivides->addBody("isDivisible = this->getNumber() % this->getDivider() == 0;");
		CalcModel_PrimeChecker->addOwnedBehavior(CalcModel_PrimeChecker_fbDivides);
			// FunctionBehavior fbNext
			CalcModel_PrimeChecker_fbNext->setThisClass_Ptr(CalcModel_PrimeChecker_fbNext);
			CalcModel_PrimeChecker_fbNext->setName("fbNext");
			CalcModel_PrimeChecker_fbNext->setVisibility(VisibilityKind::public_);
			CalcModel_PrimeChecker_fbNext->addLanguage("CPP");
			CalcModel_PrimeChecker_fbNext->addBody("this->setDivider (this->getDivider() + 2);");
		CalcModel_PrimeChecker->addOwnedBehavior(CalcModel_PrimeChecker_fbNext);
			// OpaqueBehavior obEnterNumber
			CalcModel_PrimeChecker_obEnterNumber->setThisClass_Ptr(CalcModel_PrimeChecker_obEnterNumber);
			CalcModel_PrimeChecker_obEnterNumber->setName("obEnterNumber");
			CalcModel_PrimeChecker_obEnterNumber->setVisibility(VisibilityKind::public_);
			CalcModel_PrimeChecker_obEnterNumber->addLanguage("CPP");
			CalcModel_PrimeChecker_obEnterNumber->addLanguage("INCLUDE");
			CalcModel_PrimeChecker_obEnterNumber->addBody("std::cout << \"Please enter a number: \"; std::cin >> this->m_number;");
			CalcModel_PrimeChecker_obEnterNumber->addBody("#include <iostream>");
			CalcModel_PrimeChecker_obEnterNumber->addBody("//LIBRARY");
		CalcModel_PrimeChecker->addOwnedBehavior(CalcModel_PrimeChecker_obEnterNumber);
			// FunctionBehavior fbIsNotFinished
			CalcModel_PrimeChecker_fbIsNotFinished->setThisClass_Ptr(CalcModel_PrimeChecker_fbIsNotFinished);
			CalcModel_PrimeChecker_fbIsNotFinished->setName("fbIsNotFinished");
			CalcModel_PrimeChecker_fbIsNotFinished->setVisibility(VisibilityKind::public_);
				// Parameter isNotFinished
				CalcModel_PrimeChecker_fbIsNotFinished_isNotFinished->setThisElementPtr(CalcModel_PrimeChecker_fbIsNotFinished_isNotFinished);
				CalcModel_PrimeChecker_fbIsNotFinished_isNotFinished->setName("isNotFinished");
				CalcModel_PrimeChecker_fbIsNotFinished_isNotFinished->setVisibility(VisibilityKind::public_);
				
				CalcModel_PrimeChecker_fbIsNotFinished_isNotFinished->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				CalcModel_PrimeChecker_fbIsNotFinished_isNotFinished->setDirection(ParameterDirectionKind::return_);
			CalcModel_PrimeChecker_fbIsNotFinished->addOwnedParameter(CalcModel_PrimeChecker_fbIsNotFinished_isNotFinished);
			CalcModel_PrimeChecker_fbIsNotFinished->addLanguage("CPP");
			CalcModel_PrimeChecker_fbIsNotFinished->addBody("isNotFinished = this->getDivider() <= this->getNumber() / 2;");
		CalcModel_PrimeChecker->addOwnedBehavior(CalcModel_PrimeChecker_fbIsNotFinished);
			// FunctionBehavior fbPrintNotPrime
			CalcModel_PrimeChecker_fbPrintNotPrime->setThisClass_Ptr(CalcModel_PrimeChecker_fbPrintNotPrime);
			CalcModel_PrimeChecker_fbPrintNotPrime->setName("fbPrintNotPrime");
			CalcModel_PrimeChecker_fbPrintNotPrime->setVisibility(VisibilityKind::public_);
			CalcModel_PrimeChecker_fbPrintNotPrime->addLanguage("CPP");
			CalcModel_PrimeChecker_fbPrintNotPrime->addLanguage("INCLUDE");
			CalcModel_PrimeChecker_fbPrintNotPrime->addBody("std::cout<<\"Number is not prime\";");
			CalcModel_PrimeChecker_fbPrintNotPrime->addBody("#include <iostream>");
		CalcModel_PrimeChecker->addOwnedBehavior(CalcModel_PrimeChecker_fbPrintNotPrime);
			// FunctionBehavior fbPrintIsPrime
			CalcModel_PrimeChecker_fbPrintIsPrime->setThisClass_Ptr(CalcModel_PrimeChecker_fbPrintIsPrime);
			CalcModel_PrimeChecker_fbPrintIsPrime->setName("fbPrintIsPrime");
			CalcModel_PrimeChecker_fbPrintIsPrime->setVisibility(VisibilityKind::public_);
			CalcModel_PrimeChecker_fbPrintIsPrime->addLanguage("CPP");
			CalcModel_PrimeChecker_fbPrintIsPrime->addLanguage("INCLUDE");
			CalcModel_PrimeChecker_fbPrintIsPrime->addBody("std::cout<<\"Number is prime\"<<std::endl;");
			CalcModel_PrimeChecker_fbPrintIsPrime->addBody("#include <iostream>");
		CalcModel_PrimeChecker->addOwnedBehavior(CalcModel_PrimeChecker_fbPrintIsPrime);
			// FunctionBehavior fbIsOdd
			CalcModel_PrimeChecker_fbIsOdd->setThisClass_Ptr(CalcModel_PrimeChecker_fbIsOdd);
			CalcModel_PrimeChecker_fbIsOdd->setName("fbIsOdd");
			CalcModel_PrimeChecker_fbIsOdd->setVisibility(VisibilityKind::public_);
				// Parameter isOdd
				CalcModel_PrimeChecker_fbIsOdd_isOdd->setThisElementPtr(CalcModel_PrimeChecker_fbIsOdd_isOdd);
				CalcModel_PrimeChecker_fbIsOdd_isOdd->setName("isOdd");
				CalcModel_PrimeChecker_fbIsOdd_isOdd->setVisibility(VisibilityKind::public_);
				
				CalcModel_PrimeChecker_fbIsOdd_isOdd->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				CalcModel_PrimeChecker_fbIsOdd_isOdd->setDirection(ParameterDirectionKind::return_);
			CalcModel_PrimeChecker_fbIsOdd->addOwnedParameter(CalcModel_PrimeChecker_fbIsOdd_isOdd);
			CalcModel_PrimeChecker_fbIsOdd->addLanguage("CPP");
			CalcModel_PrimeChecker_fbIsOdd->addBody("isOdd = this->getNumber() % 2 != 0;");
		CalcModel_PrimeChecker->addOwnedBehavior(CalcModel_PrimeChecker_fbIsOdd);
			// Activity CheckIfPrime
			CalcModel_PrimeChecker_CheckIfPrime->setThisActivityPtr(CalcModel_PrimeChecker_CheckIfPrime);
			CalcModel_PrimeChecker_CheckIfPrime->setName("CheckIfPrime");
			CalcModel_PrimeChecker_CheckIfPrime->setVisibility(VisibilityKind::public_);
				// Parameter actInputNode
				CalcModel_PrimeChecker_CheckIfPrime_actInputNode->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_actInputNode);
				CalcModel_PrimeChecker_CheckIfPrime_actInputNode->setName("actInputNode");
				CalcModel_PrimeChecker_CheckIfPrime_actInputNode->setVisibility(VisibilityKind::public_);
				
				CalcModel_PrimeChecker_CheckIfPrime_actInputNode->setType(CalcModel_PrimeChecker);
			CalcModel_PrimeChecker_CheckIfPrime->addOwnedParameter(CalcModel_PrimeChecker_CheckIfPrime_actInputNode);
				// DecisionNode dn_IsOdd
				CalcModel_PrimeChecker_CheckIfPrime_dn_IsOdd->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_dn_IsOdd);
				CalcModel_PrimeChecker_CheckIfPrime_dn_IsOdd->setName("dn_IsOdd");
				CalcModel_PrimeChecker_CheckIfPrime_dn_IsOdd->setVisibility(VisibilityKind::public_);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_dn_IsOdd);
				// ActivityFinalNode ActivityFinal2
				CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal2->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal2);
				CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal2->setName("ActivityFinal2");
				CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal2->setVisibility(VisibilityKind::public_);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal2);
				// CallBehaviorAction cbaPrintNotPrime2
				CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime2->setThisExecutableNodePtr(CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime2);
				CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime2->setName("cbaPrintNotPrime2");
				CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime2->setVisibility(VisibilityKind::public_);
				
				CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime2->setBehavior(CalcModel_PrimeChecker_fbPrintNotPrime);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime2);
				// CallOperationAction coaNext
				CalcModel_PrimeChecker_CheckIfPrime_coaNext->setThisExecutableNodePtr(CalcModel_PrimeChecker_CheckIfPrime_coaNext);
				CalcModel_PrimeChecker_CheckIfPrime_coaNext->setName("coaNext");
				CalcModel_PrimeChecker_CheckIfPrime_coaNext->setVisibility(VisibilityKind::public_);
				
				CalcModel_PrimeChecker_CheckIfPrime_coaNext->setOperation(CalcModel_PrimeChecker_next);
					// InputPin self
					CalcModel_PrimeChecker_CheckIfPrime_coaNext_self->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_coaNext_self);
					CalcModel_PrimeChecker_CheckIfPrime_coaNext_self->setName("self");
					CalcModel_PrimeChecker_CheckIfPrime_coaNext_self->setVisibility(VisibilityKind::public_);
					
					CalcModel_PrimeChecker_CheckIfPrime_coaNext_self->setType(CalcModel_PrimeChecker);
				CalcModel_PrimeChecker_CheckIfPrime_coaNext->setTarget(CalcModel_PrimeChecker_CheckIfPrime_coaNext_self);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_coaNext);
				// CallOperationAction coaIsOdd
				CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd->setThisExecutableNodePtr(CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd);
				CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd->setName("coaIsOdd");
				CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd->setVisibility(VisibilityKind::public_);
				// OutputPin isOdd
					CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_isOdd->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_isOdd);
					CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_isOdd->setName("isOdd");
					CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_isOdd->setVisibility(VisibilityKind::public_);
					
					CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_isOdd->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd->addResult(CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_isOdd);
				CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd->setOperation(CalcModel_PrimeChecker_isOdd);
					// InputPin self
					CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_self->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_self);
					CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_self->setName("self");
					CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_self->setVisibility(VisibilityKind::public_);
					
					CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_self->setType(CalcModel_PrimeChecker);
				CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd->setTarget(CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_self);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd);
				// CallOperationAction coa_enterNumber
				CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber->setThisExecutableNodePtr(CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber);
				CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber->setName("coa_enterNumber");
				CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber->setVisibility(VisibilityKind::public_);
				
				CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber->setOperation(CalcModel_PrimeChecker_enterNumber);
					// InputPin self
					CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber_self->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber_self);
					CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber_self->setName("self");
					CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber_self->setVisibility(VisibilityKind::public_);
					
					CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber_self->setType(CalcModel_PrimeChecker);
				CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber->setTarget(CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber_self);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber);
				// DecisionNode dn_isNotFinished
				CalcModel_PrimeChecker_CheckIfPrime_dn_isNotFinished->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_dn_isNotFinished);
				CalcModel_PrimeChecker_CheckIfPrime_dn_isNotFinished->setName("dn_isNotFinished");
				CalcModel_PrimeChecker_CheckIfPrime_dn_isNotFinished->setVisibility(VisibilityKind::public_);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_dn_isNotFinished);
				// DecisionNode dn_divides
				CalcModel_PrimeChecker_CheckIfPrime_dn_divides->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_dn_divides);
				CalcModel_PrimeChecker_CheckIfPrime_dn_divides->setName("dn_divides");
				CalcModel_PrimeChecker_CheckIfPrime_dn_divides->setVisibility(VisibilityKind::public_);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_dn_divides);
				// MergeNode Merge
				CalcModel_PrimeChecker_CheckIfPrime_Merge->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_Merge);
				CalcModel_PrimeChecker_CheckIfPrime_Merge->setName("Merge");
				CalcModel_PrimeChecker_CheckIfPrime_Merge->setVisibility(VisibilityKind::public_);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_Merge);
				// ActivityFinalNode ActivityFinal1
				CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal1->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal1);
				CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal1->setName("ActivityFinal1");
				CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal1->setVisibility(VisibilityKind::public_);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal1);
				// InitialNode Initial1
				CalcModel_PrimeChecker_CheckIfPrime_Initial1->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_Initial1);
				CalcModel_PrimeChecker_CheckIfPrime_Initial1->setName("Initial1");
				CalcModel_PrimeChecker_CheckIfPrime_Initial1->setVisibility(VisibilityKind::public_);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_Initial1);
				// CallOperationAction coaDivides
				CalcModel_PrimeChecker_CheckIfPrime_coaDivides->setThisExecutableNodePtr(CalcModel_PrimeChecker_CheckIfPrime_coaDivides);
				CalcModel_PrimeChecker_CheckIfPrime_coaDivides->setName("coaDivides");
				CalcModel_PrimeChecker_CheckIfPrime_coaDivides->setVisibility(VisibilityKind::public_);
				// OutputPin isDivisible
					CalcModel_PrimeChecker_CheckIfPrime_coaDivides_isDivisible->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_coaDivides_isDivisible);
					CalcModel_PrimeChecker_CheckIfPrime_coaDivides_isDivisible->setName("isDivisible");
					CalcModel_PrimeChecker_CheckIfPrime_coaDivides_isDivisible->setVisibility(VisibilityKind::public_);
					
					CalcModel_PrimeChecker_CheckIfPrime_coaDivides_isDivisible->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				CalcModel_PrimeChecker_CheckIfPrime_coaDivides->addResult(CalcModel_PrimeChecker_CheckIfPrime_coaDivides_isDivisible);
				CalcModel_PrimeChecker_CheckIfPrime_coaDivides->setOperation(CalcModel_PrimeChecker_divides);
					// InputPin self
					CalcModel_PrimeChecker_CheckIfPrime_coaDivides_self->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_coaDivides_self);
					CalcModel_PrimeChecker_CheckIfPrime_coaDivides_self->setName("self");
					CalcModel_PrimeChecker_CheckIfPrime_coaDivides_self->setVisibility(VisibilityKind::public_);
					
					CalcModel_PrimeChecker_CheckIfPrime_coaDivides_self->setType(CalcModel_PrimeChecker);
				CalcModel_PrimeChecker_CheckIfPrime_coaDivides->setTarget(CalcModel_PrimeChecker_CheckIfPrime_coaDivides_self);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_coaDivides);
				// CallOperationAction coaIsNotFinished
				CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished->setThisExecutableNodePtr(CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished);
				CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished->setName("coaIsNotFinished");
				CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished->setVisibility(VisibilityKind::public_);
				// OutputPin isNotFinished
					CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_isNotFinished->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_isNotFinished);
					CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_isNotFinished->setName("isNotFinished");
					CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_isNotFinished->setVisibility(VisibilityKind::public_);
					
					CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_isNotFinished->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished->addResult(CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_isNotFinished);
				CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished->setOperation(CalcModel_PrimeChecker_isNotFinished);
					// InputPin self
					CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_self->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_self);
					CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_self->setName("self");
					CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_self->setVisibility(VisibilityKind::public_);
					
					CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_self->setType(CalcModel_PrimeChecker);
				CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished->setTarget(CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_self);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished);
				// CallBehaviorAction cbaPrintNotPrime
				CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime->setThisExecutableNodePtr(CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime);
				CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime->setName("cbaPrintNotPrime");
				CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime->setVisibility(VisibilityKind::public_);
				
				CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime->setBehavior(CalcModel_PrimeChecker_fbPrintNotPrime);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime);
				// ActivityFinalNode ActivityFinal3
				CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal3->setThisElementPtr(CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal3);
				CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal3->setName("ActivityFinal3");
				CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal3->setVisibility(VisibilityKind::public_);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal3);
				// CallBehaviorAction cbaPrintIsPrime
				CalcModel_PrimeChecker_CheckIfPrime_cbaPrintIsPrime->setThisExecutableNodePtr(CalcModel_PrimeChecker_CheckIfPrime_cbaPrintIsPrime);
				CalcModel_PrimeChecker_CheckIfPrime_cbaPrintIsPrime->setName("cbaPrintIsPrime");
				CalcModel_PrimeChecker_CheckIfPrime_cbaPrintIsPrime->setVisibility(VisibilityKind::public_);
				
				CalcModel_PrimeChecker_CheckIfPrime_cbaPrintIsPrime->setBehavior(CalcModel_PrimeChecker_fbPrintIsPrime);
			CalcModel_PrimeChecker_CheckIfPrime->addNode(CalcModel_PrimeChecker_CheckIfPrime_cbaPrintIsPrime);
				// ControlFlow ControlFlow2 from coaNext to coaIsNotFinished
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2);
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2->setName("");
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2->setVisibility(VisibilityKind::public_);
				
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2->setSource(CalcModel_PrimeChecker_CheckIfPrime_coaNext);
				CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2->setTarget(CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow2);
				// ControlFlow ControlFlow8 from Merge to coaDivides
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8->setName("");
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8->setVisibility(VisibilityKind::public_);
			
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8->setSource(CalcModel_PrimeChecker_CheckIfPrime_Merge);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8->setTarget(CalcModel_PrimeChecker_CheckIfPrime_coaDivides);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow8);
				// ControlFlow ControlFlow9 from dn_divides to cbaPrintNotPrime
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9->setName("");
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9->setVisibility(VisibilityKind::public_);
			
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9->setSource(CalcModel_PrimeChecker_CheckIfPrime_dn_divides);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9->setTarget(CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow9);
				// ControlFlow ControlFlow10 from dn_divides to coaNext
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10->setName("");
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10->setVisibility(VisibilityKind::public_);
			
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10->setSource(CalcModel_PrimeChecker_CheckIfPrime_dn_divides);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10->setTarget(CalcModel_PrimeChecker_CheckIfPrime_coaNext);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow10);
				// ObjectFlow ifIsNotFinished from isNotFinished to dn_isNotFinished
			CalcModel_PrimeChecker_CheckIfPrime_ifIsNotFinished->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ifIsNotFinished);
			CalcModel_PrimeChecker_CheckIfPrime_ifIsNotFinished->setName("ifIsNotFinished");
			CalcModel_PrimeChecker_CheckIfPrime_ifIsNotFinished->setVisibility(VisibilityKind::public_);
			
			CalcModel_PrimeChecker_CheckIfPrime_ifIsNotFinished->setSource(CalcModel_PrimeChecker_CheckIfPrime_coaIsNotFinished_isNotFinished);
			CalcModel_PrimeChecker_CheckIfPrime_ifIsNotFinished->setTarget(CalcModel_PrimeChecker_CheckIfPrime_dn_isNotFinished);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ifIsNotFinished);
				// ControlFlow ControlFlow3 from dn_isNotFinished to Merge
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow3->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow3);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow3->setName("");
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow3->setVisibility(VisibilityKind::public_);
			
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow3->setSource(CalcModel_PrimeChecker_CheckIfPrime_dn_isNotFinished);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow3->setTarget(CalcModel_PrimeChecker_CheckIfPrime_Merge);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow3);
				// ObjectFlow ifIsOdd from isOdd to dn_IsOdd
			CalcModel_PrimeChecker_CheckIfPrime_ifIsOdd->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ifIsOdd);
			CalcModel_PrimeChecker_CheckIfPrime_ifIsOdd->setName("ifIsOdd");
			CalcModel_PrimeChecker_CheckIfPrime_ifIsOdd->setVisibility(VisibilityKind::public_);
			
			CalcModel_PrimeChecker_CheckIfPrime_ifIsOdd->setSource(CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd_isOdd);
			CalcModel_PrimeChecker_CheckIfPrime_ifIsOdd->setTarget(CalcModel_PrimeChecker_CheckIfPrime_dn_IsOdd);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ifIsOdd);
				// ControlFlow ControlFlow4 from dn_IsOdd to Merge
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow4->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow4);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow4->setName("");
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow4->setVisibility(VisibilityKind::public_);
			
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow4->setSource(CalcModel_PrimeChecker_CheckIfPrime_dn_IsOdd);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow4->setTarget(CalcModel_PrimeChecker_CheckIfPrime_Merge);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow4);
				// ControlFlow ControlFlow5 from Initial1 to coa_enterNumber
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5->setName("");
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5->setVisibility(VisibilityKind::public_);
			
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5->setSource(CalcModel_PrimeChecker_CheckIfPrime_Initial1);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5->setTarget(CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow5);
				// ControlFlow ControlFlow11 from cbaPrintNotPrime to ActivityFinal2
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11->setName("");
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11->setVisibility(VisibilityKind::public_);
			
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11->setSource(CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11->setTarget(CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal2);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow11);
				// ControlFlow ControlFlow12 from dn_isNotFinished to cbaPrintIsPrime
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12->setName("");
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12->setVisibility(VisibilityKind::public_);
			
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12->setSource(CalcModel_PrimeChecker_CheckIfPrime_dn_isNotFinished);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12->setTarget(CalcModel_PrimeChecker_CheckIfPrime_cbaPrintIsPrime);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow12);
				// ControlFlow ControlFlow13 from coa_enterNumber to coaIsOdd
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13->setName("");
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13->setVisibility(VisibilityKind::public_);
			
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13->setSource(CalcModel_PrimeChecker_CheckIfPrime_coa_enterNumber);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13->setTarget(CalcModel_PrimeChecker_CheckIfPrime_coaIsOdd);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow13);
				// ControlFlow ControlFlow6 from dn_IsOdd to cbaPrintNotPrime2
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow6->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow6);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow6->setName("");
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow6->setVisibility(VisibilityKind::public_);
			
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow6->setSource(CalcModel_PrimeChecker_CheckIfPrime_dn_IsOdd);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow6->setTarget(CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime2);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow6);
				// ControlFlow ControlFlow14 from cbaPrintIsPrime to ActivityFinal3
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14->setName("");
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14->setVisibility(VisibilityKind::public_);
			
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14->setSource(CalcModel_PrimeChecker_CheckIfPrime_cbaPrintIsPrime);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14->setTarget(CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal3);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow14);
				// ObjectFlow ifDivides from isDivisible to dn_divides
			CalcModel_PrimeChecker_CheckIfPrime_ifDivides->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ifDivides);
			CalcModel_PrimeChecker_CheckIfPrime_ifDivides->setName("ifDivides");
			CalcModel_PrimeChecker_CheckIfPrime_ifDivides->setVisibility(VisibilityKind::public_);
			
			CalcModel_PrimeChecker_CheckIfPrime_ifDivides->setSource(CalcModel_PrimeChecker_CheckIfPrime_coaDivides_isDivisible);
			CalcModel_PrimeChecker_CheckIfPrime_ifDivides->setTarget(CalcModel_PrimeChecker_CheckIfPrime_dn_divides);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ifDivides);
				// ControlFlow ControlFlow7 from cbaPrintNotPrime2 to ActivityFinal1
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7->setThisActivityEdgePtr(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7->setName("");
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7->setVisibility(VisibilityKind::public_);
			
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7->setSource(CalcModel_PrimeChecker_CheckIfPrime_cbaPrintNotPrime2);
			CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7->setTarget(CalcModel_PrimeChecker_CheckIfPrime_ActivityFinal1);
			CalcModel_PrimeChecker_CheckIfPrime->addEdge(CalcModel_PrimeChecker_CheckIfPrime_ControlFlow7);
		CalcModel_PrimeChecker->addOwnedBehavior(CalcModel_PrimeChecker_CheckIfPrime);
			// Operation divides
			CalcModel_PrimeChecker_divides->setThisOperationPtr(CalcModel_PrimeChecker_divides);
			CalcModel_PrimeChecker_divides->setName("divides");
			CalcModel_PrimeChecker_divides->setVisibility(VisibilityKind::public_);
			// Parameter isDivisible
				CalcModel_PrimeChecker_divides_isDivisible->setThisElementPtr(CalcModel_PrimeChecker_divides_isDivisible);
				CalcModel_PrimeChecker_divides_isDivisible->setName("isDivisible");
				CalcModel_PrimeChecker_divides_isDivisible->setVisibility(VisibilityKind::public_);
				
				CalcModel_PrimeChecker_divides_isDivisible->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				CalcModel_PrimeChecker_divides_isDivisible->setDirection(ParameterDirectionKind::return_);
			CalcModel_PrimeChecker_divides->addOwnedParameter(CalcModel_PrimeChecker_divides_isDivisible);
			CalcModel_PrimeChecker_divides->addMethod(CalcModel_PrimeChecker_fbDivides);
		CalcModel_PrimeChecker->addOwnedOperation(CalcModel_PrimeChecker_divides);
			// Operation next
			CalcModel_PrimeChecker_next->setThisOperationPtr(CalcModel_PrimeChecker_next);
			CalcModel_PrimeChecker_next->setName("next");
			CalcModel_PrimeChecker_next->setVisibility(VisibilityKind::public_);
			CalcModel_PrimeChecker_next->addMethod(CalcModel_PrimeChecker_fbNext);
		CalcModel_PrimeChecker->addOwnedOperation(CalcModel_PrimeChecker_next);
			// Operation isOdd
			CalcModel_PrimeChecker_isOdd->setThisOperationPtr(CalcModel_PrimeChecker_isOdd);
			CalcModel_PrimeChecker_isOdd->setName("isOdd");
			CalcModel_PrimeChecker_isOdd->setVisibility(VisibilityKind::public_);
			// Parameter isOdd
				CalcModel_PrimeChecker_isOdd_isOdd->setThisElementPtr(CalcModel_PrimeChecker_isOdd_isOdd);
				CalcModel_PrimeChecker_isOdd_isOdd->setName("isOdd");
				CalcModel_PrimeChecker_isOdd_isOdd->setVisibility(VisibilityKind::public_);
				
				CalcModel_PrimeChecker_isOdd_isOdd->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				CalcModel_PrimeChecker_isOdd_isOdd->setDirection(ParameterDirectionKind::return_);
			CalcModel_PrimeChecker_isOdd->addOwnedParameter(CalcModel_PrimeChecker_isOdd_isOdd);
			CalcModel_PrimeChecker_isOdd->addMethod(CalcModel_PrimeChecker_fbIsOdd);
		CalcModel_PrimeChecker->addOwnedOperation(CalcModel_PrimeChecker_isOdd);
			// Operation isNotFinished
			CalcModel_PrimeChecker_isNotFinished->setThisOperationPtr(CalcModel_PrimeChecker_isNotFinished);
			CalcModel_PrimeChecker_isNotFinished->setName("isNotFinished");
			CalcModel_PrimeChecker_isNotFinished->setVisibility(VisibilityKind::public_);
			// Parameter isNotFinished
				CalcModel_PrimeChecker_isNotFinished_isNotFinished->setThisElementPtr(CalcModel_PrimeChecker_isNotFinished_isNotFinished);
				CalcModel_PrimeChecker_isNotFinished_isNotFinished->setName("isNotFinished");
				CalcModel_PrimeChecker_isNotFinished_isNotFinished->setVisibility(VisibilityKind::public_);
				
				CalcModel_PrimeChecker_isNotFinished_isNotFinished->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				CalcModel_PrimeChecker_isNotFinished_isNotFinished->setDirection(ParameterDirectionKind::return_);
			CalcModel_PrimeChecker_isNotFinished->addOwnedParameter(CalcModel_PrimeChecker_isNotFinished_isNotFinished);
			CalcModel_PrimeChecker_isNotFinished->addMethod(CalcModel_PrimeChecker_fbIsNotFinished);
		CalcModel_PrimeChecker->addOwnedOperation(CalcModel_PrimeChecker_isNotFinished);
			// Operation enterNumber
			CalcModel_PrimeChecker_enterNumber->setThisOperationPtr(CalcModel_PrimeChecker_enterNumber);
			CalcModel_PrimeChecker_enterNumber->setName("enterNumber");
			CalcModel_PrimeChecker_enterNumber->setVisibility(VisibilityKind::public_);
			CalcModel_PrimeChecker_enterNumber->addMethod(CalcModel_PrimeChecker_obEnterNumber);
		CalcModel_PrimeChecker->addOwnedOperation(CalcModel_PrimeChecker_enterNumber);
	CalcModel->addPackagedElement(CalcModel_PrimeChecker);
}
