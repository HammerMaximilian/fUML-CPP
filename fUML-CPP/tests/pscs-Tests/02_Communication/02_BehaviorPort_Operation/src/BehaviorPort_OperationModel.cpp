/*
 * BehaviorPort_OperationModel.cpp
 * 
 * Auto-generated file
 */

#include "BehaviorPort_OperationModel.h"

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/actions/CallBehaviorAction.h>
#include <uml/actions/ReadStructuralFeatureAction.h>
#include <uml/activities/ObjectFlow.h>
#include <uml/activities/Activity.h>
#include <uml/values/LiteralBoolean.h>
#include <uml/actions/AddStructuralFeatureValueAction.h>
#include <uml/classification/Property.h>
#include <uml/actions/InputPin.h>
#include <uml/values/LiteralInteger.h>
#include <uml/commonbehavior/Trigger.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/classification/Parameter.h>
#include <uml/commonstructure/Comment.h>
#include <uml/activities/ActivityParameterNode.h>
#include <uml/actions/AcceptEventAction.h>
#include <uml/actions/StartObjectBehaviorAction.h>
#include <uml/actions/ReadSelfAction.h>
#include <uml/classification/Operation.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/commonstructure/PackageImport.h>
#include <uml/commonstructure/Usage.h>
#include <utils/standardprofile/StandardProfileModel.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <uml/activities/ControlFlow.h>
#include <uml/simpleclassifiers/Interface.h>
#include <uml/activities/ForkNode.h>
#include <uml/structuredclassifiers/ConnectorEnd.h>
#include <uml/actions/AcceptCallAction.h>
#include <uml/activities/InitialNode.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/structuredclassifiers/Connector.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/structuredclassifiers/Port.h>
#include <uml/simpleclassifiers/Reception.h>
#include <uml/simpleclassifiers/InterfaceRealization.h>
#include <uml/commonbehavior/CallEvent.h>
#include <uml/commonbehavior/SignalEvent.h>
#include <uml/packages/Package.h>
#include <uml/values/LiteralUnlimitedNatural.h>
#include <uml/values/LiteralString.h>
#include <uml/actions/OutputPin.h>
#include <uml/actions/SendSignalAction.h>
#include <uml/structuredclassifiers/Class_.h>
#include <uml/simpleclassifiers/Signal.h>
#include <uml/actions/ReplyAction.h>


/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace BehaviorPort_Operation;
using namespace fuml::primitivetypes;
using namespace fuml::library;

/* Start of user code : User-defined members
 * This section may be used for user-defined members,
 * for exmaple implementations of user-defined member functions
 * or definition of static members.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

BehaviorPort_OperationModel::BehaviorPort_OperationModel()
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

BehaviorPort_OperationModel::~BehaviorPort_OperationModel()
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

const std::shared_ptr<BehaviorPort_OperationModel>& BehaviorPort_OperationModel::Instance()
{
	static std::shared_ptr<BehaviorPort_OperationModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new BehaviorPort_OperationModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void BehaviorPort_OperationModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model BehaviorPort_Operation
	 */
	BehaviorPort_Operation.reset(new Package());
	this->addToElementRepository("BehaviorPort_Operation", BehaviorPort_Operation);
		BehaviorPort_Operation_CallEventOr.reset(new CallEvent());
		this->addToElementRepository("CallEventOr", BehaviorPort_Operation_CallEventOr);
		BehaviorPort_Operation_I.reset(new Interface());
		this->addToElementRepository("I", BehaviorPort_Operation_I);
			BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean.reset(new Operation());
			this->addToElementRepository("Boolean_or_Boolean_Boolean_Boolean", BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean);
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_a.reset(new Parameter());
				this->addToElementRepository("a", BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_a);
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_result.reset(new Parameter());
				this->addToElementRepository("result", BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_result);
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_c.reset(new Parameter());
				this->addToElementRepository("c", BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_c);
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_b.reset(new Parameter());
				this->addToElementRepository("b", BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_b);
		BehaviorPort_Operation_SignalEventStart.reset(new SignalEvent());
		this->addToElementRepository("SignalEventStart", BehaviorPort_Operation_SignalEventStart);
		BehaviorPort_Operation_P.reset(new Class_());
		this->addToElementRepository("P", BehaviorPort_Operation_P);
			BehaviorPort_Operation_P_P_ClassifierBehavior.reset(new Activity());
			this->addToElementRepository("P$ClassifierBehavior", BehaviorPort_Operation_P_P_ClassifierBehavior);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow0", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0_LiteralBoolean1.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean1", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0_LiteralBoolean1);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0_LiteralInteger2.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger2", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0_LiteralInteger2);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow3", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3_LiteralInteger4.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger4", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3_LiteralInteger4);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3_LiteralBoolean5.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean5", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3_LiteralBoolean5);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode2.reset(new ForkNode());
				this->addToElementRepository("ForkNode2", BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode2);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow6.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow6", BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow6);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow7", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7_LiteralInteger8.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger8", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7_LiteralInteger8);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7_LiteralBoolean9.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean9", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7_LiteralBoolean9);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow10", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10_LiteralBoolean11.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean11", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10_LiteralBoolean11);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10_LiteralInteger12.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger12", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10_LiteralInteger12);
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_out.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("set out", BehaviorPort_Operation_P_P_ClassifierBehavior_set_out);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value.reset(new InputPin());
					this->addToElementRepository("value", BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value);
						BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural13", BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value_LiteralUnlimitedNatural13);
						BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value_LiteralInteger14.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger14", BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value_LiteralInteger14);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object.reset(new InputPin());
					this->addToElementRepository("object", BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object);
						BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object_LiteralUnlimitedNatural15.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural15", BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object_LiteralUnlimitedNatural15);
						BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object_LiteralInteger16.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger16", BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object_LiteralInteger16);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_result);
						BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_result_LiteralInteger17.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger17", BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_result_LiteralInteger17);
						BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_result_LiteralUnlimitedNatural18.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural18", BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_result_LiteralUnlimitedNatural18);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow19", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19_LiteralInteger20.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger20", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19_LiteralInteger20);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19_LiteralBoolean21.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean21", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19_LiteralBoolean21);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow22", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22_LiteralBoolean23.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean23", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22_LiteralBoolean23);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22_LiteralInteger24.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger24", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22_LiteralInteger24);
				BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp.reset(new CallOperationAction());
				this->addToElementRepository("Call or() via pp", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c.reset(new OutputPin());
					this->addToElementRepository("c", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c);
						BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c_LiteralUnlimitedNatural25.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural25", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c_LiteralUnlimitedNatural25);
						BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c_LiteralInteger26.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger26", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c_LiteralInteger26);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result);
						BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result_LiteralInteger27.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger27", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result_LiteralInteger27);
						BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result_LiteralUnlimitedNatural28.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural28", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result_LiteralUnlimitedNatural28);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a.reset(new InputPin());
					this->addToElementRepository("a", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a);
						BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a_LiteralInteger29.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger29", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a_LiteralInteger29);
						BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a_LiteralUnlimitedNatural30.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural30", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a_LiteralUnlimitedNatural30);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_target.reset(new InputPin());
					this->addToElementRepository("target", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_target);
						BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_target_LiteralInteger31.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger31", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_target_LiteralInteger31);
						BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_target_LiteralUnlimitedNatural32.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural32", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_target_LiteralUnlimitedNatural32);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b.reset(new InputPin());
					this->addToElementRepository("b", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b);
						BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b_LiteralUnlimitedNatural33.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural33", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b_LiteralUnlimitedNatural33);
						BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b_LiteralInteger34.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger34", BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b_LiteralInteger34);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode1.reset(new ForkNode());
				this->addToElementRepository("ForkNode1", BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode1);
				BehaviorPort_Operation_P_P_ClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", BehaviorPort_Operation_P_P_ClassifierBehavior_this);
					BehaviorPort_Operation_P_P_ClassifierBehavior_this_p.reset(new OutputPin());
					this->addToElementRepository("p", BehaviorPort_Operation_P_P_ClassifierBehavior_this_p);
						BehaviorPort_Operation_P_P_ClassifierBehavior_this_p_LiteralUnlimitedNatural35.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural35", BehaviorPort_Operation_P_P_ClassifierBehavior_this_p_LiteralUnlimitedNatural35);
						BehaviorPort_Operation_P_P_ClassifierBehavior_this_p_LiteralInteger36.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger36", BehaviorPort_Operation_P_P_ClassifierBehavior_this_p_LiteralInteger36);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow37", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37_LiteralInteger38.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger38", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37_LiteralInteger38);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37_LiteralBoolean39.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean39", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37_LiteralBoolean39);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow40.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow40", BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow40);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow41", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41_LiteralInteger42.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger42", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41_LiteralInteger42);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41_LiteralBoolean43.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean43", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41_LiteralBoolean43);
				BehaviorPort_Operation_P_P_ClassifierBehavior_InitialNode1.reset(new InitialNode());
				this->addToElementRepository("InitialNode1", BehaviorPort_Operation_P_P_ClassifierBehavior_InitialNode1);
				BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Start", BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_SignalEventStartTrigger.reset(new Trigger());
					this->addToElementRepository("SignalEventStartTrigger", BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_SignalEventStartTrigger);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result);
						BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result_LiteralInteger44.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger44", BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result_LiteralInteger44);
						BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result_LiteralInteger45.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger45", BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result_LiteralInteger45);
						BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural46.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural46", BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural46);
				BehaviorPort_Operation_P_P_ClassifierBehavior_true.reset(new ValueSpecificationAction());
				this->addToElementRepository("true", BehaviorPort_Operation_P_P_ClassifierBehavior_true);
					BehaviorPort_Operation_P_P_ClassifierBehavior_true_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Operation_P_P_ClassifierBehavior_true_result);
						BehaviorPort_Operation_P_P_ClassifierBehavior_true_result_LiteralUnlimitedNatural47.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural47", BehaviorPort_Operation_P_P_ClassifierBehavior_true_result_LiteralUnlimitedNatural47);
						BehaviorPort_Operation_P_P_ClassifierBehavior_true_result_LiteralInteger48.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger48", BehaviorPort_Operation_P_P_ClassifierBehavior_true_result_LiteralInteger48);
					BehaviorPort_Operation_P_P_ClassifierBehavior_true_LiteralBoolean49.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean49", BehaviorPort_Operation_P_P_ClassifierBehavior_true_LiteralBoolean49);
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_return.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("set return", BehaviorPort_Operation_P_P_ClassifierBehavior_set_return);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value.reset(new InputPin());
					this->addToElementRepository("value", BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value);
						BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural50", BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value_LiteralUnlimitedNatural50);
						BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value_LiteralInteger51.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger51", BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value_LiteralInteger51);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_result);
						BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_result_LiteralUnlimitedNatural52.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural52", BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_result_LiteralUnlimitedNatural52);
						BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_result_LiteralInteger53.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger53", BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_result_LiteralInteger53);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object.reset(new InputPin());
					this->addToElementRepository("object", BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object);
						BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object_LiteralUnlimitedNatural54.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural54", BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object_LiteralUnlimitedNatural54);
						BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object_LiteralInteger55.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger55", BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object_LiteralInteger55);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow56", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56_LiteralInteger57.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger57", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56_LiteralInteger57);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56_LiteralBoolean58.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean58", BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56_LiteralBoolean58);
			BehaviorPort_Operation_P_P_Factory.reset(new Activity());
			this->addToElementRepository("P_Factory", BehaviorPort_Operation_P_P_Factory);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow59.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow59", BehaviorPort_Operation_P_P_Factory_ObjectFlow59);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow59_LiteralInteger60.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger60", BehaviorPort_Operation_P_P_Factory_ObjectFlow59_LiteralInteger60);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow59_LiteralBoolean61.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean61", BehaviorPort_Operation_P_P_Factory_ObjectFlow59_LiteralBoolean61);
				BehaviorPort_Operation_P_P_Factory_Create_P.reset(new CreateObjectAction());
				this->addToElementRepository("Create P", BehaviorPort_Operation_P_P_Factory_Create_P);
					BehaviorPort_Operation_P_P_Factory_Create_P_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Operation_P_P_Factory_Create_P_result);
						BehaviorPort_Operation_P_P_Factory_Create_P_result_LiteralUnlimitedNatural62.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural62", BehaviorPort_Operation_P_P_Factory_Create_P_result_LiteralUnlimitedNatural62);
						BehaviorPort_Operation_P_P_Factory_Create_P_result_LiteralInteger63.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger63", BehaviorPort_Operation_P_P_Factory_Create_P_result_LiteralInteger63);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow64.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow64", BehaviorPort_Operation_P_P_Factory_ObjectFlow64);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow64_LiteralInteger65.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger65", BehaviorPort_Operation_P_P_Factory_ObjectFlow64_LiteralInteger65);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow64_LiteralBoolean66.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean66", BehaviorPort_Operation_P_P_Factory_ObjectFlow64_LiteralBoolean66);
				BehaviorPort_Operation_P_P_Factory_P_.reset(new CallOperationAction());
				this->addToElementRepository("P()", BehaviorPort_Operation_P_P_Factory_P_);
					BehaviorPort_Operation_P_P_Factory_P__target.reset(new InputPin());
					this->addToElementRepository("target", BehaviorPort_Operation_P_P_Factory_P__target);
						BehaviorPort_Operation_P_P_Factory_P__target_LiteralInteger67.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger67", BehaviorPort_Operation_P_P_Factory_P__target_LiteralInteger67);
						BehaviorPort_Operation_P_P_Factory_P__target_LiteralUnlimitedNatural68.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural68", BehaviorPort_Operation_P_P_Factory_P__target_LiteralUnlimitedNatural68);
					BehaviorPort_Operation_P_P_Factory_P__result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Operation_P_P_Factory_P__result);
						BehaviorPort_Operation_P_P_Factory_P__result_LiteralInteger69.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger69", BehaviorPort_Operation_P_P_Factory_P__result_LiteralInteger69);
						BehaviorPort_Operation_P_P_Factory_P__result_LiteralUnlimitedNatural70.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural70", BehaviorPort_Operation_P_P_Factory_P__result_LiteralUnlimitedNatural70);
						BehaviorPort_Operation_P_P_Factory_P__result_LiteralInteger71.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger71", BehaviorPort_Operation_P_P_Factory_P__result_LiteralInteger71);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow72.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow72", BehaviorPort_Operation_P_P_Factory_ObjectFlow72);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow72_LiteralBoolean73.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean73", BehaviorPort_Operation_P_P_Factory_ObjectFlow72_LiteralBoolean73);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow72_LiteralInteger74.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger74", BehaviorPort_Operation_P_P_Factory_ObjectFlow72_LiteralInteger74);
				BehaviorPort_Operation_P_P_Factory_resultParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("resultParameterNode", BehaviorPort_Operation_P_P_Factory_resultParameterNode);
					BehaviorPort_Operation_P_P_Factory_resultParameterNode_LiteralInteger75.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger75", BehaviorPort_Operation_P_P_Factory_resultParameterNode_LiteralInteger75);
				BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior.reset(new StartObjectBehaviorAction());
				this->addToElementRepository("Start classifierBehavior", BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior);
					BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object.reset(new InputPin());
					this->addToElementRepository("object", BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object);
						BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object_LiteralUnlimitedNatural76.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural76", BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object_LiteralUnlimitedNatural76);
						BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object_LiteralInteger77.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger77", BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object_LiteralInteger77);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow78.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow78", BehaviorPort_Operation_P_P_Factory_ObjectFlow78);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow78_LiteralBoolean79.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean79", BehaviorPort_Operation_P_P_Factory_ObjectFlow78_LiteralBoolean79);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow78_LiteralInteger80.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger80", BehaviorPort_Operation_P_P_Factory_ObjectFlow78_LiteralInteger80);
				BehaviorPort_Operation_P_P_Factory_Fork_object.reset(new ForkNode());
				this->addToElementRepository("Fork object", BehaviorPort_Operation_P_P_Factory_Fork_object);
				BehaviorPort_Operation_P_P_Factory_result.reset(new Parameter());
				this->addToElementRepository("result", BehaviorPort_Operation_P_P_Factory_result);
			BehaviorPort_Operation_P_return.reset(new Property());
			this->addToElementRepository("return", BehaviorPort_Operation_P_return);
				BehaviorPort_Operation_P_return_LiteralInteger81.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger81", BehaviorPort_Operation_P_return_LiteralInteger81);
			BehaviorPort_Operation_P_pp.reset(new Port());
			this->addToElementRepository("pp", BehaviorPort_Operation_P_pp);
			BehaviorPort_Operation_P_out.reset(new Property());
			this->addToElementRepository("out", BehaviorPort_Operation_P_out);
				BehaviorPort_Operation_P_out_LiteralInteger82.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger82", BehaviorPort_Operation_P_out_LiteralInteger82);
			BehaviorPort_Operation_P_P_P.reset(new Operation());
			this->addToElementRepository("P_P", BehaviorPort_Operation_P_P_P);
				BehaviorPort_Operation_P_P_P_result.reset(new Parameter());
				this->addToElementRepository("result", BehaviorPort_Operation_P_P_P_result);
			BehaviorPort_Operation_P_Start.reset(new Reception());
			this->addToElementRepository("Start", BehaviorPort_Operation_P_Start);
		BehaviorPort_Operation_main.reset(new Activity());
		this->addToElementRepository("main", BehaviorPort_Operation_main);
			BehaviorPort_Operation_main_ControlFlow83.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow83", BehaviorPort_Operation_main_ControlFlow83);
			BehaviorPort_Operation_main_s_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("s.p", BehaviorPort_Operation_main_s_p);
				BehaviorPort_Operation_main_s_p_s.reset(new InputPin());
				this->addToElementRepository("s", BehaviorPort_Operation_main_s_p_s);
					BehaviorPort_Operation_main_s_p_s_LiteralUnlimitedNatural84.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural84", BehaviorPort_Operation_main_s_p_s_LiteralUnlimitedNatural84);
					BehaviorPort_Operation_main_s_p_s_LiteralInteger85.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger85", BehaviorPort_Operation_main_s_p_s_LiteralInteger85);
				BehaviorPort_Operation_main_s_p_result.reset(new OutputPin());
				this->addToElementRepository("result", BehaviorPort_Operation_main_s_p_result);
					BehaviorPort_Operation_main_s_p_result_LiteralUnlimitedNatural86.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural86", BehaviorPort_Operation_main_s_p_result_LiteralUnlimitedNatural86);
					BehaviorPort_Operation_main_s_p_result_LiteralInteger87.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger87", BehaviorPort_Operation_main_s_p_result_LiteralInteger87);
			BehaviorPort_Operation_main_Create_S.reset(new CreateObjectAction());
			this->addToElementRepository("Create S", BehaviorPort_Operation_main_Create_S);
				BehaviorPort_Operation_main_Create_S_result.reset(new OutputPin());
				this->addToElementRepository("result", BehaviorPort_Operation_main_Create_S_result);
					BehaviorPort_Operation_main_Create_S_result_LiteralInteger88.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger88", BehaviorPort_Operation_main_Create_S_result_LiteralInteger88);
					BehaviorPort_Operation_main_Create_S_result_LiteralUnlimitedNatural89.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural89", BehaviorPort_Operation_main_Create_S_result_LiteralUnlimitedNatural89);
			BehaviorPort_Operation_main_assertP.reset(new CallBehaviorAction());
			this->addToElementRepository("assertP", BehaviorPort_Operation_main_assertP);
				BehaviorPort_Operation_main_assertP_p.reset(new InputPin());
				this->addToElementRepository("p", BehaviorPort_Operation_main_assertP_p);
					BehaviorPort_Operation_main_assertP_p_LiteralInteger90.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger90", BehaviorPort_Operation_main_assertP_p_LiteralInteger90);
					BehaviorPort_Operation_main_assertP_p_LiteralInteger91.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger91", BehaviorPort_Operation_main_assertP_p_LiteralInteger91);
					BehaviorPort_Operation_main_assertP_p_LiteralUnlimitedNatural92.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural92", BehaviorPort_Operation_main_assertP_p_LiteralUnlimitedNatural92);
			BehaviorPort_Operation_main_ObjectFlow93.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow93", BehaviorPort_Operation_main_ObjectFlow93);
				BehaviorPort_Operation_main_ObjectFlow93_LiteralInteger94.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger94", BehaviorPort_Operation_main_ObjectFlow93_LiteralInteger94);
				BehaviorPort_Operation_main_ObjectFlow93_LiteralBoolean95.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean95", BehaviorPort_Operation_main_ObjectFlow93_LiteralBoolean95);
			BehaviorPort_Operation_main_Send_Start.reset(new SendSignalAction());
			this->addToElementRepository("Send Start", BehaviorPort_Operation_main_Send_Start);
				BehaviorPort_Operation_main_Send_Start_target.reset(new InputPin());
				this->addToElementRepository("target", BehaviorPort_Operation_main_Send_Start_target);
					BehaviorPort_Operation_main_Send_Start_target_LiteralInteger96.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger96", BehaviorPort_Operation_main_Send_Start_target_LiteralInteger96);
					BehaviorPort_Operation_main_Send_Start_target_LiteralUnlimitedNatural97.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural97", BehaviorPort_Operation_main_Send_Start_target_LiteralUnlimitedNatural97);
			BehaviorPort_Operation_main_Fork_s_p.reset(new ForkNode());
			this->addToElementRepository("Fork s.p", BehaviorPort_Operation_main_Fork_s_p);
			BehaviorPort_Operation_main_ObjectFlow98.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow98", BehaviorPort_Operation_main_ObjectFlow98);
				BehaviorPort_Operation_main_ObjectFlow98_LiteralInteger99.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger99", BehaviorPort_Operation_main_ObjectFlow98_LiteralInteger99);
				BehaviorPort_Operation_main_ObjectFlow98_LiteralBoolean100.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean100", BehaviorPort_Operation_main_ObjectFlow98_LiteralBoolean100);
			BehaviorPort_Operation_main_ObjectFlow101.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow101", BehaviorPort_Operation_main_ObjectFlow101);
				BehaviorPort_Operation_main_ObjectFlow101_LiteralInteger102.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger102", BehaviorPort_Operation_main_ObjectFlow101_LiteralInteger102);
				BehaviorPort_Operation_main_ObjectFlow101_LiteralBoolean103.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean103", BehaviorPort_Operation_main_ObjectFlow101_LiteralBoolean103);
			BehaviorPort_Operation_main_ObjectFlow104.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow104", BehaviorPort_Operation_main_ObjectFlow104);
				BehaviorPort_Operation_main_ObjectFlow104_LiteralBoolean105.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean105", BehaviorPort_Operation_main_ObjectFlow104_LiteralBoolean105);
				BehaviorPort_Operation_main_ObjectFlow104_LiteralInteger106.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger106", BehaviorPort_Operation_main_ObjectFlow104_LiteralInteger106);
			BehaviorPort_Operation_main_ObjectFlow107.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow107", BehaviorPort_Operation_main_ObjectFlow107);
				BehaviorPort_Operation_main_ObjectFlow107_LiteralInteger108.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger108", BehaviorPort_Operation_main_ObjectFlow107_LiteralInteger108);
				BehaviorPort_Operation_main_ObjectFlow107_LiteralBoolean109.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean109", BehaviorPort_Operation_main_ObjectFlow107_LiteralBoolean109);
			BehaviorPort_Operation_main_S_.reset(new CallOperationAction());
			this->addToElementRepository("S()", BehaviorPort_Operation_main_S_);
				BehaviorPort_Operation_main_S__target.reset(new InputPin());
				this->addToElementRepository("target", BehaviorPort_Operation_main_S__target);
					BehaviorPort_Operation_main_S__target_LiteralInteger110.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger110", BehaviorPort_Operation_main_S__target_LiteralInteger110);
					BehaviorPort_Operation_main_S__target_LiteralUnlimitedNatural111.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural111", BehaviorPort_Operation_main_S__target_LiteralUnlimitedNatural111);
				BehaviorPort_Operation_main_S__result.reset(new OutputPin());
				this->addToElementRepository("result", BehaviorPort_Operation_main_S__result);
					BehaviorPort_Operation_main_S__result_LiteralInteger112.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger112", BehaviorPort_Operation_main_S__result_LiteralInteger112);
					BehaviorPort_Operation_main_S__result_LiteralUnlimitedNatural113.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural113", BehaviorPort_Operation_main_S__result_LiteralUnlimitedNatural113);
					BehaviorPort_Operation_main_S__result_LiteralInteger114.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger114", BehaviorPort_Operation_main_S__result_LiteralInteger114);
		BehaviorPort_Operation_C.reset(new Class_());
		this->addToElementRepository("C", BehaviorPort_Operation_C);
			BehaviorPort_Operation_C_C_Factory.reset(new Activity());
			this->addToElementRepository("C_Factory", BehaviorPort_Operation_C_C_Factory);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow115.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow115", BehaviorPort_Operation_C_C_Factory_ObjectFlow115);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow115_LiteralBoolean116.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean116", BehaviorPort_Operation_C_C_Factory_ObjectFlow115_LiteralBoolean116);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow115_LiteralInteger117.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger117", BehaviorPort_Operation_C_C_Factory_ObjectFlow115_LiteralInteger117);
				BehaviorPort_Operation_C_C_Factory_Fork_object.reset(new ForkNode());
				this->addToElementRepository("Fork object", BehaviorPort_Operation_C_C_Factory_Fork_object);
				BehaviorPort_Operation_C_C_Factory_result.reset(new Parameter());
				this->addToElementRepository("result", BehaviorPort_Operation_C_C_Factory_result);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow118.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow118", BehaviorPort_Operation_C_C_Factory_ObjectFlow118);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow118_LiteralBoolean119.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean119", BehaviorPort_Operation_C_C_Factory_ObjectFlow118_LiteralBoolean119);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow118_LiteralInteger120.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger120", BehaviorPort_Operation_C_C_Factory_ObjectFlow118_LiteralInteger120);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow121.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow121", BehaviorPort_Operation_C_C_Factory_ObjectFlow121);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow121_LiteralBoolean122.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean122", BehaviorPort_Operation_C_C_Factory_ObjectFlow121_LiteralBoolean122);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow121_LiteralInteger123.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger123", BehaviorPort_Operation_C_C_Factory_ObjectFlow121_LiteralInteger123);
				BehaviorPort_Operation_C_C_Factory_Create_C.reset(new CreateObjectAction());
				this->addToElementRepository("Create C", BehaviorPort_Operation_C_C_Factory_Create_C);
					BehaviorPort_Operation_C_C_Factory_Create_C_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Operation_C_C_Factory_Create_C_result);
						BehaviorPort_Operation_C_C_Factory_Create_C_result_LiteralInteger124.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger124", BehaviorPort_Operation_C_C_Factory_Create_C_result_LiteralInteger124);
						BehaviorPort_Operation_C_C_Factory_Create_C_result_LiteralUnlimitedNatural125.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural125", BehaviorPort_Operation_C_C_Factory_Create_C_result_LiteralUnlimitedNatural125);
				BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior.reset(new StartObjectBehaviorAction());
				this->addToElementRepository("Start classifierBehavior", BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior);
					BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object.reset(new InputPin());
					this->addToElementRepository("object", BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object);
						BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object_LiteralInteger126.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger126", BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object_LiteralInteger126);
						BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object_LiteralUnlimitedNatural127.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural127", BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object_LiteralUnlimitedNatural127);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow128.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow128", BehaviorPort_Operation_C_C_Factory_ObjectFlow128);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow128_LiteralInteger129.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger129", BehaviorPort_Operation_C_C_Factory_ObjectFlow128_LiteralInteger129);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow128_LiteralBoolean130.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean130", BehaviorPort_Operation_C_C_Factory_ObjectFlow128_LiteralBoolean130);
				BehaviorPort_Operation_C_C_Factory_resultParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("resultParameterNode", BehaviorPort_Operation_C_C_Factory_resultParameterNode);
					BehaviorPort_Operation_C_C_Factory_resultParameterNode_LiteralInteger131.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger131", BehaviorPort_Operation_C_C_Factory_resultParameterNode_LiteralInteger131);
				BehaviorPort_Operation_C_C_Factory_C_.reset(new CallOperationAction());
				this->addToElementRepository("C()", BehaviorPort_Operation_C_C_Factory_C_);
					BehaviorPort_Operation_C_C_Factory_C__result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Operation_C_C_Factory_C__result);
						BehaviorPort_Operation_C_C_Factory_C__result_LiteralUnlimitedNatural132.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural132", BehaviorPort_Operation_C_C_Factory_C__result_LiteralUnlimitedNatural132);
						BehaviorPort_Operation_C_C_Factory_C__result_LiteralInteger133.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger133", BehaviorPort_Operation_C_C_Factory_C__result_LiteralInteger133);
						BehaviorPort_Operation_C_C_Factory_C__result_LiteralInteger134.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger134", BehaviorPort_Operation_C_C_Factory_C__result_LiteralInteger134);
					BehaviorPort_Operation_C_C_Factory_C__target.reset(new InputPin());
					this->addToElementRepository("target", BehaviorPort_Operation_C_C_Factory_C__target);
						BehaviorPort_Operation_C_C_Factory_C__target_LiteralInteger135.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger135", BehaviorPort_Operation_C_C_Factory_C__target_LiteralInteger135);
						BehaviorPort_Operation_C_C_Factory_C__target_LiteralUnlimitedNatural136.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural136", BehaviorPort_Operation_C_C_Factory_C__target_LiteralUnlimitedNatural136);
			BehaviorPort_Operation_C_pc.reset(new Port());
			this->addToElementRepository("pc", BehaviorPort_Operation_C_pc);
			BehaviorPort_Operation_C_C_C.reset(new Operation());
			this->addToElementRepository("C_C", BehaviorPort_Operation_C_C_C);
				BehaviorPort_Operation_C_C_C_result.reset(new Parameter());
				this->addToElementRepository("result", BehaviorPort_Operation_C_C_C_result);
			BehaviorPort_Operation_C_I_Realization.reset(new InterfaceRealization());
			this->addToElementRepository("I_Realization", BehaviorPort_Operation_C_I_Realization);
			BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean.reset(new Operation());
			this->addToElementRepository("Boolean_or_Boolean_Boolean_Boolean", BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean);
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_b.reset(new Parameter());
				this->addToElementRepository("b", BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_b);
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_result.reset(new Parameter());
				this->addToElementRepository("result", BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_result);
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_c.reset(new Parameter());
				this->addToElementRepository("c", BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_c);
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_a.reset(new Parameter());
				this->addToElementRepository("a", BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_a);
			BehaviorPort_Operation_C_C_ClassifierBehavior.reset(new Activity());
			this->addToElementRepository("C$ClassifierBehavior", BehaviorPort_Operation_C_C_ClassifierBehavior);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow137", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137_LiteralInteger138.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger138", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137_LiteralInteger138);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137_LiteralBoolean139.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean139", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137_LiteralBoolean139);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ControlFlow140.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow140", BehaviorPort_Operation_C_C_ClassifierBehavior_ControlFlow140);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Fork_result.reset(new ForkNode());
				this->addToElementRepository("Fork result", BehaviorPort_Operation_C_C_ClassifierBehavior_Fork_result);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow141", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141_LiteralInteger142.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger142", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141_LiteralInteger142);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141_LiteralBoolean143.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean143", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141_LiteralBoolean143);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow144", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144_LiteralBoolean145.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean145", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144_LiteralBoolean145);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144_LiteralInteger146.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger146", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144_LiteralInteger146);
				BehaviorPort_Operation_C_C_ClassifierBehavior_InitialNode1.reset(new InitialNode());
				this->addToElementRepository("InitialNode1", BehaviorPort_Operation_C_C_ClassifierBehavior_InitialNode1);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow147", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147_LiteralBoolean148.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean148", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147_LiteralBoolean148);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147_LiteralInteger149.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger149", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147_LiteralInteger149);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor.reset(new CallBehaviorAction());
				this->addToElementRepository("Call Xor", BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y.reset(new InputPin());
					this->addToElementRepository("y", BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y);
						BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y_LiteralInteger150.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger150", BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y_LiteralInteger150);
						BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y_LiteralUnlimitedNatural151.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural151", BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y_LiteralUnlimitedNatural151);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result.reset(new OutputPin());
					this->addToElementRepository("result", BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result);
						BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result_LiteralInteger152.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger152", BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result_LiteralInteger152);
						BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result_LiteralInteger153.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger153", BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result_LiteralInteger153);
						BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result_LiteralUnlimitedNatural154.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural154", BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result_LiteralUnlimitedNatural154);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x.reset(new InputPin());
					this->addToElementRepository("x", BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x);
						BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x_LiteralInteger155.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger155", BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x_LiteralInteger155);
						BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x_LiteralUnlimitedNatural156.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural156", BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x_LiteralUnlimitedNatural156);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow157", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157_LiteralBoolean158.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean158", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157_LiteralBoolean158);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157_LiteralInteger159.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger159", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157_LiteralInteger159);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or_.reset(new AcceptCallAction());
				this->addToElementRepository("Accept or()", BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__b.reset(new OutputPin());
					this->addToElementRepository("b", BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__b);
						BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__b_LiteralInteger160.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger160", BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__b_LiteralInteger160);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__returnInformation.reset(new OutputPin());
					this->addToElementRepository("returnInformation", BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__returnInformation);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__a.reset(new OutputPin());
					this->addToElementRepository("a", BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__a);
						BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__a_LiteralInteger161.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger161", BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__a_LiteralInteger161);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__CallEventOrTrigger.reset(new Trigger());
					this->addToElementRepository("CallEventOrTrigger", BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__CallEventOrTrigger);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or_.reset(new ReplyAction());
				this->addToElementRepository("Reply or()", BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__r.reset(new InputPin());
					this->addToElementRepository("r", BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__r);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__cr.reset(new InputPin());
					this->addToElementRepository("cr", BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__cr);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__returnInformation.reset(new InputPin());
					this->addToElementRepository("returnInformation", BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__returnInformation);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow162", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162_LiteralInteger163.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger163", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162_LiteralInteger163);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162_LiteralBoolean164.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean164", BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162_LiteralBoolean164);
		BehaviorPort_Operation_S.reset(new Class_());
		this->addToElementRepository("S", BehaviorPort_Operation_S);
			BehaviorPort_Operation_S_p.reset(new Property());
			this->addToElementRepository("p", BehaviorPort_Operation_S_p);
			BehaviorPort_Operation_S_c.reset(new Property());
			this->addToElementRepository("c", BehaviorPort_Operation_S_c);
			BehaviorPort_Operation_S_Connector1.reset(new Connector());
			this->addToElementRepository("Connector1", BehaviorPort_Operation_S_Connector1);
				BehaviorPort_Operation_S_Connector1_ConnectorEnd165.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd165", BehaviorPort_Operation_S_Connector1_ConnectorEnd165);
				BehaviorPort_Operation_S_Connector1_ConnectorEnd166.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd166", BehaviorPort_Operation_S_Connector1_ConnectorEnd166);
			BehaviorPort_Operation_S_S_S.reset(new Operation());
			this->addToElementRepository("S_S", BehaviorPort_Operation_S_S_S);
				BehaviorPort_Operation_S_S_S_result.reset(new Parameter());
				this->addToElementRepository("result", BehaviorPort_Operation_S_S_S_result);
		BehaviorPort_Operation_Start.reset(new Signal());
		this->addToElementRepository("Start", BehaviorPort_Operation_Start);
		BehaviorPort_Operation_I_Usage_P.reset(new Usage());
		this->addToElementRepository("I_Usage_P", BehaviorPort_Operation_I_Usage_P);
		BehaviorPort_Operation_assertP.reset(new Activity());
		this->addToElementRepository("assertP", BehaviorPort_Operation_assertP);
			BehaviorPort_Operation_assertP_ObjectFlow167.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow167", BehaviorPort_Operation_assertP_ObjectFlow167);
				BehaviorPort_Operation_assertP_ObjectFlow167_LiteralInteger168.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger168", BehaviorPort_Operation_assertP_ObjectFlow167_LiteralInteger168);
				BehaviorPort_Operation_assertP_ObjectFlow167_LiteralBoolean169.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean169", BehaviorPort_Operation_assertP_ObjectFlow167_LiteralBoolean169);
			BehaviorPort_Operation_assertP_ControlFlow170.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow170", BehaviorPort_Operation_assertP_ControlFlow170);
			BehaviorPort_Operation_assertP_ObjectFlow171.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow171", BehaviorPort_Operation_assertP_ObjectFlow171);
				BehaviorPort_Operation_assertP_ObjectFlow171_LiteralBoolean172.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean172", BehaviorPort_Operation_assertP_ObjectFlow171_LiteralBoolean172);
				BehaviorPort_Operation_assertP_ObjectFlow171_LiteralInteger173.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger173", BehaviorPort_Operation_assertP_ObjectFlow171_LiteralInteger173);
			BehaviorPort_Operation_assertP_ObjectFlow174.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow174", BehaviorPort_Operation_assertP_ObjectFlow174);
				BehaviorPort_Operation_assertP_ObjectFlow174_LiteralBoolean175.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean175", BehaviorPort_Operation_assertP_ObjectFlow174_LiteralBoolean175);
				BehaviorPort_Operation_assertP_ObjectFlow174_LiteralInteger176.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger176", BehaviorPort_Operation_assertP_ObjectFlow174_LiteralInteger176);
			BehaviorPort_Operation_assertP_Fork_p.reset(new ForkNode());
			this->addToElementRepository("Fork p", BehaviorPort_Operation_assertP_Fork_p);
			BehaviorPort_Operation_assertP_test_out.reset(new CallBehaviorAction());
			this->addToElementRepository("test out", BehaviorPort_Operation_assertP_test_out);
				BehaviorPort_Operation_assertP_test_out_input.reset(new InputPin());
				this->addToElementRepository("input", BehaviorPort_Operation_assertP_test_out_input);
					BehaviorPort_Operation_assertP_test_out_input_LiteralUnlimitedNatural177.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural177", BehaviorPort_Operation_assertP_test_out_input_LiteralUnlimitedNatural177);
					BehaviorPort_Operation_assertP_test_out_input_LiteralInteger178.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger178", BehaviorPort_Operation_assertP_test_out_input_LiteralInteger178);
					BehaviorPort_Operation_assertP_test_out_input_LiteralInteger179.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger179", BehaviorPort_Operation_assertP_test_out_input_LiteralInteger179);
			BehaviorPort_Operation_assertP_writeLine_p_return.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine p.return", BehaviorPort_Operation_assertP_writeLine_p_return);
				BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus);
					BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus_LiteralUnlimitedNatural180.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural180", BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus_LiteralUnlimitedNatural180);
					BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus_LiteralInteger181.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger181", BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus_LiteralInteger181);
					BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus_LiteralInteger182.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger182", BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus_LiteralInteger182);
				BehaviorPort_Operation_assertP_writeLine_p_return_value.reset(new InputPin());
				this->addToElementRepository("value", BehaviorPort_Operation_assertP_writeLine_p_return_value);
					BehaviorPort_Operation_assertP_writeLine_p_return_value_LiteralInteger183.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger183", BehaviorPort_Operation_assertP_writeLine_p_return_value_LiteralInteger183);
					BehaviorPort_Operation_assertP_writeLine_p_return_value_LiteralUnlimitedNatural184.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural184", BehaviorPort_Operation_assertP_writeLine_p_return_value_LiteralUnlimitedNatural184);
					BehaviorPort_Operation_assertP_writeLine_p_return_value_LiteralInteger185.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger185", BehaviorPort_Operation_assertP_writeLine_p_return_value_LiteralInteger185);
			BehaviorPort_Operation_assertP_writeLine_p_out.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine p.out", BehaviorPort_Operation_assertP_writeLine_p_out);
				BehaviorPort_Operation_assertP_writeLine_p_out_value.reset(new InputPin());
				this->addToElementRepository("value", BehaviorPort_Operation_assertP_writeLine_p_out_value);
					BehaviorPort_Operation_assertP_writeLine_p_out_value_LiteralUnlimitedNatural186.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural186", BehaviorPort_Operation_assertP_writeLine_p_out_value_LiteralUnlimitedNatural186);
					BehaviorPort_Operation_assertP_writeLine_p_out_value_LiteralInteger187.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger187", BehaviorPort_Operation_assertP_writeLine_p_out_value_LiteralInteger187);
					BehaviorPort_Operation_assertP_writeLine_p_out_value_LiteralInteger188.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger188", BehaviorPort_Operation_assertP_writeLine_p_out_value_LiteralInteger188);
				BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus);
					BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus_LiteralUnlimitedNatural189.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural189", BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus_LiteralUnlimitedNatural189);
					BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus_LiteralInteger190.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger190", BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus_LiteralInteger190);
					BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus_LiteralInteger191.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger191", BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus_LiteralInteger191);
			BehaviorPort_Operation_assertP_p_out.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("p.out", BehaviorPort_Operation_assertP_p_out);
				BehaviorPort_Operation_assertP_p_out_result.reset(new OutputPin());
				this->addToElementRepository("result", BehaviorPort_Operation_assertP_p_out_result);
					BehaviorPort_Operation_assertP_p_out_result_LiteralInteger192.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger192", BehaviorPort_Operation_assertP_p_out_result_LiteralInteger192);
					BehaviorPort_Operation_assertP_p_out_result_LiteralUnlimitedNatural193.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural193", BehaviorPort_Operation_assertP_p_out_result_LiteralUnlimitedNatural193);
				BehaviorPort_Operation_assertP_p_out_object.reset(new InputPin());
				this->addToElementRepository("object", BehaviorPort_Operation_assertP_p_out_object);
					BehaviorPort_Operation_assertP_p_out_object_LiteralUnlimitedNatural194.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural194", BehaviorPort_Operation_assertP_p_out_object_LiteralUnlimitedNatural194);
					BehaviorPort_Operation_assertP_p_out_object_LiteralInteger195.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger195", BehaviorPort_Operation_assertP_p_out_object_LiteralInteger195);
			BehaviorPort_Operation_assertP_ControlFlow196.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow196", BehaviorPort_Operation_assertP_ControlFlow196);
			BehaviorPort_Operation_assertP_p.reset(new Parameter());
			this->addToElementRepository("p", BehaviorPort_Operation_assertP_p);
			BehaviorPort_Operation_assertP_ControlFlow197.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow197", BehaviorPort_Operation_assertP_ControlFlow197);
			BehaviorPort_Operation_assertP_pParameterNode.reset(new ActivityParameterNode());
			this->addToElementRepository("pParameterNode", BehaviorPort_Operation_assertP_pParameterNode);
				BehaviorPort_Operation_assertP_pParameterNode_LiteralInteger198.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger198", BehaviorPort_Operation_assertP_pParameterNode_LiteralInteger198);
			BehaviorPort_Operation_assertP_test_return.reset(new CallBehaviorAction());
			this->addToElementRepository("test return", BehaviorPort_Operation_assertP_test_return);
				BehaviorPort_Operation_assertP_test_return_input.reset(new InputPin());
				this->addToElementRepository("input", BehaviorPort_Operation_assertP_test_return_input);
					BehaviorPort_Operation_assertP_test_return_input_LiteralInteger199.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger199", BehaviorPort_Operation_assertP_test_return_input_LiteralInteger199);
					BehaviorPort_Operation_assertP_test_return_input_LiteralInteger200.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger200", BehaviorPort_Operation_assertP_test_return_input_LiteralInteger200);
					BehaviorPort_Operation_assertP_test_return_input_LiteralUnlimitedNatural201.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural201", BehaviorPort_Operation_assertP_test_return_input_LiteralUnlimitedNatural201);
			BehaviorPort_Operation_assertP_p_out_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("p.out message", BehaviorPort_Operation_assertP_p_out_message);
				BehaviorPort_Operation_assertP_p_out_message_LiteralString202.reset(new LiteralString());
				this->addToElementRepository("LiteralString202", BehaviorPort_Operation_assertP_p_out_message_LiteralString202);
				BehaviorPort_Operation_assertP_p_out_message_result.reset(new OutputPin());
				this->addToElementRepository("result", BehaviorPort_Operation_assertP_p_out_message_result);
					BehaviorPort_Operation_assertP_p_out_message_result_LiteralUnlimitedNatural203.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural203", BehaviorPort_Operation_assertP_p_out_message_result_LiteralUnlimitedNatural203);
					BehaviorPort_Operation_assertP_p_out_message_result_LiteralInteger204.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger204", BehaviorPort_Operation_assertP_p_out_message_result_LiteralInteger204);
			BehaviorPort_Operation_assertP_p_return.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("p.return", BehaviorPort_Operation_assertP_p_return);
				BehaviorPort_Operation_assertP_p_return_object.reset(new InputPin());
				this->addToElementRepository("object", BehaviorPort_Operation_assertP_p_return_object);
					BehaviorPort_Operation_assertP_p_return_object_LiteralInteger205.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger205", BehaviorPort_Operation_assertP_p_return_object_LiteralInteger205);
					BehaviorPort_Operation_assertP_p_return_object_LiteralUnlimitedNatural206.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural206", BehaviorPort_Operation_assertP_p_return_object_LiteralUnlimitedNatural206);
				BehaviorPort_Operation_assertP_p_return_result.reset(new OutputPin());
				this->addToElementRepository("result", BehaviorPort_Operation_assertP_p_return_result);
					BehaviorPort_Operation_assertP_p_return_result_LiteralUnlimitedNatural207.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural207", BehaviorPort_Operation_assertP_p_return_result_LiteralUnlimitedNatural207);
					BehaviorPort_Operation_assertP_p_return_result_LiteralInteger208.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger208", BehaviorPort_Operation_assertP_p_return_result_LiteralInteger208);
			BehaviorPort_Operation_assertP_ObjectFlow209.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow209", BehaviorPort_Operation_assertP_ObjectFlow209);
				BehaviorPort_Operation_assertP_ObjectFlow209_LiteralBoolean210.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean210", BehaviorPort_Operation_assertP_ObjectFlow209_LiteralBoolean210);
				BehaviorPort_Operation_assertP_ObjectFlow209_LiteralInteger211.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger211", BehaviorPort_Operation_assertP_ObjectFlow209_LiteralInteger211);
			BehaviorPort_Operation_assertP_ControlFlow212.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow212", BehaviorPort_Operation_assertP_ControlFlow212);
			BehaviorPort_Operation_assertP_p_return_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("p.return message", BehaviorPort_Operation_assertP_p_return_message);
				BehaviorPort_Operation_assertP_p_return_message_LiteralString213.reset(new LiteralString());
				this->addToElementRepository("LiteralString213", BehaviorPort_Operation_assertP_p_return_message_LiteralString213);
				BehaviorPort_Operation_assertP_p_return_message_result.reset(new OutputPin());
				this->addToElementRepository("result", BehaviorPort_Operation_assertP_p_return_message_result);
					BehaviorPort_Operation_assertP_p_return_message_result_LiteralUnlimitedNatural214.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural214", BehaviorPort_Operation_assertP_p_return_message_result_LiteralUnlimitedNatural214);
					BehaviorPort_Operation_assertP_p_return_message_result_LiteralInteger215.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger215", BehaviorPort_Operation_assertP_p_return_message_result_LiteralInteger215);
			BehaviorPort_Operation_assertP_ObjectFlow216.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow216", BehaviorPort_Operation_assertP_ObjectFlow216);
				BehaviorPort_Operation_assertP_ObjectFlow216_LiteralBoolean217.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean217", BehaviorPort_Operation_assertP_ObjectFlow216_LiteralBoolean217);
				BehaviorPort_Operation_assertP_ObjectFlow216_LiteralInteger218.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger218", BehaviorPort_Operation_assertP_ObjectFlow216_LiteralInteger218);
			BehaviorPort_Operation_assertP_ControlFlow219.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow219", BehaviorPort_Operation_assertP_ControlFlow219);
			BehaviorPort_Operation_assertP_ObjectFlow220.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow220", BehaviorPort_Operation_assertP_ObjectFlow220);
				BehaviorPort_Operation_assertP_ObjectFlow220_LiteralInteger221.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger221", BehaviorPort_Operation_assertP_ObjectFlow220_LiteralInteger221);
				BehaviorPort_Operation_assertP_ObjectFlow220_LiteralBoolean222.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean222", BehaviorPort_Operation_assertP_ObjectFlow220_LiteralBoolean222);
			BehaviorPort_Operation_assertP_testFalse.reset(new OpaqueBehavior());
			this->addToElementRepository("testFalse", BehaviorPort_Operation_assertP_testFalse);
				BehaviorPort_Operation_assertP_testFalse_input.reset(new Parameter());
				this->addToElementRepository("input", BehaviorPort_Operation_assertP_testFalse_input);
			BehaviorPort_Operation_assertP_ObjectFlow223.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow223", BehaviorPort_Operation_assertP_ObjectFlow223);
				BehaviorPort_Operation_assertP_ObjectFlow223_LiteralBoolean224.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean224", BehaviorPort_Operation_assertP_ObjectFlow223_LiteralBoolean224);
				BehaviorPort_Operation_assertP_ObjectFlow223_LiteralInteger225.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger225", BehaviorPort_Operation_assertP_ObjectFlow223_LiteralInteger225);

	// Initialize public members
	/*
	 * Model BehaviorPort_Operation
	 */
	BehaviorPort_Operation->setThisPackagePtr(BehaviorPort_Operation);
	BehaviorPort_Operation->setName("BehaviorPort_Operation");
	BehaviorPort_Operation->setVisibility(VisibilityKind::public_);
		// CallEvent CallEventOr
		BehaviorPort_Operation_CallEventOr->setThisElementPtr(BehaviorPort_Operation_CallEventOr);
		BehaviorPort_Operation_CallEventOr->setName("CallEventOr");
		BehaviorPort_Operation_CallEventOr->setVisibility(VisibilityKind::public_);
		BehaviorPort_Operation_CallEventOr->setOperation(BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean);
	BehaviorPort_Operation->addPackagedElement(BehaviorPort_Operation_CallEventOr);
		// Interface I
		BehaviorPort_Operation_I->setThisInterfacePtr(BehaviorPort_Operation_I);
		BehaviorPort_Operation_I->setName("I");
		BehaviorPort_Operation_I->setVisibility(VisibilityKind::public_);
			// Operation Boolean_or_Boolean_Boolean_Boolean
			BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean->setThisOperationPtr(BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean);
			BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean->setName("Boolean_or_Boolean_Boolean_Boolean");
			BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean->setVisibility(VisibilityKind::public_);
				// Parameter a
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_a->setThisElementPtr(BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_a);
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_a->setName("a");
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_a->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_a->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean->addOwnedParameter(BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_a);
				// Parameter b
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_b->setThisElementPtr(BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_b);
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_b->setName("b");
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_b->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_b->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean->addOwnedParameter(BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_b);
				// Parameter c
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_c->setThisElementPtr(BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_c);
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_c->setName("c");
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_c->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_c->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_c->setDirection(ParameterDirectionKind::out);
			BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean->addOwnedParameter(BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_c);
				// Parameter result
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_result->setThisElementPtr(BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_result);
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_result->setName("result");
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_result->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_result->setDirection(ParameterDirectionKind::return_);
			BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean->addOwnedParameter(BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean_result);
		BehaviorPort_Operation_I->addOwnedOperation(BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean);
	BehaviorPort_Operation->addPackagedElement(BehaviorPort_Operation_I);
		// SignalEvent SignalEventStart
		BehaviorPort_Operation_SignalEventStart->setThisElementPtr(BehaviorPort_Operation_SignalEventStart);
		BehaviorPort_Operation_SignalEventStart->setName("SignalEventStart");
		BehaviorPort_Operation_SignalEventStart->setVisibility(VisibilityKind::public_);
		BehaviorPort_Operation_SignalEventStart->setSignal(BehaviorPort_Operation_Start);
	BehaviorPort_Operation->addPackagedElement(BehaviorPort_Operation_SignalEventStart);
		// Class P
		BehaviorPort_Operation_P->setThisClass_Ptr(BehaviorPort_Operation_P);
		BehaviorPort_Operation_P->setName("P");
		BehaviorPort_Operation_P->setVisibility(VisibilityKind::public_);
		
			// Property out
			BehaviorPort_Operation_P_out->setThisElementPtr(BehaviorPort_Operation_P_out);
			BehaviorPort_Operation_P_out->setName("out");
			BehaviorPort_Operation_P_out->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_P_out->setLower(0);
			BehaviorPort_Operation_P_out->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
		BehaviorPort_Operation_P->addOwnedAttribute(BehaviorPort_Operation_P_out);
			// Property return
			BehaviorPort_Operation_P_return->setThisElementPtr(BehaviorPort_Operation_P_return);
			BehaviorPort_Operation_P_return->setName("return");
			BehaviorPort_Operation_P_return->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_P_return->setLower(0);
			BehaviorPort_Operation_P_return->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
		BehaviorPort_Operation_P->addOwnedAttribute(BehaviorPort_Operation_P_return);
			// Port pp
			BehaviorPort_Operation_P_pp->setThisElementPtr(BehaviorPort_Operation_P_pp);
			BehaviorPort_Operation_P_pp->setName("pp");
			BehaviorPort_Operation_P_pp->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_P_pp->setType(BehaviorPort_Operation_I);
			BehaviorPort_Operation_P_pp->setAggregation(AggregationKind::composite);
			BehaviorPort_Operation_P_pp->isConjugated = true;;
			BehaviorPort_Operation_P_pp->isService = true;
			BehaviorPort_Operation_P_pp->addRequired(BehaviorPort_Operation_I);
		BehaviorPort_Operation_P->addOwnedAttribute(BehaviorPort_Operation_P_pp);
		BehaviorPort_Operation_P->setClassifierBehavior(BehaviorPort_Operation_P_P_ClassifierBehavior);
			// Activity P$ClassifierBehavior
			BehaviorPort_Operation_P_P_ClassifierBehavior->setThisActivityPtr(BehaviorPort_Operation_P_P_ClassifierBehavior);
			BehaviorPort_Operation_P_P_ClassifierBehavior->setName("P$ClassifierBehavior");
			BehaviorPort_Operation_P_P_ClassifierBehavior->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_P_P_ClassifierBehavior->isReentrant = false;
				// CallOperationAction Call or() via pp
				BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp->setThisExecutableNodePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp);
				BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp->setName("Call or() via pp");
				BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp->setOnPort(BehaviorPort_Operation_P_pp);
				
					// OutputPin c
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c->setName("c");
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp->addResult(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c);
					// OutputPin result
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result->setName("result");
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp->addResult(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result);
				BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp->setOperation(BehaviorPort_Operation_I_Boolean_or_Boolean_Boolean_Boolean);
					// InputPin target
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_target->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_target);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_target->setName("target");
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_target->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp->setTarget(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_target);
					// InputPin a
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a->setName("a");
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp->addArgument(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a);
					// InputPin b
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b->setName("b");
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp->addArgument(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addNode(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp);
				// ForkNode ForkNode1
				BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode1->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode1);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode1->setName("ForkNode1");
				BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode1->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addNode(BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode1);
				// ReadSelfAction this
				BehaviorPort_Operation_P_P_ClassifierBehavior_this->setThisExecutableNodePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_this);
				BehaviorPort_Operation_P_P_ClassifierBehavior_this->setName("this");
				BehaviorPort_Operation_P_P_ClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin p
					BehaviorPort_Operation_P_P_ClassifierBehavior_this_p->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_this_p);
					BehaviorPort_Operation_P_P_ClassifierBehavior_this_p->setName("p");
					BehaviorPort_Operation_P_P_ClassifierBehavior_this_p->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_this_p->setType(BehaviorPort_Operation_P);
				BehaviorPort_Operation_P_P_ClassifierBehavior_this->setResult(BehaviorPort_Operation_P_P_ClassifierBehavior_this_p);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addNode(BehaviorPort_Operation_P_P_ClassifierBehavior_this);
				// ForkNode ForkNode2
				BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode2->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode2);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode2->setName("ForkNode2");
				BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode2->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addNode(BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode2);
				// InitialNode InitialNode1
				BehaviorPort_Operation_P_P_ClassifierBehavior_InitialNode1->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_InitialNode1);
				BehaviorPort_Operation_P_P_ClassifierBehavior_InitialNode1->setName("InitialNode1");
				BehaviorPort_Operation_P_P_ClassifierBehavior_InitialNode1->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addNode(BehaviorPort_Operation_P_P_ClassifierBehavior_InitialNode1);
				// AddStructuralFeatureValueAction set out
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_out->setThisExecutableNodePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_set_out);
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_out->setName("set out");
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_out->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_out->setStructuralFeature(BehaviorPort_Operation_P_out);
					// InputPin object
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object->setName("object");
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object->setType(BehaviorPort_Operation_P);
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_out->setObject(BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object);
					// InputPin value
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value->setName("value");
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_out->setValue(BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value);
					// OutputPin result
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_result->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_result);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_result->setName("result");
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_result->setType(BehaviorPort_Operation_P);
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_out->setResult(BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_result);
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_out->setIsReplaceAll(true);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addNode(BehaviorPort_Operation_P_P_ClassifierBehavior_set_out);
				// AcceptEventAction Accept Start
				BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start->setThisExecutableNodePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start);
				BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start->setName("Accept Start");
				BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start->setVisibility(VisibilityKind::package);
					// OutputPin result
					BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result->setName("result");
					BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result->setType(BehaviorPort_Operation_Start);
				BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start->addResult(BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_result);
					// Trigger SignalEventStartTrigger
					BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_SignalEventStartTrigger->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_SignalEventStartTrigger);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_SignalEventStartTrigger->setName("SignalEventStartTrigger");
					BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_SignalEventStartTrigger->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_SignalEventStartTrigger->setEvent(BehaviorPort_Operation_SignalEventStart);
				BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start->addTrigger(BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start_SignalEventStartTrigger);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addNode(BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start);
				// ValueSpecificationAction true
				BehaviorPort_Operation_P_P_ClassifierBehavior_true->setThisExecutableNodePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_true);
				BehaviorPort_Operation_P_P_ClassifierBehavior_true->setName("true");
				BehaviorPort_Operation_P_P_ClassifierBehavior_true->setVisibility(VisibilityKind::public_);
					// LiteralBoolean LiteralBoolean49
					BehaviorPort_Operation_P_P_ClassifierBehavior_true_LiteralBoolean49->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_true_LiteralBoolean49);
					BehaviorPort_Operation_P_P_ClassifierBehavior_true_LiteralBoolean49->setName("LiteralBoolean49");
					BehaviorPort_Operation_P_P_ClassifierBehavior_true_LiteralBoolean49->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_true_LiteralBoolean49->setValue(true);
				BehaviorPort_Operation_P_P_ClassifierBehavior_true->setValue(BehaviorPort_Operation_P_P_ClassifierBehavior_true_LiteralBoolean49);
					// OutputPin result
					BehaviorPort_Operation_P_P_ClassifierBehavior_true_result->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_true_result);
					BehaviorPort_Operation_P_P_ClassifierBehavior_true_result->setName("result");
					BehaviorPort_Operation_P_P_ClassifierBehavior_true_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_true_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_P_P_ClassifierBehavior_true->setResult(BehaviorPort_Operation_P_P_ClassifierBehavior_true_result);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addNode(BehaviorPort_Operation_P_P_ClassifierBehavior_true);
				// AddStructuralFeatureValueAction set return
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_return->setThisExecutableNodePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_set_return);
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_return->setName("set return");
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_return->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_return->setStructuralFeature(BehaviorPort_Operation_P_return);
					// InputPin object
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object->setName("object");
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object->setType(BehaviorPort_Operation_P);
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_return->setObject(BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object);
					// InputPin value
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value->setName("value");
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_return->setValue(BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value);
					// OutputPin result
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_result->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_result);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_result->setName("result");
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_result->setType(BehaviorPort_Operation_P);
				BehaviorPort_Operation_P_P_ClassifierBehavior_set_return->setResult(BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_result);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addNode(BehaviorPort_Operation_P_P_ClassifierBehavior_set_return);
				// ObjectFlow ObjectFlow0 from ForkNode2 to b
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0->setThisActivityEdgePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0->setName("ObjectFlow0");
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0->setSource(BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode2);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0->setTarget(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_b);
					// LiteralBoolean LiteralBoolean1
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0_LiteralBoolean1->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0_LiteralBoolean1);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0_LiteralBoolean1->setName("LiteralBoolean1");
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0_LiteralBoolean1->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0_LiteralBoolean1->setValue(true);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0->setGuard(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0_LiteralBoolean1);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addEdge(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow0);
				// ObjectFlow ObjectFlow37 from result to ForkNode2
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37->setThisActivityEdgePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37->setName("ObjectFlow37");
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37->setSource(BehaviorPort_Operation_P_P_ClassifierBehavior_true_result);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37->setTarget(BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode2);
					// LiteralBoolean LiteralBoolean39
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37_LiteralBoolean39->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37_LiteralBoolean39);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37_LiteralBoolean39->setName("LiteralBoolean39");
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37_LiteralBoolean39->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37_LiteralBoolean39->setValue(true);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37->setGuard(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37_LiteralBoolean39);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addEdge(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow37);
				// ControlFlow ControlFlow40 from Accept Start to this
				BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow40->setThisActivityEdgePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow40);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow40->setName("ControlFlow40");
				BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow40->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow40->setSource(BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow40->setTarget(BehaviorPort_Operation_P_P_ClassifierBehavior_this);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addEdge(BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow40);
				// ObjectFlow ObjectFlow3 from ForkNode1 to object
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3->setThisActivityEdgePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3->setName("ObjectFlow3");
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3->setSource(BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode1);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3->setTarget(BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_object);
					// LiteralBoolean LiteralBoolean5
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3_LiteralBoolean5->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3_LiteralBoolean5);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3_LiteralBoolean5->setName("LiteralBoolean5");
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3_LiteralBoolean5->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3_LiteralBoolean5->setValue(true);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3->setGuard(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3_LiteralBoolean5);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addEdge(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow3);
				// ObjectFlow ObjectFlow41 from p to ForkNode1
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41->setThisActivityEdgePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41->setName("ObjectFlow41");
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41->setSource(BehaviorPort_Operation_P_P_ClassifierBehavior_this_p);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41->setTarget(BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode1);
					// LiteralBoolean LiteralBoolean43
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41_LiteralBoolean43->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41_LiteralBoolean43);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41_LiteralBoolean43->setName("LiteralBoolean43");
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41_LiteralBoolean43->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41_LiteralBoolean43->setValue(true);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41->setGuard(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41_LiteralBoolean43);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addEdge(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow41);
				// ControlFlow ControlFlow6 from InitialNode1 to Accept Start
				BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow6->setThisActivityEdgePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow6);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow6->setName("ControlFlow6");
				BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow6->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow6->setSource(BehaviorPort_Operation_P_P_ClassifierBehavior_InitialNode1);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow6->setTarget(BehaviorPort_Operation_P_P_ClassifierBehavior_Accept_Start);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addEdge(BehaviorPort_Operation_P_P_ClassifierBehavior_ControlFlow6);
				// ObjectFlow ObjectFlow7 from ForkNode2 to a
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7->setThisActivityEdgePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7->setName("ObjectFlow7");
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7->setSource(BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode2);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7->setTarget(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_a);
					// LiteralBoolean LiteralBoolean9
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7_LiteralBoolean9->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7_LiteralBoolean9);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7_LiteralBoolean9->setName("LiteralBoolean9");
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7_LiteralBoolean9->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7_LiteralBoolean9->setValue(true);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7->setGuard(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7_LiteralBoolean9);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addEdge(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow7);
				// ObjectFlow ObjectFlow10 from ForkNode1 to object
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10->setThisActivityEdgePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10->setName("ObjectFlow10");
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10->setSource(BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode1);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10->setTarget(BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_object);
					// LiteralBoolean LiteralBoolean11
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10_LiteralBoolean11->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10_LiteralBoolean11);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10_LiteralBoolean11->setName("LiteralBoolean11");
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10_LiteralBoolean11->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10_LiteralBoolean11->setValue(true);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10->setGuard(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10_LiteralBoolean11);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addEdge(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow10);
				// ObjectFlow ObjectFlow19 from ForkNode1 to target
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19->setThisActivityEdgePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19->setName("ObjectFlow19");
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19->setSource(BehaviorPort_Operation_P_P_ClassifierBehavior_ForkNode1);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19->setTarget(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_target);
					// LiteralBoolean LiteralBoolean21
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19_LiteralBoolean21->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19_LiteralBoolean21);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19_LiteralBoolean21->setName("LiteralBoolean21");
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19_LiteralBoolean21->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19_LiteralBoolean21->setValue(true);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19->setGuard(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19_LiteralBoolean21);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addEdge(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow19);
				// ObjectFlow ObjectFlow22 from result to value
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22->setThisActivityEdgePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22->setName("ObjectFlow22");
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22->setSource(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_result);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22->setTarget(BehaviorPort_Operation_P_P_ClassifierBehavior_set_return_value);
					// LiteralBoolean LiteralBoolean23
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22_LiteralBoolean23->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22_LiteralBoolean23);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22_LiteralBoolean23->setName("LiteralBoolean23");
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22_LiteralBoolean23->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22_LiteralBoolean23->setValue(true);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22->setGuard(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22_LiteralBoolean23);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addEdge(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow22);
				// ObjectFlow ObjectFlow56 from c to value
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56->setThisActivityEdgePtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56->setName("ObjectFlow56");
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56->setSource(BehaviorPort_Operation_P_P_ClassifierBehavior_Call_or_via_pp_c);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56->setTarget(BehaviorPort_Operation_P_P_ClassifierBehavior_set_out_value);
					// LiteralBoolean LiteralBoolean58
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56_LiteralBoolean58->setThisElementPtr(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56_LiteralBoolean58);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56_LiteralBoolean58->setName("LiteralBoolean58");
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56_LiteralBoolean58->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56_LiteralBoolean58->setValue(true);
				BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56->setGuard(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56_LiteralBoolean58);
			BehaviorPort_Operation_P_P_ClassifierBehavior->addEdge(BehaviorPort_Operation_P_P_ClassifierBehavior_ObjectFlow56);
		BehaviorPort_Operation_P->addOwnedBehavior(BehaviorPort_Operation_P_P_ClassifierBehavior);
			// Activity P_Factory
			BehaviorPort_Operation_P_P_Factory->setThisActivityPtr(BehaviorPort_Operation_P_P_Factory);
			BehaviorPort_Operation_P_P_Factory->setName("P_Factory");
			BehaviorPort_Operation_P_P_Factory->setVisibility(VisibilityKind::public_);
			
				// Parameter result
				BehaviorPort_Operation_P_P_Factory_result->setThisElementPtr(BehaviorPort_Operation_P_P_Factory_result);
				BehaviorPort_Operation_P_P_Factory_result->setName("result");
				BehaviorPort_Operation_P_P_Factory_result->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_Factory_result->setType(BehaviorPort_Operation_P);
				BehaviorPort_Operation_P_P_Factory_result->setDirection(ParameterDirectionKind::return_);
			BehaviorPort_Operation_P_P_Factory->addOwnedParameter(BehaviorPort_Operation_P_P_Factory_result);
				// CreateObjectAction Create P
				BehaviorPort_Operation_P_P_Factory_Create_P->setThisExecutableNodePtr(BehaviorPort_Operation_P_P_Factory_Create_P);
				BehaviorPort_Operation_P_P_Factory_Create_P->setName("Create P");
				BehaviorPort_Operation_P_P_Factory_Create_P->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_P_P_Factory_Create_P->setClassifier(BehaviorPort_Operation_P);
					// OutputPin result
					BehaviorPort_Operation_P_P_Factory_Create_P_result->setThisElementPtr(BehaviorPort_Operation_P_P_Factory_Create_P_result);
					BehaviorPort_Operation_P_P_Factory_Create_P_result->setName("result");
					BehaviorPort_Operation_P_P_Factory_Create_P_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_Factory_Create_P_result->setType(BehaviorPort_Operation_P);
				BehaviorPort_Operation_P_P_Factory_Create_P->setResult(BehaviorPort_Operation_P_P_Factory_Create_P_result);
			BehaviorPort_Operation_P_P_Factory->addNode(BehaviorPort_Operation_P_P_Factory_Create_P);
				// CallOperationAction P()
				BehaviorPort_Operation_P_P_Factory_P_->setThisExecutableNodePtr(BehaviorPort_Operation_P_P_Factory_P_);
				BehaviorPort_Operation_P_P_Factory_P_->setName("P()");
				BehaviorPort_Operation_P_P_Factory_P_->setVisibility(VisibilityKind::public_);
				
					// OutputPin result
					BehaviorPort_Operation_P_P_Factory_P__result->setThisElementPtr(BehaviorPort_Operation_P_P_Factory_P__result);
					BehaviorPort_Operation_P_P_Factory_P__result->setName("result");
					BehaviorPort_Operation_P_P_Factory_P__result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_Factory_P__result->setType(BehaviorPort_Operation_P);
				BehaviorPort_Operation_P_P_Factory_P_->addResult(BehaviorPort_Operation_P_P_Factory_P__result);
				BehaviorPort_Operation_P_P_Factory_P_->setOperation(BehaviorPort_Operation_P_P_P);
					// InputPin target
					BehaviorPort_Operation_P_P_Factory_P__target->setThisElementPtr(BehaviorPort_Operation_P_P_Factory_P__target);
					BehaviorPort_Operation_P_P_Factory_P__target->setName("target");
					BehaviorPort_Operation_P_P_Factory_P__target->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_Factory_P__target->setType(BehaviorPort_Operation_P);
				BehaviorPort_Operation_P_P_Factory_P_->setTarget(BehaviorPort_Operation_P_P_Factory_P__target);
			BehaviorPort_Operation_P_P_Factory->addNode(BehaviorPort_Operation_P_P_Factory_P_);
				// ActivityParameterNode resultParameterNode
				BehaviorPort_Operation_P_P_Factory_resultParameterNode->setThisElementPtr(BehaviorPort_Operation_P_P_Factory_resultParameterNode);
				BehaviorPort_Operation_P_P_Factory_resultParameterNode->setName("resultParameterNode");
				BehaviorPort_Operation_P_P_Factory_resultParameterNode->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_Factory_resultParameterNode->setParameter(BehaviorPort_Operation_P_P_Factory_result);
			BehaviorPort_Operation_P_P_Factory->addNode(BehaviorPort_Operation_P_P_Factory_resultParameterNode);
				// StartObjectBehaviorAction Start classifierBehavior
				BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior->setThisExecutableNodePtr(BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior);
				BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior->setName("Start classifierBehavior");
				BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior->setVisibility(VisibilityKind::public_);
					// InputPin object
					BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object->setThisElementPtr(BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object);
					BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object->setName("object");
					BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object->setType(BehaviorPort_Operation_P);
				BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior->setObject(BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object);
			BehaviorPort_Operation_P_P_Factory->addNode(BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior);
				// ForkNode Fork object
				BehaviorPort_Operation_P_P_Factory_Fork_object->setThisElementPtr(BehaviorPort_Operation_P_P_Factory_Fork_object);
				BehaviorPort_Operation_P_P_Factory_Fork_object->setName("Fork object");
				BehaviorPort_Operation_P_P_Factory_Fork_object->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_P_P_Factory->addNode(BehaviorPort_Operation_P_P_Factory_Fork_object);
				// ObjectFlow ObjectFlow59 from Fork object to resultParameterNode
				BehaviorPort_Operation_P_P_Factory_ObjectFlow59->setThisActivityEdgePtr(BehaviorPort_Operation_P_P_Factory_ObjectFlow59);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow59->setName("ObjectFlow59");
				BehaviorPort_Operation_P_P_Factory_ObjectFlow59->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_Factory_ObjectFlow59->setSource(BehaviorPort_Operation_P_P_Factory_Fork_object);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow59->setTarget(BehaviorPort_Operation_P_P_Factory_resultParameterNode);
					// LiteralBoolean LiteralBoolean61
					BehaviorPort_Operation_P_P_Factory_ObjectFlow59_LiteralBoolean61->setThisElementPtr(BehaviorPort_Operation_P_P_Factory_ObjectFlow59_LiteralBoolean61);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow59_LiteralBoolean61->setName("LiteralBoolean61");
					BehaviorPort_Operation_P_P_Factory_ObjectFlow59_LiteralBoolean61->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow59_LiteralBoolean61->setValue(true);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow59->setGuard(BehaviorPort_Operation_P_P_Factory_ObjectFlow59_LiteralBoolean61);
			BehaviorPort_Operation_P_P_Factory->addEdge(BehaviorPort_Operation_P_P_Factory_ObjectFlow59);
				// ObjectFlow ObjectFlow64 from result to target
				BehaviorPort_Operation_P_P_Factory_ObjectFlow64->setThisActivityEdgePtr(BehaviorPort_Operation_P_P_Factory_ObjectFlow64);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow64->setName("ObjectFlow64");
				BehaviorPort_Operation_P_P_Factory_ObjectFlow64->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_Factory_ObjectFlow64->setSource(BehaviorPort_Operation_P_P_Factory_Create_P_result);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow64->setTarget(BehaviorPort_Operation_P_P_Factory_P__target);
					// LiteralBoolean LiteralBoolean66
					BehaviorPort_Operation_P_P_Factory_ObjectFlow64_LiteralBoolean66->setThisElementPtr(BehaviorPort_Operation_P_P_Factory_ObjectFlow64_LiteralBoolean66);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow64_LiteralBoolean66->setName("LiteralBoolean66");
					BehaviorPort_Operation_P_P_Factory_ObjectFlow64_LiteralBoolean66->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow64_LiteralBoolean66->setValue(true);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow64->setGuard(BehaviorPort_Operation_P_P_Factory_ObjectFlow64_LiteralBoolean66);
			BehaviorPort_Operation_P_P_Factory->addEdge(BehaviorPort_Operation_P_P_Factory_ObjectFlow64);
				// ObjectFlow ObjectFlow72 from result to Fork object
				BehaviorPort_Operation_P_P_Factory_ObjectFlow72->setThisActivityEdgePtr(BehaviorPort_Operation_P_P_Factory_ObjectFlow72);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow72->setName("ObjectFlow72");
				BehaviorPort_Operation_P_P_Factory_ObjectFlow72->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_Factory_ObjectFlow72->setSource(BehaviorPort_Operation_P_P_Factory_P__result);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow72->setTarget(BehaviorPort_Operation_P_P_Factory_Fork_object);
					// LiteralBoolean LiteralBoolean73
					BehaviorPort_Operation_P_P_Factory_ObjectFlow72_LiteralBoolean73->setThisElementPtr(BehaviorPort_Operation_P_P_Factory_ObjectFlow72_LiteralBoolean73);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow72_LiteralBoolean73->setName("LiteralBoolean73");
					BehaviorPort_Operation_P_P_Factory_ObjectFlow72_LiteralBoolean73->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow72_LiteralBoolean73->setValue(true);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow72->setGuard(BehaviorPort_Operation_P_P_Factory_ObjectFlow72_LiteralBoolean73);
			BehaviorPort_Operation_P_P_Factory->addEdge(BehaviorPort_Operation_P_P_Factory_ObjectFlow72);
				// ObjectFlow ObjectFlow78 from Fork object to object
				BehaviorPort_Operation_P_P_Factory_ObjectFlow78->setThisActivityEdgePtr(BehaviorPort_Operation_P_P_Factory_ObjectFlow78);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow78->setName("ObjectFlow78");
				BehaviorPort_Operation_P_P_Factory_ObjectFlow78->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_Factory_ObjectFlow78->setSource(BehaviorPort_Operation_P_P_Factory_Fork_object);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow78->setTarget(BehaviorPort_Operation_P_P_Factory_Start_classifierBehavior_object);
					// LiteralBoolean LiteralBoolean79
					BehaviorPort_Operation_P_P_Factory_ObjectFlow78_LiteralBoolean79->setThisElementPtr(BehaviorPort_Operation_P_P_Factory_ObjectFlow78_LiteralBoolean79);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow78_LiteralBoolean79->setName("LiteralBoolean79");
					BehaviorPort_Operation_P_P_Factory_ObjectFlow78_LiteralBoolean79->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_P_P_Factory_ObjectFlow78_LiteralBoolean79->setValue(true);
				BehaviorPort_Operation_P_P_Factory_ObjectFlow78->setGuard(BehaviorPort_Operation_P_P_Factory_ObjectFlow78_LiteralBoolean79);
			BehaviorPort_Operation_P_P_Factory->addEdge(BehaviorPort_Operation_P_P_Factory_ObjectFlow78);
		BehaviorPort_Operation_P->addOwnedBehavior(BehaviorPort_Operation_P_P_Factory);
		
		BehaviorPort_Operation_P->setIsActive(true);
			// Operation P_P
			BehaviorPort_Operation_P_P_P->setThisOperationPtr(BehaviorPort_Operation_P_P_P);
			BehaviorPort_Operation_P_P_P->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			BehaviorPort_Operation_P_P_P->setName("P_P");
			BehaviorPort_Operation_P_P_P->setVisibility(VisibilityKind::public_);
				// Parameter result
				BehaviorPort_Operation_P_P_P_result->setThisElementPtr(BehaviorPort_Operation_P_P_P_result);
				BehaviorPort_Operation_P_P_P_result->setName("result");
				BehaviorPort_Operation_P_P_P_result->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_P_P_P_result->setType(BehaviorPort_Operation_P);
				BehaviorPort_Operation_P_P_P_result->setDirection(ParameterDirectionKind::return_);
			BehaviorPort_Operation_P_P_P->addOwnedParameter(BehaviorPort_Operation_P_P_P_result);
		BehaviorPort_Operation_P->addOwnedOperation(BehaviorPort_Operation_P_P_P);
			// Reception Start
			BehaviorPort_Operation_P_Start->setThisBehavioralFeaturePtr(BehaviorPort_Operation_P_Start);
			BehaviorPort_Operation_P_Start->setName("Start");
			BehaviorPort_Operation_P_Start->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_P_Start->setSignal(BehaviorPort_Operation_Start);
		BehaviorPort_Operation_P->addOwnedReception(BehaviorPort_Operation_P_Start);
	BehaviorPort_Operation->addPackagedElement(BehaviorPort_Operation_P);
		// Activity main
		BehaviorPort_Operation_main->setThisActivityPtr(BehaviorPort_Operation_main);
		BehaviorPort_Operation_main->setName("main");
		BehaviorPort_Operation_main->setVisibility(VisibilityKind::public_);
			// ReadStructuralFeatureAction s.p
			BehaviorPort_Operation_main_s_p->setThisExecutableNodePtr(BehaviorPort_Operation_main_s_p);
			BehaviorPort_Operation_main_s_p->setName("s.p");
			BehaviorPort_Operation_main_s_p->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_main_s_p->setStructuralFeature(BehaviorPort_Operation_S_p);
				// InputPin s
				BehaviorPort_Operation_main_s_p_s->setThisElementPtr(BehaviorPort_Operation_main_s_p_s);
				BehaviorPort_Operation_main_s_p_s->setName("s");
				BehaviorPort_Operation_main_s_p_s->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_main_s_p_s->setType(BehaviorPort_Operation_S);
			BehaviorPort_Operation_main_s_p->setObject(BehaviorPort_Operation_main_s_p_s);
				// OutputPin result
				BehaviorPort_Operation_main_s_p_result->setThisElementPtr(BehaviorPort_Operation_main_s_p_result);
				BehaviorPort_Operation_main_s_p_result->setName("result");
				BehaviorPort_Operation_main_s_p_result->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_main_s_p_result->setType(BehaviorPort_Operation_P);
			BehaviorPort_Operation_main_s_p->setResult(BehaviorPort_Operation_main_s_p_result);
		BehaviorPort_Operation_main->addNode(BehaviorPort_Operation_main_s_p);
			// CreateObjectAction Create S
			BehaviorPort_Operation_main_Create_S->setThisExecutableNodePtr(BehaviorPort_Operation_main_Create_S);
			BehaviorPort_Operation_main_Create_S->setName("Create S");
			BehaviorPort_Operation_main_Create_S->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_main_Create_S->setClassifier(BehaviorPort_Operation_S);
				// OutputPin result
				BehaviorPort_Operation_main_Create_S_result->setThisElementPtr(BehaviorPort_Operation_main_Create_S_result);
				BehaviorPort_Operation_main_Create_S_result->setName("result");
				BehaviorPort_Operation_main_Create_S_result->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_main_Create_S_result->setType(BehaviorPort_Operation_S);
			BehaviorPort_Operation_main_Create_S->setResult(BehaviorPort_Operation_main_Create_S_result);
		BehaviorPort_Operation_main->addNode(BehaviorPort_Operation_main_Create_S);
			// CallBehaviorAction assertP
			BehaviorPort_Operation_main_assertP->setThisExecutableNodePtr(BehaviorPort_Operation_main_assertP);
			BehaviorPort_Operation_main_assertP->setName("assertP");
			BehaviorPort_Operation_main_assertP->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_main_assertP->setBehavior(BehaviorPort_Operation_assertP);
				// InputPin p
				BehaviorPort_Operation_main_assertP_p->setThisElementPtr(BehaviorPort_Operation_main_assertP_p);
				BehaviorPort_Operation_main_assertP_p->setName("p");
				BehaviorPort_Operation_main_assertP_p->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_main_assertP_p->setType(BehaviorPort_Operation_P);
			BehaviorPort_Operation_main_assertP->addArgument(BehaviorPort_Operation_main_assertP_p);
		BehaviorPort_Operation_main->addNode(BehaviorPort_Operation_main_assertP);
			// SendSignalAction Send Start
			BehaviorPort_Operation_main_Send_Start->setThisExecutableNodePtr(BehaviorPort_Operation_main_Send_Start);
			BehaviorPort_Operation_main_Send_Start->setName("Send Start");
			BehaviorPort_Operation_main_Send_Start->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_main_Send_Start->setSignal(BehaviorPort_Operation_Start);
				// InputPin target
				BehaviorPort_Operation_main_Send_Start_target->setThisElementPtr(BehaviorPort_Operation_main_Send_Start_target);
				BehaviorPort_Operation_main_Send_Start_target->setName("target");
				BehaviorPort_Operation_main_Send_Start_target->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_main_Send_Start_target->setType(BehaviorPort_Operation_P);
			BehaviorPort_Operation_main_Send_Start->setTarget(BehaviorPort_Operation_main_Send_Start_target);
		BehaviorPort_Operation_main->addNode(BehaviorPort_Operation_main_Send_Start);
			// ForkNode Fork s.p
			BehaviorPort_Operation_main_Fork_s_p->setThisElementPtr(BehaviorPort_Operation_main_Fork_s_p);
			BehaviorPort_Operation_main_Fork_s_p->setName("Fork s.p");
			BehaviorPort_Operation_main_Fork_s_p->setVisibility(VisibilityKind::public_);
		BehaviorPort_Operation_main->addNode(BehaviorPort_Operation_main_Fork_s_p);
			// CallOperationAction S()
			BehaviorPort_Operation_main_S_->setThisExecutableNodePtr(BehaviorPort_Operation_main_S_);
			BehaviorPort_Operation_main_S_->setName("S()");
			BehaviorPort_Operation_main_S_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				BehaviorPort_Operation_main_S__result->setThisElementPtr(BehaviorPort_Operation_main_S__result);
				BehaviorPort_Operation_main_S__result->setName("result");
				BehaviorPort_Operation_main_S__result->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_main_S__result->setType(BehaviorPort_Operation_S);
			BehaviorPort_Operation_main_S_->addResult(BehaviorPort_Operation_main_S__result);
			BehaviorPort_Operation_main_S_->setOperation(BehaviorPort_Operation_S_S_S);
				// InputPin target
				BehaviorPort_Operation_main_S__target->setThisElementPtr(BehaviorPort_Operation_main_S__target);
				BehaviorPort_Operation_main_S__target->setName("target");
				BehaviorPort_Operation_main_S__target->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_main_S__target->setType(BehaviorPort_Operation_S);
			BehaviorPort_Operation_main_S_->setTarget(BehaviorPort_Operation_main_S__target);
		BehaviorPort_Operation_main->addNode(BehaviorPort_Operation_main_S_);
			// ControlFlow ControlFlow83 from Send Start to assertP
			BehaviorPort_Operation_main_ControlFlow83->setThisActivityEdgePtr(BehaviorPort_Operation_main_ControlFlow83);
			BehaviorPort_Operation_main_ControlFlow83->setName("ControlFlow83");
			BehaviorPort_Operation_main_ControlFlow83->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_main_ControlFlow83->setSource(BehaviorPort_Operation_main_Send_Start);
			BehaviorPort_Operation_main_ControlFlow83->setTarget(BehaviorPort_Operation_main_assertP);
		BehaviorPort_Operation_main->addEdge(BehaviorPort_Operation_main_ControlFlow83);
			// ObjectFlow ObjectFlow93 from result to target
			BehaviorPort_Operation_main_ObjectFlow93->setThisActivityEdgePtr(BehaviorPort_Operation_main_ObjectFlow93);
			BehaviorPort_Operation_main_ObjectFlow93->setName("ObjectFlow93");
			BehaviorPort_Operation_main_ObjectFlow93->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_main_ObjectFlow93->setSource(BehaviorPort_Operation_main_Create_S_result);
			BehaviorPort_Operation_main_ObjectFlow93->setTarget(BehaviorPort_Operation_main_S__target);
				// LiteralBoolean LiteralBoolean95
				BehaviorPort_Operation_main_ObjectFlow93_LiteralBoolean95->setThisElementPtr(BehaviorPort_Operation_main_ObjectFlow93_LiteralBoolean95);
				BehaviorPort_Operation_main_ObjectFlow93_LiteralBoolean95->setName("LiteralBoolean95");
				BehaviorPort_Operation_main_ObjectFlow93_LiteralBoolean95->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_main_ObjectFlow93_LiteralBoolean95->setValue(true);
			BehaviorPort_Operation_main_ObjectFlow93->setGuard(BehaviorPort_Operation_main_ObjectFlow93_LiteralBoolean95);
		BehaviorPort_Operation_main->addEdge(BehaviorPort_Operation_main_ObjectFlow93);
			// ObjectFlow ObjectFlow98 from result to Fork s.p
			BehaviorPort_Operation_main_ObjectFlow98->setThisActivityEdgePtr(BehaviorPort_Operation_main_ObjectFlow98);
			BehaviorPort_Operation_main_ObjectFlow98->setName("ObjectFlow98");
			BehaviorPort_Operation_main_ObjectFlow98->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_main_ObjectFlow98->setSource(BehaviorPort_Operation_main_s_p_result);
			BehaviorPort_Operation_main_ObjectFlow98->setTarget(BehaviorPort_Operation_main_Fork_s_p);
				// LiteralBoolean LiteralBoolean100
				BehaviorPort_Operation_main_ObjectFlow98_LiteralBoolean100->setThisElementPtr(BehaviorPort_Operation_main_ObjectFlow98_LiteralBoolean100);
				BehaviorPort_Operation_main_ObjectFlow98_LiteralBoolean100->setName("LiteralBoolean100");
				BehaviorPort_Operation_main_ObjectFlow98_LiteralBoolean100->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_main_ObjectFlow98_LiteralBoolean100->setValue(true);
			BehaviorPort_Operation_main_ObjectFlow98->setGuard(BehaviorPort_Operation_main_ObjectFlow98_LiteralBoolean100);
		BehaviorPort_Operation_main->addEdge(BehaviorPort_Operation_main_ObjectFlow98);
			// ObjectFlow ObjectFlow101 from result to s
			BehaviorPort_Operation_main_ObjectFlow101->setThisActivityEdgePtr(BehaviorPort_Operation_main_ObjectFlow101);
			BehaviorPort_Operation_main_ObjectFlow101->setName("ObjectFlow101");
			BehaviorPort_Operation_main_ObjectFlow101->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_main_ObjectFlow101->setSource(BehaviorPort_Operation_main_S__result);
			BehaviorPort_Operation_main_ObjectFlow101->setTarget(BehaviorPort_Operation_main_s_p_s);
				// LiteralBoolean LiteralBoolean103
				BehaviorPort_Operation_main_ObjectFlow101_LiteralBoolean103->setThisElementPtr(BehaviorPort_Operation_main_ObjectFlow101_LiteralBoolean103);
				BehaviorPort_Operation_main_ObjectFlow101_LiteralBoolean103->setName("LiteralBoolean103");
				BehaviorPort_Operation_main_ObjectFlow101_LiteralBoolean103->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_main_ObjectFlow101_LiteralBoolean103->setValue(true);
			BehaviorPort_Operation_main_ObjectFlow101->setGuard(BehaviorPort_Operation_main_ObjectFlow101_LiteralBoolean103);
		BehaviorPort_Operation_main->addEdge(BehaviorPort_Operation_main_ObjectFlow101);
			// ObjectFlow ObjectFlow104 from Fork s.p to target
			BehaviorPort_Operation_main_ObjectFlow104->setThisActivityEdgePtr(BehaviorPort_Operation_main_ObjectFlow104);
			BehaviorPort_Operation_main_ObjectFlow104->setName("ObjectFlow104");
			BehaviorPort_Operation_main_ObjectFlow104->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_main_ObjectFlow104->setSource(BehaviorPort_Operation_main_Fork_s_p);
			BehaviorPort_Operation_main_ObjectFlow104->setTarget(BehaviorPort_Operation_main_Send_Start_target);
				// LiteralBoolean LiteralBoolean105
				BehaviorPort_Operation_main_ObjectFlow104_LiteralBoolean105->setThisElementPtr(BehaviorPort_Operation_main_ObjectFlow104_LiteralBoolean105);
				BehaviorPort_Operation_main_ObjectFlow104_LiteralBoolean105->setName("LiteralBoolean105");
				BehaviorPort_Operation_main_ObjectFlow104_LiteralBoolean105->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_main_ObjectFlow104_LiteralBoolean105->setValue(true);
			BehaviorPort_Operation_main_ObjectFlow104->setGuard(BehaviorPort_Operation_main_ObjectFlow104_LiteralBoolean105);
		BehaviorPort_Operation_main->addEdge(BehaviorPort_Operation_main_ObjectFlow104);
			// ObjectFlow ObjectFlow107 from Fork s.p to p
			BehaviorPort_Operation_main_ObjectFlow107->setThisActivityEdgePtr(BehaviorPort_Operation_main_ObjectFlow107);
			BehaviorPort_Operation_main_ObjectFlow107->setName("ObjectFlow107");
			BehaviorPort_Operation_main_ObjectFlow107->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_main_ObjectFlow107->setSource(BehaviorPort_Operation_main_Fork_s_p);
			BehaviorPort_Operation_main_ObjectFlow107->setTarget(BehaviorPort_Operation_main_assertP_p);
				// LiteralBoolean LiteralBoolean109
				BehaviorPort_Operation_main_ObjectFlow107_LiteralBoolean109->setThisElementPtr(BehaviorPort_Operation_main_ObjectFlow107_LiteralBoolean109);
				BehaviorPort_Operation_main_ObjectFlow107_LiteralBoolean109->setName("LiteralBoolean109");
				BehaviorPort_Operation_main_ObjectFlow107_LiteralBoolean109->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_main_ObjectFlow107_LiteralBoolean109->setValue(true);
			BehaviorPort_Operation_main_ObjectFlow107->setGuard(BehaviorPort_Operation_main_ObjectFlow107_LiteralBoolean109);
		BehaviorPort_Operation_main->addEdge(BehaviorPort_Operation_main_ObjectFlow107);
	BehaviorPort_Operation->addPackagedElement(BehaviorPort_Operation_main);
		// Class C
		BehaviorPort_Operation_C->setThisClass_Ptr(BehaviorPort_Operation_C);
		BehaviorPort_Operation_C->setName("C");
		BehaviorPort_Operation_C->setVisibility(VisibilityKind::public_);
		
			// Port pc
			BehaviorPort_Operation_C_pc->setThisElementPtr(BehaviorPort_Operation_C_pc);
			BehaviorPort_Operation_C_pc->setName("pc");
			BehaviorPort_Operation_C_pc->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_C_pc->setType(BehaviorPort_Operation_I);
			BehaviorPort_Operation_C_pc->setAggregation(AggregationKind::composite);
			BehaviorPort_Operation_C_pc->isBehavior = true;
			BehaviorPort_Operation_C_pc->isService = true;
			BehaviorPort_Operation_C_pc->addProvided(BehaviorPort_Operation_I);
		BehaviorPort_Operation_C->addOwnedAttribute(BehaviorPort_Operation_C_pc);
		BehaviorPort_Operation_C->setClassifierBehavior(BehaviorPort_Operation_C_C_ClassifierBehavior);
			// Activity C_Factory
			BehaviorPort_Operation_C_C_Factory->setThisActivityPtr(BehaviorPort_Operation_C_C_Factory);
			BehaviorPort_Operation_C_C_Factory->setName("C_Factory");
			BehaviorPort_Operation_C_C_Factory->setVisibility(VisibilityKind::public_);
			
				// Parameter result
				BehaviorPort_Operation_C_C_Factory_result->setThisElementPtr(BehaviorPort_Operation_C_C_Factory_result);
				BehaviorPort_Operation_C_C_Factory_result->setName("result");
				BehaviorPort_Operation_C_C_Factory_result->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_C_Factory_result->setType(BehaviorPort_Operation_C);
				BehaviorPort_Operation_C_C_Factory_result->setDirection(ParameterDirectionKind::return_);
			BehaviorPort_Operation_C_C_Factory->addOwnedParameter(BehaviorPort_Operation_C_C_Factory_result);
				// ForkNode Fork object
				BehaviorPort_Operation_C_C_Factory_Fork_object->setThisElementPtr(BehaviorPort_Operation_C_C_Factory_Fork_object);
				BehaviorPort_Operation_C_C_Factory_Fork_object->setName("Fork object");
				BehaviorPort_Operation_C_C_Factory_Fork_object->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_C_C_Factory->addNode(BehaviorPort_Operation_C_C_Factory_Fork_object);
				// CreateObjectAction Create C
				BehaviorPort_Operation_C_C_Factory_Create_C->setThisExecutableNodePtr(BehaviorPort_Operation_C_C_Factory_Create_C);
				BehaviorPort_Operation_C_C_Factory_Create_C->setName("Create C");
				BehaviorPort_Operation_C_C_Factory_Create_C->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_C_C_Factory_Create_C->setClassifier(BehaviorPort_Operation_C);
					// OutputPin result
					BehaviorPort_Operation_C_C_Factory_Create_C_result->setThisElementPtr(BehaviorPort_Operation_C_C_Factory_Create_C_result);
					BehaviorPort_Operation_C_C_Factory_Create_C_result->setName("result");
					BehaviorPort_Operation_C_C_Factory_Create_C_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_Factory_Create_C_result->setType(BehaviorPort_Operation_C);
				BehaviorPort_Operation_C_C_Factory_Create_C->setResult(BehaviorPort_Operation_C_C_Factory_Create_C_result);
			BehaviorPort_Operation_C_C_Factory->addNode(BehaviorPort_Operation_C_C_Factory_Create_C);
				// StartObjectBehaviorAction Start classifierBehavior
				BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior->setThisExecutableNodePtr(BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior);
				BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior->setName("Start classifierBehavior");
				BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior->setVisibility(VisibilityKind::public_);
					// InputPin object
					BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object->setThisElementPtr(BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object);
					BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object->setName("object");
					BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object->setType(BehaviorPort_Operation_C);
				BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior->setObject(BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object);
			BehaviorPort_Operation_C_C_Factory->addNode(BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior);
				// ActivityParameterNode resultParameterNode
				BehaviorPort_Operation_C_C_Factory_resultParameterNode->setThisElementPtr(BehaviorPort_Operation_C_C_Factory_resultParameterNode);
				BehaviorPort_Operation_C_C_Factory_resultParameterNode->setName("resultParameterNode");
				BehaviorPort_Operation_C_C_Factory_resultParameterNode->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_C_Factory_resultParameterNode->setParameter(BehaviorPort_Operation_C_C_Factory_result);
			BehaviorPort_Operation_C_C_Factory->addNode(BehaviorPort_Operation_C_C_Factory_resultParameterNode);
				// CallOperationAction C()
				BehaviorPort_Operation_C_C_Factory_C_->setThisExecutableNodePtr(BehaviorPort_Operation_C_C_Factory_C_);
				BehaviorPort_Operation_C_C_Factory_C_->setName("C()");
				BehaviorPort_Operation_C_C_Factory_C_->setVisibility(VisibilityKind::public_);
				
					// OutputPin result
					BehaviorPort_Operation_C_C_Factory_C__result->setThisElementPtr(BehaviorPort_Operation_C_C_Factory_C__result);
					BehaviorPort_Operation_C_C_Factory_C__result->setName("result");
					BehaviorPort_Operation_C_C_Factory_C__result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_Factory_C__result->setType(BehaviorPort_Operation_C);
				BehaviorPort_Operation_C_C_Factory_C_->addResult(BehaviorPort_Operation_C_C_Factory_C__result);
				BehaviorPort_Operation_C_C_Factory_C_->setOperation(BehaviorPort_Operation_C_C_C);
					// InputPin target
					BehaviorPort_Operation_C_C_Factory_C__target->setThisElementPtr(BehaviorPort_Operation_C_C_Factory_C__target);
					BehaviorPort_Operation_C_C_Factory_C__target->setName("target");
					BehaviorPort_Operation_C_C_Factory_C__target->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_Factory_C__target->setType(BehaviorPort_Operation_C);
				BehaviorPort_Operation_C_C_Factory_C_->setTarget(BehaviorPort_Operation_C_C_Factory_C__target);
			BehaviorPort_Operation_C_C_Factory->addNode(BehaviorPort_Operation_C_C_Factory_C_);
				// ObjectFlow ObjectFlow115 from result to Fork object
				BehaviorPort_Operation_C_C_Factory_ObjectFlow115->setThisActivityEdgePtr(BehaviorPort_Operation_C_C_Factory_ObjectFlow115);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow115->setName("ObjectFlow115");
				BehaviorPort_Operation_C_C_Factory_ObjectFlow115->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_C_Factory_ObjectFlow115->setSource(BehaviorPort_Operation_C_C_Factory_C__result);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow115->setTarget(BehaviorPort_Operation_C_C_Factory_Fork_object);
					// LiteralBoolean LiteralBoolean116
					BehaviorPort_Operation_C_C_Factory_ObjectFlow115_LiteralBoolean116->setThisElementPtr(BehaviorPort_Operation_C_C_Factory_ObjectFlow115_LiteralBoolean116);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow115_LiteralBoolean116->setName("LiteralBoolean116");
					BehaviorPort_Operation_C_C_Factory_ObjectFlow115_LiteralBoolean116->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow115_LiteralBoolean116->setValue(true);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow115->setGuard(BehaviorPort_Operation_C_C_Factory_ObjectFlow115_LiteralBoolean116);
			BehaviorPort_Operation_C_C_Factory->addEdge(BehaviorPort_Operation_C_C_Factory_ObjectFlow115);
				// ObjectFlow ObjectFlow118 from Fork object to resultParameterNode
				BehaviorPort_Operation_C_C_Factory_ObjectFlow118->setThisActivityEdgePtr(BehaviorPort_Operation_C_C_Factory_ObjectFlow118);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow118->setName("ObjectFlow118");
				BehaviorPort_Operation_C_C_Factory_ObjectFlow118->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_C_Factory_ObjectFlow118->setSource(BehaviorPort_Operation_C_C_Factory_Fork_object);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow118->setTarget(BehaviorPort_Operation_C_C_Factory_resultParameterNode);
					// LiteralBoolean LiteralBoolean119
					BehaviorPort_Operation_C_C_Factory_ObjectFlow118_LiteralBoolean119->setThisElementPtr(BehaviorPort_Operation_C_C_Factory_ObjectFlow118_LiteralBoolean119);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow118_LiteralBoolean119->setName("LiteralBoolean119");
					BehaviorPort_Operation_C_C_Factory_ObjectFlow118_LiteralBoolean119->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow118_LiteralBoolean119->setValue(true);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow118->setGuard(BehaviorPort_Operation_C_C_Factory_ObjectFlow118_LiteralBoolean119);
			BehaviorPort_Operation_C_C_Factory->addEdge(BehaviorPort_Operation_C_C_Factory_ObjectFlow118);
				// ObjectFlow ObjectFlow121 from Fork object to object
				BehaviorPort_Operation_C_C_Factory_ObjectFlow121->setThisActivityEdgePtr(BehaviorPort_Operation_C_C_Factory_ObjectFlow121);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow121->setName("ObjectFlow121");
				BehaviorPort_Operation_C_C_Factory_ObjectFlow121->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_C_Factory_ObjectFlow121->setSource(BehaviorPort_Operation_C_C_Factory_Fork_object);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow121->setTarget(BehaviorPort_Operation_C_C_Factory_Start_classifierBehavior_object);
					// LiteralBoolean LiteralBoolean122
					BehaviorPort_Operation_C_C_Factory_ObjectFlow121_LiteralBoolean122->setThisElementPtr(BehaviorPort_Operation_C_C_Factory_ObjectFlow121_LiteralBoolean122);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow121_LiteralBoolean122->setName("LiteralBoolean122");
					BehaviorPort_Operation_C_C_Factory_ObjectFlow121_LiteralBoolean122->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow121_LiteralBoolean122->setValue(true);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow121->setGuard(BehaviorPort_Operation_C_C_Factory_ObjectFlow121_LiteralBoolean122);
			BehaviorPort_Operation_C_C_Factory->addEdge(BehaviorPort_Operation_C_C_Factory_ObjectFlow121);
				// ObjectFlow ObjectFlow128 from result to target
				BehaviorPort_Operation_C_C_Factory_ObjectFlow128->setThisActivityEdgePtr(BehaviorPort_Operation_C_C_Factory_ObjectFlow128);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow128->setName("ObjectFlow128");
				BehaviorPort_Operation_C_C_Factory_ObjectFlow128->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_C_Factory_ObjectFlow128->setSource(BehaviorPort_Operation_C_C_Factory_Create_C_result);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow128->setTarget(BehaviorPort_Operation_C_C_Factory_C__target);
					// LiteralBoolean LiteralBoolean130
					BehaviorPort_Operation_C_C_Factory_ObjectFlow128_LiteralBoolean130->setThisElementPtr(BehaviorPort_Operation_C_C_Factory_ObjectFlow128_LiteralBoolean130);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow128_LiteralBoolean130->setName("LiteralBoolean130");
					BehaviorPort_Operation_C_C_Factory_ObjectFlow128_LiteralBoolean130->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_Factory_ObjectFlow128_LiteralBoolean130->setValue(true);
				BehaviorPort_Operation_C_C_Factory_ObjectFlow128->setGuard(BehaviorPort_Operation_C_C_Factory_ObjectFlow128_LiteralBoolean130);
			BehaviorPort_Operation_C_C_Factory->addEdge(BehaviorPort_Operation_C_C_Factory_ObjectFlow128);
		BehaviorPort_Operation_C->addOwnedBehavior(BehaviorPort_Operation_C_C_Factory);
			// Activity C$ClassifierBehavior
			BehaviorPort_Operation_C_C_ClassifierBehavior->setThisActivityPtr(BehaviorPort_Operation_C_C_ClassifierBehavior);
			BehaviorPort_Operation_C_C_ClassifierBehavior->setName("C$ClassifierBehavior");
			BehaviorPort_Operation_C_C_ClassifierBehavior->setVisibility(VisibilityKind::public_);
				// ForkNode Fork result
				BehaviorPort_Operation_C_C_ClassifierBehavior_Fork_result->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_Fork_result);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Fork_result->setName("Fork result");
				BehaviorPort_Operation_C_C_ClassifierBehavior_Fork_result->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_C_C_ClassifierBehavior->addNode(BehaviorPort_Operation_C_C_ClassifierBehavior_Fork_result);
				// InitialNode InitialNode1
				BehaviorPort_Operation_C_C_ClassifierBehavior_InitialNode1->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_InitialNode1);
				BehaviorPort_Operation_C_C_ClassifierBehavior_InitialNode1->setName("InitialNode1");
				BehaviorPort_Operation_C_C_ClassifierBehavior_InitialNode1->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_C_C_ClassifierBehavior->addNode(BehaviorPort_Operation_C_C_ClassifierBehavior_InitialNode1);
				// CallBehaviorAction Call Xor
				BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor->setThisExecutableNodePtr(BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor->setName("Call Xor");
				BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor->setVisibility(VisibilityKind::public_);
				
					// OutputPin result
					BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result->setName("result");
					BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor->addResult(BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_BooleanFunctions_Xor);
					// InputPin x
					BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x->setName("x");
					BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor->addArgument(BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x);
					// InputPin y
					BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y->setName("y");
					BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor->addArgument(BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y);
			BehaviorPort_Operation_C_C_ClassifierBehavior->addNode(BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor);
				// AcceptCallAction Accept or()
				BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or_->setThisExecutableNodePtr(BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or_);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or_->setName("Accept or()");
				BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or_->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or_->setIsUnmarshall(true);
					// OutputPin a
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__a->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__a);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__a->setName("a");
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__a->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__a->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or_->addResult(BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__a);
					// OutputPin b
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__b->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__b);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__b->setName("b");
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__b->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__b->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or_->addResult(BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__b);
					// Trigger CallEventOrTrigger
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__CallEventOrTrigger->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__CallEventOrTrigger);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__CallEventOrTrigger->setName("CallEventOrTrigger");
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__CallEventOrTrigger->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__CallEventOrTrigger->setEvent(BehaviorPort_Operation_CallEventOr);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or_->addTrigger(BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__CallEventOrTrigger);
					// OutputPin returnInformation
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__returnInformation->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__returnInformation);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__returnInformation->setName("returnInformation");
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__returnInformation->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__returnInformation->setType(BehaviorPort_Operation_P);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or_->setReturnInformation(BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__returnInformation);
			BehaviorPort_Operation_C_C_ClassifierBehavior->addNode(BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or_);
				// ReplyAction Reply or()
				BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or_->setThisExecutableNodePtr(BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or_);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or_->setName("Reply or()");
				BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or_->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or_->setReplyToCall(BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__CallEventOrTrigger);
					// InputPin returnInformation
					BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__returnInformation->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__returnInformation);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__returnInformation->setName("returnInformation");
					BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__returnInformation->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__returnInformation->setType(BehaviorPort_Operation_P);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or_->setReturnInformation(BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__returnInformation);
					// InputPin cr
					BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__cr->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__cr);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__cr->setName("cr");
					BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__cr->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__cr->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or_->addReplyValue(BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__cr);
					// InputPin r
					BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__r->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__r);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__r->setName("r");
					BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__r->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__r->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or_->addReplyValue(BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__r);
			BehaviorPort_Operation_C_C_ClassifierBehavior->addNode(BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or_);
				// ObjectFlow ObjectFlow137 from a to x
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137->setThisActivityEdgePtr(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137->setName("ObjectFlow137");
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137->setSource(BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__a);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137->setTarget(BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_x);
					// LiteralBoolean LiteralBoolean139
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137_LiteralBoolean139->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137_LiteralBoolean139);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137_LiteralBoolean139->setName("LiteralBoolean139");
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137_LiteralBoolean139->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137_LiteralBoolean139->setValue(true);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137->setGuard(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137_LiteralBoolean139);
			BehaviorPort_Operation_C_C_ClassifierBehavior->addEdge(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow137);
				// ControlFlow ControlFlow140 from InitialNode1 to Accept or()
				BehaviorPort_Operation_C_C_ClassifierBehavior_ControlFlow140->setThisActivityEdgePtr(BehaviorPort_Operation_C_C_ClassifierBehavior_ControlFlow140);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ControlFlow140->setName("ControlFlow140");
				BehaviorPort_Operation_C_C_ClassifierBehavior_ControlFlow140->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_C_ClassifierBehavior_ControlFlow140->setSource(BehaviorPort_Operation_C_C_ClassifierBehavior_InitialNode1);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ControlFlow140->setTarget(BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or_);
			BehaviorPort_Operation_C_C_ClassifierBehavior->addEdge(BehaviorPort_Operation_C_C_ClassifierBehavior_ControlFlow140);
				// ObjectFlow ObjectFlow141 from result to Fork result
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141->setThisActivityEdgePtr(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141->setName("ObjectFlow141");
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141->setSource(BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_result);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141->setTarget(BehaviorPort_Operation_C_C_ClassifierBehavior_Fork_result);
					// LiteralBoolean LiteralBoolean143
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141_LiteralBoolean143->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141_LiteralBoolean143);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141_LiteralBoolean143->setName("LiteralBoolean143");
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141_LiteralBoolean143->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141_LiteralBoolean143->setValue(true);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141->setGuard(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141_LiteralBoolean143);
			BehaviorPort_Operation_C_C_ClassifierBehavior->addEdge(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow141);
				// ObjectFlow ObjectFlow144 from Fork result to r
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144->setThisActivityEdgePtr(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144->setName("ObjectFlow144");
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144->setSource(BehaviorPort_Operation_C_C_ClassifierBehavior_Fork_result);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144->setTarget(BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__r);
					// LiteralBoolean LiteralBoolean145
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144_LiteralBoolean145->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144_LiteralBoolean145);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144_LiteralBoolean145->setName("LiteralBoolean145");
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144_LiteralBoolean145->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144_LiteralBoolean145->setValue(true);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144->setGuard(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144_LiteralBoolean145);
			BehaviorPort_Operation_C_C_ClassifierBehavior->addEdge(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow144);
				// ObjectFlow ObjectFlow147 from Fork result to cr
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147->setThisActivityEdgePtr(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147->setName("ObjectFlow147");
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147->setSource(BehaviorPort_Operation_C_C_ClassifierBehavior_Fork_result);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147->setTarget(BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__cr);
					// LiteralBoolean LiteralBoolean148
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147_LiteralBoolean148->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147_LiteralBoolean148);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147_LiteralBoolean148->setName("LiteralBoolean148");
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147_LiteralBoolean148->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147_LiteralBoolean148->setValue(true);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147->setGuard(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147_LiteralBoolean148);
			BehaviorPort_Operation_C_C_ClassifierBehavior->addEdge(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow147);
				// ObjectFlow ObjectFlow157 from returnInformation to returnInformation
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157->setThisActivityEdgePtr(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157->setName("ObjectFlow157");
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157->setSource(BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__returnInformation);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157->setTarget(BehaviorPort_Operation_C_C_ClassifierBehavior_Reply_or__returnInformation);
					// LiteralBoolean LiteralBoolean158
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157_LiteralBoolean158->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157_LiteralBoolean158);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157_LiteralBoolean158->setName("LiteralBoolean158");
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157_LiteralBoolean158->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157_LiteralBoolean158->setValue(true);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157->setGuard(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157_LiteralBoolean158);
			BehaviorPort_Operation_C_C_ClassifierBehavior->addEdge(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow157);
				// ObjectFlow ObjectFlow162 from b to y
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162->setThisActivityEdgePtr(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162->setName("ObjectFlow162");
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162->setSource(BehaviorPort_Operation_C_C_ClassifierBehavior_Accept_or__b);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162->setTarget(BehaviorPort_Operation_C_C_ClassifierBehavior_Call_Xor_y);
					// LiteralBoolean LiteralBoolean164
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162_LiteralBoolean164->setThisElementPtr(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162_LiteralBoolean164);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162_LiteralBoolean164->setName("LiteralBoolean164");
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162_LiteralBoolean164->setVisibility(VisibilityKind::public_);
					BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162_LiteralBoolean164->setValue(true);
				BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162->setGuard(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162_LiteralBoolean164);
			BehaviorPort_Operation_C_C_ClassifierBehavior->addEdge(BehaviorPort_Operation_C_C_ClassifierBehavior_ObjectFlow162);
		BehaviorPort_Operation_C->addOwnedBehavior(BehaviorPort_Operation_C_C_ClassifierBehavior);
			BehaviorPort_Operation_C_I_Realization->setName("I_Realization");
			BehaviorPort_Operation_C_I_Realization->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_C_I_Realization->setContract(BehaviorPort_Operation_I);
			
		BehaviorPort_Operation_C->addInterfaceRealization(BehaviorPort_Operation_C_I_Realization);
		
		BehaviorPort_Operation_C->setIsActive(true);
			// Operation C_C
			BehaviorPort_Operation_C_C_C->setThisOperationPtr(BehaviorPort_Operation_C_C_C);
			BehaviorPort_Operation_C_C_C->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			BehaviorPort_Operation_C_C_C->setName("C_C");
			BehaviorPort_Operation_C_C_C->setVisibility(VisibilityKind::public_);
				// Parameter result
				BehaviorPort_Operation_C_C_C_result->setThisElementPtr(BehaviorPort_Operation_C_C_C_result);
				BehaviorPort_Operation_C_C_C_result->setName("result");
				BehaviorPort_Operation_C_C_C_result->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_C_C_result->setType(BehaviorPort_Operation_C);
				BehaviorPort_Operation_C_C_C_result->setDirection(ParameterDirectionKind::return_);
			BehaviorPort_Operation_C_C_C->addOwnedParameter(BehaviorPort_Operation_C_C_C_result);
		BehaviorPort_Operation_C->addOwnedOperation(BehaviorPort_Operation_C_C_C);
			// Operation Boolean_or_Boolean_Boolean_Boolean
			BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean->setThisOperationPtr(BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean);
			BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean->setName("Boolean_or_Boolean_Boolean_Boolean");
			BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean->setVisibility(VisibilityKind::public_);
				// Parameter a
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_a->setThisElementPtr(BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_a);
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_a->setName("a");
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_a->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_a->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean->addOwnedParameter(BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_a);
				// Parameter b
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_b->setThisElementPtr(BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_b);
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_b->setName("b");
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_b->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_b->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean->addOwnedParameter(BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_b);
				// Parameter c
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_c->setThisElementPtr(BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_c);
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_c->setName("c");
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_c->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_c->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_c->setDirection(ParameterDirectionKind::out);
			BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean->addOwnedParameter(BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_c);
				// Parameter result
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_result->setThisElementPtr(BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_result);
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_result->setName("result");
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_result->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_result->setDirection(ParameterDirectionKind::return_);
			BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean->addOwnedParameter(BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean_result);
		BehaviorPort_Operation_C->addOwnedOperation(BehaviorPort_Operation_C_Boolean_or_Boolean_Boolean_Boolean);
	BehaviorPort_Operation->addPackagedElement(BehaviorPort_Operation_C);
		// Class S
		BehaviorPort_Operation_S->setThisClass_Ptr(BehaviorPort_Operation_S);
		BehaviorPort_Operation_S->setName("S");
		BehaviorPort_Operation_S->setVisibility(VisibilityKind::public_);
		
			// Property p
			BehaviorPort_Operation_S_p->setThisElementPtr(BehaviorPort_Operation_S_p);
			BehaviorPort_Operation_S_p->setName("p");
			BehaviorPort_Operation_S_p->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_S_p->setType(BehaviorPort_Operation_P);
			BehaviorPort_Operation_S_p->setAggregation(AggregationKind::composite);
		BehaviorPort_Operation_S->addOwnedAttribute(BehaviorPort_Operation_S_p);
			// Property c
			BehaviorPort_Operation_S_c->setThisElementPtr(BehaviorPort_Operation_S_c);
			BehaviorPort_Operation_S_c->setName("c");
			BehaviorPort_Operation_S_c->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_S_c->setType(BehaviorPort_Operation_C);
			BehaviorPort_Operation_S_c->setAggregation(AggregationKind::composite);
		BehaviorPort_Operation_S->addOwnedAttribute(BehaviorPort_Operation_S_c);
		
		BehaviorPort_Operation_S_Connector1->setName("Connector1");
			BehaviorPort_Operation_S_Connector1->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_S_Connector1_ConnectorEnd165->setRole(BehaviorPort_Operation_P_pp);
				BehaviorPort_Operation_S_Connector1_ConnectorEnd165->setPartWithPort(BehaviorPort_Operation_S_p);
				
			BehaviorPort_Operation_S_Connector1->addEnd(BehaviorPort_Operation_S_Connector1_ConnectorEnd165);
				
				BehaviorPort_Operation_S_Connector1_ConnectorEnd166->setRole(BehaviorPort_Operation_C_pc);
				BehaviorPort_Operation_S_Connector1_ConnectorEnd166->setPartWithPort(BehaviorPort_Operation_S_c);
				
			BehaviorPort_Operation_S_Connector1->addEnd(BehaviorPort_Operation_S_Connector1_ConnectorEnd166);
		BehaviorPort_Operation_S->addOwnedConnector(BehaviorPort_Operation_S_Connector1);
			// Operation S_S
			BehaviorPort_Operation_S_S_S->setThisOperationPtr(BehaviorPort_Operation_S_S_S);
			BehaviorPort_Operation_S_S_S->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			BehaviorPort_Operation_S_S_S->setName("S_S");
			BehaviorPort_Operation_S_S_S->setVisibility(VisibilityKind::public_);
				// Parameter result
				BehaviorPort_Operation_S_S_S_result->setThisElementPtr(BehaviorPort_Operation_S_S_S_result);
				BehaviorPort_Operation_S_S_S_result->setName("result");
				BehaviorPort_Operation_S_S_S_result->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_S_S_S_result->setType(BehaviorPort_Operation_S);
				BehaviorPort_Operation_S_S_S_result->setDirection(ParameterDirectionKind::return_);
			BehaviorPort_Operation_S_S_S->addOwnedParameter(BehaviorPort_Operation_S_S_S_result);
		BehaviorPort_Operation_S->addOwnedOperation(BehaviorPort_Operation_S_S_S);
	BehaviorPort_Operation->addPackagedElement(BehaviorPort_Operation_S);
		// Signal Start
		BehaviorPort_Operation_Start->setThisSignalPtr(BehaviorPort_Operation_Start);
		BehaviorPort_Operation_Start->setName("Start");
		BehaviorPort_Operation_Start->setVisibility(VisibilityKind::public_);
	BehaviorPort_Operation->addPackagedElement(BehaviorPort_Operation_Start);
		// Usage I_Usage_P
		BehaviorPort_Operation_I_Usage_P->setName("I_Usage_P");
		BehaviorPort_Operation_I_Usage_P->setVisibility(VisibilityKind::public_);
		BehaviorPort_Operation_I_Usage_P->addClient(BehaviorPort_Operation_P);
		BehaviorPort_Operation_I_Usage_P->addSupplier(BehaviorPort_Operation_I);
	BehaviorPort_Operation->addPackagedElement(BehaviorPort_Operation_I_Usage_P);
		// Activity assertP
		BehaviorPort_Operation_assertP->setThisActivityPtr(BehaviorPort_Operation_assertP);
		BehaviorPort_Operation_assertP->setName("assertP");
		BehaviorPort_Operation_assertP->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testFalse
			BehaviorPort_Operation_assertP_testFalse->setThisClass_Ptr(BehaviorPort_Operation_assertP_testFalse);
			BehaviorPort_Operation_assertP_testFalse->setName("testFalse");
			BehaviorPort_Operation_assertP_testFalse->setVisibility(VisibilityKind::public_);
			
				// Parameter input
				BehaviorPort_Operation_assertP_testFalse_input->setThisElementPtr(BehaviorPort_Operation_assertP_testFalse_input);
				BehaviorPort_Operation_assertP_testFalse_input->setName("input");
				BehaviorPort_Operation_assertP_testFalse_input->setVisibility(VisibilityKind::public_);
				
				BehaviorPort_Operation_assertP_testFalse_input->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			BehaviorPort_Operation_assertP_testFalse->addOwnedParameter(BehaviorPort_Operation_assertP_testFalse_input);
			BehaviorPort_Operation_assertP_testFalse->addLanguage("C++");
			BehaviorPort_Operation_assertP_testFalse->addLanguage("Include");
			BehaviorPort_Operation_assertP_testFalse->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	// Test parameter input 	bool input = AS(BooleanValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument input = \" + std::to_string(input)); 	if(input == false) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << \" Was: \" << std::to_string(input) << \" ; Should: false\"<<std::endl; 	}");
			BehaviorPort_Operation_assertP_testFalse->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/BooleanValue.h> ");
		BehaviorPort_Operation_assertP->addOwnedBehavior(BehaviorPort_Operation_assertP_testFalse);
			// Parameter p
			BehaviorPort_Operation_assertP_p->setThisElementPtr(BehaviorPort_Operation_assertP_p);
			BehaviorPort_Operation_assertP_p->setName("p");
			BehaviorPort_Operation_assertP_p->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_assertP_p->setType(BehaviorPort_Operation_P);
		BehaviorPort_Operation_assertP->addOwnedParameter(BehaviorPort_Operation_assertP_p);
			// CallBehaviorAction test return
			BehaviorPort_Operation_assertP_test_return->setThisExecutableNodePtr(BehaviorPort_Operation_assertP_test_return);
			BehaviorPort_Operation_assertP_test_return->setName("test return");
			BehaviorPort_Operation_assertP_test_return->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_assertP_test_return->setBehavior(BehaviorPort_Operation_assertP_testFalse);
				// InputPin input
				BehaviorPort_Operation_assertP_test_return_input->setThisElementPtr(BehaviorPort_Operation_assertP_test_return_input);
				BehaviorPort_Operation_assertP_test_return_input->setName("input");
				BehaviorPort_Operation_assertP_test_return_input->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_test_return_input->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			BehaviorPort_Operation_assertP_test_return->addArgument(BehaviorPort_Operation_assertP_test_return_input);
		BehaviorPort_Operation_assertP->addNode(BehaviorPort_Operation_assertP_test_return);
			// ForkNode Fork p
			BehaviorPort_Operation_assertP_Fork_p->setThisElementPtr(BehaviorPort_Operation_assertP_Fork_p);
			BehaviorPort_Operation_assertP_Fork_p->setName("Fork p");
			BehaviorPort_Operation_assertP_Fork_p->setVisibility(VisibilityKind::public_);
		BehaviorPort_Operation_assertP->addNode(BehaviorPort_Operation_assertP_Fork_p);
			// ValueSpecificationAction p.out message
			BehaviorPort_Operation_assertP_p_out_message->setThisExecutableNodePtr(BehaviorPort_Operation_assertP_p_out_message);
			BehaviorPort_Operation_assertP_p_out_message->setName("p.out message");
			BehaviorPort_Operation_assertP_p_out_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString202
				BehaviorPort_Operation_assertP_p_out_message_LiteralString202->setThisElementPtr(BehaviorPort_Operation_assertP_p_out_message_LiteralString202);
				BehaviorPort_Operation_assertP_p_out_message_LiteralString202->setName("LiteralString202");
				BehaviorPort_Operation_assertP_p_out_message_LiteralString202->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_p_out_message_LiteralString202->setValue("Asserting p.out == false");
			BehaviorPort_Operation_assertP_p_out_message->setValue(BehaviorPort_Operation_assertP_p_out_message_LiteralString202);
				// OutputPin result
				BehaviorPort_Operation_assertP_p_out_message_result->setThisElementPtr(BehaviorPort_Operation_assertP_p_out_message_result);
				BehaviorPort_Operation_assertP_p_out_message_result->setName("result");
				BehaviorPort_Operation_assertP_p_out_message_result->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_p_out_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			BehaviorPort_Operation_assertP_p_out_message->setResult(BehaviorPort_Operation_assertP_p_out_message_result);
		BehaviorPort_Operation_assertP->addNode(BehaviorPort_Operation_assertP_p_out_message);
			// CallBehaviorAction test out
			BehaviorPort_Operation_assertP_test_out->setThisExecutableNodePtr(BehaviorPort_Operation_assertP_test_out);
			BehaviorPort_Operation_assertP_test_out->setName("test out");
			BehaviorPort_Operation_assertP_test_out->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_assertP_test_out->setBehavior(BehaviorPort_Operation_assertP_testFalse);
				// InputPin input
				BehaviorPort_Operation_assertP_test_out_input->setThisElementPtr(BehaviorPort_Operation_assertP_test_out_input);
				BehaviorPort_Operation_assertP_test_out_input->setName("input");
				BehaviorPort_Operation_assertP_test_out_input->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_test_out_input->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			BehaviorPort_Operation_assertP_test_out->addArgument(BehaviorPort_Operation_assertP_test_out_input);
		BehaviorPort_Operation_assertP->addNode(BehaviorPort_Operation_assertP_test_out);
			// CallBehaviorAction writeLine p.return
			BehaviorPort_Operation_assertP_writeLine_p_return->setThisExecutableNodePtr(BehaviorPort_Operation_assertP_writeLine_p_return);
			BehaviorPort_Operation_assertP_writeLine_p_return->setName("writeLine p.return");
			BehaviorPort_Operation_assertP_writeLine_p_return->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus->setThisElementPtr(BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus);
				BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus->setName("errorStatus");
				BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
				BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus->setLower(0);
			BehaviorPort_Operation_assertP_writeLine_p_return->addResult(BehaviorPort_Operation_assertP_writeLine_p_return_errorStatus);
			BehaviorPort_Operation_assertP_writeLine_p_return->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				BehaviorPort_Operation_assertP_writeLine_p_return_value->setThisElementPtr(BehaviorPort_Operation_assertP_writeLine_p_return_value);
				BehaviorPort_Operation_assertP_writeLine_p_return_value->setName("value");
				BehaviorPort_Operation_assertP_writeLine_p_return_value->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_writeLine_p_return_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			BehaviorPort_Operation_assertP_writeLine_p_return->addArgument(BehaviorPort_Operation_assertP_writeLine_p_return_value);
		BehaviorPort_Operation_assertP->addNode(BehaviorPort_Operation_assertP_writeLine_p_return);
			// ReadStructuralFeatureAction p.return
			BehaviorPort_Operation_assertP_p_return->setThisExecutableNodePtr(BehaviorPort_Operation_assertP_p_return);
			BehaviorPort_Operation_assertP_p_return->setName("p.return");
			BehaviorPort_Operation_assertP_p_return->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_assertP_p_return->setStructuralFeature(BehaviorPort_Operation_P_return);
				// InputPin object
				BehaviorPort_Operation_assertP_p_return_object->setThisElementPtr(BehaviorPort_Operation_assertP_p_return_object);
				BehaviorPort_Operation_assertP_p_return_object->setName("object");
				BehaviorPort_Operation_assertP_p_return_object->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_p_return_object->setType(BehaviorPort_Operation_P);
			BehaviorPort_Operation_assertP_p_return->setObject(BehaviorPort_Operation_assertP_p_return_object);
				// OutputPin result
				BehaviorPort_Operation_assertP_p_return_result->setThisElementPtr(BehaviorPort_Operation_assertP_p_return_result);
				BehaviorPort_Operation_assertP_p_return_result->setName("result");
				BehaviorPort_Operation_assertP_p_return_result->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_p_return_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_assertP_p_return_result->setLower(0);
			BehaviorPort_Operation_assertP_p_return->setResult(BehaviorPort_Operation_assertP_p_return_result);
		BehaviorPort_Operation_assertP->addNode(BehaviorPort_Operation_assertP_p_return);
			// CallBehaviorAction writeLine p.out
			BehaviorPort_Operation_assertP_writeLine_p_out->setThisExecutableNodePtr(BehaviorPort_Operation_assertP_writeLine_p_out);
			BehaviorPort_Operation_assertP_writeLine_p_out->setName("writeLine p.out");
			BehaviorPort_Operation_assertP_writeLine_p_out->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus->setThisElementPtr(BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus);
				BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus->setName("errorStatus");
				BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
				BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus->setLower(0);
			BehaviorPort_Operation_assertP_writeLine_p_out->addResult(BehaviorPort_Operation_assertP_writeLine_p_out_errorStatus);
			BehaviorPort_Operation_assertP_writeLine_p_out->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				BehaviorPort_Operation_assertP_writeLine_p_out_value->setThisElementPtr(BehaviorPort_Operation_assertP_writeLine_p_out_value);
				BehaviorPort_Operation_assertP_writeLine_p_out_value->setName("value");
				BehaviorPort_Operation_assertP_writeLine_p_out_value->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_writeLine_p_out_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			BehaviorPort_Operation_assertP_writeLine_p_out->addArgument(BehaviorPort_Operation_assertP_writeLine_p_out_value);
		BehaviorPort_Operation_assertP->addNode(BehaviorPort_Operation_assertP_writeLine_p_out);
			// ReadStructuralFeatureAction p.out
			BehaviorPort_Operation_assertP_p_out->setThisExecutableNodePtr(BehaviorPort_Operation_assertP_p_out);
			BehaviorPort_Operation_assertP_p_out->setName("p.out");
			BehaviorPort_Operation_assertP_p_out->setVisibility(VisibilityKind::public_);
			BehaviorPort_Operation_assertP_p_out->setStructuralFeature(BehaviorPort_Operation_P_out);
				// InputPin object
				BehaviorPort_Operation_assertP_p_out_object->setThisElementPtr(BehaviorPort_Operation_assertP_p_out_object);
				BehaviorPort_Operation_assertP_p_out_object->setName("object");
				BehaviorPort_Operation_assertP_p_out_object->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_p_out_object->setType(BehaviorPort_Operation_P);
			BehaviorPort_Operation_assertP_p_out->setObject(BehaviorPort_Operation_assertP_p_out_object);
				// OutputPin result
				BehaviorPort_Operation_assertP_p_out_result->setThisElementPtr(BehaviorPort_Operation_assertP_p_out_result);
				BehaviorPort_Operation_assertP_p_out_result->setName("result");
				BehaviorPort_Operation_assertP_p_out_result->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_p_out_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				BehaviorPort_Operation_assertP_p_out_result->setLower(0);
			BehaviorPort_Operation_assertP_p_out->setResult(BehaviorPort_Operation_assertP_p_out_result);
		BehaviorPort_Operation_assertP->addNode(BehaviorPort_Operation_assertP_p_out);
			// ValueSpecificationAction p.return message
			BehaviorPort_Operation_assertP_p_return_message->setThisExecutableNodePtr(BehaviorPort_Operation_assertP_p_return_message);
			BehaviorPort_Operation_assertP_p_return_message->setName("p.return message");
			BehaviorPort_Operation_assertP_p_return_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString213
				BehaviorPort_Operation_assertP_p_return_message_LiteralString213->setThisElementPtr(BehaviorPort_Operation_assertP_p_return_message_LiteralString213);
				BehaviorPort_Operation_assertP_p_return_message_LiteralString213->setName("LiteralString213");
				BehaviorPort_Operation_assertP_p_return_message_LiteralString213->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_p_return_message_LiteralString213->setValue("Asserting p.return == false");
			BehaviorPort_Operation_assertP_p_return_message->setValue(BehaviorPort_Operation_assertP_p_return_message_LiteralString213);
				// OutputPin result
				BehaviorPort_Operation_assertP_p_return_message_result->setThisElementPtr(BehaviorPort_Operation_assertP_p_return_message_result);
				BehaviorPort_Operation_assertP_p_return_message_result->setName("result");
				BehaviorPort_Operation_assertP_p_return_message_result->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_p_return_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			BehaviorPort_Operation_assertP_p_return_message->setResult(BehaviorPort_Operation_assertP_p_return_message_result);
		BehaviorPort_Operation_assertP->addNode(BehaviorPort_Operation_assertP_p_return_message);
			// ActivityParameterNode pParameterNode
			BehaviorPort_Operation_assertP_pParameterNode->setThisElementPtr(BehaviorPort_Operation_assertP_pParameterNode);
			BehaviorPort_Operation_assertP_pParameterNode->setName("pParameterNode");
			BehaviorPort_Operation_assertP_pParameterNode->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_assertP_pParameterNode->setParameter(BehaviorPort_Operation_assertP_p);
		BehaviorPort_Operation_assertP->addNode(BehaviorPort_Operation_assertP_pParameterNode);
			// ObjectFlow ObjectFlow167 from result to input
			BehaviorPort_Operation_assertP_ObjectFlow167->setThisActivityEdgePtr(BehaviorPort_Operation_assertP_ObjectFlow167);
			BehaviorPort_Operation_assertP_ObjectFlow167->setName("ObjectFlow167");
			BehaviorPort_Operation_assertP_ObjectFlow167->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_assertP_ObjectFlow167->setSource(BehaviorPort_Operation_assertP_p_return_result);
			BehaviorPort_Operation_assertP_ObjectFlow167->setTarget(BehaviorPort_Operation_assertP_test_return_input);
				// LiteralBoolean LiteralBoolean169
				BehaviorPort_Operation_assertP_ObjectFlow167_LiteralBoolean169->setThisElementPtr(BehaviorPort_Operation_assertP_ObjectFlow167_LiteralBoolean169);
				BehaviorPort_Operation_assertP_ObjectFlow167_LiteralBoolean169->setName("LiteralBoolean169");
				BehaviorPort_Operation_assertP_ObjectFlow167_LiteralBoolean169->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_ObjectFlow167_LiteralBoolean169->setValue(true);
			BehaviorPort_Operation_assertP_ObjectFlow167->setGuard(BehaviorPort_Operation_assertP_ObjectFlow167_LiteralBoolean169);
		BehaviorPort_Operation_assertP->addEdge(BehaviorPort_Operation_assertP_ObjectFlow167);
			// ControlFlow ControlFlow170 from p.out to p.out message
			BehaviorPort_Operation_assertP_ControlFlow170->setThisActivityEdgePtr(BehaviorPort_Operation_assertP_ControlFlow170);
			BehaviorPort_Operation_assertP_ControlFlow170->setName("ControlFlow170");
			BehaviorPort_Operation_assertP_ControlFlow170->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_assertP_ControlFlow170->setSource(BehaviorPort_Operation_assertP_p_out);
			BehaviorPort_Operation_assertP_ControlFlow170->setTarget(BehaviorPort_Operation_assertP_p_out_message);
		BehaviorPort_Operation_assertP->addEdge(BehaviorPort_Operation_assertP_ControlFlow170);
			// ObjectFlow ObjectFlow171 from pParameterNode to Fork p
			BehaviorPort_Operation_assertP_ObjectFlow171->setThisActivityEdgePtr(BehaviorPort_Operation_assertP_ObjectFlow171);
			BehaviorPort_Operation_assertP_ObjectFlow171->setName("ObjectFlow171");
			BehaviorPort_Operation_assertP_ObjectFlow171->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_assertP_ObjectFlow171->setSource(BehaviorPort_Operation_assertP_pParameterNode);
			BehaviorPort_Operation_assertP_ObjectFlow171->setTarget(BehaviorPort_Operation_assertP_Fork_p);
				// LiteralBoolean LiteralBoolean172
				BehaviorPort_Operation_assertP_ObjectFlow171_LiteralBoolean172->setThisElementPtr(BehaviorPort_Operation_assertP_ObjectFlow171_LiteralBoolean172);
				BehaviorPort_Operation_assertP_ObjectFlow171_LiteralBoolean172->setName("LiteralBoolean172");
				BehaviorPort_Operation_assertP_ObjectFlow171_LiteralBoolean172->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_ObjectFlow171_LiteralBoolean172->setValue(true);
			BehaviorPort_Operation_assertP_ObjectFlow171->setGuard(BehaviorPort_Operation_assertP_ObjectFlow171_LiteralBoolean172);
		BehaviorPort_Operation_assertP->addEdge(BehaviorPort_Operation_assertP_ObjectFlow171);
			// ObjectFlow ObjectFlow174 from Fork p to object
			BehaviorPort_Operation_assertP_ObjectFlow174->setThisActivityEdgePtr(BehaviorPort_Operation_assertP_ObjectFlow174);
			BehaviorPort_Operation_assertP_ObjectFlow174->setName("ObjectFlow174");
			BehaviorPort_Operation_assertP_ObjectFlow174->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_assertP_ObjectFlow174->setSource(BehaviorPort_Operation_assertP_Fork_p);
			BehaviorPort_Operation_assertP_ObjectFlow174->setTarget(BehaviorPort_Operation_assertP_p_out_object);
				// LiteralBoolean LiteralBoolean175
				BehaviorPort_Operation_assertP_ObjectFlow174_LiteralBoolean175->setThisElementPtr(BehaviorPort_Operation_assertP_ObjectFlow174_LiteralBoolean175);
				BehaviorPort_Operation_assertP_ObjectFlow174_LiteralBoolean175->setName("LiteralBoolean175");
				BehaviorPort_Operation_assertP_ObjectFlow174_LiteralBoolean175->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_ObjectFlow174_LiteralBoolean175->setValue(true);
			BehaviorPort_Operation_assertP_ObjectFlow174->setGuard(BehaviorPort_Operation_assertP_ObjectFlow174_LiteralBoolean175);
		BehaviorPort_Operation_assertP->addEdge(BehaviorPort_Operation_assertP_ObjectFlow174);
			// ControlFlow ControlFlow196 from writeLine p.return to test return
			BehaviorPort_Operation_assertP_ControlFlow196->setThisActivityEdgePtr(BehaviorPort_Operation_assertP_ControlFlow196);
			BehaviorPort_Operation_assertP_ControlFlow196->setName("ControlFlow196");
			BehaviorPort_Operation_assertP_ControlFlow196->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_assertP_ControlFlow196->setSource(BehaviorPort_Operation_assertP_writeLine_p_return);
			BehaviorPort_Operation_assertP_ControlFlow196->setTarget(BehaviorPort_Operation_assertP_test_return);
		BehaviorPort_Operation_assertP->addEdge(BehaviorPort_Operation_assertP_ControlFlow196);
			// ControlFlow ControlFlow197 from test out to test return
			BehaviorPort_Operation_assertP_ControlFlow197->setThisActivityEdgePtr(BehaviorPort_Operation_assertP_ControlFlow197);
			BehaviorPort_Operation_assertP_ControlFlow197->setName("ControlFlow197");
			BehaviorPort_Operation_assertP_ControlFlow197->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_assertP_ControlFlow197->setSource(BehaviorPort_Operation_assertP_test_out);
			BehaviorPort_Operation_assertP_ControlFlow197->setTarget(BehaviorPort_Operation_assertP_test_return);
		BehaviorPort_Operation_assertP->addEdge(BehaviorPort_Operation_assertP_ControlFlow197);
			// ObjectFlow ObjectFlow209 from result to value
			BehaviorPort_Operation_assertP_ObjectFlow209->setThisActivityEdgePtr(BehaviorPort_Operation_assertP_ObjectFlow209);
			BehaviorPort_Operation_assertP_ObjectFlow209->setName("ObjectFlow209");
			BehaviorPort_Operation_assertP_ObjectFlow209->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_assertP_ObjectFlow209->setSource(BehaviorPort_Operation_assertP_p_out_message_result);
			BehaviorPort_Operation_assertP_ObjectFlow209->setTarget(BehaviorPort_Operation_assertP_writeLine_p_out_value);
				// LiteralBoolean LiteralBoolean210
				BehaviorPort_Operation_assertP_ObjectFlow209_LiteralBoolean210->setThisElementPtr(BehaviorPort_Operation_assertP_ObjectFlow209_LiteralBoolean210);
				BehaviorPort_Operation_assertP_ObjectFlow209_LiteralBoolean210->setName("LiteralBoolean210");
				BehaviorPort_Operation_assertP_ObjectFlow209_LiteralBoolean210->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_ObjectFlow209_LiteralBoolean210->setValue(true);
			BehaviorPort_Operation_assertP_ObjectFlow209->setGuard(BehaviorPort_Operation_assertP_ObjectFlow209_LiteralBoolean210);
		BehaviorPort_Operation_assertP->addEdge(BehaviorPort_Operation_assertP_ObjectFlow209);
			// ControlFlow ControlFlow212 from p.return to p.return message
			BehaviorPort_Operation_assertP_ControlFlow212->setThisActivityEdgePtr(BehaviorPort_Operation_assertP_ControlFlow212);
			BehaviorPort_Operation_assertP_ControlFlow212->setName("ControlFlow212");
			BehaviorPort_Operation_assertP_ControlFlow212->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_assertP_ControlFlow212->setSource(BehaviorPort_Operation_assertP_p_return);
			BehaviorPort_Operation_assertP_ControlFlow212->setTarget(BehaviorPort_Operation_assertP_p_return_message);
		BehaviorPort_Operation_assertP->addEdge(BehaviorPort_Operation_assertP_ControlFlow212);
			// ObjectFlow ObjectFlow216 from result to input
			BehaviorPort_Operation_assertP_ObjectFlow216->setThisActivityEdgePtr(BehaviorPort_Operation_assertP_ObjectFlow216);
			BehaviorPort_Operation_assertP_ObjectFlow216->setName("ObjectFlow216");
			BehaviorPort_Operation_assertP_ObjectFlow216->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_assertP_ObjectFlow216->setSource(BehaviorPort_Operation_assertP_p_out_result);
			BehaviorPort_Operation_assertP_ObjectFlow216->setTarget(BehaviorPort_Operation_assertP_test_out_input);
				// LiteralBoolean LiteralBoolean217
				BehaviorPort_Operation_assertP_ObjectFlow216_LiteralBoolean217->setThisElementPtr(BehaviorPort_Operation_assertP_ObjectFlow216_LiteralBoolean217);
				BehaviorPort_Operation_assertP_ObjectFlow216_LiteralBoolean217->setName("LiteralBoolean217");
				BehaviorPort_Operation_assertP_ObjectFlow216_LiteralBoolean217->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_ObjectFlow216_LiteralBoolean217->setValue(true);
			BehaviorPort_Operation_assertP_ObjectFlow216->setGuard(BehaviorPort_Operation_assertP_ObjectFlow216_LiteralBoolean217);
		BehaviorPort_Operation_assertP->addEdge(BehaviorPort_Operation_assertP_ObjectFlow216);
			// ControlFlow ControlFlow219 from writeLine p.out to test out
			BehaviorPort_Operation_assertP_ControlFlow219->setThisActivityEdgePtr(BehaviorPort_Operation_assertP_ControlFlow219);
			BehaviorPort_Operation_assertP_ControlFlow219->setName("ControlFlow219");
			BehaviorPort_Operation_assertP_ControlFlow219->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_assertP_ControlFlow219->setSource(BehaviorPort_Operation_assertP_writeLine_p_out);
			BehaviorPort_Operation_assertP_ControlFlow219->setTarget(BehaviorPort_Operation_assertP_test_out);
		BehaviorPort_Operation_assertP->addEdge(BehaviorPort_Operation_assertP_ControlFlow219);
			// ObjectFlow ObjectFlow220 from result to value
			BehaviorPort_Operation_assertP_ObjectFlow220->setThisActivityEdgePtr(BehaviorPort_Operation_assertP_ObjectFlow220);
			BehaviorPort_Operation_assertP_ObjectFlow220->setName("ObjectFlow220");
			BehaviorPort_Operation_assertP_ObjectFlow220->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_assertP_ObjectFlow220->setSource(BehaviorPort_Operation_assertP_p_return_message_result);
			BehaviorPort_Operation_assertP_ObjectFlow220->setTarget(BehaviorPort_Operation_assertP_writeLine_p_return_value);
				// LiteralBoolean LiteralBoolean222
				BehaviorPort_Operation_assertP_ObjectFlow220_LiteralBoolean222->setThisElementPtr(BehaviorPort_Operation_assertP_ObjectFlow220_LiteralBoolean222);
				BehaviorPort_Operation_assertP_ObjectFlow220_LiteralBoolean222->setName("LiteralBoolean222");
				BehaviorPort_Operation_assertP_ObjectFlow220_LiteralBoolean222->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_ObjectFlow220_LiteralBoolean222->setValue(true);
			BehaviorPort_Operation_assertP_ObjectFlow220->setGuard(BehaviorPort_Operation_assertP_ObjectFlow220_LiteralBoolean222);
		BehaviorPort_Operation_assertP->addEdge(BehaviorPort_Operation_assertP_ObjectFlow220);
			// ObjectFlow ObjectFlow223 from Fork p to object
			BehaviorPort_Operation_assertP_ObjectFlow223->setThisActivityEdgePtr(BehaviorPort_Operation_assertP_ObjectFlow223);
			BehaviorPort_Operation_assertP_ObjectFlow223->setName("ObjectFlow223");
			BehaviorPort_Operation_assertP_ObjectFlow223->setVisibility(VisibilityKind::public_);
			
			BehaviorPort_Operation_assertP_ObjectFlow223->setSource(BehaviorPort_Operation_assertP_Fork_p);
			BehaviorPort_Operation_assertP_ObjectFlow223->setTarget(BehaviorPort_Operation_assertP_p_return_object);
				// LiteralBoolean LiteralBoolean224
				BehaviorPort_Operation_assertP_ObjectFlow223_LiteralBoolean224->setThisElementPtr(BehaviorPort_Operation_assertP_ObjectFlow223_LiteralBoolean224);
				BehaviorPort_Operation_assertP_ObjectFlow223_LiteralBoolean224->setName("LiteralBoolean224");
				BehaviorPort_Operation_assertP_ObjectFlow223_LiteralBoolean224->setVisibility(VisibilityKind::public_);
				BehaviorPort_Operation_assertP_ObjectFlow223_LiteralBoolean224->setValue(true);
			BehaviorPort_Operation_assertP_ObjectFlow223->setGuard(BehaviorPort_Operation_assertP_ObjectFlow223_LiteralBoolean224);
		BehaviorPort_Operation_assertP->addEdge(BehaviorPort_Operation_assertP_ObjectFlow223);
	BehaviorPort_Operation->addPackagedElement(BehaviorPort_Operation_assertP);
}
