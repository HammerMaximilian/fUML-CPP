/*
 * DelegationConnectors_P_PModel.cpp
 * 
 * Auto-generated file
 */

#include "DelegationConnectors_P_PModel.h"

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/actions/CallBehaviorAction.h>
#include <uml/activities/Activity.h>
#include <uml/activities/ObjectFlow.h>
#include <uml/values/LiteralBoolean.h>
#include <uml/classification/Property.h>
#include <uml/actions/InputPin.h>
#include <uml/values/LiteralInteger.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/classification/Parameter.h>
#include <uml/commonstructure/Comment.h>
#include <uml/activities/ActivityParameterNode.h>
#include <uml/classification/Operation.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/commonstructure/PackageImport.h>
#include <utils/standardprofile/StandardProfileModel.h>
#include <uml/activities/ControlFlow.h>
#include <uml/simpleclassifiers/Interface.h>
#include <uml/structuredclassifiers/ConnectorEnd.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/structuredclassifiers/Connector.h>
#include <uml/structuredclassifiers/Association.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/structuredclassifiers/Port.h>
#include <uml/simpleclassifiers/InterfaceRealization.h>
#include <uml/packages/Package.h>
#include <uml/values/LiteralUnlimitedNatural.h>
#include <uml/values/LiteralString.h>
#include <uml/actions/OutputPin.h>
#include <uml/structuredclassifiers/Class_.h>


/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace DelegationConnectors_P_P;
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

DelegationConnectors_P_PModel::DelegationConnectors_P_PModel()
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

DelegationConnectors_P_PModel::~DelegationConnectors_P_PModel()
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

const std::shared_ptr<DelegationConnectors_P_PModel>& DelegationConnectors_P_PModel::Instance()
{
	static std::shared_ptr<DelegationConnectors_P_PModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new DelegationConnectors_P_PModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void DelegationConnectors_P_PModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model DelegationConnectors_P_P
	 */
	DelegationConnectors_P_P.reset(new Package());
	this->addToElementRepository("DelegationConnectors_P_P", DelegationConnectors_P_P);
		DelegationConnectors_P_P_assert_A_Star_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Star_Pattern", DelegationConnectors_P_P_assert_A_Star_Pattern);
			DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine);
				DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_value);
					DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_value_LiteralUnlimitedNatural0.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural0", DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_value_LiteralUnlimitedNatural0);
					DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_value_LiteralInteger1.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger1", DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_value_LiteralInteger1);
					DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_value_LiteralInteger2.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger2", DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_value_LiteralInteger2);
				DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus);
					DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger3.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger3", DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger3);
					DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger4.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger4", DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger4);
					DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural5.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural5", DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural5);
			DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Star_Pattern", DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern);
			DelegationConnectors_P_P_assert_A_Star_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", DelegationConnectors_P_P_assert_A_Star_Pattern_message);
				DelegationConnectors_P_P_assert_A_Star_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_P_assert_A_Star_Pattern_message_result);
					DelegationConnectors_P_P_assert_A_Star_Pattern_message_result_LiteralUnlimitedNatural6.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural6", DelegationConnectors_P_P_assert_A_Star_Pattern_message_result_LiteralUnlimitedNatural6);
					DelegationConnectors_P_P_assert_A_Star_Pattern_message_result_LiteralInteger7.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger7", DelegationConnectors_P_P_assert_A_Star_Pattern_message_result_LiteralInteger7);
				DelegationConnectors_P_P_assert_A_Star_Pattern_message_LiteralString8.reset(new LiteralString());
				this->addToElementRepository("LiteralString8", DelegationConnectors_P_P_assert_A_Star_Pattern_message_LiteralString8);
			DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow9", DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9);
				DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9_LiteralBoolean10.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean10", DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9_LiteralBoolean10);
				DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9_LiteralInteger11.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger11", DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9_LiteralInteger11);
			DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Star_Pattern_node", DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node);
				DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node_LiteralInteger12.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger12", DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node_LiteralInteger12);
		DelegationConnectors_P_P_instantiate_A_Star_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Star_Pattern", DelegationConnectors_P_P_instantiate_A_Star_Pattern);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Star_Pattern()", DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target);
					DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural13", DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralUnlimitedNatural13);
					DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralInteger14.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger14", DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralInteger14);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result);
					DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger15.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger15", DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger15);
					DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger16.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger16", DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger16);
					DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralUnlimitedNatural17.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural17", DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralUnlimitedNatural17);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow18", DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18_LiteralBoolean19.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean19", DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18_LiteralBoolean19);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18_LiteralInteger20.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger20", DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18_LiteralInteger20);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow21", DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21_LiteralBoolean22.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean22", DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21_LiteralBoolean22);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21_LiteralInteger23.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger23", DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21_LiteralInteger23);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Star_Pattern", DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Star_Pattern_node", DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Star_Pattern", DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
					DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralInteger24.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger24", DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralInteger24);
					DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralUnlimitedNatural25.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural25", DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralUnlimitedNatural25);
		DelegationConnectors_P_P_A_Star_Pattern.reset(new Class_());
		this->addToElementRepository("A_Star_Pattern", DelegationConnectors_P_P_A_Star_Pattern);
			DelegationConnectors_P_P_A_Star_Pattern_b.reset(new Property());
			this->addToElementRepository("b", DelegationConnectors_P_P_A_Star_Pattern_b);
				DelegationConnectors_P_P_A_Star_Pattern_b_LiteralInteger26.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger26", DelegationConnectors_P_P_A_Star_Pattern_b_LiteralInteger26);
				DelegationConnectors_P_P_A_Star_Pattern_b_LiteralUnlimitedNatural27.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural27", DelegationConnectors_P_P_A_Star_Pattern_b_LiteralUnlimitedNatural27);
			DelegationConnectors_P_P_A_Star_Pattern_p.reset(new Port());
			this->addToElementRepository("p", DelegationConnectors_P_P_A_Star_Pattern_p);
				DelegationConnectors_P_P_A_Star_Pattern_p_LiteralInteger28.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger28", DelegationConnectors_P_P_A_Star_Pattern_p_LiteralInteger28);
				DelegationConnectors_P_P_A_Star_Pattern_p_LiteralUnlimitedNatural29.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural29", DelegationConnectors_P_P_A_Star_Pattern_p_LiteralUnlimitedNatural29);
			DelegationConnectors_P_P_A_Star_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", DelegationConnectors_P_P_A_Star_Pattern_r);
				DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd30", DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30);
					DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30_LiteralInteger31.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger31", DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30_LiteralInteger31);
					DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30_LiteralUnlimitedNatural32.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural32", DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30_LiteralUnlimitedNatural32);
				DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd33.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd33", DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd33);
					DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd33_LiteralUnlimitedNatural34.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural34", DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd33_LiteralUnlimitedNatural34);
					DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd33_LiteralInteger35.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger35", DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd33_LiteralInteger35);
			DelegationConnectors_P_P_A_Star_Pattern_Comment36.reset(new Comment());
			this->addToElementRepository("Comment36", DelegationConnectors_P_P_A_Star_Pattern_Comment36);
			DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern.reset(new Operation());
			this->addToElementRepository("A_Star_Pattern_A_Star_Pattern", DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
				DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
		DelegationConnectors_P_P_B.reset(new Class_());
		this->addToElementRepository("B", DelegationConnectors_P_P_B);
			DelegationConnectors_P_P_B_I_Realization.reset(new InterfaceRealization());
			this->addToElementRepository("I_Realization", DelegationConnectors_P_P_B_I_Realization);
		DelegationConnectors_P_P_main.reset(new Activity());
		this->addToElementRepository("main", DelegationConnectors_P_P_main);
			DelegationConnectors_P_P_main_ControlFlow37.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow37", DelegationConnectors_P_P_main_ControlFlow37);
			DelegationConnectors_P_P_main_assert_A_Array_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Array_Pattern", DelegationConnectors_P_P_main_assert_A_Array_Pattern);
				DelegationConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Array_Pattern", DelegationConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern);
					DelegationConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger38.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger38", DelegationConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger38);
					DelegationConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger39.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger39", DelegationConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger39);
					DelegationConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural40.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural40", DelegationConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural40);
			DelegationConnectors_P_P_main_ObjectFlow41.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow41", DelegationConnectors_P_P_main_ObjectFlow41);
				DelegationConnectors_P_P_main_ObjectFlow41_LiteralInteger42.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger42", DelegationConnectors_P_P_main_ObjectFlow41_LiteralInteger42);
				DelegationConnectors_P_P_main_ObjectFlow41_LiteralBoolean43.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean43", DelegationConnectors_P_P_main_ObjectFlow41_LiteralBoolean43);
			DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Unconnected_Pattern", DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern);
				DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Unconnected_Pattern", DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
					DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger44.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger44", DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger44);
					DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger45.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger45", DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger45);
					DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural46.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural46", DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural46);
			DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Unconnected_Pattern", DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern);
				DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Unconnected_Pattern", DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
					DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger47);
					DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger48.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger48", DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger48);
					DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural49.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural49", DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural49);
			DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Empty_Pattern", DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern);
				DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Empty_Pattern", DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
					DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural50", DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural50);
					DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger51.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger51", DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger51);
					DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger52.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger52", DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger52);
			DelegationConnectors_P_P_main_assert_A_Star_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Star_Pattern", DelegationConnectors_P_P_main_assert_A_Star_Pattern);
				DelegationConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Star_Pattern", DelegationConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern);
					DelegationConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger53.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger53", DelegationConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger53);
					DelegationConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural54.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural54", DelegationConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural54);
					DelegationConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger55.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger55", DelegationConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger55);
			DelegationConnectors_P_P_main_assert_A_Empty_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Empty_Pattern", DelegationConnectors_P_P_main_assert_A_Empty_Pattern);
				DelegationConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Empty_Pattern", DelegationConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern);
					DelegationConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger56.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger56", DelegationConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger56);
					DelegationConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural57.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural57", DelegationConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural57);
					DelegationConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger58.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger58", DelegationConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger58);
			DelegationConnectors_P_P_main_ObjectFlow59.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow59", DelegationConnectors_P_P_main_ObjectFlow59);
				DelegationConnectors_P_P_main_ObjectFlow59_LiteralInteger60.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger60", DelegationConnectors_P_P_main_ObjectFlow59_LiteralInteger60);
				DelegationConnectors_P_P_main_ObjectFlow59_LiteralBoolean61.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean61", DelegationConnectors_P_P_main_ObjectFlow59_LiteralBoolean61);
			DelegationConnectors_P_P_main_instantiate_A_Array_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Array_Pattern", DelegationConnectors_P_P_main_instantiate_A_Array_Pattern);
				DelegationConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Array_Pattern", DelegationConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern);
					DelegationConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger62.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger62", DelegationConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger62);
					DelegationConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger63.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger63", DelegationConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger63);
					DelegationConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural64.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural64", DelegationConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural64);
			DelegationConnectors_P_P_main_ObjectFlow65.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow65", DelegationConnectors_P_P_main_ObjectFlow65);
				DelegationConnectors_P_P_main_ObjectFlow65_LiteralInteger66.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger66", DelegationConnectors_P_P_main_ObjectFlow65_LiteralInteger66);
				DelegationConnectors_P_P_main_ObjectFlow65_LiteralBoolean67.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean67", DelegationConnectors_P_P_main_ObjectFlow65_LiteralBoolean67);
			DelegationConnectors_P_P_main_ObjectFlow68.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow68", DelegationConnectors_P_P_main_ObjectFlow68);
				DelegationConnectors_P_P_main_ObjectFlow68_LiteralInteger69.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger69", DelegationConnectors_P_P_main_ObjectFlow68_LiteralInteger69);
				DelegationConnectors_P_P_main_ObjectFlow68_LiteralBoolean70.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean70", DelegationConnectors_P_P_main_ObjectFlow68_LiteralBoolean70);
			DelegationConnectors_P_P_main_instantiate_A_Star_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Star_Pattern", DelegationConnectors_P_P_main_instantiate_A_Star_Pattern);
				DelegationConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Star_Pattern", DelegationConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern);
					DelegationConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural71.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural71", DelegationConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural71);
					DelegationConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger72.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger72", DelegationConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger72);
					DelegationConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger73.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger73", DelegationConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger73);
			DelegationConnectors_P_P_main_ControlFlow74.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow74", DelegationConnectors_P_P_main_ControlFlow74);
			DelegationConnectors_P_P_main_ControlFlow75.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow75", DelegationConnectors_P_P_main_ControlFlow75);
		DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Unconnected_Pattern", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Unconnected_Pattern()", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
					DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralUnlimitedNatural76.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural76", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralUnlimitedNatural76);
					DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger77.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger77", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger77);
					DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger78.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger78", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger78);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
					DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralInteger79.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger79", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralInteger79);
					DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralUnlimitedNatural80.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural80", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralUnlimitedNatural80);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow81", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean82", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralInteger83.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger83", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralInteger83);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Unconnected_Pattern", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Unconnected_Pattern", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
					DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralInteger84.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger84", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralInteger84);
					DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralUnlimitedNatural85.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural85", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralUnlimitedNatural85);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow86", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86_LiteralBoolean87.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean87", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86_LiteralBoolean87);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86_LiteralInteger88.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger88", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86_LiteralInteger88);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Unconnected_Pattern_node", DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
		DelegationConnectors_P_P_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", DelegationConnectors_P_P_IImpl);
			DelegationConnectors_P_P_IImpl_I_Realization.reset(new InterfaceRealization());
			this->addToElementRepository("I_Realization", DelegationConnectors_P_P_IImpl_I_Realization);
		DelegationConnectors_P_P_instantiate_A_Array_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Array_Pattern", DelegationConnectors_P_P_instantiate_A_Array_Pattern);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Array_Pattern()", DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result);
					DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger89.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger89", DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger89);
					DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger90.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger90", DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger90);
					DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralUnlimitedNatural91.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural91", DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralUnlimitedNatural91);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target);
					DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralInteger92.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger92", DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralInteger92);
					DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralUnlimitedNatural93.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural93", DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralUnlimitedNatural93);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Array_Pattern", DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
					DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralInteger94.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger94", DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralInteger94);
					DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralUnlimitedNatural95.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural95", DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralUnlimitedNatural95);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow96", DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96_LiteralInteger97.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger97", DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96_LiteralInteger97);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96_LiteralBoolean98.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean98", DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96_LiteralBoolean98);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Array_Pattern", DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow99", DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99_LiteralBoolean100.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean100", DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99_LiteralBoolean100);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99_LiteralInteger101.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger101", DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99_LiteralInteger101);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Array_Pattern_node", DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger102.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger102", DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger102);
		DelegationConnectors_P_P_assert_A_Unconnected_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Unconnected_Pattern", DelegationConnectors_P_P_assert_A_Unconnected_Pattern);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Unconnected_Pattern_node", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node_LiteralInteger103.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger103", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node_LiteralInteger103);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value);
					DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralUnlimitedNatural104.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural104", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralUnlimitedNatural104);
					DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger105.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger105", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger105);
					DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger106.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger106", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger106);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus);
					DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger107.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger107", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger107);
					DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger108.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger108", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger108);
					DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural109.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural109", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural109);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Unconnected_Pattern", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow110", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110_LiteralBoolean111.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean111", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110_LiteralBoolean111);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110_LiteralInteger112.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger112", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110_LiteralInteger112);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_result);
					DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_result_LiteralInteger113.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger113", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_result_LiteralInteger113);
					DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_result_LiteralUnlimitedNatural114.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural114", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_result_LiteralUnlimitedNatural114);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString115.reset(new LiteralString());
				this->addToElementRepository("LiteralString115", DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString115);
		DelegationConnectors_P_P_A_Array_Pattern.reset(new Class_());
		this->addToElementRepository("A_Array_Pattern", DelegationConnectors_P_P_A_Array_Pattern);
			DelegationConnectors_P_P_A_Array_Pattern_Comment116.reset(new Comment());
			this->addToElementRepository("Comment116", DelegationConnectors_P_P_A_Array_Pattern_Comment116);
			DelegationConnectors_P_P_A_Array_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", DelegationConnectors_P_P_A_Array_Pattern_r);
				DelegationConnectors_P_P_A_Array_Pattern_r_ConnectorEnd117.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd117", DelegationConnectors_P_P_A_Array_Pattern_r_ConnectorEnd117);
					DelegationConnectors_P_P_A_Array_Pattern_r_ConnectorEnd117_LiteralUnlimitedNatural118.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural118", DelegationConnectors_P_P_A_Array_Pattern_r_ConnectorEnd117_LiteralUnlimitedNatural118);
				DelegationConnectors_P_P_A_Array_Pattern_r_ConnectorEnd119.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd119", DelegationConnectors_P_P_A_Array_Pattern_r_ConnectorEnd119);
					DelegationConnectors_P_P_A_Array_Pattern_r_ConnectorEnd119_LiteralUnlimitedNatural120.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural120", DelegationConnectors_P_P_A_Array_Pattern_r_ConnectorEnd119_LiteralUnlimitedNatural120);
			DelegationConnectors_P_P_A_Array_Pattern_b.reset(new Property());
			this->addToElementRepository("b", DelegationConnectors_P_P_A_Array_Pattern_b);
				DelegationConnectors_P_P_A_Array_Pattern_b_LiteralUnlimitedNatural121.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural121", DelegationConnectors_P_P_A_Array_Pattern_b_LiteralUnlimitedNatural121);
				DelegationConnectors_P_P_A_Array_Pattern_b_LiteralInteger122.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger122", DelegationConnectors_P_P_A_Array_Pattern_b_LiteralInteger122);
			DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern.reset(new Operation());
			this->addToElementRepository("A_Array_Pattern_A_Array_Pattern", DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
				DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result);
			DelegationConnectors_P_P_A_Array_Pattern_p.reset(new Port());
			this->addToElementRepository("p", DelegationConnectors_P_P_A_Array_Pattern_p);
				DelegationConnectors_P_P_A_Array_Pattern_p_LiteralInteger123.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger123", DelegationConnectors_P_P_A_Array_Pattern_p_LiteralInteger123);
				DelegationConnectors_P_P_A_Array_Pattern_p_LiteralUnlimitedNatural124.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural124", DelegationConnectors_P_P_A_Array_Pattern_p_LiteralUnlimitedNatural124);
		DelegationConnectors_P_P_R.reset(new Association());
		this->addToElementRepository("R", DelegationConnectors_P_P_R);
			DelegationConnectors_P_P_R_x.reset(new Property());
			this->addToElementRepository("x", DelegationConnectors_P_P_R_x);
				DelegationConnectors_P_P_R_x_LiteralInteger125.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger125", DelegationConnectors_P_P_R_x_LiteralInteger125);
				DelegationConnectors_P_P_R_x_LiteralUnlimitedNatural126.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural126", DelegationConnectors_P_P_R_x_LiteralUnlimitedNatural126);
			DelegationConnectors_P_P_R_y.reset(new Property());
			this->addToElementRepository("y", DelegationConnectors_P_P_R_y);
				DelegationConnectors_P_P_R_y_LiteralInteger127.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger127", DelegationConnectors_P_P_R_y_LiteralInteger127);
				DelegationConnectors_P_P_R_y_LiteralUnlimitedNatural128.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural128", DelegationConnectors_P_P_R_y_LiteralUnlimitedNatural128);
		DelegationConnectors_P_P_A_Unconnected_Pattern.reset(new Class_());
		this->addToElementRepository("A_Unconnected_Pattern", DelegationConnectors_P_P_A_Unconnected_Pattern);
			DelegationConnectors_P_P_A_Unconnected_Pattern_p.reset(new Port());
			this->addToElementRepository("p", DelegationConnectors_P_P_A_Unconnected_Pattern_p);
				DelegationConnectors_P_P_A_Unconnected_Pattern_p_LiteralInteger129.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger129", DelegationConnectors_P_P_A_Unconnected_Pattern_p_LiteralInteger129);
				DelegationConnectors_P_P_A_Unconnected_Pattern_p_LiteralUnlimitedNatural130.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural130", DelegationConnectors_P_P_A_Unconnected_Pattern_p_LiteralUnlimitedNatural130);
			DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern.reset(new Operation());
			this->addToElementRepository("A_Unconnected_Pattern_A_Unconnected_Pattern", DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
				DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result);
			DelegationConnectors_P_P_A_Unconnected_Pattern_b.reset(new Property());
			this->addToElementRepository("b", DelegationConnectors_P_P_A_Unconnected_Pattern_b);
				DelegationConnectors_P_P_A_Unconnected_Pattern_b_LiteralInteger131.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger131", DelegationConnectors_P_P_A_Unconnected_Pattern_b_LiteralInteger131);
				DelegationConnectors_P_P_A_Unconnected_Pattern_b_LiteralUnlimitedNatural132.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural132", DelegationConnectors_P_P_A_Unconnected_Pattern_b_LiteralUnlimitedNatural132);
			DelegationConnectors_P_P_A_Unconnected_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", DelegationConnectors_P_P_A_Unconnected_Pattern_r);
				DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd133.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd133", DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd133);
					DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd133_LiteralInteger134.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger134", DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd133_LiteralInteger134);
					DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd133_LiteralUnlimitedNatural135.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural135", DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd133_LiteralUnlimitedNatural135);
				DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd136.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd136", DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd136);
					DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd136_LiteralUnlimitedNatural137.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural137", DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd136_LiteralUnlimitedNatural137);
					DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd136_LiteralInteger138.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger138", DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd136_LiteralInteger138);
			DelegationConnectors_P_P_A_Unconnected_Pattern_Comment139.reset(new Comment());
			this->addToElementRepository("Comment139", DelegationConnectors_P_P_A_Unconnected_Pattern_Comment139);
		DelegationConnectors_P_P_I.reset(new Interface());
		this->addToElementRepository("I", DelegationConnectors_P_P_I);
		DelegationConnectors_P_P_instantiate_A_Empty_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Empty_Pattern", DelegationConnectors_P_P_instantiate_A_Empty_Pattern);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow140", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140_LiteralInteger141.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger141", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140_LiteralInteger141);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140_LiteralBoolean142.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean142", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140_LiteralBoolean142);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Empty_Pattern", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
					DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralInteger143.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger143", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralInteger143);
					DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralUnlimitedNatural144.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural144", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralUnlimitedNatural144);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Empty_Pattern_node", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Empty_Pattern", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow145", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145_LiteralBoolean146.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean146", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145_LiteralBoolean146);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145_LiteralInteger147.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger147", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145_LiteralInteger147);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Empty_Pattern()", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
					DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralUnlimitedNatural148.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural148", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralUnlimitedNatural148);
					DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralInteger149.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger149", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralInteger149);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
					DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger150.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger150", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger150);
					DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger151.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger151", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger151);
					DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralUnlimitedNatural152.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural152", DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralUnlimitedNatural152);
		DelegationConnectors_P_P_assert_A_Array_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Array_Pattern", DelegationConnectors_P_P_assert_A_Array_Pattern);
			DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow153", DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153);
				DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153_LiteralBoolean154.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean154", DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153_LiteralBoolean154);
				DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153_LiteralInteger155.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger155", DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153_LiteralInteger155);
			DelegationConnectors_P_P_assert_A_Array_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", DelegationConnectors_P_P_assert_A_Array_Pattern_message);
				DelegationConnectors_P_P_assert_A_Array_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_P_assert_A_Array_Pattern_message_result);
					DelegationConnectors_P_P_assert_A_Array_Pattern_message_result_LiteralInteger156.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger156", DelegationConnectors_P_P_assert_A_Array_Pattern_message_result_LiteralInteger156);
					DelegationConnectors_P_P_assert_A_Array_Pattern_message_result_LiteralUnlimitedNatural157.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural157", DelegationConnectors_P_P_assert_A_Array_Pattern_message_result_LiteralUnlimitedNatural157);
				DelegationConnectors_P_P_assert_A_Array_Pattern_message_LiteralString158.reset(new LiteralString());
				this->addToElementRepository("LiteralString158", DelegationConnectors_P_P_assert_A_Array_Pattern_message_LiteralString158);
			DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine);
				DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus);
					DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural159.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural159", DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural159);
					DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger160.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger160", DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger160);
					DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger161.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger161", DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger161);
				DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_value);
					DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_value_LiteralInteger162.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger162", DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_value_LiteralInteger162);
					DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_value_LiteralUnlimitedNatural163.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural163", DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_value_LiteralUnlimitedNatural163);
					DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_value_LiteralInteger164.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger164", DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_value_LiteralInteger164);
			DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Array_Pattern", DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern);
			DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Array_Pattern_node", DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node);
				DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger165.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger165", DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger165);
		DelegationConnectors_P_P_A_Empty_Pattern.reset(new Class_());
		this->addToElementRepository("A_Empty_Pattern", DelegationConnectors_P_P_A_Empty_Pattern);
			DelegationConnectors_P_P_A_Empty_Pattern_b.reset(new Property());
			this->addToElementRepository("b", DelegationConnectors_P_P_A_Empty_Pattern_b);
				DelegationConnectors_P_P_A_Empty_Pattern_b_LiteralInteger166.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger166", DelegationConnectors_P_P_A_Empty_Pattern_b_LiteralInteger166);
				DelegationConnectors_P_P_A_Empty_Pattern_b_LiteralUnlimitedNatural167.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural167", DelegationConnectors_P_P_A_Empty_Pattern_b_LiteralUnlimitedNatural167);
			DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern.reset(new Operation());
			this->addToElementRepository("A_Empty_Pattern_A_Empty_Pattern", DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
				DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result);
			DelegationConnectors_P_P_A_Empty_Pattern_Comment168.reset(new Comment());
			this->addToElementRepository("Comment168", DelegationConnectors_P_P_A_Empty_Pattern_Comment168);
			DelegationConnectors_P_P_A_Empty_Pattern_p.reset(new Port());
			this->addToElementRepository("p", DelegationConnectors_P_P_A_Empty_Pattern_p);
				DelegationConnectors_P_P_A_Empty_Pattern_p_LiteralInteger169.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger169", DelegationConnectors_P_P_A_Empty_Pattern_p_LiteralInteger169);
				DelegationConnectors_P_P_A_Empty_Pattern_p_LiteralUnlimitedNatural170.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural170", DelegationConnectors_P_P_A_Empty_Pattern_p_LiteralUnlimitedNatural170);
			DelegationConnectors_P_P_A_Empty_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", DelegationConnectors_P_P_A_Empty_Pattern_r);
				DelegationConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd171.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd171", DelegationConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd171);
					DelegationConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd171_LiteralUnlimitedNatural172.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural172", DelegationConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd171_LiteralUnlimitedNatural172);
				DelegationConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd173", DelegationConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173);
					DelegationConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173_LiteralUnlimitedNatural174.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural174", DelegationConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173_LiteralUnlimitedNatural174);
		DelegationConnectors_P_P_assert_A_Empty_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Empty_Pattern", DelegationConnectors_P_P_assert_A_Empty_Pattern);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", DelegationConnectors_P_P_assert_A_Empty_Pattern_message);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_P_assert_A_Empty_Pattern_message_result);
					DelegationConnectors_P_P_assert_A_Empty_Pattern_message_result_LiteralUnlimitedNatural175.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural175", DelegationConnectors_P_P_assert_A_Empty_Pattern_message_result_LiteralUnlimitedNatural175);
					DelegationConnectors_P_P_assert_A_Empty_Pattern_message_result_LiteralInteger176.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger176", DelegationConnectors_P_P_assert_A_Empty_Pattern_message_result_LiteralInteger176);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString177.reset(new LiteralString());
				this->addToElementRepository("LiteralString177", DelegationConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString177);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow178", DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178_LiteralInteger179.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger179", DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178_LiteralInteger179);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178_LiteralBoolean180.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean180", DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178_LiteralBoolean180);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus);
					DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural181.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural181", DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural181);
					DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger182.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger182", DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger182);
					DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger183.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger183", DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger183);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_value);
					DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_value_LiteralInteger184.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger184", DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_value_LiteralInteger184);
					DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_value_LiteralInteger185.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger185", DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_value_LiteralInteger185);
					DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_value_LiteralUnlimitedNatural186.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural186", DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_value_LiteralUnlimitedNatural186);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Empty_Pattern_node", DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node_LiteralInteger187.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger187", DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node_LiteralInteger187);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Empty_Pattern", DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern);

	// Initialize public members
	/*
	 * Model DelegationConnectors_P_P
	 */
	DelegationConnectors_P_P->setThisPackagePtr(DelegationConnectors_P_P);
	DelegationConnectors_P_P->setName("DelegationConnectors_P_P");
	DelegationConnectors_P_P->setVisibility(VisibilityKind::public_);
		// Activity assert_A_Star_Pattern
		DelegationConnectors_P_P_assert_A_Star_Pattern->setThisActivityPtr(DelegationConnectors_P_P_assert_A_Star_Pattern);
		DelegationConnectors_P_P_assert_A_Star_Pattern->setName("assert_A_Star_Pattern");
		DelegationConnectors_P_P_assert_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Star_Pattern
			DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern);
			DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
			DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern->setType(DelegationConnectors_P_P_A_Star_Pattern);
		DelegationConnectors_P_P_assert_A_Star_Pattern->addOwnedParameter(DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern);
			// CallBehaviorAction writeLine
			DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine->setThisExecutableNodePtr(DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine);
			DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine->setName("writeLine");
			DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus->setThisElementPtr(DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus);
				DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus->setName("errorStatus");
				DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus->setLower(0);
			DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine->addResult(DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus);
			DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_value->setThisElementPtr(DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_value);
				DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_value->setName("value");
				DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine->addArgument(DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_value);
		DelegationConnectors_P_P_assert_A_Star_Pattern->addNode(DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine);
			// ValueSpecificationAction message
			DelegationConnectors_P_P_assert_A_Star_Pattern_message->setThisExecutableNodePtr(DelegationConnectors_P_P_assert_A_Star_Pattern_message);
			DelegationConnectors_P_P_assert_A_Star_Pattern_message->setName("message");
			DelegationConnectors_P_P_assert_A_Star_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString8
				DelegationConnectors_P_P_assert_A_Star_Pattern_message_LiteralString8->setThisElementPtr(DelegationConnectors_P_P_assert_A_Star_Pattern_message_LiteralString8);
				DelegationConnectors_P_P_assert_A_Star_Pattern_message_LiteralString8->setName("LiteralString8");
				DelegationConnectors_P_P_assert_A_Star_Pattern_message_LiteralString8->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Star_Pattern_message_LiteralString8->setValue("Assertion currently not implemented for A_Star_Pattern.");
			DelegationConnectors_P_P_assert_A_Star_Pattern_message->setValue(DelegationConnectors_P_P_assert_A_Star_Pattern_message_LiteralString8);
				// OutputPin result
				DelegationConnectors_P_P_assert_A_Star_Pattern_message_result->setThisElementPtr(DelegationConnectors_P_P_assert_A_Star_Pattern_message_result);
				DelegationConnectors_P_P_assert_A_Star_Pattern_message_result->setName("result");
				DelegationConnectors_P_P_assert_A_Star_Pattern_message_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Star_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_P_assert_A_Star_Pattern_message->setResult(DelegationConnectors_P_P_assert_A_Star_Pattern_message_result);
		DelegationConnectors_P_P_assert_A_Star_Pattern->addNode(DelegationConnectors_P_P_assert_A_Star_Pattern_message);
			// ActivityParameterNode a_Star_Pattern_node
			DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node->setThisElementPtr(DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node);
			DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node->setName("a_Star_Pattern_node");
			DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node->setParameter(DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern);
		DelegationConnectors_P_P_assert_A_Star_Pattern->addNode(DelegationConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node);
			// ObjectFlow ObjectFlow9 from result to value
			DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9->setThisActivityEdgePtr(DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9);
			DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9->setName("ObjectFlow9");
			DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9->setSource(DelegationConnectors_P_P_assert_A_Star_Pattern_message_result);
			DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9->setTarget(DelegationConnectors_P_P_assert_A_Star_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean10
				DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9_LiteralBoolean10->setThisElementPtr(DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9_LiteralBoolean10);
				DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9_LiteralBoolean10->setName("LiteralBoolean10");
				DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9_LiteralBoolean10->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9_LiteralBoolean10->setValue(true);
			DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9->setGuard(DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9_LiteralBoolean10);
		DelegationConnectors_P_P_assert_A_Star_Pattern->addEdge(DelegationConnectors_P_P_assert_A_Star_Pattern_ObjectFlow9);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_assert_A_Star_Pattern);
		// Activity instantiate_A_Star_Pattern
		DelegationConnectors_P_P_instantiate_A_Star_Pattern->setThisActivityPtr(DelegationConnectors_P_P_instantiate_A_Star_Pattern);
		DelegationConnectors_P_P_instantiate_A_Star_Pattern->setName("instantiate_A_Star_Pattern");
		DelegationConnectors_P_P_instantiate_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Star_Pattern
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern->setType(DelegationConnectors_P_P_A_Star_Pattern);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern->setDirection(ParameterDirectionKind::return_);
		DelegationConnectors_P_P_instantiate_A_Star_Pattern->addOwnedParameter(DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern);
			// CallOperationAction A_Star_Pattern()
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_->setThisExecutableNodePtr(DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_->setName("A_Star_Pattern()");
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result->setName("result");
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result->setType(DelegationConnectors_P_P_A_Star_Pattern);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_->addResult(DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_->setOperation(DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
				// InputPin target
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target->setName("target");
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target->setType(DelegationConnectors_P_P_A_Star_Pattern);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_->setTarget(DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target);
		DelegationConnectors_P_P_instantiate_A_Star_Pattern->addNode(DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_);
			// ActivityParameterNode a_Star_Pattern_node
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node->setName("a_Star_Pattern_node");
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node->setParameter(DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern);
		DelegationConnectors_P_P_instantiate_A_Star_Pattern->addNode(DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node);
			// CreateObjectAction Create A_Star_Pattern
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setName("Create A_Star_Pattern");
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setClassifier(DelegationConnectors_P_P_A_Star_Pattern);
				// OutputPin result
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setName("result");
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setType(DelegationConnectors_P_P_A_Star_Pattern);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setResult(DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
		DelegationConnectors_P_P_instantiate_A_Star_Pattern->addNode(DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern);
			// ObjectFlow ObjectFlow18 from result to a_Star_Pattern_node
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18->setThisActivityEdgePtr(DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18->setName("ObjectFlow18");
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18->setSource(DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18->setTarget(DelegationConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node);
				// LiteralBoolean LiteralBoolean19
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18_LiteralBoolean19->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18_LiteralBoolean19);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18_LiteralBoolean19->setName("LiteralBoolean19");
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18_LiteralBoolean19->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18_LiteralBoolean19->setValue(true);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18->setGuard(DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18_LiteralBoolean19);
		DelegationConnectors_P_P_instantiate_A_Star_Pattern->addEdge(DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow18);
			// ObjectFlow ObjectFlow21 from result to target
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21->setThisActivityEdgePtr(DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21->setName("ObjectFlow21");
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21->setSource(DelegationConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21->setTarget(DelegationConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target);
				// LiteralBoolean LiteralBoolean22
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21_LiteralBoolean22->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21_LiteralBoolean22);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21_LiteralBoolean22->setName("LiteralBoolean22");
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21_LiteralBoolean22->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21_LiteralBoolean22->setValue(true);
			DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21->setGuard(DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21_LiteralBoolean22);
		DelegationConnectors_P_P_instantiate_A_Star_Pattern->addEdge(DelegationConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow21);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_instantiate_A_Star_Pattern);
		// Class A_Star_Pattern
		DelegationConnectors_P_P_A_Star_Pattern->setThisClass_Ptr(DelegationConnectors_P_P_A_Star_Pattern);
		DelegationConnectors_P_P_A_Star_Pattern->setName("A_Star_Pattern");
		DelegationConnectors_P_P_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property b
			DelegationConnectors_P_P_A_Star_Pattern_b->setThisElementPtr(DelegationConnectors_P_P_A_Star_Pattern_b);
			DelegationConnectors_P_P_A_Star_Pattern_b->setName("b");
			DelegationConnectors_P_P_A_Star_Pattern_b->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_A_Star_Pattern_b->setUpper(-1);
			DelegationConnectors_P_P_A_Star_Pattern_b->setLower(4);
			DelegationConnectors_P_P_A_Star_Pattern_b->setType(DelegationConnectors_P_P_B);
			DelegationConnectors_P_P_A_Star_Pattern_b->setAggregation(AggregationKind::composite);
		DelegationConnectors_P_P_A_Star_Pattern->addOwnedAttribute(DelegationConnectors_P_P_A_Star_Pattern_b);
			// Port p
			DelegationConnectors_P_P_A_Star_Pattern_p->setThisElementPtr(DelegationConnectors_P_P_A_Star_Pattern_p);
			DelegationConnectors_P_P_A_Star_Pattern_p->setName("p");
			DelegationConnectors_P_P_A_Star_Pattern_p->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_A_Star_Pattern_p->setUpper(-1);
			DelegationConnectors_P_P_A_Star_Pattern_p->setLower(3);
			DelegationConnectors_P_P_A_Star_Pattern_p->setType(DelegationConnectors_P_P_IImpl);
			DelegationConnectors_P_P_A_Star_Pattern_p->setAggregation(AggregationKind::composite);
			DelegationConnectors_P_P_A_Star_Pattern_p->isService = true;
			DelegationConnectors_P_P_A_Star_Pattern_p->addProvided(DelegationConnectors_P_P_I);
		DelegationConnectors_P_P_A_Star_Pattern->addOwnedAttribute(DelegationConnectors_P_P_A_Star_Pattern_p);
		
		DelegationConnectors_P_P_A_Star_Pattern_r->setName("r");
			DelegationConnectors_P_P_A_Star_Pattern_r->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd33->setUpper(-1);
				DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd33->setLower(3);
				DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd33->setRole(DelegationConnectors_P_P_A_Star_Pattern_p);
				
			DelegationConnectors_P_P_A_Star_Pattern_r->addEnd(DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd33);
				DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30->setUpper(-1);
				DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30->setLower(4);
				DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30->setRole(DelegationConnectors_P_P_A_Star_Pattern_b);
				
			DelegationConnectors_P_P_A_Star_Pattern_r->addEnd(DelegationConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30);
			DelegationConnectors_P_P_A_Star_Pattern_r->setType(DelegationConnectors_P_P_R);
		DelegationConnectors_P_P_A_Star_Pattern->addOwnedConnector(DelegationConnectors_P_P_A_Star_Pattern_r);
			// Operation A_Star_Pattern_A_Star_Pattern
			DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setThisOperationPtr(DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
			DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setName("A_Star_Pattern_A_Star_Pattern");
			DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setThisElementPtr(DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
				DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setName("result");
				DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setType(DelegationConnectors_P_P_A_Star_Pattern);
				DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setDirection(ParameterDirectionKind::return_);
			DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->addOwnedParameter(DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
		DelegationConnectors_P_P_A_Star_Pattern->addOwnedOperation(DelegationConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_A_Star_Pattern);
		// Class B
		DelegationConnectors_P_P_B->setThisClass_Ptr(DelegationConnectors_P_P_B);
		DelegationConnectors_P_P_B->setName("B");
		DelegationConnectors_P_P_B->setVisibility(VisibilityKind::public_);
		DelegationConnectors_P_P_B_I_Realization->setName("I_Realization");
			DelegationConnectors_P_P_B_I_Realization->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_B_I_Realization->setContract(DelegationConnectors_P_P_I);
			
		DelegationConnectors_P_P_B->addInterfaceRealization(DelegationConnectors_P_P_B_I_Realization);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_B);
		// Activity main
		DelegationConnectors_P_P_main->setThisActivityPtr(DelegationConnectors_P_P_main);
		DelegationConnectors_P_P_main->setName("main");
		DelegationConnectors_P_P_main->setVisibility(VisibilityKind::public_);
			// CallBehaviorAction assert_A_Empty_Pattern
			DelegationConnectors_P_P_main_assert_A_Empty_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_P_main_assert_A_Empty_Pattern);
			DelegationConnectors_P_P_main_assert_A_Empty_Pattern->setName("assert_A_Empty_Pattern");
			DelegationConnectors_P_P_main_assert_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_main_assert_A_Empty_Pattern->setBehavior(DelegationConnectors_P_P_assert_A_Empty_Pattern);
				// InputPin a_Empty_Pattern
				DelegationConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(DelegationConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern);
				DelegationConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
				DelegationConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern->setType(DelegationConnectors_P_P_A_Empty_Pattern);
			DelegationConnectors_P_P_main_assert_A_Empty_Pattern->addArgument(DelegationConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern);
		DelegationConnectors_P_P_main->addNode(DelegationConnectors_P_P_main_assert_A_Empty_Pattern);
			// CallBehaviorAction assert_A_Array_Pattern
			DelegationConnectors_P_P_main_assert_A_Array_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_P_main_assert_A_Array_Pattern);
			DelegationConnectors_P_P_main_assert_A_Array_Pattern->setName("assert_A_Array_Pattern");
			DelegationConnectors_P_P_main_assert_A_Array_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_main_assert_A_Array_Pattern->setBehavior(DelegationConnectors_P_P_assert_A_Array_Pattern);
				// InputPin a_Array_Pattern
				DelegationConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(DelegationConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern);
				DelegationConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
				DelegationConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern->setType(DelegationConnectors_P_P_A_Array_Pattern);
			DelegationConnectors_P_P_main_assert_A_Array_Pattern->addArgument(DelegationConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern);
		DelegationConnectors_P_P_main->addNode(DelegationConnectors_P_P_main_assert_A_Array_Pattern);
			// CallBehaviorAction instantiate_A_Array_Pattern
			DelegationConnectors_P_P_main_instantiate_A_Array_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_P_main_instantiate_A_Array_Pattern);
			DelegationConnectors_P_P_main_instantiate_A_Array_Pattern->setName("instantiate_A_Array_Pattern");
			DelegationConnectors_P_P_main_instantiate_A_Array_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Array_Pattern
				DelegationConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(DelegationConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern);
				DelegationConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
				DelegationConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern->setType(DelegationConnectors_P_P_A_Array_Pattern);
			DelegationConnectors_P_P_main_instantiate_A_Array_Pattern->addResult(DelegationConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern);
			DelegationConnectors_P_P_main_instantiate_A_Array_Pattern->setBehavior(DelegationConnectors_P_P_instantiate_A_Array_Pattern);
		DelegationConnectors_P_P_main->addNode(DelegationConnectors_P_P_main_instantiate_A_Array_Pattern);
			// CallBehaviorAction assert_A_Unconnected_Pattern
			DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern);
			DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern->setName("assert_A_Unconnected_Pattern");
			DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern->setBehavior(DelegationConnectors_P_P_assert_A_Unconnected_Pattern);
				// InputPin a_Unconnected_Pattern
				DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
				DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
				DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(DelegationConnectors_P_P_A_Unconnected_Pattern);
			DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern->addArgument(DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
		DelegationConnectors_P_P_main->addNode(DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern);
			// CallBehaviorAction instantiate_A_Unconnected_Pattern
			DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern);
			DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern->setName("instantiate_A_Unconnected_Pattern");
			DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Unconnected_Pattern
				DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
				DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
				DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(DelegationConnectors_P_P_A_Unconnected_Pattern);
			DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern->addResult(DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern->setBehavior(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern);
		DelegationConnectors_P_P_main->addNode(DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern);
			// CallBehaviorAction instantiate_A_Star_Pattern
			DelegationConnectors_P_P_main_instantiate_A_Star_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_P_main_instantiate_A_Star_Pattern);
			DelegationConnectors_P_P_main_instantiate_A_Star_Pattern->setName("instantiate_A_Star_Pattern");
			DelegationConnectors_P_P_main_instantiate_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Star_Pattern
				DelegationConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(DelegationConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern);
				DelegationConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
				DelegationConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern->setType(DelegationConnectors_P_P_A_Star_Pattern);
			DelegationConnectors_P_P_main_instantiate_A_Star_Pattern->addResult(DelegationConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern);
			DelegationConnectors_P_P_main_instantiate_A_Star_Pattern->setBehavior(DelegationConnectors_P_P_instantiate_A_Star_Pattern);
		DelegationConnectors_P_P_main->addNode(DelegationConnectors_P_P_main_instantiate_A_Star_Pattern);
			// CallBehaviorAction instantiate_A_Empty_Pattern
			DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern);
			DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern->setName("instantiate_A_Empty_Pattern");
			DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Empty_Pattern
				DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
				DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
				DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setType(DelegationConnectors_P_P_A_Empty_Pattern);
			DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern->addResult(DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern->setBehavior(DelegationConnectors_P_P_instantiate_A_Empty_Pattern);
		DelegationConnectors_P_P_main->addNode(DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern);
			// CallBehaviorAction assert_A_Star_Pattern
			DelegationConnectors_P_P_main_assert_A_Star_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_P_main_assert_A_Star_Pattern);
			DelegationConnectors_P_P_main_assert_A_Star_Pattern->setName("assert_A_Star_Pattern");
			DelegationConnectors_P_P_main_assert_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_main_assert_A_Star_Pattern->setBehavior(DelegationConnectors_P_P_assert_A_Star_Pattern);
				// InputPin a_Star_Pattern
				DelegationConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(DelegationConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern);
				DelegationConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
				DelegationConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern->setType(DelegationConnectors_P_P_A_Star_Pattern);
			DelegationConnectors_P_P_main_assert_A_Star_Pattern->addArgument(DelegationConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern);
		DelegationConnectors_P_P_main->addNode(DelegationConnectors_P_P_main_assert_A_Star_Pattern);
			// ControlFlow ControlFlow37 from assert_A_Empty_Pattern to instantiate_A_Unconnected_Pattern
			DelegationConnectors_P_P_main_ControlFlow37->setThisActivityEdgePtr(DelegationConnectors_P_P_main_ControlFlow37);
			DelegationConnectors_P_P_main_ControlFlow37->setName("ControlFlow37");
			DelegationConnectors_P_P_main_ControlFlow37->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_main_ControlFlow37->setSource(DelegationConnectors_P_P_main_assert_A_Empty_Pattern);
			DelegationConnectors_P_P_main_ControlFlow37->setTarget(DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern);
		DelegationConnectors_P_P_main->addEdge(DelegationConnectors_P_P_main_ControlFlow37);
			// ObjectFlow ObjectFlow59 from a_Unconnected_Pattern to a_Unconnected_Pattern
			DelegationConnectors_P_P_main_ObjectFlow59->setThisActivityEdgePtr(DelegationConnectors_P_P_main_ObjectFlow59);
			DelegationConnectors_P_P_main_ObjectFlow59->setName("ObjectFlow59");
			DelegationConnectors_P_P_main_ObjectFlow59->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_main_ObjectFlow59->setSource(DelegationConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			DelegationConnectors_P_P_main_ObjectFlow59->setTarget(DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
				// LiteralBoolean LiteralBoolean61
				DelegationConnectors_P_P_main_ObjectFlow59_LiteralBoolean61->setThisElementPtr(DelegationConnectors_P_P_main_ObjectFlow59_LiteralBoolean61);
				DelegationConnectors_P_P_main_ObjectFlow59_LiteralBoolean61->setName("LiteralBoolean61");
				DelegationConnectors_P_P_main_ObjectFlow59_LiteralBoolean61->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_main_ObjectFlow59_LiteralBoolean61->setValue(true);
			DelegationConnectors_P_P_main_ObjectFlow59->setGuard(DelegationConnectors_P_P_main_ObjectFlow59_LiteralBoolean61);
		DelegationConnectors_P_P_main->addEdge(DelegationConnectors_P_P_main_ObjectFlow59);
			// ObjectFlow ObjectFlow41 from a_Star_Pattern to a_Star_Pattern
			DelegationConnectors_P_P_main_ObjectFlow41->setThisActivityEdgePtr(DelegationConnectors_P_P_main_ObjectFlow41);
			DelegationConnectors_P_P_main_ObjectFlow41->setName("ObjectFlow41");
			DelegationConnectors_P_P_main_ObjectFlow41->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_main_ObjectFlow41->setSource(DelegationConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern);
			DelegationConnectors_P_P_main_ObjectFlow41->setTarget(DelegationConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern);
				// LiteralBoolean LiteralBoolean43
				DelegationConnectors_P_P_main_ObjectFlow41_LiteralBoolean43->setThisElementPtr(DelegationConnectors_P_P_main_ObjectFlow41_LiteralBoolean43);
				DelegationConnectors_P_P_main_ObjectFlow41_LiteralBoolean43->setName("LiteralBoolean43");
				DelegationConnectors_P_P_main_ObjectFlow41_LiteralBoolean43->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_main_ObjectFlow41_LiteralBoolean43->setValue(true);
			DelegationConnectors_P_P_main_ObjectFlow41->setGuard(DelegationConnectors_P_P_main_ObjectFlow41_LiteralBoolean43);
		DelegationConnectors_P_P_main->addEdge(DelegationConnectors_P_P_main_ObjectFlow41);
			// ObjectFlow ObjectFlow65 from a_Array_Pattern to a_Array_Pattern
			DelegationConnectors_P_P_main_ObjectFlow65->setThisActivityEdgePtr(DelegationConnectors_P_P_main_ObjectFlow65);
			DelegationConnectors_P_P_main_ObjectFlow65->setName("ObjectFlow65");
			DelegationConnectors_P_P_main_ObjectFlow65->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_main_ObjectFlow65->setSource(DelegationConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern);
			DelegationConnectors_P_P_main_ObjectFlow65->setTarget(DelegationConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern);
				// LiteralBoolean LiteralBoolean67
				DelegationConnectors_P_P_main_ObjectFlow65_LiteralBoolean67->setThisElementPtr(DelegationConnectors_P_P_main_ObjectFlow65_LiteralBoolean67);
				DelegationConnectors_P_P_main_ObjectFlow65_LiteralBoolean67->setName("LiteralBoolean67");
				DelegationConnectors_P_P_main_ObjectFlow65_LiteralBoolean67->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_main_ObjectFlow65_LiteralBoolean67->setValue(true);
			DelegationConnectors_P_P_main_ObjectFlow65->setGuard(DelegationConnectors_P_P_main_ObjectFlow65_LiteralBoolean67);
		DelegationConnectors_P_P_main->addEdge(DelegationConnectors_P_P_main_ObjectFlow65);
			// ObjectFlow ObjectFlow68 from a_Empty_Pattern to a_Empty_Pattern
			DelegationConnectors_P_P_main_ObjectFlow68->setThisActivityEdgePtr(DelegationConnectors_P_P_main_ObjectFlow68);
			DelegationConnectors_P_P_main_ObjectFlow68->setName("ObjectFlow68");
			DelegationConnectors_P_P_main_ObjectFlow68->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_main_ObjectFlow68->setSource(DelegationConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			DelegationConnectors_P_P_main_ObjectFlow68->setTarget(DelegationConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern);
				// LiteralBoolean LiteralBoolean70
				DelegationConnectors_P_P_main_ObjectFlow68_LiteralBoolean70->setThisElementPtr(DelegationConnectors_P_P_main_ObjectFlow68_LiteralBoolean70);
				DelegationConnectors_P_P_main_ObjectFlow68_LiteralBoolean70->setName("LiteralBoolean70");
				DelegationConnectors_P_P_main_ObjectFlow68_LiteralBoolean70->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_main_ObjectFlow68_LiteralBoolean70->setValue(true);
			DelegationConnectors_P_P_main_ObjectFlow68->setGuard(DelegationConnectors_P_P_main_ObjectFlow68_LiteralBoolean70);
		DelegationConnectors_P_P_main->addEdge(DelegationConnectors_P_P_main_ObjectFlow68);
			// ControlFlow ControlFlow74 from assert_A_Unconnected_Pattern to instantiate_A_Array_Pattern
			DelegationConnectors_P_P_main_ControlFlow74->setThisActivityEdgePtr(DelegationConnectors_P_P_main_ControlFlow74);
			DelegationConnectors_P_P_main_ControlFlow74->setName("ControlFlow74");
			DelegationConnectors_P_P_main_ControlFlow74->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_main_ControlFlow74->setSource(DelegationConnectors_P_P_main_assert_A_Unconnected_Pattern);
			DelegationConnectors_P_P_main_ControlFlow74->setTarget(DelegationConnectors_P_P_main_instantiate_A_Array_Pattern);
		DelegationConnectors_P_P_main->addEdge(DelegationConnectors_P_P_main_ControlFlow74);
			// ControlFlow ControlFlow75 from assert_A_Array_Pattern to instantiate_A_Star_Pattern
			DelegationConnectors_P_P_main_ControlFlow75->setThisActivityEdgePtr(DelegationConnectors_P_P_main_ControlFlow75);
			DelegationConnectors_P_P_main_ControlFlow75->setName("ControlFlow75");
			DelegationConnectors_P_P_main_ControlFlow75->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_main_ControlFlow75->setSource(DelegationConnectors_P_P_main_assert_A_Array_Pattern);
			DelegationConnectors_P_P_main_ControlFlow75->setTarget(DelegationConnectors_P_P_main_instantiate_A_Star_Pattern);
		DelegationConnectors_P_P_main->addEdge(DelegationConnectors_P_P_main_ControlFlow75);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_main);
		// Activity instantiate_A_Unconnected_Pattern
		DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern->setThisActivityPtr(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern);
		DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern->setName("instantiate_A_Unconnected_Pattern");
		DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Unconnected_Pattern
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(DelegationConnectors_P_P_A_Unconnected_Pattern);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setDirection(ParameterDirectionKind::return_);
		DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern->addOwnedParameter(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			// CallOperationAction A_Unconnected_Pattern()
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setThisExecutableNodePtr(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setName("A_Unconnected_Pattern()");
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setName("result");
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setType(DelegationConnectors_P_P_A_Unconnected_Pattern);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->addResult(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setOperation(DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
				// InputPin target
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setName("target");
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setType(DelegationConnectors_P_P_A_Unconnected_Pattern);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setTarget(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
		DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern->addNode(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_);
			// CreateObjectAction Create A_Unconnected_Pattern
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setName("Create A_Unconnected_Pattern");
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setClassifier(DelegationConnectors_P_P_A_Unconnected_Pattern);
				// OutputPin result
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setName("result");
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setType(DelegationConnectors_P_P_A_Unconnected_Pattern);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setResult(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
		DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern->addNode(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern);
			// ActivityParameterNode a_Unconnected_Pattern_node
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setName("a_Unconnected_Pattern_node");
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setParameter(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
		DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern->addNode(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			// ObjectFlow ObjectFlow81 from result to a_Unconnected_Pattern_node
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81->setThisActivityEdgePtr(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81->setName("ObjectFlow81");
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81->setSource(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81->setTarget(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
				// LiteralBoolean LiteralBoolean82
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82->setName("LiteralBoolean82");
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82->setValue(true);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81->setGuard(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82);
		DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern->addEdge(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81);
			// ObjectFlow ObjectFlow86 from result to target
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86->setThisActivityEdgePtr(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86->setName("ObjectFlow86");
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86->setSource(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86->setTarget(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
				// LiteralBoolean LiteralBoolean87
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86_LiteralBoolean87->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86_LiteralBoolean87);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86_LiteralBoolean87->setName("LiteralBoolean87");
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86_LiteralBoolean87->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86_LiteralBoolean87->setValue(true);
			DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86->setGuard(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86_LiteralBoolean87);
		DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern->addEdge(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow86);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_instantiate_A_Unconnected_Pattern);
		// Class IImpl
		DelegationConnectors_P_P_IImpl->setThisClass_Ptr(DelegationConnectors_P_P_IImpl);
		DelegationConnectors_P_P_IImpl->setName("IImpl");
		DelegationConnectors_P_P_IImpl->setVisibility(VisibilityKind::public_);
		DelegationConnectors_P_P_IImpl_I_Realization->setName("I_Realization");
			DelegationConnectors_P_P_IImpl_I_Realization->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_IImpl_I_Realization->setContract(DelegationConnectors_P_P_I);
			
		DelegationConnectors_P_P_IImpl->addInterfaceRealization(DelegationConnectors_P_P_IImpl_I_Realization);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_IImpl);
		// Activity instantiate_A_Array_Pattern
		DelegationConnectors_P_P_instantiate_A_Array_Pattern->setThisActivityPtr(DelegationConnectors_P_P_instantiate_A_Array_Pattern);
		DelegationConnectors_P_P_instantiate_A_Array_Pattern->setName("instantiate_A_Array_Pattern");
		DelegationConnectors_P_P_instantiate_A_Array_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Array_Pattern
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern->setType(DelegationConnectors_P_P_A_Array_Pattern);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern->setDirection(ParameterDirectionKind::return_);
		DelegationConnectors_P_P_instantiate_A_Array_Pattern->addOwnedParameter(DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern);
			// CallOperationAction A_Array_Pattern()
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_->setThisExecutableNodePtr(DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_->setName("A_Array_Pattern()");
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result->setName("result");
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result->setType(DelegationConnectors_P_P_A_Array_Pattern);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_->addResult(DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_->setOperation(DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
				// InputPin target
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target->setName("target");
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target->setType(DelegationConnectors_P_P_A_Array_Pattern);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_->setTarget(DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target);
		DelegationConnectors_P_P_instantiate_A_Array_Pattern->addNode(DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_);
			// CreateObjectAction Create A_Array_Pattern
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setName("Create A_Array_Pattern");
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setClassifier(DelegationConnectors_P_P_A_Array_Pattern);
				// OutputPin result
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setName("result");
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setType(DelegationConnectors_P_P_A_Array_Pattern);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setResult(DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
		DelegationConnectors_P_P_instantiate_A_Array_Pattern->addNode(DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern);
			// ActivityParameterNode a_Array_Pattern_node
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node->setName("a_Array_Pattern_node");
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node->setParameter(DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern);
		DelegationConnectors_P_P_instantiate_A_Array_Pattern->addNode(DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node);
			// ObjectFlow ObjectFlow96 from result to target
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96->setThisActivityEdgePtr(DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96->setName("ObjectFlow96");
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96->setSource(DelegationConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96->setTarget(DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target);
				// LiteralBoolean LiteralBoolean98
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96_LiteralBoolean98->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96_LiteralBoolean98);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96_LiteralBoolean98->setName("LiteralBoolean98");
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96_LiteralBoolean98->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96_LiteralBoolean98->setValue(true);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96->setGuard(DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96_LiteralBoolean98);
		DelegationConnectors_P_P_instantiate_A_Array_Pattern->addEdge(DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow96);
			// ObjectFlow ObjectFlow99 from result to a_Array_Pattern_node
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99->setThisActivityEdgePtr(DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99->setName("ObjectFlow99");
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99->setSource(DelegationConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99->setTarget(DelegationConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node);
				// LiteralBoolean LiteralBoolean100
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99_LiteralBoolean100->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99_LiteralBoolean100);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99_LiteralBoolean100->setName("LiteralBoolean100");
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99_LiteralBoolean100->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99_LiteralBoolean100->setValue(true);
			DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99->setGuard(DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99_LiteralBoolean100);
		DelegationConnectors_P_P_instantiate_A_Array_Pattern->addEdge(DelegationConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow99);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_instantiate_A_Array_Pattern);
		// Activity assert_A_Unconnected_Pattern
		DelegationConnectors_P_P_assert_A_Unconnected_Pattern->setThisActivityPtr(DelegationConnectors_P_P_assert_A_Unconnected_Pattern);
		DelegationConnectors_P_P_assert_A_Unconnected_Pattern->setName("assert_A_Unconnected_Pattern");
		DelegationConnectors_P_P_assert_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Unconnected_Pattern
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(DelegationConnectors_P_P_A_Unconnected_Pattern);
		DelegationConnectors_P_P_assert_A_Unconnected_Pattern->addOwnedParameter(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
			// ActivityParameterNode a_Unconnected_Pattern_node
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setThisElementPtr(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setName("a_Unconnected_Pattern_node");
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setParameter(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
		DelegationConnectors_P_P_assert_A_Unconnected_Pattern->addNode(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			// CallBehaviorAction writeLine
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine->setThisExecutableNodePtr(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine->setName("writeLine");
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus->setThisElementPtr(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus->setName("errorStatus");
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus->setLower(0);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine->addResult(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value->setThisElementPtr(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value->setName("value");
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine->addArgument(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value);
		DelegationConnectors_P_P_assert_A_Unconnected_Pattern->addNode(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine);
			// ValueSpecificationAction message
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message->setThisExecutableNodePtr(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message->setName("message");
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString115
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString115->setThisElementPtr(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString115);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString115->setName("LiteralString115");
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString115->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString115->setValue("Assertion currently not implemented for A_Unconnected_Pattern.");
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message->setValue(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString115);
				// OutputPin result
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_result->setThisElementPtr(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_result);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_result->setName("result");
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message->setResult(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_result);
		DelegationConnectors_P_P_assert_A_Unconnected_Pattern->addNode(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message);
			// ObjectFlow ObjectFlow110 from result to value
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110->setThisActivityEdgePtr(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110->setName("ObjectFlow110");
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110->setSource(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_message_result);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110->setTarget(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean111
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110_LiteralBoolean111->setThisElementPtr(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110_LiteralBoolean111);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110_LiteralBoolean111->setName("LiteralBoolean111");
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110_LiteralBoolean111->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110_LiteralBoolean111->setValue(true);
			DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110->setGuard(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110_LiteralBoolean111);
		DelegationConnectors_P_P_assert_A_Unconnected_Pattern->addEdge(DelegationConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow110);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_assert_A_Unconnected_Pattern);
		// Class A_Array_Pattern
		DelegationConnectors_P_P_A_Array_Pattern->setThisClass_Ptr(DelegationConnectors_P_P_A_Array_Pattern);
		DelegationConnectors_P_P_A_Array_Pattern->setName("A_Array_Pattern");
		DelegationConnectors_P_P_A_Array_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property b
			DelegationConnectors_P_P_A_Array_Pattern_b->setThisElementPtr(DelegationConnectors_P_P_A_Array_Pattern_b);
			DelegationConnectors_P_P_A_Array_Pattern_b->setName("b");
			DelegationConnectors_P_P_A_Array_Pattern_b->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_A_Array_Pattern_b->setUpper(-1);
			DelegationConnectors_P_P_A_Array_Pattern_b->setLower(4);
			DelegationConnectors_P_P_A_Array_Pattern_b->setType(DelegationConnectors_P_P_B);
			DelegationConnectors_P_P_A_Array_Pattern_b->setAggregation(AggregationKind::composite);
		DelegationConnectors_P_P_A_Array_Pattern->addOwnedAttribute(DelegationConnectors_P_P_A_Array_Pattern_b);
			// Port p
			DelegationConnectors_P_P_A_Array_Pattern_p->setThisElementPtr(DelegationConnectors_P_P_A_Array_Pattern_p);
			DelegationConnectors_P_P_A_Array_Pattern_p->setName("p");
			DelegationConnectors_P_P_A_Array_Pattern_p->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_A_Array_Pattern_p->setUpper(-1);
			DelegationConnectors_P_P_A_Array_Pattern_p->setLower(4);
			DelegationConnectors_P_P_A_Array_Pattern_p->setType(DelegationConnectors_P_P_IImpl);
			DelegationConnectors_P_P_A_Array_Pattern_p->setAggregation(AggregationKind::composite);
			DelegationConnectors_P_P_A_Array_Pattern_p->isService = true;
			DelegationConnectors_P_P_A_Array_Pattern_p->addProvided(DelegationConnectors_P_P_I);
		DelegationConnectors_P_P_A_Array_Pattern->addOwnedAttribute(DelegationConnectors_P_P_A_Array_Pattern_p);
		
		DelegationConnectors_P_P_A_Array_Pattern_r->setName("r");
			DelegationConnectors_P_P_A_Array_Pattern_r->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_A_Array_Pattern_r_ConnectorEnd117->setUpper(-1);
				DelegationConnectors_P_P_A_Array_Pattern_r_ConnectorEnd117->setRole(DelegationConnectors_P_P_A_Array_Pattern_p);
				
			DelegationConnectors_P_P_A_Array_Pattern_r->addEnd(DelegationConnectors_P_P_A_Array_Pattern_r_ConnectorEnd117);
				DelegationConnectors_P_P_A_Array_Pattern_r_ConnectorEnd119->setUpper(-1);
				DelegationConnectors_P_P_A_Array_Pattern_r_ConnectorEnd119->setRole(DelegationConnectors_P_P_A_Array_Pattern_b);
				
			DelegationConnectors_P_P_A_Array_Pattern_r->addEnd(DelegationConnectors_P_P_A_Array_Pattern_r_ConnectorEnd119);
			DelegationConnectors_P_P_A_Array_Pattern_r->setType(DelegationConnectors_P_P_R);
		DelegationConnectors_P_P_A_Array_Pattern->addOwnedConnector(DelegationConnectors_P_P_A_Array_Pattern_r);
			// Operation A_Array_Pattern_A_Array_Pattern
			DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->setThisOperationPtr(DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
			DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->setName("A_Array_Pattern_A_Array_Pattern");
			DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setThisElementPtr(DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result);
				DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setName("result");
				DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setType(DelegationConnectors_P_P_A_Array_Pattern);
				DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setDirection(ParameterDirectionKind::return_);
			DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->addOwnedParameter(DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result);
		DelegationConnectors_P_P_A_Array_Pattern->addOwnedOperation(DelegationConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_A_Array_Pattern);
		// Association R
		DelegationConnectors_P_P_R->setThisAssociationPtr(DelegationConnectors_P_P_R);
		DelegationConnectors_P_P_R->setName("R");
		DelegationConnectors_P_P_R->setVisibility(VisibilityKind::public_);
		DelegationConnectors_P_P_R->addOwnedEnd(DelegationConnectors_P_P_R_x);
		DelegationConnectors_P_P_R->addOwnedEnd(DelegationConnectors_P_P_R_y);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_R);
		// Class A_Unconnected_Pattern
		DelegationConnectors_P_P_A_Unconnected_Pattern->setThisClass_Ptr(DelegationConnectors_P_P_A_Unconnected_Pattern);
		DelegationConnectors_P_P_A_Unconnected_Pattern->setName("A_Unconnected_Pattern");
		DelegationConnectors_P_P_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property b
			DelegationConnectors_P_P_A_Unconnected_Pattern_b->setThisElementPtr(DelegationConnectors_P_P_A_Unconnected_Pattern_b);
			DelegationConnectors_P_P_A_Unconnected_Pattern_b->setName("b");
			DelegationConnectors_P_P_A_Unconnected_Pattern_b->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_A_Unconnected_Pattern_b->setUpper(-1);
			DelegationConnectors_P_P_A_Unconnected_Pattern_b->setLower(2);
			DelegationConnectors_P_P_A_Unconnected_Pattern_b->setType(DelegationConnectors_P_P_B);
			DelegationConnectors_P_P_A_Unconnected_Pattern_b->setAggregation(AggregationKind::composite);
		DelegationConnectors_P_P_A_Unconnected_Pattern->addOwnedAttribute(DelegationConnectors_P_P_A_Unconnected_Pattern_b);
			// Port p
			DelegationConnectors_P_P_A_Unconnected_Pattern_p->setThisElementPtr(DelegationConnectors_P_P_A_Unconnected_Pattern_p);
			DelegationConnectors_P_P_A_Unconnected_Pattern_p->setName("p");
			DelegationConnectors_P_P_A_Unconnected_Pattern_p->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_A_Unconnected_Pattern_p->setUpper(-1);
			DelegationConnectors_P_P_A_Unconnected_Pattern_p->setLower(3);
			DelegationConnectors_P_P_A_Unconnected_Pattern_p->setType(DelegationConnectors_P_P_IImpl);
			DelegationConnectors_P_P_A_Unconnected_Pattern_p->setAggregation(AggregationKind::composite);
			DelegationConnectors_P_P_A_Unconnected_Pattern_p->isService = true;
			DelegationConnectors_P_P_A_Unconnected_Pattern_p->addProvided(DelegationConnectors_P_P_I);
		DelegationConnectors_P_P_A_Unconnected_Pattern->addOwnedAttribute(DelegationConnectors_P_P_A_Unconnected_Pattern_p);
		
		DelegationConnectors_P_P_A_Unconnected_Pattern_r->setName("r");
			DelegationConnectors_P_P_A_Unconnected_Pattern_r->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd136->setUpper(-1);
				DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd136->setLower(0);
				DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd136->setRole(DelegationConnectors_P_P_A_Unconnected_Pattern_p);
				
			DelegationConnectors_P_P_A_Unconnected_Pattern_r->addEnd(DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd136);
				DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd133->setUpper(-1);
				DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd133->setLower(0);
				DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd133->setRole(DelegationConnectors_P_P_A_Unconnected_Pattern_b);
				
			DelegationConnectors_P_P_A_Unconnected_Pattern_r->addEnd(DelegationConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd133);
			DelegationConnectors_P_P_A_Unconnected_Pattern_r->setType(DelegationConnectors_P_P_R);
		DelegationConnectors_P_P_A_Unconnected_Pattern->addOwnedConnector(DelegationConnectors_P_P_A_Unconnected_Pattern_r);
			// Operation A_Unconnected_Pattern_A_Unconnected_Pattern
			DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->setThisOperationPtr(DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
			DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->setName("A_Unconnected_Pattern_A_Unconnected_Pattern");
			DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setThisElementPtr(DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result);
				DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setName("result");
				DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setType(DelegationConnectors_P_P_A_Unconnected_Pattern);
				DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setDirection(ParameterDirectionKind::return_);
			DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->addOwnedParameter(DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result);
		DelegationConnectors_P_P_A_Unconnected_Pattern->addOwnedOperation(DelegationConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_A_Unconnected_Pattern);
		// Interface I
		DelegationConnectors_P_P_I->setName("I");
		DelegationConnectors_P_P_I->setVisibility(VisibilityKind::public_);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_I);
		// Activity instantiate_A_Empty_Pattern
		DelegationConnectors_P_P_instantiate_A_Empty_Pattern->setThisActivityPtr(DelegationConnectors_P_P_instantiate_A_Empty_Pattern);
		DelegationConnectors_P_P_instantiate_A_Empty_Pattern->setName("instantiate_A_Empty_Pattern");
		DelegationConnectors_P_P_instantiate_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Empty_Pattern
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern->setType(DelegationConnectors_P_P_A_Empty_Pattern);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern->setDirection(ParameterDirectionKind::return_);
		DelegationConnectors_P_P_instantiate_A_Empty_Pattern->addOwnedParameter(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			// CreateObjectAction Create A_Empty_Pattern
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setName("Create A_Empty_Pattern");
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setClassifier(DelegationConnectors_P_P_A_Empty_Pattern);
				// OutputPin result
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setName("result");
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setType(DelegationConnectors_P_P_A_Empty_Pattern);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setResult(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
		DelegationConnectors_P_P_instantiate_A_Empty_Pattern->addNode(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern);
			// ActivityParameterNode a_Empty_Pattern_node
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setName("a_Empty_Pattern_node");
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setParameter(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern);
		DelegationConnectors_P_P_instantiate_A_Empty_Pattern->addNode(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
			// CallOperationAction A_Empty_Pattern()
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setThisExecutableNodePtr(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setName("A_Empty_Pattern()");
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setName("result");
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setType(DelegationConnectors_P_P_A_Empty_Pattern);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->addResult(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setOperation(DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
				// InputPin target
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setName("target");
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setType(DelegationConnectors_P_P_A_Empty_Pattern);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setTarget(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
		DelegationConnectors_P_P_instantiate_A_Empty_Pattern->addNode(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_);
			// ObjectFlow ObjectFlow140 from result to target
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140->setThisActivityEdgePtr(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140->setName("ObjectFlow140");
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140->setSource(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140->setTarget(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
				// LiteralBoolean LiteralBoolean142
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140_LiteralBoolean142->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140_LiteralBoolean142);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140_LiteralBoolean142->setName("LiteralBoolean142");
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140_LiteralBoolean142->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140_LiteralBoolean142->setValue(true);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140->setGuard(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140_LiteralBoolean142);
		DelegationConnectors_P_P_instantiate_A_Empty_Pattern->addEdge(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow140);
			// ObjectFlow ObjectFlow145 from result to a_Empty_Pattern_node
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145->setThisActivityEdgePtr(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145->setName("ObjectFlow145");
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145->setSource(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145->setTarget(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
				// LiteralBoolean LiteralBoolean146
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145_LiteralBoolean146->setThisElementPtr(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145_LiteralBoolean146);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145_LiteralBoolean146->setName("LiteralBoolean146");
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145_LiteralBoolean146->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145_LiteralBoolean146->setValue(true);
			DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145->setGuard(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145_LiteralBoolean146);
		DelegationConnectors_P_P_instantiate_A_Empty_Pattern->addEdge(DelegationConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow145);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_instantiate_A_Empty_Pattern);
		// Activity assert_A_Array_Pattern
		DelegationConnectors_P_P_assert_A_Array_Pattern->setThisActivityPtr(DelegationConnectors_P_P_assert_A_Array_Pattern);
		DelegationConnectors_P_P_assert_A_Array_Pattern->setName("assert_A_Array_Pattern");
		DelegationConnectors_P_P_assert_A_Array_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Array_Pattern
			DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern);
			DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
			DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern->setType(DelegationConnectors_P_P_A_Array_Pattern);
		DelegationConnectors_P_P_assert_A_Array_Pattern->addOwnedParameter(DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern);
			// ValueSpecificationAction message
			DelegationConnectors_P_P_assert_A_Array_Pattern_message->setThisExecutableNodePtr(DelegationConnectors_P_P_assert_A_Array_Pattern_message);
			DelegationConnectors_P_P_assert_A_Array_Pattern_message->setName("message");
			DelegationConnectors_P_P_assert_A_Array_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString158
				DelegationConnectors_P_P_assert_A_Array_Pattern_message_LiteralString158->setThisElementPtr(DelegationConnectors_P_P_assert_A_Array_Pattern_message_LiteralString158);
				DelegationConnectors_P_P_assert_A_Array_Pattern_message_LiteralString158->setName("LiteralString158");
				DelegationConnectors_P_P_assert_A_Array_Pattern_message_LiteralString158->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Array_Pattern_message_LiteralString158->setValue("Assertion currently not implemented for A_Array_Pattern.");
			DelegationConnectors_P_P_assert_A_Array_Pattern_message->setValue(DelegationConnectors_P_P_assert_A_Array_Pattern_message_LiteralString158);
				// OutputPin result
				DelegationConnectors_P_P_assert_A_Array_Pattern_message_result->setThisElementPtr(DelegationConnectors_P_P_assert_A_Array_Pattern_message_result);
				DelegationConnectors_P_P_assert_A_Array_Pattern_message_result->setName("result");
				DelegationConnectors_P_P_assert_A_Array_Pattern_message_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Array_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_P_assert_A_Array_Pattern_message->setResult(DelegationConnectors_P_P_assert_A_Array_Pattern_message_result);
		DelegationConnectors_P_P_assert_A_Array_Pattern->addNode(DelegationConnectors_P_P_assert_A_Array_Pattern_message);
			// CallBehaviorAction writeLine
			DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine->setThisExecutableNodePtr(DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine);
			DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine->setName("writeLine");
			DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus->setThisElementPtr(DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus);
				DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus->setName("errorStatus");
				DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus->setLower(0);
			DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine->addResult(DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus);
			DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_value->setThisElementPtr(DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_value);
				DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_value->setName("value");
				DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine->addArgument(DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_value);
		DelegationConnectors_P_P_assert_A_Array_Pattern->addNode(DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine);
			// ActivityParameterNode a_Array_Pattern_node
			DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node->setThisElementPtr(DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node);
			DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node->setName("a_Array_Pattern_node");
			DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node->setParameter(DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern);
		DelegationConnectors_P_P_assert_A_Array_Pattern->addNode(DelegationConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node);
			// ObjectFlow ObjectFlow153 from result to value
			DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153->setThisActivityEdgePtr(DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153);
			DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153->setName("ObjectFlow153");
			DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153->setSource(DelegationConnectors_P_P_assert_A_Array_Pattern_message_result);
			DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153->setTarget(DelegationConnectors_P_P_assert_A_Array_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean154
				DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153_LiteralBoolean154->setThisElementPtr(DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153_LiteralBoolean154);
				DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153_LiteralBoolean154->setName("LiteralBoolean154");
				DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153_LiteralBoolean154->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153_LiteralBoolean154->setValue(true);
			DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153->setGuard(DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153_LiteralBoolean154);
		DelegationConnectors_P_P_assert_A_Array_Pattern->addEdge(DelegationConnectors_P_P_assert_A_Array_Pattern_ObjectFlow153);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_assert_A_Array_Pattern);
		// Class A_Empty_Pattern
		DelegationConnectors_P_P_A_Empty_Pattern->setThisClass_Ptr(DelegationConnectors_P_P_A_Empty_Pattern);
		DelegationConnectors_P_P_A_Empty_Pattern->setName("A_Empty_Pattern");
		DelegationConnectors_P_P_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property b
			DelegationConnectors_P_P_A_Empty_Pattern_b->setThisElementPtr(DelegationConnectors_P_P_A_Empty_Pattern_b);
			DelegationConnectors_P_P_A_Empty_Pattern_b->setName("b");
			DelegationConnectors_P_P_A_Empty_Pattern_b->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_A_Empty_Pattern_b->setUpper(-1);
			DelegationConnectors_P_P_A_Empty_Pattern_b->setLower(0);
			DelegationConnectors_P_P_A_Empty_Pattern_b->setType(DelegationConnectors_P_P_B);
			DelegationConnectors_P_P_A_Empty_Pattern_b->setAggregation(AggregationKind::composite);
		DelegationConnectors_P_P_A_Empty_Pattern->addOwnedAttribute(DelegationConnectors_P_P_A_Empty_Pattern_b);
			// Port p
			DelegationConnectors_P_P_A_Empty_Pattern_p->setThisElementPtr(DelegationConnectors_P_P_A_Empty_Pattern_p);
			DelegationConnectors_P_P_A_Empty_Pattern_p->setName("p");
			DelegationConnectors_P_P_A_Empty_Pattern_p->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_P_A_Empty_Pattern_p->setUpper(-1);
			DelegationConnectors_P_P_A_Empty_Pattern_p->setLower(0);
			DelegationConnectors_P_P_A_Empty_Pattern_p->setType(DelegationConnectors_P_P_IImpl);
			DelegationConnectors_P_P_A_Empty_Pattern_p->setAggregation(AggregationKind::composite);
			DelegationConnectors_P_P_A_Empty_Pattern_p->isService = true;
			DelegationConnectors_P_P_A_Empty_Pattern_p->addProvided(DelegationConnectors_P_P_I);
		DelegationConnectors_P_P_A_Empty_Pattern->addOwnedAttribute(DelegationConnectors_P_P_A_Empty_Pattern_p);
		
		DelegationConnectors_P_P_A_Empty_Pattern_r->setName("r");
			DelegationConnectors_P_P_A_Empty_Pattern_r->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173->setUpper(-1);
				DelegationConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173->setRole(DelegationConnectors_P_P_A_Empty_Pattern_p);
				
			DelegationConnectors_P_P_A_Empty_Pattern_r->addEnd(DelegationConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173);
				DelegationConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd171->setUpper(-1);
				DelegationConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd171->setRole(DelegationConnectors_P_P_A_Empty_Pattern_b);
				
			DelegationConnectors_P_P_A_Empty_Pattern_r->addEnd(DelegationConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd171);
			DelegationConnectors_P_P_A_Empty_Pattern_r->setType(DelegationConnectors_P_P_R);
		DelegationConnectors_P_P_A_Empty_Pattern->addOwnedConnector(DelegationConnectors_P_P_A_Empty_Pattern_r);
			// Operation A_Empty_Pattern_A_Empty_Pattern
			DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->setThisOperationPtr(DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
			DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->setName("A_Empty_Pattern_A_Empty_Pattern");
			DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setThisElementPtr(DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result);
				DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setName("result");
				DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setType(DelegationConnectors_P_P_A_Empty_Pattern);
				DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setDirection(ParameterDirectionKind::return_);
			DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->addOwnedParameter(DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result);
		DelegationConnectors_P_P_A_Empty_Pattern->addOwnedOperation(DelegationConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_A_Empty_Pattern);
		// Activity assert_A_Empty_Pattern
		DelegationConnectors_P_P_assert_A_Empty_Pattern->setThisActivityPtr(DelegationConnectors_P_P_assert_A_Empty_Pattern);
		DelegationConnectors_P_P_assert_A_Empty_Pattern->setName("assert_A_Empty_Pattern");
		DelegationConnectors_P_P_assert_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Empty_Pattern
			DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
			DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern->setType(DelegationConnectors_P_P_A_Empty_Pattern);
		DelegationConnectors_P_P_assert_A_Empty_Pattern->addOwnedParameter(DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern);
			// ValueSpecificationAction message
			DelegationConnectors_P_P_assert_A_Empty_Pattern_message->setThisExecutableNodePtr(DelegationConnectors_P_P_assert_A_Empty_Pattern_message);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_message->setName("message");
			DelegationConnectors_P_P_assert_A_Empty_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString177
				DelegationConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString177->setThisElementPtr(DelegationConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString177);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString177->setName("LiteralString177");
				DelegationConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString177->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString177->setValue("Assertion currently not implemented for A_Empty_Pattern.");
			DelegationConnectors_P_P_assert_A_Empty_Pattern_message->setValue(DelegationConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString177);
				// OutputPin result
				DelegationConnectors_P_P_assert_A_Empty_Pattern_message_result->setThisElementPtr(DelegationConnectors_P_P_assert_A_Empty_Pattern_message_result);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_message_result->setName("result");
				DelegationConnectors_P_P_assert_A_Empty_Pattern_message_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_message->setResult(DelegationConnectors_P_P_assert_A_Empty_Pattern_message_result);
		DelegationConnectors_P_P_assert_A_Empty_Pattern->addNode(DelegationConnectors_P_P_assert_A_Empty_Pattern_message);
			// CallBehaviorAction writeLine
			DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine->setThisExecutableNodePtr(DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine->setName("writeLine");
			DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus->setThisElementPtr(DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus->setName("errorStatus");
				DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus->setLower(0);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine->addResult(DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_value->setThisElementPtr(DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_value);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_value->setName("value");
				DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine->addArgument(DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_value);
		DelegationConnectors_P_P_assert_A_Empty_Pattern->addNode(DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine);
			// ActivityParameterNode a_Empty_Pattern_node
			DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node->setThisElementPtr(DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node->setName("a_Empty_Pattern_node");
			DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node->setParameter(DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern);
		DelegationConnectors_P_P_assert_A_Empty_Pattern->addNode(DelegationConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node);
			// ObjectFlow ObjectFlow178 from result to value
			DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178->setThisActivityEdgePtr(DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178->setName("ObjectFlow178");
			DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178->setSource(DelegationConnectors_P_P_assert_A_Empty_Pattern_message_result);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178->setTarget(DelegationConnectors_P_P_assert_A_Empty_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean180
				DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178_LiteralBoolean180->setThisElementPtr(DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178_LiteralBoolean180);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178_LiteralBoolean180->setName("LiteralBoolean180");
				DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178_LiteralBoolean180->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178_LiteralBoolean180->setValue(true);
			DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178->setGuard(DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178_LiteralBoolean180);
		DelegationConnectors_P_P_assert_A_Empty_Pattern->addEdge(DelegationConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow178);
	DelegationConnectors_P_P->addPackagedElement(DelegationConnectors_P_P_assert_A_Empty_Pattern);
}
