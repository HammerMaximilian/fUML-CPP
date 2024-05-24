/*
 * DelegationConnectors_P_PWPModel.cpp
 * 
 * Auto-generated file
 */

#include "DelegationConnectors_P_PWPModel.h"

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/actions/CallBehaviorAction.h>
#include <uml/activities/ObjectFlow.h>
#include <uml/activities/Activity.h>
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

using namespace DelegationConnectors_P_PWP;
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

DelegationConnectors_P_PWPModel::DelegationConnectors_P_PWPModel()
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

DelegationConnectors_P_PWPModel::~DelegationConnectors_P_PWPModel()
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

const std::shared_ptr<DelegationConnectors_P_PWPModel>& DelegationConnectors_P_PWPModel::Instance()
{
	static std::shared_ptr<DelegationConnectors_P_PWPModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new DelegationConnectors_P_PWPModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void DelegationConnectors_P_PWPModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model DelegationConnectors_P_PWP
	 */
	DelegationConnectors_P_PWP.reset(new Package());
	this->addToElementRepository("DelegationConnectors_P_PWP", DelegationConnectors_P_PWP);
		DelegationConnectors_P_PWP_B.reset(new Class_());
		this->addToElementRepository("B", DelegationConnectors_P_PWP_B);
			DelegationConnectors_P_PWP_B_q.reset(new Port());
			this->addToElementRepository("q", DelegationConnectors_P_PWP_B_q);
				DelegationConnectors_P_PWP_B_q_LiteralInteger0.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger0", DelegationConnectors_P_PWP_B_q_LiteralInteger0);
				DelegationConnectors_P_PWP_B_q_LiteralUnlimitedNatural1.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural1", DelegationConnectors_P_PWP_B_q_LiteralUnlimitedNatural1);
		DelegationConnectors_P_PWP_R.reset(new Association());
		this->addToElementRepository("R", DelegationConnectors_P_PWP_R);
			DelegationConnectors_P_PWP_R_x.reset(new Property());
			this->addToElementRepository("x", DelegationConnectors_P_PWP_R_x);
				DelegationConnectors_P_PWP_R_x_LiteralInteger2.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger2", DelegationConnectors_P_PWP_R_x_LiteralInteger2);
				DelegationConnectors_P_PWP_R_x_LiteralUnlimitedNatural3.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural3", DelegationConnectors_P_PWP_R_x_LiteralUnlimitedNatural3);
			DelegationConnectors_P_PWP_R_y.reset(new Property());
			this->addToElementRepository("y", DelegationConnectors_P_PWP_R_y);
				DelegationConnectors_P_PWP_R_y_LiteralUnlimitedNatural4.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural4", DelegationConnectors_P_PWP_R_y_LiteralUnlimitedNatural4);
				DelegationConnectors_P_PWP_R_y_LiteralInteger5.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger5", DelegationConnectors_P_PWP_R_y_LiteralInteger5);
		DelegationConnectors_P_PWP_I.reset(new Interface());
		this->addToElementRepository("I", DelegationConnectors_P_PWP_I);
		DelegationConnectors_P_PWP_assert_A_Array_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Array_Pattern", DelegationConnectors_P_PWP_assert_A_Array_Pattern);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Array_Pattern", DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow6", DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6_LiteralInteger7.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger7", DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6_LiteralInteger7);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6_LiteralBoolean8.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean8", DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6_LiteralBoolean8);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value);
					DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value_LiteralInteger9.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger9", DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value_LiteralInteger9);
					DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value_LiteralInteger10.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger10", DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value_LiteralInteger10);
					DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value_LiteralUnlimitedNatural11.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural11", DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value_LiteralUnlimitedNatural11);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus);
					DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger12.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger12", DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger12);
					DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger13.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger13", DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger13);
					DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural14.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural14", DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural14);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Array_Pattern_node", DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern_node);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger15.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger15", DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger15);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", DelegationConnectors_P_PWP_assert_A_Array_Pattern_message);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_LiteralString16.reset(new LiteralString());
				this->addToElementRepository("LiteralString16", DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_LiteralString16);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result);
					DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result_LiteralInteger17.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger17", DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result_LiteralInteger17);
					DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result_LiteralUnlimitedNatural18.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural18", DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result_LiteralUnlimitedNatural18);
		DelegationConnectors_P_PWP_A_Star_Pattern.reset(new Class_());
		this->addToElementRepository("A_Star_Pattern", DelegationConnectors_P_PWP_A_Star_Pattern);
			DelegationConnectors_P_PWP_A_Star_Pattern_b.reset(new Property());
			this->addToElementRepository("b", DelegationConnectors_P_PWP_A_Star_Pattern_b);
				DelegationConnectors_P_PWP_A_Star_Pattern_b_LiteralInteger19.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger19", DelegationConnectors_P_PWP_A_Star_Pattern_b_LiteralInteger19);
				DelegationConnectors_P_PWP_A_Star_Pattern_b_LiteralUnlimitedNatural20.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural20", DelegationConnectors_P_PWP_A_Star_Pattern_b_LiteralUnlimitedNatural20);
			DelegationConnectors_P_PWP_A_Star_Pattern_p.reset(new Port());
			this->addToElementRepository("p", DelegationConnectors_P_PWP_A_Star_Pattern_p);
				DelegationConnectors_P_PWP_A_Star_Pattern_p_LiteralInteger21.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger21", DelegationConnectors_P_PWP_A_Star_Pattern_p_LiteralInteger21);
				DelegationConnectors_P_PWP_A_Star_Pattern_p_LiteralUnlimitedNatural22.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural22", DelegationConnectors_P_PWP_A_Star_Pattern_p_LiteralUnlimitedNatural22);
			DelegationConnectors_P_PWP_A_Star_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", DelegationConnectors_P_PWP_A_Star_Pattern_r);
				DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd23.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd23", DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd23);
					DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd23_LiteralInteger24.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger24", DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd23_LiteralInteger24);
					DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd23_LiteralUnlimitedNatural25.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural25", DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd23_LiteralUnlimitedNatural25);
				DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd26.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd26", DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd26);
					DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd26_LiteralUnlimitedNatural27.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural27", DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd26_LiteralUnlimitedNatural27);
					DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd26_LiteralInteger28.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger28", DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd26_LiteralInteger28);
			DelegationConnectors_P_PWP_A_Star_Pattern_Comment29.reset(new Comment());
			this->addToElementRepository("Comment29", DelegationConnectors_P_PWP_A_Star_Pattern_Comment29);
			DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern.reset(new Operation());
			this->addToElementRepository("A_Star_Pattern_A_Star_Pattern", DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
				DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
		DelegationConnectors_P_PWP_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", DelegationConnectors_P_PWP_IImpl);
			DelegationConnectors_P_PWP_IImpl_I_Realization.reset(new InterfaceRealization());
			this->addToElementRepository("I_Realization", DelegationConnectors_P_PWP_IImpl_I_Realization);
		DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Unconnected_Pattern", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Unconnected_Pattern", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Unconnected_Pattern", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
					DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralInteger30.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger30", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralInteger30);
					DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralUnlimitedNatural31.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural31", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralUnlimitedNatural31);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow32", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32_LiteralBoolean33.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean33", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32_LiteralBoolean33);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32_LiteralInteger34.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger34", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32_LiteralInteger34);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Unconnected_Pattern_node", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow35", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35_LiteralInteger36.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger36", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35_LiteralInteger36);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35_LiteralBoolean37.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean37", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35_LiteralBoolean37);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Unconnected_Pattern()", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
					DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralUnlimitedNatural38.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural38", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralUnlimitedNatural38);
					DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger39.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger39", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger39);
					DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger40.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger40", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger40);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
					DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralInteger41.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger41", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralInteger41);
					DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralUnlimitedNatural42.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural42", DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralUnlimitedNatural42);
		DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Empty_Pattern", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow43", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43_LiteralInteger44.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger44", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43_LiteralInteger44);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43_LiteralBoolean45.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean45", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43_LiteralBoolean45);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow46", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46_LiteralInteger47.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger47", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46_LiteralInteger47);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46_LiteralBoolean48.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean48", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46_LiteralBoolean48);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Empty_Pattern", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
					DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralInteger49.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger49", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralInteger49);
					DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural50", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralUnlimitedNatural50);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Empty_Pattern()", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
					DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralUnlimitedNatural51.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural51", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralUnlimitedNatural51);
					DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralInteger52.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger52", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralInteger52);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
					DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger53.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger53", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger53);
					DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralUnlimitedNatural54.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural54", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralUnlimitedNatural54);
					DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger55.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger55", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger55);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Empty_Pattern_node", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Empty_Pattern", DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern);
		DelegationConnectors_P_PWP_instantiate_A_Array_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Array_Pattern", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow56", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56_LiteralBoolean57.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean57", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56_LiteralBoolean57);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56_LiteralInteger58.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger58", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56_LiteralInteger58);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Array_Pattern_node", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger59.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger59", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger59);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Array_Pattern", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
					DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural60", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralUnlimitedNatural60);
					DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralInteger61.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger61", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralInteger61);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Array_Pattern", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow62", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62_LiteralBoolean63.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean63", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62_LiteralBoolean63);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62_LiteralInteger64.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger64", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62_LiteralInteger64);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Array_Pattern()", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target);
					DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralUnlimitedNatural65.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural65", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralUnlimitedNatural65);
					DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralInteger66.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger66", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralInteger66);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result);
					DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralUnlimitedNatural67.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural67", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralUnlimitedNatural67);
					DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger68.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger68", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger68);
					DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger69.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger69", DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger69);
		DelegationConnectors_P_PWP_A_Array_Pattern.reset(new Class_());
		this->addToElementRepository("A_Array_Pattern", DelegationConnectors_P_PWP_A_Array_Pattern);
			DelegationConnectors_P_PWP_A_Array_Pattern_Comment70.reset(new Comment());
			this->addToElementRepository("Comment70", DelegationConnectors_P_PWP_A_Array_Pattern_Comment70);
			DelegationConnectors_P_PWP_A_Array_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", DelegationConnectors_P_PWP_A_Array_Pattern_r);
				DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd71.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd71", DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd71);
					DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd71_LiteralUnlimitedNatural72.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural72", DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd71_LiteralUnlimitedNatural72);
				DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd73.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd73", DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd73);
					DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd73_LiteralUnlimitedNatural74.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural74", DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd73_LiteralUnlimitedNatural74);
			DelegationConnectors_P_PWP_A_Array_Pattern_b.reset(new Property());
			this->addToElementRepository("b", DelegationConnectors_P_PWP_A_Array_Pattern_b);
				DelegationConnectors_P_PWP_A_Array_Pattern_b_LiteralUnlimitedNatural75.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural75", DelegationConnectors_P_PWP_A_Array_Pattern_b_LiteralUnlimitedNatural75);
				DelegationConnectors_P_PWP_A_Array_Pattern_b_LiteralInteger76.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger76", DelegationConnectors_P_PWP_A_Array_Pattern_b_LiteralInteger76);
			DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern.reset(new Operation());
			this->addToElementRepository("A_Array_Pattern_A_Array_Pattern", DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
				DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result);
			DelegationConnectors_P_PWP_A_Array_Pattern_p.reset(new Port());
			this->addToElementRepository("p", DelegationConnectors_P_PWP_A_Array_Pattern_p);
				DelegationConnectors_P_PWP_A_Array_Pattern_p_LiteralInteger77.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger77", DelegationConnectors_P_PWP_A_Array_Pattern_p_LiteralInteger77);
				DelegationConnectors_P_PWP_A_Array_Pattern_p_LiteralUnlimitedNatural78.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural78", DelegationConnectors_P_PWP_A_Array_Pattern_p_LiteralUnlimitedNatural78);
		DelegationConnectors_P_PWP_assert_A_Empty_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Empty_Pattern", DelegationConnectors_P_PWP_assert_A_Empty_Pattern);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow79", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79_LiteralInteger80.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger80", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79_LiteralInteger80);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79_LiteralBoolean81.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean81", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79_LiteralBoolean81);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus);
					DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger82.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger82", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger82);
					DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger83.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger83", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger83);
					DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural84.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural84", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural84);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value);
					DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralInteger85.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger85", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralInteger85);
					DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralUnlimitedNatural86.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural86", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralUnlimitedNatural86);
					DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralInteger87.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger87", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralInteger87);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result);
					DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result_LiteralInteger88.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger88", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result_LiteralInteger88);
					DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result_LiteralUnlimitedNatural89.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural89", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result_LiteralUnlimitedNatural89);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_LiteralString90.reset(new LiteralString());
				this->addToElementRepository("LiteralString90", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_LiteralString90);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Empty_Pattern_node", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node_LiteralInteger91.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger91", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node_LiteralInteger91);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Empty_Pattern", DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern);
		DelegationConnectors_P_PWP_main.reset(new Activity());
		this->addToElementRepository("main", DelegationConnectors_P_PWP_main);
			DelegationConnectors_P_PWP_main_assert_A_Star_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Star_Pattern", DelegationConnectors_P_PWP_main_assert_A_Star_Pattern);
				DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Star_Pattern", DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern);
					DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural92.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural92", DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural92);
					DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger93.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger93", DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger93);
					DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger94.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger94", DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger94);
			DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Empty_Pattern", DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern);
				DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Empty_Pattern", DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
					DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger95.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger95", DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger95);
					DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger96.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger96", DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger96);
					DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural97.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural97", DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural97);
			DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Array_Pattern", DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern);
				DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Array_Pattern", DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern);
					DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger98.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger98", DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger98);
					DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural99.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural99", DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural99);
					DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger100.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger100", DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger100);
			DelegationConnectors_P_PWP_main_ObjectFlow101.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow101", DelegationConnectors_P_PWP_main_ObjectFlow101);
				DelegationConnectors_P_PWP_main_ObjectFlow101_LiteralBoolean102.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean102", DelegationConnectors_P_PWP_main_ObjectFlow101_LiteralBoolean102);
				DelegationConnectors_P_PWP_main_ObjectFlow101_LiteralInteger103.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger103", DelegationConnectors_P_PWP_main_ObjectFlow101_LiteralInteger103);
			DelegationConnectors_P_PWP_main_ObjectFlow104.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow104", DelegationConnectors_P_PWP_main_ObjectFlow104);
				DelegationConnectors_P_PWP_main_ObjectFlow104_LiteralInteger105.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger105", DelegationConnectors_P_PWP_main_ObjectFlow104_LiteralInteger105);
				DelegationConnectors_P_PWP_main_ObjectFlow104_LiteralBoolean106.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean106", DelegationConnectors_P_PWP_main_ObjectFlow104_LiteralBoolean106);
			DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Unconnected_Pattern", DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern);
				DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Unconnected_Pattern", DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
					DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger107.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger107", DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger107);
					DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural108.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural108", DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural108);
					DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger109.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger109", DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger109);
			DelegationConnectors_P_PWP_main_ObjectFlow110.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow110", DelegationConnectors_P_PWP_main_ObjectFlow110);
				DelegationConnectors_P_PWP_main_ObjectFlow110_LiteralBoolean111.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean111", DelegationConnectors_P_PWP_main_ObjectFlow110_LiteralBoolean111);
				DelegationConnectors_P_PWP_main_ObjectFlow110_LiteralInteger112.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger112", DelegationConnectors_P_PWP_main_ObjectFlow110_LiteralInteger112);
			DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Unconnected_Pattern", DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern);
				DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Unconnected_Pattern", DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
					DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger113.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger113", DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger113);
					DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural114.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural114", DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural114);
					DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger115.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger115", DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger115);
			DelegationConnectors_P_PWP_main_ObjectFlow116.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow116", DelegationConnectors_P_PWP_main_ObjectFlow116);
				DelegationConnectors_P_PWP_main_ObjectFlow116_LiteralBoolean117.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean117", DelegationConnectors_P_PWP_main_ObjectFlow116_LiteralBoolean117);
				DelegationConnectors_P_PWP_main_ObjectFlow116_LiteralInteger118.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger118", DelegationConnectors_P_PWP_main_ObjectFlow116_LiteralInteger118);
			DelegationConnectors_P_PWP_main_assert_A_Array_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Array_Pattern", DelegationConnectors_P_PWP_main_assert_A_Array_Pattern);
				DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Array_Pattern", DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern);
					DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural119.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural119", DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural119);
					DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger120.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger120", DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger120);
					DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger121.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger121", DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger121);
			DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Empty_Pattern", DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern);
				DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Empty_Pattern", DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern);
					DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural122.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural122", DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural122);
					DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger123.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger123", DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger123);
					DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger124.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger124", DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger124);
			DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Star_Pattern", DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern);
				DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Star_Pattern", DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern);
					DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger125.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger125", DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger125);
					DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural126.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural126", DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural126);
					DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger127.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger127", DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger127);
			DelegationConnectors_P_PWP_main_ControlFlow128.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow128", DelegationConnectors_P_PWP_main_ControlFlow128);
			DelegationConnectors_P_PWP_main_ControlFlow129.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow129", DelegationConnectors_P_PWP_main_ControlFlow129);
			DelegationConnectors_P_PWP_main_ControlFlow130.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow130", DelegationConnectors_P_PWP_main_ControlFlow130);
		DelegationConnectors_P_PWP_A_Unconnected_Pattern.reset(new Class_());
		this->addToElementRepository("A_Unconnected_Pattern", DelegationConnectors_P_PWP_A_Unconnected_Pattern);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_p.reset(new Port());
			this->addToElementRepository("p", DelegationConnectors_P_PWP_A_Unconnected_Pattern_p);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_p_LiteralInteger131.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger131", DelegationConnectors_P_PWP_A_Unconnected_Pattern_p_LiteralInteger131);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_p_LiteralUnlimitedNatural132.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural132", DelegationConnectors_P_PWP_A_Unconnected_Pattern_p_LiteralUnlimitedNatural132);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern.reset(new Operation());
			this->addToElementRepository("A_Unconnected_Pattern_A_Unconnected_Pattern", DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_b.reset(new Property());
			this->addToElementRepository("b", DelegationConnectors_P_PWP_A_Unconnected_Pattern_b);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_b_LiteralInteger133.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger133", DelegationConnectors_P_PWP_A_Unconnected_Pattern_b_LiteralInteger133);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_b_LiteralUnlimitedNatural134.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural134", DelegationConnectors_P_PWP_A_Unconnected_Pattern_b_LiteralUnlimitedNatural134);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", DelegationConnectors_P_PWP_A_Unconnected_Pattern_r);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd135.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd135", DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd135);
					DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd135_LiteralInteger136.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger136", DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd135_LiteralInteger136);
					DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd135_LiteralUnlimitedNatural137.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural137", DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd135_LiteralUnlimitedNatural137);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd138.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd138", DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd138);
					DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd138_LiteralUnlimitedNatural139.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural139", DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd138_LiteralUnlimitedNatural139);
					DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd138_LiteralInteger140.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger140", DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd138_LiteralInteger140);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_Comment141.reset(new Comment());
			this->addToElementRepository("Comment141", DelegationConnectors_P_PWP_A_Unconnected_Pattern_Comment141);
		DelegationConnectors_P_PWP_instantiate_A_Star_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Star_Pattern", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Star_Pattern", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Star_Pattern()", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result);
					DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger142.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger142", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger142);
					DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralUnlimitedNatural143.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural143", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralUnlimitedNatural143);
					DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger144.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger144", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger144);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target);
					DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralUnlimitedNatural145.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural145", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralUnlimitedNatural145);
					DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralInteger146.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger146", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralInteger146);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow147", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147_LiteralBoolean148.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean148", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147_LiteralBoolean148);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147_LiteralInteger149.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger149", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147_LiteralInteger149);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Star_Pattern", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
					DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralInteger150.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger150", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralInteger150);
					DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralUnlimitedNatural151.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural151", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralUnlimitedNatural151);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow152", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152_LiteralInteger153.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger153", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152_LiteralInteger153);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152_LiteralBoolean154.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean154", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152_LiteralBoolean154);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Star_Pattern_node", DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node);
		DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Unconnected_Pattern", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_LiteralString155.reset(new LiteralString());
				this->addToElementRepository("LiteralString155", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_LiteralString155);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result);
					DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result_LiteralInteger156.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger156", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result_LiteralInteger156);
					DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result_LiteralUnlimitedNatural157.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural157", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result_LiteralUnlimitedNatural157);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Unconnected_Pattern", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow158", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158_LiteralBoolean159.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean159", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158_LiteralBoolean159);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158_LiteralInteger160.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger160", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158_LiteralInteger160);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus);
					DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger161.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger161", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger161);
					DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural162.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural162", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural162);
					DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger163.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger163", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger163);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value);
					DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger164.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger164", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger164);
					DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralUnlimitedNatural165.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural165", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralUnlimitedNatural165);
					DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger166.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger166", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger166);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Unconnected_Pattern_node", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node_LiteralInteger167.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger167", DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node_LiteralInteger167);
		DelegationConnectors_P_PWP_A_Empty_Pattern.reset(new Class_());
		this->addToElementRepository("A_Empty_Pattern", DelegationConnectors_P_PWP_A_Empty_Pattern);
			DelegationConnectors_P_PWP_A_Empty_Pattern_b.reset(new Property());
			this->addToElementRepository("b", DelegationConnectors_P_PWP_A_Empty_Pattern_b);
				DelegationConnectors_P_PWP_A_Empty_Pattern_b_LiteralInteger168.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger168", DelegationConnectors_P_PWP_A_Empty_Pattern_b_LiteralInteger168);
				DelegationConnectors_P_PWP_A_Empty_Pattern_b_LiteralUnlimitedNatural169.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural169", DelegationConnectors_P_PWP_A_Empty_Pattern_b_LiteralUnlimitedNatural169);
			DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern.reset(new Operation());
			this->addToElementRepository("A_Empty_Pattern_A_Empty_Pattern", DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
				DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result);
			DelegationConnectors_P_PWP_A_Empty_Pattern_Comment170.reset(new Comment());
			this->addToElementRepository("Comment170", DelegationConnectors_P_PWP_A_Empty_Pattern_Comment170);
			DelegationConnectors_P_PWP_A_Empty_Pattern_p.reset(new Port());
			this->addToElementRepository("p", DelegationConnectors_P_PWP_A_Empty_Pattern_p);
				DelegationConnectors_P_PWP_A_Empty_Pattern_p_LiteralInteger171.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger171", DelegationConnectors_P_PWP_A_Empty_Pattern_p_LiteralInteger171);
				DelegationConnectors_P_PWP_A_Empty_Pattern_p_LiteralUnlimitedNatural172.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural172", DelegationConnectors_P_PWP_A_Empty_Pattern_p_LiteralUnlimitedNatural172);
			DelegationConnectors_P_PWP_A_Empty_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", DelegationConnectors_P_PWP_A_Empty_Pattern_r);
				DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd173.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd173", DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd173);
					DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd173_LiteralUnlimitedNatural174.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural174", DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd173_LiteralUnlimitedNatural174);
				DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd175.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd175", DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd175);
					DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd175_LiteralUnlimitedNatural176.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural176", DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd175_LiteralUnlimitedNatural176);
		DelegationConnectors_P_PWP_assert_A_Star_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Star_Pattern", DelegationConnectors_P_PWP_assert_A_Star_Pattern);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Star_Pattern_node", DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern_node);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern_node_LiteralInteger177.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger177", DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern_node_LiteralInteger177);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", DelegationConnectors_P_PWP_assert_A_Star_Pattern_message);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_LiteralString178.reset(new LiteralString());
				this->addToElementRepository("LiteralString178", DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_LiteralString178);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result);
					DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result_LiteralUnlimitedNatural179.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural179", DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result_LiteralUnlimitedNatural179);
					DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result_LiteralInteger180.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger180", DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result_LiteralInteger180);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Star_Pattern", DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value);
					DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value_LiteralInteger181.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger181", DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value_LiteralInteger181);
					DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value_LiteralUnlimitedNatural182.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural182", DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value_LiteralUnlimitedNatural182);
					DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value_LiteralInteger183.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger183", DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value_LiteralInteger183);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus);
					DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural184.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural184", DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural184);
					DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger185.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger185", DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger185);
					DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger186.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger186", DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger186);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow187", DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187_LiteralInteger188.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger188", DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187_LiteralInteger188);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187_LiteralBoolean189.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean189", DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187_LiteralBoolean189);

	// Initialize public members
	/*
	 * Model DelegationConnectors_P_PWP
	 */
	DelegationConnectors_P_PWP->setThisPackagePtr(DelegationConnectors_P_PWP);
	DelegationConnectors_P_PWP->setName("DelegationConnectors_P_PWP");
	DelegationConnectors_P_PWP->setVisibility(VisibilityKind::public_);
		// Class B
		DelegationConnectors_P_PWP_B->setThisClass_Ptr(DelegationConnectors_P_PWP_B);
		DelegationConnectors_P_PWP_B->setName("B");
		DelegationConnectors_P_PWP_B->setVisibility(VisibilityKind::public_);
		
			// Port q
			DelegationConnectors_P_PWP_B_q->setThisElementPtr(DelegationConnectors_P_PWP_B_q);
			DelegationConnectors_P_PWP_B_q->setName("q");
			DelegationConnectors_P_PWP_B_q->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_B_q->setUpper(-1);
			DelegationConnectors_P_PWP_B_q->setLower(2);
			DelegationConnectors_P_PWP_B_q->setType(DelegationConnectors_P_PWP_IImpl);
			DelegationConnectors_P_PWP_B_q->setAggregation(AggregationKind::composite);
			DelegationConnectors_P_PWP_B_q->isService = true;
			DelegationConnectors_P_PWP_B_q->addProvided(DelegationConnectors_P_PWP_I);
		DelegationConnectors_P_PWP_B->addOwnedAttribute(DelegationConnectors_P_PWP_B_q);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_B);
		// Association R
		DelegationConnectors_P_PWP_R->setThisAssociationPtr(DelegationConnectors_P_PWP_R);
		DelegationConnectors_P_PWP_R->setName("R");
		DelegationConnectors_P_PWP_R->setVisibility(VisibilityKind::public_);
		DelegationConnectors_P_PWP_R->addOwnedEnd(DelegationConnectors_P_PWP_R_x);
		DelegationConnectors_P_PWP_R->addOwnedEnd(DelegationConnectors_P_PWP_R_y);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_R);
		// Interface I
		DelegationConnectors_P_PWP_I->setName("I");
		DelegationConnectors_P_PWP_I->setVisibility(VisibilityKind::public_);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_I);
		// Activity assert_A_Array_Pattern
		DelegationConnectors_P_PWP_assert_A_Array_Pattern->setThisActivityPtr(DelegationConnectors_P_PWP_assert_A_Array_Pattern);
		DelegationConnectors_P_PWP_assert_A_Array_Pattern->setName("assert_A_Array_Pattern");
		DelegationConnectors_P_PWP_assert_A_Array_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Array_Pattern
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern->setType(DelegationConnectors_P_PWP_A_Array_Pattern);
		DelegationConnectors_P_PWP_assert_A_Array_Pattern->addOwnedParameter(DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern);
			// CallBehaviorAction writeLine
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine->setThisExecutableNodePtr(DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine->setName("writeLine");
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus->setName("errorStatus");
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus->setLower(0);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine->addResult(DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_errorStatus);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value->setName("value");
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine->addArgument(DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value);
		DelegationConnectors_P_PWP_assert_A_Array_Pattern->addNode(DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine);
			// ActivityParameterNode a_Array_Pattern_node
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern_node->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern_node);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern_node->setName("a_Array_Pattern_node");
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern_node->setParameter(DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern);
		DelegationConnectors_P_PWP_assert_A_Array_Pattern->addNode(DelegationConnectors_P_PWP_assert_A_Array_Pattern_a_Array_Pattern_node);
			// ValueSpecificationAction message
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_message->setThisExecutableNodePtr(DelegationConnectors_P_PWP_assert_A_Array_Pattern_message);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_message->setName("message");
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString16
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_LiteralString16->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_LiteralString16);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_LiteralString16->setName("LiteralString16");
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_LiteralString16->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_LiteralString16->setValue("Assertion currently not implemented for A_Array_Pattern.");
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_message->setValue(DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_LiteralString16);
				// OutputPin result
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result->setName("result");
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_message->setResult(DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result);
		DelegationConnectors_P_PWP_assert_A_Array_Pattern->addNode(DelegationConnectors_P_PWP_assert_A_Array_Pattern_message);
			// ObjectFlow ObjectFlow6 from result to value
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6->setThisActivityEdgePtr(DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6->setName("ObjectFlow6");
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6->setSource(DelegationConnectors_P_PWP_assert_A_Array_Pattern_message_result);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6->setTarget(DelegationConnectors_P_PWP_assert_A_Array_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean8
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6_LiteralBoolean8->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6_LiteralBoolean8);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6_LiteralBoolean8->setName("LiteralBoolean8");
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6_LiteralBoolean8->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6_LiteralBoolean8->setValue(true);
			DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6->setGuard(DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6_LiteralBoolean8);
		DelegationConnectors_P_PWP_assert_A_Array_Pattern->addEdge(DelegationConnectors_P_PWP_assert_A_Array_Pattern_ObjectFlow6);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_assert_A_Array_Pattern);
		// Class A_Star_Pattern
		DelegationConnectors_P_PWP_A_Star_Pattern->setThisClass_Ptr(DelegationConnectors_P_PWP_A_Star_Pattern);
		DelegationConnectors_P_PWP_A_Star_Pattern->setName("A_Star_Pattern");
		DelegationConnectors_P_PWP_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property b
			DelegationConnectors_P_PWP_A_Star_Pattern_b->setThisElementPtr(DelegationConnectors_P_PWP_A_Star_Pattern_b);
			DelegationConnectors_P_PWP_A_Star_Pattern_b->setName("b");
			DelegationConnectors_P_PWP_A_Star_Pattern_b->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_A_Star_Pattern_b->setUpper(-1);
			DelegationConnectors_P_PWP_A_Star_Pattern_b->setLower(2);
			DelegationConnectors_P_PWP_A_Star_Pattern_b->setType(DelegationConnectors_P_PWP_B);
			DelegationConnectors_P_PWP_A_Star_Pattern_b->setAggregation(AggregationKind::composite);
		DelegationConnectors_P_PWP_A_Star_Pattern->addOwnedAttribute(DelegationConnectors_P_PWP_A_Star_Pattern_b);
			// Port p
			DelegationConnectors_P_PWP_A_Star_Pattern_p->setThisElementPtr(DelegationConnectors_P_PWP_A_Star_Pattern_p);
			DelegationConnectors_P_PWP_A_Star_Pattern_p->setName("p");
			DelegationConnectors_P_PWP_A_Star_Pattern_p->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_A_Star_Pattern_p->setUpper(-1);
			DelegationConnectors_P_PWP_A_Star_Pattern_p->setLower(3);
			DelegationConnectors_P_PWP_A_Star_Pattern_p->setType(DelegationConnectors_P_PWP_IImpl);
			DelegationConnectors_P_PWP_A_Star_Pattern_p->setAggregation(AggregationKind::composite);
			DelegationConnectors_P_PWP_A_Star_Pattern_p->isService = true;
			DelegationConnectors_P_PWP_A_Star_Pattern_p->addProvided(DelegationConnectors_P_PWP_I);
		DelegationConnectors_P_PWP_A_Star_Pattern->addOwnedAttribute(DelegationConnectors_P_PWP_A_Star_Pattern_p);
		
		DelegationConnectors_P_PWP_A_Star_Pattern_r->setName("r");
			DelegationConnectors_P_PWP_A_Star_Pattern_r->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd26->setUpper(-1);
				DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd26->setLower(3);
				DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd26->setRole(DelegationConnectors_P_PWP_A_Star_Pattern_p);
				
			DelegationConnectors_P_PWP_A_Star_Pattern_r->addEnd(DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd26);
				DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd23->setUpper(-1);
				DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd23->setLower(4);
				DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd23->setRole(DelegationConnectors_P_PWP_B_q);
				DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd23->setPartWithPort(DelegationConnectors_P_PWP_A_Star_Pattern_b);
				
			DelegationConnectors_P_PWP_A_Star_Pattern_r->addEnd(DelegationConnectors_P_PWP_A_Star_Pattern_r_ConnectorEnd23);
			DelegationConnectors_P_PWP_A_Star_Pattern_r->setType(DelegationConnectors_P_PWP_R);
		DelegationConnectors_P_PWP_A_Star_Pattern->addOwnedConnector(DelegationConnectors_P_PWP_A_Star_Pattern_r);
			// Operation A_Star_Pattern_A_Star_Pattern
			DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setThisOperationPtr(DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
			DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setName("A_Star_Pattern_A_Star_Pattern");
			DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setThisElementPtr(DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
				DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setName("result");
				DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setType(DelegationConnectors_P_PWP_A_Star_Pattern);
				DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setDirection(ParameterDirectionKind::return_);
			DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->addOwnedParameter(DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
		DelegationConnectors_P_PWP_A_Star_Pattern->addOwnedOperation(DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_A_Star_Pattern);
		// Class IImpl
		DelegationConnectors_P_PWP_IImpl->setThisClass_Ptr(DelegationConnectors_P_PWP_IImpl);
		DelegationConnectors_P_PWP_IImpl->setName("IImpl");
		DelegationConnectors_P_PWP_IImpl->setVisibility(VisibilityKind::public_);
		DelegationConnectors_P_PWP_IImpl_I_Realization->setName("I_Realization");
			DelegationConnectors_P_PWP_IImpl_I_Realization->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_IImpl_I_Realization->setContract(DelegationConnectors_P_PWP_I);
			
		DelegationConnectors_P_PWP_IImpl->addInterfaceRealization(DelegationConnectors_P_PWP_IImpl_I_Realization);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_IImpl);
		// Activity instantiate_A_Unconnected_Pattern
		DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern->setThisActivityPtr(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern);
		DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern->setName("instantiate_A_Unconnected_Pattern");
		DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Unconnected_Pattern
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(DelegationConnectors_P_PWP_A_Unconnected_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setDirection(ParameterDirectionKind::return_);
		DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern->addOwnedParameter(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			// CreateObjectAction Create A_Unconnected_Pattern
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setName("Create A_Unconnected_Pattern");
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setClassifier(DelegationConnectors_P_PWP_A_Unconnected_Pattern);
				// OutputPin result
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setName("result");
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setType(DelegationConnectors_P_PWP_A_Unconnected_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setResult(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
		DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern->addNode(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern);
			// ActivityParameterNode a_Unconnected_Pattern_node
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setName("a_Unconnected_Pattern_node");
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setParameter(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
		DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern->addNode(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			// CallOperationAction A_Unconnected_Pattern()
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setThisExecutableNodePtr(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setName("A_Unconnected_Pattern()");
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setName("result");
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setType(DelegationConnectors_P_PWP_A_Unconnected_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->addResult(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setOperation(DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
				// InputPin target
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setName("target");
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setType(DelegationConnectors_P_PWP_A_Unconnected_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setTarget(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
		DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern->addNode(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_);
			// ObjectFlow ObjectFlow32 from result to target
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32->setThisActivityEdgePtr(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32->setName("ObjectFlow32");
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32->setSource(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32->setTarget(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
				// LiteralBoolean LiteralBoolean33
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32_LiteralBoolean33->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32_LiteralBoolean33);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32_LiteralBoolean33->setName("LiteralBoolean33");
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32_LiteralBoolean33->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32_LiteralBoolean33->setValue(true);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32->setGuard(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32_LiteralBoolean33);
		DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern->addEdge(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow32);
			// ObjectFlow ObjectFlow35 from result to a_Unconnected_Pattern_node
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35->setThisActivityEdgePtr(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35->setName("ObjectFlow35");
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35->setSource(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35->setTarget(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
				// LiteralBoolean LiteralBoolean37
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35_LiteralBoolean37->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35_LiteralBoolean37);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35_LiteralBoolean37->setName("LiteralBoolean37");
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35_LiteralBoolean37->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35_LiteralBoolean37->setValue(true);
			DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35->setGuard(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35_LiteralBoolean37);
		DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern->addEdge(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow35);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern);
		// Activity instantiate_A_Empty_Pattern
		DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern->setThisActivityPtr(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern);
		DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern->setName("instantiate_A_Empty_Pattern");
		DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Empty_Pattern
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern->setType(DelegationConnectors_P_PWP_A_Empty_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern->setDirection(ParameterDirectionKind::return_);
		DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern->addOwnedParameter(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			// CreateObjectAction Create A_Empty_Pattern
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setName("Create A_Empty_Pattern");
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setClassifier(DelegationConnectors_P_PWP_A_Empty_Pattern);
				// OutputPin result
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setName("result");
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setType(DelegationConnectors_P_PWP_A_Empty_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setResult(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
		DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern->addNode(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern);
			// CallOperationAction A_Empty_Pattern()
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setThisExecutableNodePtr(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setName("A_Empty_Pattern()");
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setName("result");
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setType(DelegationConnectors_P_PWP_A_Empty_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_->addResult(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setOperation(DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
				// InputPin target
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setName("target");
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setType(DelegationConnectors_P_PWP_A_Empty_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setTarget(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
		DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern->addNode(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_);
			// ActivityParameterNode a_Empty_Pattern_node
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setName("a_Empty_Pattern_node");
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setParameter(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern);
		DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern->addNode(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
			// ObjectFlow ObjectFlow43 from result to a_Empty_Pattern_node
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43->setThisActivityEdgePtr(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43->setName("ObjectFlow43");
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43->setSource(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43->setTarget(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
				// LiteralBoolean LiteralBoolean45
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43_LiteralBoolean45->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43_LiteralBoolean45);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43_LiteralBoolean45->setName("LiteralBoolean45");
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43_LiteralBoolean45->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43_LiteralBoolean45->setValue(true);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43->setGuard(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43_LiteralBoolean45);
		DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern->addEdge(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow43);
			// ObjectFlow ObjectFlow46 from result to target
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46->setThisActivityEdgePtr(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46->setName("ObjectFlow46");
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46->setSource(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46->setTarget(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
				// LiteralBoolean LiteralBoolean48
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46_LiteralBoolean48->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46_LiteralBoolean48);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46_LiteralBoolean48->setName("LiteralBoolean48");
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46_LiteralBoolean48->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46_LiteralBoolean48->setValue(true);
			DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46->setGuard(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46_LiteralBoolean48);
		DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern->addEdge(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern_ObjectFlow46);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern);
		// Activity instantiate_A_Array_Pattern
		DelegationConnectors_P_PWP_instantiate_A_Array_Pattern->setThisActivityPtr(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern);
		DelegationConnectors_P_PWP_instantiate_A_Array_Pattern->setName("instantiate_A_Array_Pattern");
		DelegationConnectors_P_PWP_instantiate_A_Array_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Array_Pattern
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern->setType(DelegationConnectors_P_PWP_A_Array_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern->setDirection(ParameterDirectionKind::return_);
		DelegationConnectors_P_PWP_instantiate_A_Array_Pattern->addOwnedParameter(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern);
			// ActivityParameterNode a_Array_Pattern_node
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node->setName("a_Array_Pattern_node");
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node->setParameter(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern);
		DelegationConnectors_P_PWP_instantiate_A_Array_Pattern->addNode(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node);
			// CreateObjectAction Create A_Array_Pattern
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setName("Create A_Array_Pattern");
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setClassifier(DelegationConnectors_P_PWP_A_Array_Pattern);
				// OutputPin result
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setName("result");
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setType(DelegationConnectors_P_PWP_A_Array_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setResult(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
		DelegationConnectors_P_PWP_instantiate_A_Array_Pattern->addNode(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern);
			// CallOperationAction A_Array_Pattern()
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_->setThisExecutableNodePtr(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_->setName("A_Array_Pattern()");
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result->setName("result");
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result->setType(DelegationConnectors_P_PWP_A_Array_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_->addResult(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_->setOperation(DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
				// InputPin target
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target->setName("target");
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target->setType(DelegationConnectors_P_PWP_A_Array_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_->setTarget(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target);
		DelegationConnectors_P_PWP_instantiate_A_Array_Pattern->addNode(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_);
			// ObjectFlow ObjectFlow56 from result to target
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56->setThisActivityEdgePtr(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56->setName("ObjectFlow56");
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56->setSource(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56->setTarget(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target);
				// LiteralBoolean LiteralBoolean57
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56_LiteralBoolean57->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56_LiteralBoolean57);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56_LiteralBoolean57->setName("LiteralBoolean57");
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56_LiteralBoolean57->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56_LiteralBoolean57->setValue(true);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56->setGuard(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56_LiteralBoolean57);
		DelegationConnectors_P_PWP_instantiate_A_Array_Pattern->addEdge(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow56);
			// ObjectFlow ObjectFlow62 from result to a_Array_Pattern_node
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62->setThisActivityEdgePtr(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62->setName("ObjectFlow62");
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62->setSource(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62->setTarget(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node);
				// LiteralBoolean LiteralBoolean63
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62_LiteralBoolean63->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62_LiteralBoolean63);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62_LiteralBoolean63->setName("LiteralBoolean63");
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62_LiteralBoolean63->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62_LiteralBoolean63->setValue(true);
			DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62->setGuard(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62_LiteralBoolean63);
		DelegationConnectors_P_PWP_instantiate_A_Array_Pattern->addEdge(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern_ObjectFlow62);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern);
		// Class A_Array_Pattern
		DelegationConnectors_P_PWP_A_Array_Pattern->setThisClass_Ptr(DelegationConnectors_P_PWP_A_Array_Pattern);
		DelegationConnectors_P_PWP_A_Array_Pattern->setName("A_Array_Pattern");
		DelegationConnectors_P_PWP_A_Array_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property b
			DelegationConnectors_P_PWP_A_Array_Pattern_b->setThisElementPtr(DelegationConnectors_P_PWP_A_Array_Pattern_b);
			DelegationConnectors_P_PWP_A_Array_Pattern_b->setName("b");
			DelegationConnectors_P_PWP_A_Array_Pattern_b->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_A_Array_Pattern_b->setUpper(-1);
			DelegationConnectors_P_PWP_A_Array_Pattern_b->setLower(2);
			DelegationConnectors_P_PWP_A_Array_Pattern_b->setType(DelegationConnectors_P_PWP_B);
			DelegationConnectors_P_PWP_A_Array_Pattern_b->setAggregation(AggregationKind::composite);
		DelegationConnectors_P_PWP_A_Array_Pattern->addOwnedAttribute(DelegationConnectors_P_PWP_A_Array_Pattern_b);
			// Port p
			DelegationConnectors_P_PWP_A_Array_Pattern_p->setThisElementPtr(DelegationConnectors_P_PWP_A_Array_Pattern_p);
			DelegationConnectors_P_PWP_A_Array_Pattern_p->setName("p");
			DelegationConnectors_P_PWP_A_Array_Pattern_p->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_A_Array_Pattern_p->setUpper(-1);
			DelegationConnectors_P_PWP_A_Array_Pattern_p->setLower(4);
			DelegationConnectors_P_PWP_A_Array_Pattern_p->setType(DelegationConnectors_P_PWP_IImpl);
			DelegationConnectors_P_PWP_A_Array_Pattern_p->setAggregation(AggregationKind::composite);
			DelegationConnectors_P_PWP_A_Array_Pattern_p->isService = true;
			DelegationConnectors_P_PWP_A_Array_Pattern_p->addProvided(DelegationConnectors_P_PWP_I);
		DelegationConnectors_P_PWP_A_Array_Pattern->addOwnedAttribute(DelegationConnectors_P_PWP_A_Array_Pattern_p);
		
		DelegationConnectors_P_PWP_A_Array_Pattern_r->setName("r");
			DelegationConnectors_P_PWP_A_Array_Pattern_r->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd71->setUpper(-1);
				DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd71->setRole(DelegationConnectors_P_PWP_A_Array_Pattern_p);
				
			DelegationConnectors_P_PWP_A_Array_Pattern_r->addEnd(DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd71);
				DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd73->setUpper(-1);
				DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd73->setRole(DelegationConnectors_P_PWP_B_q);
				DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd73->setPartWithPort(DelegationConnectors_P_PWP_A_Array_Pattern_b);
				
			DelegationConnectors_P_PWP_A_Array_Pattern_r->addEnd(DelegationConnectors_P_PWP_A_Array_Pattern_r_ConnectorEnd73);
			DelegationConnectors_P_PWP_A_Array_Pattern_r->setType(DelegationConnectors_P_PWP_R);
		DelegationConnectors_P_PWP_A_Array_Pattern->addOwnedConnector(DelegationConnectors_P_PWP_A_Array_Pattern_r);
			// Operation A_Array_Pattern_A_Array_Pattern
			DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->setThisOperationPtr(DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
			DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->setName("A_Array_Pattern_A_Array_Pattern");
			DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setThisElementPtr(DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result);
				DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setName("result");
				DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setType(DelegationConnectors_P_PWP_A_Array_Pattern);
				DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setDirection(ParameterDirectionKind::return_);
			DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->addOwnedParameter(DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result);
		DelegationConnectors_P_PWP_A_Array_Pattern->addOwnedOperation(DelegationConnectors_P_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_A_Array_Pattern);
		// Activity assert_A_Empty_Pattern
		DelegationConnectors_P_PWP_assert_A_Empty_Pattern->setThisActivityPtr(DelegationConnectors_P_PWP_assert_A_Empty_Pattern);
		DelegationConnectors_P_PWP_assert_A_Empty_Pattern->setName("assert_A_Empty_Pattern");
		DelegationConnectors_P_PWP_assert_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Empty_Pattern
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern->setType(DelegationConnectors_P_PWP_A_Empty_Pattern);
		DelegationConnectors_P_PWP_assert_A_Empty_Pattern->addOwnedParameter(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern);
			// CallBehaviorAction writeLine
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine->setThisExecutableNodePtr(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine->setName("writeLine");
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus->setName("errorStatus");
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus->setLower(0);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine->addResult(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_errorStatus);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value->setName("value");
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine->addArgument(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value);
		DelegationConnectors_P_PWP_assert_A_Empty_Pattern->addNode(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine);
			// ValueSpecificationAction message
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message->setThisExecutableNodePtr(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message->setName("message");
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString90
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_LiteralString90->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_LiteralString90);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_LiteralString90->setName("LiteralString90");
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_LiteralString90->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_LiteralString90->setValue("Assertion currently not implemented for A_Empty_Pattern.");
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message->setValue(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_LiteralString90);
				// OutputPin result
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result->setName("result");
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message->setResult(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result);
		DelegationConnectors_P_PWP_assert_A_Empty_Pattern->addNode(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message);
			// ActivityParameterNode a_Empty_Pattern_node
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node->setName("a_Empty_Pattern_node");
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node->setParameter(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern);
		DelegationConnectors_P_PWP_assert_A_Empty_Pattern->addNode(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node);
			// ObjectFlow ObjectFlow79 from result to value
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79->setThisActivityEdgePtr(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79->setName("ObjectFlow79");
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79->setSource(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_message_result);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79->setTarget(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean81
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79_LiteralBoolean81->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79_LiteralBoolean81);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79_LiteralBoolean81->setName("LiteralBoolean81");
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79_LiteralBoolean81->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79_LiteralBoolean81->setValue(true);
			DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79->setGuard(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79_LiteralBoolean81);
		DelegationConnectors_P_PWP_assert_A_Empty_Pattern->addEdge(DelegationConnectors_P_PWP_assert_A_Empty_Pattern_ObjectFlow79);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_assert_A_Empty_Pattern);
		// Activity main
		DelegationConnectors_P_PWP_main->setThisActivityPtr(DelegationConnectors_P_PWP_main);
		DelegationConnectors_P_PWP_main->setName("main");
		DelegationConnectors_P_PWP_main->setVisibility(VisibilityKind::public_);
			// CallBehaviorAction assert_A_Unconnected_Pattern
			DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern);
			DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern->setName("assert_A_Unconnected_Pattern");
			DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern->setBehavior(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern);
				// InputPin a_Unconnected_Pattern
				DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
				DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
				DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(DelegationConnectors_P_PWP_A_Unconnected_Pattern);
			DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern->addArgument(DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
		DelegationConnectors_P_PWP_main->addNode(DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern);
			// CallBehaviorAction assert_A_Star_Pattern
			DelegationConnectors_P_PWP_main_assert_A_Star_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_PWP_main_assert_A_Star_Pattern);
			DelegationConnectors_P_PWP_main_assert_A_Star_Pattern->setName("assert_A_Star_Pattern");
			DelegationConnectors_P_PWP_main_assert_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_main_assert_A_Star_Pattern->setBehavior(DelegationConnectors_P_PWP_assert_A_Star_Pattern);
				// InputPin a_Star_Pattern
				DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern);
				DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
				DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern->setType(DelegationConnectors_P_PWP_A_Star_Pattern);
			DelegationConnectors_P_PWP_main_assert_A_Star_Pattern->addArgument(DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern);
		DelegationConnectors_P_PWP_main->addNode(DelegationConnectors_P_PWP_main_assert_A_Star_Pattern);
			// CallBehaviorAction assert_A_Array_Pattern
			DelegationConnectors_P_PWP_main_assert_A_Array_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_PWP_main_assert_A_Array_Pattern);
			DelegationConnectors_P_PWP_main_assert_A_Array_Pattern->setName("assert_A_Array_Pattern");
			DelegationConnectors_P_PWP_main_assert_A_Array_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_main_assert_A_Array_Pattern->setBehavior(DelegationConnectors_P_PWP_assert_A_Array_Pattern);
				// InputPin a_Array_Pattern
				DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern);
				DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
				DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern->setType(DelegationConnectors_P_PWP_A_Array_Pattern);
			DelegationConnectors_P_PWP_main_assert_A_Array_Pattern->addArgument(DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern);
		DelegationConnectors_P_PWP_main->addNode(DelegationConnectors_P_PWP_main_assert_A_Array_Pattern);
			// CallBehaviorAction instantiate_A_Empty_Pattern
			DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern);
			DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern->setName("instantiate_A_Empty_Pattern");
			DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Empty_Pattern
				DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
				DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
				DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setType(DelegationConnectors_P_PWP_A_Empty_Pattern);
			DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern->addResult(DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern->setBehavior(DelegationConnectors_P_PWP_instantiate_A_Empty_Pattern);
		DelegationConnectors_P_PWP_main->addNode(DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern);
			// CallBehaviorAction assert_A_Empty_Pattern
			DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern);
			DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern->setName("assert_A_Empty_Pattern");
			DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern->setBehavior(DelegationConnectors_P_PWP_assert_A_Empty_Pattern);
				// InputPin a_Empty_Pattern
				DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern);
				DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
				DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern->setType(DelegationConnectors_P_PWP_A_Empty_Pattern);
			DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern->addArgument(DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern);
		DelegationConnectors_P_PWP_main->addNode(DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern);
			// CallBehaviorAction instantiate_A_Array_Pattern
			DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern);
			DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern->setName("instantiate_A_Array_Pattern");
			DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Array_Pattern
				DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern);
				DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
				DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern->setType(DelegationConnectors_P_PWP_A_Array_Pattern);
			DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern->addResult(DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern);
			DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern->setBehavior(DelegationConnectors_P_PWP_instantiate_A_Array_Pattern);
		DelegationConnectors_P_PWP_main->addNode(DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern);
			// CallBehaviorAction instantiate_A_Star_Pattern
			DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern);
			DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern->setName("instantiate_A_Star_Pattern");
			DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Star_Pattern
				DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern);
				DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
				DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern->setType(DelegationConnectors_P_PWP_A_Star_Pattern);
			DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern->addResult(DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern);
			DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern->setBehavior(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern);
		DelegationConnectors_P_PWP_main->addNode(DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern);
			// CallBehaviorAction instantiate_A_Unconnected_Pattern
			DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern);
			DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern->setName("instantiate_A_Unconnected_Pattern");
			DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Unconnected_Pattern
				DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
				DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
				DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(DelegationConnectors_P_PWP_A_Unconnected_Pattern);
			DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern->addResult(DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern->setBehavior(DelegationConnectors_P_PWP_instantiate_A_Unconnected_Pattern);
		DelegationConnectors_P_PWP_main->addNode(DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern);
			// ObjectFlow ObjectFlow110 from a_Star_Pattern to a_Star_Pattern
			DelegationConnectors_P_PWP_main_ObjectFlow110->setThisActivityEdgePtr(DelegationConnectors_P_PWP_main_ObjectFlow110);
			DelegationConnectors_P_PWP_main_ObjectFlow110->setName("ObjectFlow110");
			DelegationConnectors_P_PWP_main_ObjectFlow110->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_main_ObjectFlow110->setSource(DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern);
			DelegationConnectors_P_PWP_main_ObjectFlow110->setTarget(DelegationConnectors_P_PWP_main_assert_A_Star_Pattern_a_Star_Pattern);
				// LiteralBoolean LiteralBoolean111
				DelegationConnectors_P_PWP_main_ObjectFlow110_LiteralBoolean111->setThisElementPtr(DelegationConnectors_P_PWP_main_ObjectFlow110_LiteralBoolean111);
				DelegationConnectors_P_PWP_main_ObjectFlow110_LiteralBoolean111->setName("LiteralBoolean111");
				DelegationConnectors_P_PWP_main_ObjectFlow110_LiteralBoolean111->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_main_ObjectFlow110_LiteralBoolean111->setValue(true);
			DelegationConnectors_P_PWP_main_ObjectFlow110->setGuard(DelegationConnectors_P_PWP_main_ObjectFlow110_LiteralBoolean111);
		DelegationConnectors_P_PWP_main->addEdge(DelegationConnectors_P_PWP_main_ObjectFlow110);
			// ObjectFlow ObjectFlow116 from a_Array_Pattern to a_Array_Pattern
			DelegationConnectors_P_PWP_main_ObjectFlow116->setThisActivityEdgePtr(DelegationConnectors_P_PWP_main_ObjectFlow116);
			DelegationConnectors_P_PWP_main_ObjectFlow116->setName("ObjectFlow116");
			DelegationConnectors_P_PWP_main_ObjectFlow116->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_main_ObjectFlow116->setSource(DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern);
			DelegationConnectors_P_PWP_main_ObjectFlow116->setTarget(DelegationConnectors_P_PWP_main_assert_A_Array_Pattern_a_Array_Pattern);
				// LiteralBoolean LiteralBoolean117
				DelegationConnectors_P_PWP_main_ObjectFlow116_LiteralBoolean117->setThisElementPtr(DelegationConnectors_P_PWP_main_ObjectFlow116_LiteralBoolean117);
				DelegationConnectors_P_PWP_main_ObjectFlow116_LiteralBoolean117->setName("LiteralBoolean117");
				DelegationConnectors_P_PWP_main_ObjectFlow116_LiteralBoolean117->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_main_ObjectFlow116_LiteralBoolean117->setValue(true);
			DelegationConnectors_P_PWP_main_ObjectFlow116->setGuard(DelegationConnectors_P_PWP_main_ObjectFlow116_LiteralBoolean117);
		DelegationConnectors_P_PWP_main->addEdge(DelegationConnectors_P_PWP_main_ObjectFlow116);
			// ObjectFlow ObjectFlow101 from a_Empty_Pattern to a_Empty_Pattern
			DelegationConnectors_P_PWP_main_ObjectFlow101->setThisActivityEdgePtr(DelegationConnectors_P_PWP_main_ObjectFlow101);
			DelegationConnectors_P_PWP_main_ObjectFlow101->setName("ObjectFlow101");
			DelegationConnectors_P_PWP_main_ObjectFlow101->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_main_ObjectFlow101->setSource(DelegationConnectors_P_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			DelegationConnectors_P_PWP_main_ObjectFlow101->setTarget(DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern);
				// LiteralBoolean LiteralBoolean102
				DelegationConnectors_P_PWP_main_ObjectFlow101_LiteralBoolean102->setThisElementPtr(DelegationConnectors_P_PWP_main_ObjectFlow101_LiteralBoolean102);
				DelegationConnectors_P_PWP_main_ObjectFlow101_LiteralBoolean102->setName("LiteralBoolean102");
				DelegationConnectors_P_PWP_main_ObjectFlow101_LiteralBoolean102->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_main_ObjectFlow101_LiteralBoolean102->setValue(true);
			DelegationConnectors_P_PWP_main_ObjectFlow101->setGuard(DelegationConnectors_P_PWP_main_ObjectFlow101_LiteralBoolean102);
		DelegationConnectors_P_PWP_main->addEdge(DelegationConnectors_P_PWP_main_ObjectFlow101);
			// ObjectFlow ObjectFlow104 from a_Unconnected_Pattern to a_Unconnected_Pattern
			DelegationConnectors_P_PWP_main_ObjectFlow104->setThisActivityEdgePtr(DelegationConnectors_P_PWP_main_ObjectFlow104);
			DelegationConnectors_P_PWP_main_ObjectFlow104->setName("ObjectFlow104");
			DelegationConnectors_P_PWP_main_ObjectFlow104->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_main_ObjectFlow104->setSource(DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			DelegationConnectors_P_PWP_main_ObjectFlow104->setTarget(DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
				// LiteralBoolean LiteralBoolean106
				DelegationConnectors_P_PWP_main_ObjectFlow104_LiteralBoolean106->setThisElementPtr(DelegationConnectors_P_PWP_main_ObjectFlow104_LiteralBoolean106);
				DelegationConnectors_P_PWP_main_ObjectFlow104_LiteralBoolean106->setName("LiteralBoolean106");
				DelegationConnectors_P_PWP_main_ObjectFlow104_LiteralBoolean106->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_main_ObjectFlow104_LiteralBoolean106->setValue(true);
			DelegationConnectors_P_PWP_main_ObjectFlow104->setGuard(DelegationConnectors_P_PWP_main_ObjectFlow104_LiteralBoolean106);
		DelegationConnectors_P_PWP_main->addEdge(DelegationConnectors_P_PWP_main_ObjectFlow104);
			// ControlFlow ControlFlow128 from assert_A_Array_Pattern to instantiate_A_Star_Pattern
			DelegationConnectors_P_PWP_main_ControlFlow128->setThisActivityEdgePtr(DelegationConnectors_P_PWP_main_ControlFlow128);
			DelegationConnectors_P_PWP_main_ControlFlow128->setName("ControlFlow128");
			DelegationConnectors_P_PWP_main_ControlFlow128->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_main_ControlFlow128->setSource(DelegationConnectors_P_PWP_main_assert_A_Array_Pattern);
			DelegationConnectors_P_PWP_main_ControlFlow128->setTarget(DelegationConnectors_P_PWP_main_instantiate_A_Star_Pattern);
		DelegationConnectors_P_PWP_main->addEdge(DelegationConnectors_P_PWP_main_ControlFlow128);
			// ControlFlow ControlFlow129 from assert_A_Unconnected_Pattern to instantiate_A_Array_Pattern
			DelegationConnectors_P_PWP_main_ControlFlow129->setThisActivityEdgePtr(DelegationConnectors_P_PWP_main_ControlFlow129);
			DelegationConnectors_P_PWP_main_ControlFlow129->setName("ControlFlow129");
			DelegationConnectors_P_PWP_main_ControlFlow129->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_main_ControlFlow129->setSource(DelegationConnectors_P_PWP_main_assert_A_Unconnected_Pattern);
			DelegationConnectors_P_PWP_main_ControlFlow129->setTarget(DelegationConnectors_P_PWP_main_instantiate_A_Array_Pattern);
		DelegationConnectors_P_PWP_main->addEdge(DelegationConnectors_P_PWP_main_ControlFlow129);
			// ControlFlow ControlFlow130 from assert_A_Empty_Pattern to instantiate_A_Unconnected_Pattern
			DelegationConnectors_P_PWP_main_ControlFlow130->setThisActivityEdgePtr(DelegationConnectors_P_PWP_main_ControlFlow130);
			DelegationConnectors_P_PWP_main_ControlFlow130->setName("ControlFlow130");
			DelegationConnectors_P_PWP_main_ControlFlow130->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_main_ControlFlow130->setSource(DelegationConnectors_P_PWP_main_assert_A_Empty_Pattern);
			DelegationConnectors_P_PWP_main_ControlFlow130->setTarget(DelegationConnectors_P_PWP_main_instantiate_A_Unconnected_Pattern);
		DelegationConnectors_P_PWP_main->addEdge(DelegationConnectors_P_PWP_main_ControlFlow130);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_main);
		// Class A_Unconnected_Pattern
		DelegationConnectors_P_PWP_A_Unconnected_Pattern->setThisClass_Ptr(DelegationConnectors_P_PWP_A_Unconnected_Pattern);
		DelegationConnectors_P_PWP_A_Unconnected_Pattern->setName("A_Unconnected_Pattern");
		DelegationConnectors_P_PWP_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property b
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_b->setThisElementPtr(DelegationConnectors_P_PWP_A_Unconnected_Pattern_b);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_b->setName("b");
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_b->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_b->setUpper(-1);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_b->setLower(2);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_b->setType(DelegationConnectors_P_PWP_B);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_b->setAggregation(AggregationKind::composite);
		DelegationConnectors_P_PWP_A_Unconnected_Pattern->addOwnedAttribute(DelegationConnectors_P_PWP_A_Unconnected_Pattern_b);
			// Port p
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_p->setThisElementPtr(DelegationConnectors_P_PWP_A_Unconnected_Pattern_p);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_p->setName("p");
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_p->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_p->setUpper(-1);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_p->setLower(3);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_p->setType(DelegationConnectors_P_PWP_IImpl);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_p->setAggregation(AggregationKind::composite);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_p->isService = true;
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_p->addProvided(DelegationConnectors_P_PWP_I);
		DelegationConnectors_P_PWP_A_Unconnected_Pattern->addOwnedAttribute(DelegationConnectors_P_PWP_A_Unconnected_Pattern_p);
		
		DelegationConnectors_P_PWP_A_Unconnected_Pattern_r->setName("r");
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_r->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd138->setUpper(-1);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd138->setLower(0);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd138->setRole(DelegationConnectors_P_PWP_A_Unconnected_Pattern_p);
				
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_r->addEnd(DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd138);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd135->setUpper(-1);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd135->setLower(0);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd135->setRole(DelegationConnectors_P_PWP_B_q);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd135->setPartWithPort(DelegationConnectors_P_PWP_A_Unconnected_Pattern_b);
				
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_r->addEnd(DelegationConnectors_P_PWP_A_Unconnected_Pattern_r_ConnectorEnd135);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_r->setType(DelegationConnectors_P_PWP_R);
		DelegationConnectors_P_PWP_A_Unconnected_Pattern->addOwnedConnector(DelegationConnectors_P_PWP_A_Unconnected_Pattern_r);
			// Operation A_Unconnected_Pattern_A_Unconnected_Pattern
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->setThisOperationPtr(DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->setName("A_Unconnected_Pattern_A_Unconnected_Pattern");
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setThisElementPtr(DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setName("result");
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setType(DelegationConnectors_P_PWP_A_Unconnected_Pattern);
				DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setDirection(ParameterDirectionKind::return_);
			DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->addOwnedParameter(DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result);
		DelegationConnectors_P_PWP_A_Unconnected_Pattern->addOwnedOperation(DelegationConnectors_P_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_A_Unconnected_Pattern);
		// Activity instantiate_A_Star_Pattern
		DelegationConnectors_P_PWP_instantiate_A_Star_Pattern->setThisActivityPtr(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern);
		DelegationConnectors_P_PWP_instantiate_A_Star_Pattern->setName("instantiate_A_Star_Pattern");
		DelegationConnectors_P_PWP_instantiate_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Star_Pattern
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern->setType(DelegationConnectors_P_PWP_A_Star_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern->setDirection(ParameterDirectionKind::return_);
		DelegationConnectors_P_PWP_instantiate_A_Star_Pattern->addOwnedParameter(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern);
			// CallOperationAction A_Star_Pattern()
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_->setThisExecutableNodePtr(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_->setName("A_Star_Pattern()");
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result->setName("result");
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result->setType(DelegationConnectors_P_PWP_A_Star_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_->addResult(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_->setOperation(DelegationConnectors_P_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
				// InputPin target
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target->setName("target");
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target->setType(DelegationConnectors_P_PWP_A_Star_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_->setTarget(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target);
		DelegationConnectors_P_PWP_instantiate_A_Star_Pattern->addNode(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_);
			// CreateObjectAction Create A_Star_Pattern
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setThisExecutableNodePtr(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setName("Create A_Star_Pattern");
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setClassifier(DelegationConnectors_P_PWP_A_Star_Pattern);
				// OutputPin result
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setName("result");
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setType(DelegationConnectors_P_PWP_A_Star_Pattern);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setResult(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
		DelegationConnectors_P_PWP_instantiate_A_Star_Pattern->addNode(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern);
			// ActivityParameterNode a_Star_Pattern_node
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node->setName("a_Star_Pattern_node");
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node->setParameter(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern);
		DelegationConnectors_P_PWP_instantiate_A_Star_Pattern->addNode(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node);
			// ObjectFlow ObjectFlow147 from result to a_Star_Pattern_node
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147->setThisActivityEdgePtr(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147->setName("ObjectFlow147");
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147->setSource(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147->setTarget(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node);
				// LiteralBoolean LiteralBoolean148
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147_LiteralBoolean148->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147_LiteralBoolean148);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147_LiteralBoolean148->setName("LiteralBoolean148");
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147_LiteralBoolean148->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147_LiteralBoolean148->setValue(true);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147->setGuard(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147_LiteralBoolean148);
		DelegationConnectors_P_PWP_instantiate_A_Star_Pattern->addEdge(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow147);
			// ObjectFlow ObjectFlow152 from result to target
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152->setThisActivityEdgePtr(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152->setName("ObjectFlow152");
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152->setSource(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152->setTarget(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target);
				// LiteralBoolean LiteralBoolean154
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152_LiteralBoolean154->setThisElementPtr(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152_LiteralBoolean154);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152_LiteralBoolean154->setName("LiteralBoolean154");
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152_LiteralBoolean154->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152_LiteralBoolean154->setValue(true);
			DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152->setGuard(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152_LiteralBoolean154);
		DelegationConnectors_P_PWP_instantiate_A_Star_Pattern->addEdge(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern_ObjectFlow152);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_instantiate_A_Star_Pattern);
		// Activity assert_A_Unconnected_Pattern
		DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern->setThisActivityPtr(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern);
		DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern->setName("assert_A_Unconnected_Pattern");
		DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Unconnected_Pattern
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(DelegationConnectors_P_PWP_A_Unconnected_Pattern);
		DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern->addOwnedParameter(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
			// ValueSpecificationAction message
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message->setThisExecutableNodePtr(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message->setName("message");
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString155
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_LiteralString155->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_LiteralString155);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_LiteralString155->setName("LiteralString155");
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_LiteralString155->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_LiteralString155->setValue("Assertion currently not implemented for A_Unconnected_Pattern.");
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message->setValue(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_LiteralString155);
				// OutputPin result
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result->setName("result");
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message->setResult(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result);
		DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern->addNode(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message);
			// CallBehaviorAction writeLine
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine->setThisExecutableNodePtr(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine->setName("writeLine");
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus->setName("errorStatus");
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus->setLower(0);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine->addResult(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value->setName("value");
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine->addArgument(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value);
		DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern->addNode(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine);
			// ActivityParameterNode a_Unconnected_Pattern_node
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setName("a_Unconnected_Pattern_node");
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setParameter(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
		DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern->addNode(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			// ObjectFlow ObjectFlow158 from result to value
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158->setThisActivityEdgePtr(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158->setName("ObjectFlow158");
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158->setSource(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_message_result);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158->setTarget(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean159
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158_LiteralBoolean159->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158_LiteralBoolean159);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158_LiteralBoolean159->setName("LiteralBoolean159");
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158_LiteralBoolean159->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158_LiteralBoolean159->setValue(true);
			DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158->setGuard(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158_LiteralBoolean159);
		DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern->addEdge(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern_ObjectFlow158);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_assert_A_Unconnected_Pattern);
		// Class A_Empty_Pattern
		DelegationConnectors_P_PWP_A_Empty_Pattern->setThisClass_Ptr(DelegationConnectors_P_PWP_A_Empty_Pattern);
		DelegationConnectors_P_PWP_A_Empty_Pattern->setName("A_Empty_Pattern");
		DelegationConnectors_P_PWP_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property b
			DelegationConnectors_P_PWP_A_Empty_Pattern_b->setThisElementPtr(DelegationConnectors_P_PWP_A_Empty_Pattern_b);
			DelegationConnectors_P_PWP_A_Empty_Pattern_b->setName("b");
			DelegationConnectors_P_PWP_A_Empty_Pattern_b->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_A_Empty_Pattern_b->setUpper(-1);
			DelegationConnectors_P_PWP_A_Empty_Pattern_b->setLower(0);
			DelegationConnectors_P_PWP_A_Empty_Pattern_b->setType(DelegationConnectors_P_PWP_B);
			DelegationConnectors_P_PWP_A_Empty_Pattern_b->setAggregation(AggregationKind::composite);
		DelegationConnectors_P_PWP_A_Empty_Pattern->addOwnedAttribute(DelegationConnectors_P_PWP_A_Empty_Pattern_b);
			// Port p
			DelegationConnectors_P_PWP_A_Empty_Pattern_p->setThisElementPtr(DelegationConnectors_P_PWP_A_Empty_Pattern_p);
			DelegationConnectors_P_PWP_A_Empty_Pattern_p->setName("p");
			DelegationConnectors_P_PWP_A_Empty_Pattern_p->setVisibility(VisibilityKind::public_);
			DelegationConnectors_P_PWP_A_Empty_Pattern_p->setUpper(-1);
			DelegationConnectors_P_PWP_A_Empty_Pattern_p->setLower(0);
			DelegationConnectors_P_PWP_A_Empty_Pattern_p->setType(DelegationConnectors_P_PWP_IImpl);
			DelegationConnectors_P_PWP_A_Empty_Pattern_p->setAggregation(AggregationKind::composite);
			DelegationConnectors_P_PWP_A_Empty_Pattern_p->isService = true;
			DelegationConnectors_P_PWP_A_Empty_Pattern_p->addProvided(DelegationConnectors_P_PWP_I);
		DelegationConnectors_P_PWP_A_Empty_Pattern->addOwnedAttribute(DelegationConnectors_P_PWP_A_Empty_Pattern_p);
		
		DelegationConnectors_P_PWP_A_Empty_Pattern_r->setName("r");
			DelegationConnectors_P_PWP_A_Empty_Pattern_r->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd175->setUpper(-1);
				DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd175->setRole(DelegationConnectors_P_PWP_A_Empty_Pattern_p);
				
			DelegationConnectors_P_PWP_A_Empty_Pattern_r->addEnd(DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd175);
				DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd173->setUpper(-1);
				DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd173->setRole(DelegationConnectors_P_PWP_B_q);
				DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd173->setPartWithPort(DelegationConnectors_P_PWP_A_Empty_Pattern_b);
				
			DelegationConnectors_P_PWP_A_Empty_Pattern_r->addEnd(DelegationConnectors_P_PWP_A_Empty_Pattern_r_ConnectorEnd173);
			DelegationConnectors_P_PWP_A_Empty_Pattern_r->setType(DelegationConnectors_P_PWP_R);
		DelegationConnectors_P_PWP_A_Empty_Pattern->addOwnedConnector(DelegationConnectors_P_PWP_A_Empty_Pattern_r);
			// Operation A_Empty_Pattern_A_Empty_Pattern
			DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->setThisOperationPtr(DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
			DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->setName("A_Empty_Pattern_A_Empty_Pattern");
			DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setThisElementPtr(DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result);
				DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setName("result");
				DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setType(DelegationConnectors_P_PWP_A_Empty_Pattern);
				DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setDirection(ParameterDirectionKind::return_);
			DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->addOwnedParameter(DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result);
		DelegationConnectors_P_PWP_A_Empty_Pattern->addOwnedOperation(DelegationConnectors_P_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_A_Empty_Pattern);
		// Activity assert_A_Star_Pattern
		DelegationConnectors_P_PWP_assert_A_Star_Pattern->setThisActivityPtr(DelegationConnectors_P_PWP_assert_A_Star_Pattern);
		DelegationConnectors_P_PWP_assert_A_Star_Pattern->setName("assert_A_Star_Pattern");
		DelegationConnectors_P_PWP_assert_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Star_Pattern
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern->setType(DelegationConnectors_P_PWP_A_Star_Pattern);
		DelegationConnectors_P_PWP_assert_A_Star_Pattern->addOwnedParameter(DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern);
			// ActivityParameterNode a_Star_Pattern_node
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern_node->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern_node);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern_node->setName("a_Star_Pattern_node");
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern_node->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern_node->setParameter(DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern);
		DelegationConnectors_P_PWP_assert_A_Star_Pattern->addNode(DelegationConnectors_P_PWP_assert_A_Star_Pattern_a_Star_Pattern_node);
			// ValueSpecificationAction message
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_message->setThisExecutableNodePtr(DelegationConnectors_P_PWP_assert_A_Star_Pattern_message);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_message->setName("message");
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString178
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_LiteralString178->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_LiteralString178);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_LiteralString178->setName("LiteralString178");
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_LiteralString178->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_LiteralString178->setValue("Assertion currently not implemented for A_Star_Pattern.");
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_message->setValue(DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_LiteralString178);
				// OutputPin result
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result->setName("result");
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_message->setResult(DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result);
		DelegationConnectors_P_PWP_assert_A_Star_Pattern->addNode(DelegationConnectors_P_PWP_assert_A_Star_Pattern_message);
			// CallBehaviorAction writeLine
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine->setThisExecutableNodePtr(DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine->setName("writeLine");
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus->setName("errorStatus");
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus->setLower(0);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine->addResult(DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_errorStatus);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value->setName("value");
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine->addArgument(DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value);
		DelegationConnectors_P_PWP_assert_A_Star_Pattern->addNode(DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine);
			// ObjectFlow ObjectFlow187 from result to value
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187->setThisActivityEdgePtr(DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187->setName("ObjectFlow187");
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187->setVisibility(VisibilityKind::public_);
			
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187->setSource(DelegationConnectors_P_PWP_assert_A_Star_Pattern_message_result);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187->setTarget(DelegationConnectors_P_PWP_assert_A_Star_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean189
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187_LiteralBoolean189->setThisElementPtr(DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187_LiteralBoolean189);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187_LiteralBoolean189->setName("LiteralBoolean189");
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187_LiteralBoolean189->setVisibility(VisibilityKind::public_);
				DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187_LiteralBoolean189->setValue(true);
			DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187->setGuard(DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187_LiteralBoolean189);
		DelegationConnectors_P_PWP_assert_A_Star_Pattern->addEdge(DelegationConnectors_P_PWP_assert_A_Star_Pattern_ObjectFlow187);
	DelegationConnectors_P_PWP->addPackagedElement(DelegationConnectors_P_PWP_assert_A_Star_Pattern);
}
