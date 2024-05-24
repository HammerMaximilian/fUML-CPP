/*
 * AssemblyConnectors_PWP_PWPModel.cpp
 * 
 * Auto-generated file
 */

#include "AssemblyConnectors_PWP_PWPModel.h"

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
#include <uml/simpleclassifiers/Interface.h>
#include <uml/activities/ControlFlow.h>
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

using namespace AssemblyConnectors_PWP_PWP;
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

AssemblyConnectors_PWP_PWPModel::AssemblyConnectors_PWP_PWPModel()
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

AssemblyConnectors_PWP_PWPModel::~AssemblyConnectors_PWP_PWPModel()
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

const std::shared_ptr<AssemblyConnectors_PWP_PWPModel>& AssemblyConnectors_PWP_PWPModel::Instance()
{
	static std::shared_ptr<AssemblyConnectors_PWP_PWPModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new AssemblyConnectors_PWP_PWPModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void AssemblyConnectors_PWP_PWPModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model AssemblyConnectors_PWP_PWP
	 */
	AssemblyConnectors_PWP_PWP.reset(new Package());
	this->addToElementRepository("AssemblyConnectors_PWP_PWP", AssemblyConnectors_PWP_PWP);
		AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Empty_Pattern", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Empty_Pattern_node", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node_LiteralInteger0.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger0", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node_LiteralInteger0);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Empty_Pattern", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow1", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1_LiteralInteger2.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger2", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1_LiteralInteger2);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1_LiteralBoolean3.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean3", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1_LiteralBoolean3);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result);
					AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result_LiteralUnlimitedNatural4.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural4", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result_LiteralUnlimitedNatural4);
					AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result_LiteralInteger5.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger5", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result_LiteralInteger5);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_LiteralString6.reset(new LiteralString());
				this->addToElementRepository("LiteralString6", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_LiteralString6);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value);
					AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralInteger7.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger7", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralInteger7);
					AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralInteger8.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger8", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralInteger8);
					AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralUnlimitedNatural9.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural9", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value_LiteralUnlimitedNatural9);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus);
					AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger10.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger10", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger10);
					AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural11.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural11", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural11);
					AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger12.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger12", AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger12);
		AssemblyConnectors_PWP_PWP_R.reset(new Association());
		this->addToElementRepository("R", AssemblyConnectors_PWP_PWP_R);
			AssemblyConnectors_PWP_PWP_R_x.reset(new Property());
			this->addToElementRepository("x", AssemblyConnectors_PWP_PWP_R_x);
				AssemblyConnectors_PWP_PWP_R_x_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural13", AssemblyConnectors_PWP_PWP_R_x_LiteralUnlimitedNatural13);
				AssemblyConnectors_PWP_PWP_R_x_LiteralInteger14.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger14", AssemblyConnectors_PWP_PWP_R_x_LiteralInteger14);
			AssemblyConnectors_PWP_PWP_R_y.reset(new Property());
			this->addToElementRepository("y", AssemblyConnectors_PWP_PWP_R_y);
				AssemblyConnectors_PWP_PWP_R_y_LiteralUnlimitedNatural15.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural15", AssemblyConnectors_PWP_PWP_R_y_LiteralUnlimitedNatural15);
				AssemblyConnectors_PWP_PWP_R_y_LiteralInteger16.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger16", AssemblyConnectors_PWP_PWP_R_y_LiteralInteger16);
		AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Array_Pattern", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow17", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17_LiteralInteger18.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger18", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17_LiteralInteger18);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17_LiteralBoolean19.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean19", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17_LiteralBoolean19);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Array_Pattern", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
					AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralUnlimitedNatural20.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural20", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralUnlimitedNatural20);
					AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralInteger21.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger21", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralInteger21);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Array_Pattern", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Array_Pattern()", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result);
					AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger22.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger22", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger22);
					AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralUnlimitedNatural23.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural23", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralUnlimitedNatural23);
					AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger24.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger24", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger24);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target);
					AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralUnlimitedNatural25.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural25", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralUnlimitedNatural25);
					AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralInteger26.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger26", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralInteger26);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow27", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27_LiteralInteger28.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger28", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27_LiteralInteger28);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27_LiteralBoolean29.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean29", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27_LiteralBoolean29);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Array_Pattern_node", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger30.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger30", AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger30);
		AssemblyConnectors_PWP_PWP_C.reset(new Class_());
		this->addToElementRepository("C", AssemblyConnectors_PWP_PWP_C);
			AssemblyConnectors_PWP_PWP_C_q.reset(new Port());
			this->addToElementRepository("q", AssemblyConnectors_PWP_PWP_C_q);
				AssemblyConnectors_PWP_PWP_C_q_LiteralUnlimitedNatural31.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural31", AssemblyConnectors_PWP_PWP_C_q_LiteralUnlimitedNatural31);
				AssemblyConnectors_PWP_PWP_C_q_LiteralInteger32.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger32", AssemblyConnectors_PWP_PWP_C_q_LiteralInteger32);
		AssemblyConnectors_PWP_PWP_B.reset(new Class_());
		this->addToElementRepository("B", AssemblyConnectors_PWP_PWP_B);
			AssemblyConnectors_PWP_PWP_B_p.reset(new Port());
			this->addToElementRepository("p", AssemblyConnectors_PWP_PWP_B_p);
				AssemblyConnectors_PWP_PWP_B_p_LiteralUnlimitedNatural33.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural33", AssemblyConnectors_PWP_PWP_B_p_LiteralUnlimitedNatural33);
				AssemblyConnectors_PWP_PWP_B_p_LiteralInteger34.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger34", AssemblyConnectors_PWP_PWP_B_p_LiteralInteger34);
		AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Unconnected_Pattern", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Unconnected_Pattern", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
					AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralInteger35.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger35", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralInteger35);
					AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralUnlimitedNatural36.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural36", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralUnlimitedNatural36);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Unconnected_Pattern_node", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Unconnected_Pattern", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Unconnected_Pattern()", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
					AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralUnlimitedNatural37.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural37", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralUnlimitedNatural37);
					AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger38.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger38", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger38);
					AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger39.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger39", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger39);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
					AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralInteger40.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger40", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralInteger40);
					AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralUnlimitedNatural41.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural41", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralUnlimitedNatural41);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow42", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42_LiteralInteger43.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger43", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42_LiteralInteger43);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42_LiteralBoolean44.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean44", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42_LiteralBoolean44);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow45", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45_LiteralBoolean46.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean46", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45_LiteralBoolean46);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45_LiteralInteger47.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger47", AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45_LiteralInteger47);
		AssemblyConnectors_PWP_PWP_A_Star_Pattern.reset(new Class_());
		this->addToElementRepository("A_Star_Pattern", AssemblyConnectors_PWP_PWP_A_Star_Pattern);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_Comment48.reset(new Comment());
			this->addToElementRepository("Comment48", AssemblyConnectors_PWP_PWP_A_Star_Pattern_Comment48);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC.reset(new Property());
			this->addToElementRepository("partC", AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC_LiteralUnlimitedNatural49.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural49", AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC_LiteralUnlimitedNatural49);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC_LiteralInteger50.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger50", AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC_LiteralInteger50);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern.reset(new Operation());
			this->addToElementRepository("A_Star_Pattern_A_Star_Pattern", AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", AssemblyConnectors_PWP_PWP_A_Star_Pattern_r);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd51.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd51", AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd51);
					AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd51_connectorEnd_2_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_2_Lower", AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd51_connectorEnd_2_Lower);
					AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd51_connectorEnd_2_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_2_Upper", AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd51_connectorEnd_2_Upper);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd52.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd52", AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd52);
					AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd52_connectorEnd_1_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_1_Upper", AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd52_connectorEnd_1_Upper);
					AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd52_connectorEnd_1_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_1_Lower", AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd52_connectorEnd_1_Lower);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB.reset(new Property());
			this->addToElementRepository("partB", AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB_LiteralUnlimitedNatural53.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural53", AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB_LiteralUnlimitedNatural53);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB_LiteralInteger54.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger54", AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB_LiteralInteger54);
		AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Unconnected_Pattern", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Unconnected_Pattern", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus);
					AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger55.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger55", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger55);
					AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger56.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger56", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger56);
					AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural57.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural57", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural57);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value);
					AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger58.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger58", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger58);
					AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger59.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger59", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger59);
					AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural60", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value_LiteralUnlimitedNatural60);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow61", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61_LiteralInteger62.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger62", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61_LiteralInteger62);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61_LiteralBoolean63.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean63", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61_LiteralBoolean63);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Unconnected_Pattern_node", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node_LiteralInteger64.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger64", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node_LiteralInteger64);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_LiteralString65.reset(new LiteralString());
				this->addToElementRepository("LiteralString65", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_LiteralString65);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result);
					AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result_LiteralInteger66.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger66", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result_LiteralInteger66);
					AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result_LiteralUnlimitedNatural67.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural67", AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result_LiteralUnlimitedNatural67);
		AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Array_Pattern", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Array_Pattern_node", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern_node);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger68.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger68", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger68);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_LiteralString69.reset(new LiteralString());
				this->addToElementRepository("LiteralString69", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_LiteralString69);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result);
					AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result_LiteralUnlimitedNatural70.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural70", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result_LiteralUnlimitedNatural70);
					AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result_LiteralInteger71.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger71", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result_LiteralInteger71);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Array_Pattern", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus);
					AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural72.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural72", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural72);
					AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger73.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger73", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger73);
					AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger74.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger74", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger74);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value);
					AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value_LiteralUnlimitedNatural75.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural75", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value_LiteralUnlimitedNatural75);
					AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value_LiteralInteger76.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger76", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value_LiteralInteger76);
					AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value_LiteralInteger77.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger77", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value_LiteralInteger77);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow78", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78_LiteralBoolean79.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean79", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78_LiteralBoolean79);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78_LiteralInteger80.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger80", AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78_LiteralInteger80);
		AssemblyConnectors_PWP_PWP_main.reset(new Activity());
		this->addToElementRepository("main", AssemblyConnectors_PWP_PWP_main);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow81.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow81", AssemblyConnectors_PWP_PWP_main_ObjectFlow81);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow81_LiteralBoolean82.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean82", AssemblyConnectors_PWP_PWP_main_ObjectFlow81_LiteralBoolean82);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow81_LiteralInteger83.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger83", AssemblyConnectors_PWP_PWP_main_ObjectFlow81_LiteralInteger83);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Array_Pattern", AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern);
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Array_Pattern", AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern);
					AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural84.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural84", AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural84);
					AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger85.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger85", AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger85);
					AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger86.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger86", AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger86);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow87.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow87", AssemblyConnectors_PWP_PWP_main_ObjectFlow87);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow87_LiteralInteger88.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger88", AssemblyConnectors_PWP_PWP_main_ObjectFlow87_LiteralInteger88);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow87_LiteralBoolean89.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean89", AssemblyConnectors_PWP_PWP_main_ObjectFlow87_LiteralBoolean89);
			AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Array_Pattern", AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern);
				AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Array_Pattern", AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern);
					AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger90.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger90", AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger90);
					AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural91.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural91", AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural91);
					AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger92.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger92", AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger92);
			AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Empty_Pattern", AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern);
				AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Empty_Pattern", AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern);
					AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger93.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger93", AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger93);
					AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger94.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger94", AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger94);
					AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural95.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural95", AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural95);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Empty_Pattern", AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern);
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Empty_Pattern", AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
					AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger96.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger96", AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger96);
					AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger97.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger97", AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger97);
					AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural98.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural98", AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural98);
			AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Star_Pattern", AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern);
				AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Star_Pattern", AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern);
					AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger99.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger99", AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger99);
					AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural100.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural100", AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural100);
					AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger101.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger101", AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger101);
			AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Unconnected_Pattern", AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern);
				AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Unconnected_Pattern", AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
					AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger102.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger102", AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger102);
					AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural103.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural103", AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural103);
					AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger104.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger104", AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger104);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow105.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow105", AssemblyConnectors_PWP_PWP_main_ObjectFlow105);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow105_LiteralBoolean106.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean106", AssemblyConnectors_PWP_PWP_main_ObjectFlow105_LiteralBoolean106);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow105_LiteralInteger107.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger107", AssemblyConnectors_PWP_PWP_main_ObjectFlow105_LiteralInteger107);
			AssemblyConnectors_PWP_PWP_main_ControlFlow108.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow108", AssemblyConnectors_PWP_PWP_main_ControlFlow108);
			AssemblyConnectors_PWP_PWP_main_ControlFlow109.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow109", AssemblyConnectors_PWP_PWP_main_ControlFlow109);
			AssemblyConnectors_PWP_PWP_main_ControlFlow110.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow110", AssemblyConnectors_PWP_PWP_main_ControlFlow110);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Star_Pattern", AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern);
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Star_Pattern", AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern);
					AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger111.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger111", AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger111);
					AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural112.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural112", AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural112);
					AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger113.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger113", AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger113);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Unconnected_Pattern", AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern);
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Unconnected_Pattern", AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
					AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural114.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural114", AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural114);
					AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger115.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger115", AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger115);
					AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger116.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger116", AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger116);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow117.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow117", AssemblyConnectors_PWP_PWP_main_ObjectFlow117);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow117_LiteralInteger118.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger118", AssemblyConnectors_PWP_PWP_main_ObjectFlow117_LiteralInteger118);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow117_LiteralBoolean119.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean119", AssemblyConnectors_PWP_PWP_main_ObjectFlow117_LiteralBoolean119);
		AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern.reset(new Class_());
		this->addToElementRepository("A_Unconnected_Pattern", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_Comment120.reset(new Comment());
			this->addToElementRepository("Comment120", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_Comment120);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC.reset(new Property());
			this->addToElementRepository("partC", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC_LiteralInteger121.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger121", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC_LiteralInteger121);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC_LiteralUnlimitedNatural122.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural122", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC_LiteralUnlimitedNatural122);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB.reset(new Property());
			this->addToElementRepository("partB", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB_LiteralUnlimitedNatural123.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural123", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB_LiteralUnlimitedNatural123);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB_LiteralInteger124.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger124", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB_LiteralInteger124);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd125.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd125", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd125);
					AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd125_connectorEnd_2_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_2_Lower", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd125_connectorEnd_2_Lower);
					AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd125_connectorEnd_2_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_2_Upper", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd125_connectorEnd_2_Upper);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd126.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd126", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd126);
					AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd126_connectorEnd_1_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_1_Lower", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd126_connectorEnd_1_Lower);
					AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd126_connectorEnd_1_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_1_Upper", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd126_connectorEnd_1_Upper);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern.reset(new Operation());
			this->addToElementRepository("A_Unconnected_Pattern_A_Unconnected_Pattern", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result);
		AssemblyConnectors_PWP_PWP_A_Array_Pattern.reset(new Class_());
		this->addToElementRepository("A_Array_Pattern", AssemblyConnectors_PWP_PWP_A_Array_Pattern);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB.reset(new Property());
			this->addToElementRepository("partB", AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB);
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB_LiteralInteger127.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger127", AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB_LiteralInteger127);
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB_LiteralUnlimitedNatural128.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural128", AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB_LiteralUnlimitedNatural128);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC.reset(new Property());
			this->addToElementRepository("partC", AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC);
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC_LiteralUnlimitedNatural129.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural129", AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC_LiteralUnlimitedNatural129);
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC_LiteralInteger130.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger130", AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC_LiteralInteger130);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_Comment131.reset(new Comment());
			this->addToElementRepository("Comment131", AssemblyConnectors_PWP_PWP_A_Array_Pattern_Comment131);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", AssemblyConnectors_PWP_PWP_A_Array_Pattern_r);
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd132.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd132", AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd132);
					AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd132_connectorEnd_1_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_1_Lower", AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd132_connectorEnd_1_Lower);
					AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd132_connectorEnd_1_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_1_Upper", AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd132_connectorEnd_1_Upper);
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd133.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd133", AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd133);
					AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd133_connectorEnd_2_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_2_Lower", AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd133_connectorEnd_2_Lower);
					AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd133_connectorEnd_2_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_2_Upper", AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd133_connectorEnd_2_Upper);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern.reset(new Operation());
			this->addToElementRepository("A_Array_Pattern_A_Array_Pattern", AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result);
		AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Empty_Pattern", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Empty_Pattern_node", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Empty_Pattern()", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
					AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralInteger134.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger134", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralInteger134);
					AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralUnlimitedNatural135.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural135", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralUnlimitedNatural135);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
					AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger136.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger136", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger136);
					AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger137.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger137", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger137);
					AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralUnlimitedNatural138.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural138", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralUnlimitedNatural138);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow139", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139_LiteralInteger140.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger140", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139_LiteralInteger140);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139_LiteralBoolean141.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean141", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139_LiteralBoolean141);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Empty_Pattern", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Empty_Pattern", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
					AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralInteger142.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger142", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralInteger142);
					AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralUnlimitedNatural143.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural143", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralUnlimitedNatural143);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow144", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144_LiteralInteger145.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger145", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144_LiteralInteger145);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144_LiteralBoolean146.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean146", AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144_LiteralBoolean146);
		AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Star_Pattern", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow147", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147_LiteralBoolean148.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean148", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147_LiteralBoolean148);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147_LiteralInteger149.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger149", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147_LiteralInteger149);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value);
					AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value_LiteralInteger150.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger150", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value_LiteralInteger150);
					AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value_LiteralInteger151.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger151", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value_LiteralInteger151);
					AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value_LiteralUnlimitedNatural152.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural152", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value_LiteralUnlimitedNatural152);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus);
					AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger153.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger153", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger153);
					AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger154.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger154", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger154);
					AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural155.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural155", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural155);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Star_Pattern_node", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern_node);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern_node_LiteralInteger156.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger156", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern_node_LiteralInteger156);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Star_Pattern", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result);
					AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result_LiteralInteger157.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger157", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result_LiteralInteger157);
					AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result_LiteralUnlimitedNatural158.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural158", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result_LiteralUnlimitedNatural158);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_LiteralString159.reset(new LiteralString());
				this->addToElementRepository("LiteralString159", AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_LiteralString159);
		AssemblyConnectors_PWP_PWP_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", AssemblyConnectors_PWP_PWP_IImpl);
			AssemblyConnectors_PWP_PWP_IImpl_I_Realization.reset(new InterfaceRealization());
			this->addToElementRepository("I_Realization", AssemblyConnectors_PWP_PWP_IImpl_I_Realization);
		AssemblyConnectors_PWP_PWP_I.reset(new Interface());
		this->addToElementRepository("I", AssemblyConnectors_PWP_PWP_I);
		AssemblyConnectors_PWP_PWP_A_Empty_Pattern.reset(new Class_());
		this->addToElementRepository("A_Empty_Pattern", AssemblyConnectors_PWP_PWP_A_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB.reset(new Property());
			this->addToElementRepository("partB", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB);
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB_LiteralInteger160.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger160", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB_LiteralInteger160);
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB_LiteralUnlimitedNatural161.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural161", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB_LiteralUnlimitedNatural161);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC.reset(new Property());
			this->addToElementRepository("partC", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC);
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC_LiteralInteger162.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger162", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC_LiteralInteger162);
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC_LiteralUnlimitedNatural163.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural163", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC_LiteralUnlimitedNatural163);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern.reset(new Operation());
			this->addToElementRepository("A_Empty_Pattern_A_Empty_Pattern", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r);
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd164.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd164", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd164);
					AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd164_connectorEnd_2_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_2_Upper", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd164_connectorEnd_2_Upper);
					AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd164_connectorEnd_2_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_2_Lower", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd164_connectorEnd_2_Lower);
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd165.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd165", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd165);
					AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd165_connectorEnd_1_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_1_Upper", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd165_connectorEnd_1_Upper);
					AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd165_connectorEnd_1_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_1_Lower", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd165_connectorEnd_1_Lower);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_Comment166.reset(new Comment());
			this->addToElementRepository("Comment166", AssemblyConnectors_PWP_PWP_A_Empty_Pattern_Comment166);
		AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Star_Pattern", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Star_Pattern()", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target);
					AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralUnlimitedNatural167.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural167", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralUnlimitedNatural167);
					AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralInteger168.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger168", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralInteger168);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result);
					AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger169.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger169", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger169);
					AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralUnlimitedNatural170.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural170", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralUnlimitedNatural170);
					AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger171.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger171", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger171);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow172", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172_LiteralBoolean173.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean173", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172_LiteralBoolean173);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172_LiteralInteger174.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger174", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172_LiteralInteger174);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Star_Pattern_node", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Star_Pattern", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow175", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175_LiteralBoolean176.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean176", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175_LiteralBoolean176);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175_LiteralInteger177.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger177", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175_LiteralInteger177);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Star_Pattern", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
					AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralUnlimitedNatural178.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural178", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralUnlimitedNatural178);
					AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralInteger179.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger179", AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralInteger179);

	// Initialize public members
	/*
	 * Model AssemblyConnectors_PWP_PWP
	 */
	AssemblyConnectors_PWP_PWP->setThisPackagePtr(AssemblyConnectors_PWP_PWP);
	AssemblyConnectors_PWP_PWP->setName("AssemblyConnectors_PWP_PWP");
	AssemblyConnectors_PWP_PWP->setVisibility(VisibilityKind::public_);
		// Activity assert_A_Empty_Pattern
		AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern);
		AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern->setName("assert_A_Empty_Pattern");
		AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Empty_Pattern
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Empty_Pattern);
		AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern->addOwnedParameter(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern);
			// ActivityParameterNode a_Empty_Pattern_node
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node->setName("a_Empty_Pattern_node");
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node->setParameter(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern);
		AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern->addNode(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_a_Empty_Pattern_node);
			// ValueSpecificationAction message
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message->setName("message");
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString6
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_LiteralString6->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_LiteralString6);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_LiteralString6->setName("LiteralString6");
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_LiteralString6->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_LiteralString6->setValue("Assertion currently not implemented for A_Empty_Pattern.");
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message->setValue(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_LiteralString6);
				// OutputPin result
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result->setName("result");
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message->setResult(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result);
		AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern->addNode(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message);
			// CallBehaviorAction writeLine
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine->setName("writeLine");
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus->setName("errorStatus");
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus->setLower(0);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine->addResult(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_errorStatus);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value->setName("value");
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine->addArgument(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value);
		AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern->addNode(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine);
			// ObjectFlow ObjectFlow1 from result to value
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1->setName("ObjectFlow1");
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1->setSource(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_message_result);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1->setTarget(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean3
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1_LiteralBoolean3->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1_LiteralBoolean3);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1_LiteralBoolean3->setName("LiteralBoolean3");
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1_LiteralBoolean3->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1_LiteralBoolean3->setValue(true);
			AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1->setGuard(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1_LiteralBoolean3);
		AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern->addEdge(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern_ObjectFlow1);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern);
		// Association R
		AssemblyConnectors_PWP_PWP_R->setThisAssociationPtr(AssemblyConnectors_PWP_PWP_R);
		AssemblyConnectors_PWP_PWP_R->setName("R");
		AssemblyConnectors_PWP_PWP_R->setVisibility(VisibilityKind::public_);
		AssemblyConnectors_PWP_PWP_R->addOwnedEnd(AssemblyConnectors_PWP_PWP_R_x);
		AssemblyConnectors_PWP_PWP_R->addOwnedEnd(AssemblyConnectors_PWP_PWP_R_y);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_R);
		// Activity instantiate_A_Array_Pattern
		AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern);
		AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern->setName("instantiate_A_Array_Pattern");
		AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Array_Pattern
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Array_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern->setDirection(ParameterDirectionKind::return_);
		AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern->addOwnedParameter(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern);
			// CreateObjectAction Create A_Array_Pattern
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setName("Create A_Array_Pattern");
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setClassifier(AssemblyConnectors_PWP_PWP_A_Array_Pattern);
				// OutputPin result
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setName("result");
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setType(AssemblyConnectors_PWP_PWP_A_Array_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setResult(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
		AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern->addNode(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern);
			// CallOperationAction A_Array_Pattern()
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_->setName("A_Array_Pattern()");
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result->setName("result");
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result->setType(AssemblyConnectors_PWP_PWP_A_Array_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_->addResult(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_->setOperation(AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
				// InputPin target
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target->setName("target");
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target->setType(AssemblyConnectors_PWP_PWP_A_Array_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_->setTarget(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target);
		AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern->addNode(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern_);
			// ActivityParameterNode a_Array_Pattern_node
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node->setName("a_Array_Pattern_node");
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node->setParameter(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern);
		AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern->addNode(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node);
			// ObjectFlow ObjectFlow17 from result to a_Array_Pattern_node
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17->setName("ObjectFlow17");
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17->setSource(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__result);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17->setTarget(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_a_Array_Pattern_node);
				// LiteralBoolean LiteralBoolean19
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17_LiteralBoolean19->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17_LiteralBoolean19);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17_LiteralBoolean19->setName("LiteralBoolean19");
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17_LiteralBoolean19->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17_LiteralBoolean19->setValue(true);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17->setGuard(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17_LiteralBoolean19);
		AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern->addEdge(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow17);
			// ObjectFlow ObjectFlow27 from result to target
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27->setName("ObjectFlow27");
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27->setSource(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27->setTarget(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_A_Array_Pattern__target);
				// LiteralBoolean LiteralBoolean29
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27_LiteralBoolean29->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27_LiteralBoolean29);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27_LiteralBoolean29->setName("LiteralBoolean29");
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27_LiteralBoolean29->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27_LiteralBoolean29->setValue(true);
			AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27->setGuard(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27_LiteralBoolean29);
		AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern->addEdge(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern_ObjectFlow27);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern);
		// Class C
		AssemblyConnectors_PWP_PWP_C->setThisClass_Ptr(AssemblyConnectors_PWP_PWP_C);
		AssemblyConnectors_PWP_PWP_C->setName("C");
		AssemblyConnectors_PWP_PWP_C->setVisibility(VisibilityKind::public_);
		
			// Port q
			AssemblyConnectors_PWP_PWP_C_q->setThisElementPtr(AssemblyConnectors_PWP_PWP_C_q);
			AssemblyConnectors_PWP_PWP_C_q->setName("q");
			AssemblyConnectors_PWP_PWP_C_q->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_C_q->setUpper(-1);
			AssemblyConnectors_PWP_PWP_C_q->setType(AssemblyConnectors_PWP_PWP_IImpl);
			AssemblyConnectors_PWP_PWP_C_q->setAggregation(AggregationKind::composite);
			AssemblyConnectors_PWP_PWP_C_q->isService = true;
			AssemblyConnectors_PWP_PWP_C_q->addProvided(AssemblyConnectors_PWP_PWP_I);
		AssemblyConnectors_PWP_PWP_C->addOwnedAttribute(AssemblyConnectors_PWP_PWP_C_q);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_C);
		// Class B
		AssemblyConnectors_PWP_PWP_B->setThisClass_Ptr(AssemblyConnectors_PWP_PWP_B);
		AssemblyConnectors_PWP_PWP_B->setName("B");
		AssemblyConnectors_PWP_PWP_B->setVisibility(VisibilityKind::public_);
		
			// Port p
			AssemblyConnectors_PWP_PWP_B_p->setThisElementPtr(AssemblyConnectors_PWP_PWP_B_p);
			AssemblyConnectors_PWP_PWP_B_p->setName("p");
			AssemblyConnectors_PWP_PWP_B_p->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_B_p->setUpper(-1);
			AssemblyConnectors_PWP_PWP_B_p->setLower(2);
			AssemblyConnectors_PWP_PWP_B_p->setType(AssemblyConnectors_PWP_PWP_IImpl);
			AssemblyConnectors_PWP_PWP_B_p->setAggregation(AggregationKind::composite);
			AssemblyConnectors_PWP_PWP_B_p->isService = true;
			AssemblyConnectors_PWP_PWP_B_p->addProvided(AssemblyConnectors_PWP_PWP_I);
		AssemblyConnectors_PWP_PWP_B->addOwnedAttribute(AssemblyConnectors_PWP_PWP_B_p);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_B);
		// Activity instantiate_A_Unconnected_Pattern
		AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern);
		AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern->setName("instantiate_A_Unconnected_Pattern");
		AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Unconnected_Pattern
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setDirection(ParameterDirectionKind::return_);
		AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern->addOwnedParameter(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			// CreateObjectAction Create A_Unconnected_Pattern
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setName("Create A_Unconnected_Pattern");
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setClassifier(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern);
				// OutputPin result
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setName("result");
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setType(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setResult(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
		AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern->addNode(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern);
			// ActivityParameterNode a_Unconnected_Pattern_node
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setName("a_Unconnected_Pattern_node");
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setParameter(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
		AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern->addNode(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			// CallOperationAction A_Unconnected_Pattern()
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setName("A_Unconnected_Pattern()");
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setName("result");
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setType(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->addResult(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setOperation(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
				// InputPin target
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setName("target");
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setType(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setTarget(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
		AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern->addNode(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_);
			// ObjectFlow ObjectFlow42 from result to a_Unconnected_Pattern_node
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42->setName("ObjectFlow42");
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42->setSource(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42->setTarget(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
				// LiteralBoolean LiteralBoolean44
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42_LiteralBoolean44->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42_LiteralBoolean44);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42_LiteralBoolean44->setName("LiteralBoolean44");
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42_LiteralBoolean44->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42_LiteralBoolean44->setValue(true);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42->setGuard(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42_LiteralBoolean44);
		AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern->addEdge(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow42);
			// ObjectFlow ObjectFlow45 from result to target
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45->setName("ObjectFlow45");
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45->setSource(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45->setTarget(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
				// LiteralBoolean LiteralBoolean46
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45_LiteralBoolean46->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45_LiteralBoolean46);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45_LiteralBoolean46->setName("LiteralBoolean46");
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45_LiteralBoolean46->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45_LiteralBoolean46->setValue(true);
			AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45->setGuard(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45_LiteralBoolean46);
		AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern->addEdge(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern_ObjectFlow45);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern);
		// Class A_Star_Pattern
		AssemblyConnectors_PWP_PWP_A_Star_Pattern->setThisClass_Ptr(AssemblyConnectors_PWP_PWP_A_Star_Pattern);
		AssemblyConnectors_PWP_PWP_A_Star_Pattern->setName("A_Star_Pattern");
		AssemblyConnectors_PWP_PWP_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property partB
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB->setThisElementPtr(AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB->setName("partB");
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB->setUpper(-1);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB->setLower(2);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB->setType(AssemblyConnectors_PWP_PWP_B);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_PWP_A_Star_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB);
			// Property partC
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC->setThisElementPtr(AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC->setName("partC");
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC->setUpper(-1);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC->setLower(5);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC->setType(AssemblyConnectors_PWP_PWP_C);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_PWP_A_Star_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC);
		
		AssemblyConnectors_PWP_PWP_A_Star_Pattern_r->setName("r");
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_r->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd52->setUpper(-1);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd52->setLower(4);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd52->setRole(AssemblyConnectors_PWP_PWP_B_p);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd52->setPartWithPort(AssemblyConnectors_PWP_PWP_A_Star_Pattern_partB);
				
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_r->addEnd(AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd52);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd51->setUpper(-1);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd51->setLower(5);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd51->setRole(AssemblyConnectors_PWP_PWP_C_q);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd51->setPartWithPort(AssemblyConnectors_PWP_PWP_A_Star_Pattern_partC);
				
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_r->addEnd(AssemblyConnectors_PWP_PWP_A_Star_Pattern_r_ConnectorEnd51);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_r->setType(AssemblyConnectors_PWP_PWP_R);
		AssemblyConnectors_PWP_PWP_A_Star_Pattern->addOwnedConnector(AssemblyConnectors_PWP_PWP_A_Star_Pattern_r);
			// Operation A_Star_Pattern_A_Star_Pattern
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setThisOperationPtr(AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setName("A_Star_Pattern_A_Star_Pattern");
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setName("result");
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setType(AssemblyConnectors_PWP_PWP_A_Star_Pattern);
				AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setDirection(ParameterDirectionKind::return_);
			AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->addOwnedParameter(AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
		AssemblyConnectors_PWP_PWP_A_Star_Pattern->addOwnedOperation(AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_A_Star_Pattern);
		// Activity assert_A_Unconnected_Pattern
		AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern);
		AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern->setName("assert_A_Unconnected_Pattern");
		AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Unconnected_Pattern
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern);
		AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern->addOwnedParameter(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
			// CallBehaviorAction writeLine
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine->setName("writeLine");
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus->setName("errorStatus");
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus->setLower(0);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine->addResult(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_errorStatus);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value->setName("value");
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine->addArgument(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value);
		AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern->addNode(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine);
			// ActivityParameterNode a_Unconnected_Pattern_node
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setName("a_Unconnected_Pattern_node");
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setParameter(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
		AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern->addNode(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			// ValueSpecificationAction message
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message->setName("message");
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString65
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_LiteralString65->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_LiteralString65);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_LiteralString65->setName("LiteralString65");
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_LiteralString65->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_LiteralString65->setValue("Assertion currently not implemented for A_Unconnected_Pattern.");
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message->setValue(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_LiteralString65);
				// OutputPin result
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result->setName("result");
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message->setResult(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result);
		AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern->addNode(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message);
			// ObjectFlow ObjectFlow61 from result to value
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61->setName("ObjectFlow61");
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61->setSource(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_message_result);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61->setTarget(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean63
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61_LiteralBoolean63->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61_LiteralBoolean63);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61_LiteralBoolean63->setName("LiteralBoolean63");
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61_LiteralBoolean63->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61_LiteralBoolean63->setValue(true);
			AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61->setGuard(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61_LiteralBoolean63);
		AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern->addEdge(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern_ObjectFlow61);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern);
		// Activity assert_A_Array_Pattern
		AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern);
		AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern->setName("assert_A_Array_Pattern");
		AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Array_Pattern
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Array_Pattern);
		AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern->addOwnedParameter(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern);
			// ActivityParameterNode a_Array_Pattern_node
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern_node);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern_node->setName("a_Array_Pattern_node");
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern_node->setParameter(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern);
		AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern->addNode(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_a_Array_Pattern_node);
			// ValueSpecificationAction message
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message->setName("message");
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString69
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_LiteralString69->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_LiteralString69);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_LiteralString69->setName("LiteralString69");
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_LiteralString69->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_LiteralString69->setValue("Assertion currently not implemented for A_Array_Pattern.");
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message->setValue(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_LiteralString69);
				// OutputPin result
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result->setName("result");
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message->setResult(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result);
		AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern->addNode(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message);
			// CallBehaviorAction writeLine
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine->setName("writeLine");
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus->setName("errorStatus");
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus->setLower(0);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine->addResult(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_errorStatus);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value->setName("value");
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine->addArgument(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value);
		AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern->addNode(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine);
			// ObjectFlow ObjectFlow78 from result to value
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78->setName("ObjectFlow78");
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78->setSource(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_message_result);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78->setTarget(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean79
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78_LiteralBoolean79->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78_LiteralBoolean79);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78_LiteralBoolean79->setName("LiteralBoolean79");
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78_LiteralBoolean79->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78_LiteralBoolean79->setValue(true);
			AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78->setGuard(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78_LiteralBoolean79);
		AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern->addEdge(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern_ObjectFlow78);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern);
		// Activity main
		AssemblyConnectors_PWP_PWP_main->setThisActivityPtr(AssemblyConnectors_PWP_PWP_main);
		AssemblyConnectors_PWP_PWP_main->setName("main");
		AssemblyConnectors_PWP_PWP_main->setVisibility(VisibilityKind::public_);
			// CallBehaviorAction instantiate_A_Array_Pattern
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern->setName("instantiate_A_Array_Pattern");
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Array_Pattern
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern);
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Array_Pattern);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern->addResult(AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern->setBehavior(AssemblyConnectors_PWP_PWP_instantiate_A_Array_Pattern);
		AssemblyConnectors_PWP_PWP_main->addNode(AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern);
			// CallBehaviorAction assert_A_Array_Pattern
			AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern);
			AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern->setName("assert_A_Array_Pattern");
			AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern->setBehavior(AssemblyConnectors_PWP_PWP_assert_A_Array_Pattern);
				// InputPin a_Array_Pattern
				AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern);
				AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
				AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Array_Pattern);
			AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern->addArgument(AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern);
		AssemblyConnectors_PWP_PWP_main->addNode(AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern);
			// CallBehaviorAction assert_A_Empty_Pattern
			AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern->setName("assert_A_Empty_Pattern");
			AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern->setBehavior(AssemblyConnectors_PWP_PWP_assert_A_Empty_Pattern);
				// InputPin a_Empty_Pattern
				AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern);
				AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
				AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern->addArgument(AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern);
		AssemblyConnectors_PWP_PWP_main->addNode(AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern);
			// CallBehaviorAction instantiate_A_Star_Pattern
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern->setName("instantiate_A_Star_Pattern");
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Star_Pattern
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern);
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Star_Pattern);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern->addResult(AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern->setBehavior(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern);
		AssemblyConnectors_PWP_PWP_main->addNode(AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern);
			// CallBehaviorAction instantiate_A_Empty_Pattern
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern->setName("instantiate_A_Empty_Pattern");
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Empty_Pattern
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern->addResult(AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern->setBehavior(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern);
		AssemblyConnectors_PWP_PWP_main->addNode(AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern);
			// CallBehaviorAction instantiate_A_Unconnected_Pattern
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern->setName("instantiate_A_Unconnected_Pattern");
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Unconnected_Pattern
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern->addResult(AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern->setBehavior(AssemblyConnectors_PWP_PWP_instantiate_A_Unconnected_Pattern);
		AssemblyConnectors_PWP_PWP_main->addNode(AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern);
			// CallBehaviorAction assert_A_Star_Pattern
			AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern);
			AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern->setName("assert_A_Star_Pattern");
			AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern->setBehavior(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern);
				// InputPin a_Star_Pattern
				AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern);
				AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
				AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Star_Pattern);
			AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern->addArgument(AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern);
		AssemblyConnectors_PWP_PWP_main->addNode(AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern);
			// CallBehaviorAction assert_A_Unconnected_Pattern
			AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern->setName("assert_A_Unconnected_Pattern");
			AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern->setBehavior(AssemblyConnectors_PWP_PWP_assert_A_Unconnected_Pattern);
				// InputPin a_Unconnected_Pattern
				AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
				AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
				AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern->addArgument(AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
		AssemblyConnectors_PWP_PWP_main->addNode(AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern);
			// ControlFlow ControlFlow108 from assert_A_Array_Pattern to instantiate_A_Star_Pattern
			AssemblyConnectors_PWP_PWP_main_ControlFlow108->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_main_ControlFlow108);
			AssemblyConnectors_PWP_PWP_main_ControlFlow108->setName("ControlFlow108");
			AssemblyConnectors_PWP_PWP_main_ControlFlow108->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_main_ControlFlow108->setSource(AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern);
			AssemblyConnectors_PWP_PWP_main_ControlFlow108->setTarget(AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern);
		AssemblyConnectors_PWP_PWP_main->addEdge(AssemblyConnectors_PWP_PWP_main_ControlFlow108);
			// ObjectFlow ObjectFlow81 from a_Unconnected_Pattern to a_Unconnected_Pattern
			AssemblyConnectors_PWP_PWP_main_ObjectFlow81->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_main_ObjectFlow81);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow81->setName("ObjectFlow81");
			AssemblyConnectors_PWP_PWP_main_ObjectFlow81->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_main_ObjectFlow81->setSource(AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow81->setTarget(AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
				// LiteralBoolean LiteralBoolean82
				AssemblyConnectors_PWP_PWP_main_ObjectFlow81_LiteralBoolean82->setThisElementPtr(AssemblyConnectors_PWP_PWP_main_ObjectFlow81_LiteralBoolean82);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow81_LiteralBoolean82->setName("LiteralBoolean82");
				AssemblyConnectors_PWP_PWP_main_ObjectFlow81_LiteralBoolean82->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow81_LiteralBoolean82->setValue(true);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow81->setGuard(AssemblyConnectors_PWP_PWP_main_ObjectFlow81_LiteralBoolean82);
		AssemblyConnectors_PWP_PWP_main->addEdge(AssemblyConnectors_PWP_PWP_main_ObjectFlow81);
			// ObjectFlow ObjectFlow87 from a_Empty_Pattern to a_Empty_Pattern
			AssemblyConnectors_PWP_PWP_main_ObjectFlow87->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_main_ObjectFlow87);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow87->setName("ObjectFlow87");
			AssemblyConnectors_PWP_PWP_main_ObjectFlow87->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_main_ObjectFlow87->setSource(AssemblyConnectors_PWP_PWP_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow87->setTarget(AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern_a_Empty_Pattern);
				// LiteralBoolean LiteralBoolean89
				AssemblyConnectors_PWP_PWP_main_ObjectFlow87_LiteralBoolean89->setThisElementPtr(AssemblyConnectors_PWP_PWP_main_ObjectFlow87_LiteralBoolean89);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow87_LiteralBoolean89->setName("LiteralBoolean89");
				AssemblyConnectors_PWP_PWP_main_ObjectFlow87_LiteralBoolean89->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow87_LiteralBoolean89->setValue(true);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow87->setGuard(AssemblyConnectors_PWP_PWP_main_ObjectFlow87_LiteralBoolean89);
		AssemblyConnectors_PWP_PWP_main->addEdge(AssemblyConnectors_PWP_PWP_main_ObjectFlow87);
			// ControlFlow ControlFlow109 from assert_A_Empty_Pattern to instantiate_A_Unconnected_Pattern
			AssemblyConnectors_PWP_PWP_main_ControlFlow109->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_main_ControlFlow109);
			AssemblyConnectors_PWP_PWP_main_ControlFlow109->setName("ControlFlow109");
			AssemblyConnectors_PWP_PWP_main_ControlFlow109->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_main_ControlFlow109->setSource(AssemblyConnectors_PWP_PWP_main_assert_A_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_main_ControlFlow109->setTarget(AssemblyConnectors_PWP_PWP_main_instantiate_A_Unconnected_Pattern);
		AssemblyConnectors_PWP_PWP_main->addEdge(AssemblyConnectors_PWP_PWP_main_ControlFlow109);
			// ControlFlow ControlFlow110 from assert_A_Unconnected_Pattern to instantiate_A_Array_Pattern
			AssemblyConnectors_PWP_PWP_main_ControlFlow110->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_main_ControlFlow110);
			AssemblyConnectors_PWP_PWP_main_ControlFlow110->setName("ControlFlow110");
			AssemblyConnectors_PWP_PWP_main_ControlFlow110->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_main_ControlFlow110->setSource(AssemblyConnectors_PWP_PWP_main_assert_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_main_ControlFlow110->setTarget(AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern);
		AssemblyConnectors_PWP_PWP_main->addEdge(AssemblyConnectors_PWP_PWP_main_ControlFlow110);
			// ObjectFlow ObjectFlow117 from a_Star_Pattern to a_Star_Pattern
			AssemblyConnectors_PWP_PWP_main_ObjectFlow117->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_main_ObjectFlow117);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow117->setName("ObjectFlow117");
			AssemblyConnectors_PWP_PWP_main_ObjectFlow117->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_main_ObjectFlow117->setSource(AssemblyConnectors_PWP_PWP_main_instantiate_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow117->setTarget(AssemblyConnectors_PWP_PWP_main_assert_A_Star_Pattern_a_Star_Pattern);
				// LiteralBoolean LiteralBoolean119
				AssemblyConnectors_PWP_PWP_main_ObjectFlow117_LiteralBoolean119->setThisElementPtr(AssemblyConnectors_PWP_PWP_main_ObjectFlow117_LiteralBoolean119);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow117_LiteralBoolean119->setName("LiteralBoolean119");
				AssemblyConnectors_PWP_PWP_main_ObjectFlow117_LiteralBoolean119->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow117_LiteralBoolean119->setValue(true);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow117->setGuard(AssemblyConnectors_PWP_PWP_main_ObjectFlow117_LiteralBoolean119);
		AssemblyConnectors_PWP_PWP_main->addEdge(AssemblyConnectors_PWP_PWP_main_ObjectFlow117);
			// ObjectFlow ObjectFlow105 from a_Array_Pattern to a_Array_Pattern
			AssemblyConnectors_PWP_PWP_main_ObjectFlow105->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_main_ObjectFlow105);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow105->setName("ObjectFlow105");
			AssemblyConnectors_PWP_PWP_main_ObjectFlow105->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_main_ObjectFlow105->setSource(AssemblyConnectors_PWP_PWP_main_instantiate_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow105->setTarget(AssemblyConnectors_PWP_PWP_main_assert_A_Array_Pattern_a_Array_Pattern);
				// LiteralBoolean LiteralBoolean106
				AssemblyConnectors_PWP_PWP_main_ObjectFlow105_LiteralBoolean106->setThisElementPtr(AssemblyConnectors_PWP_PWP_main_ObjectFlow105_LiteralBoolean106);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow105_LiteralBoolean106->setName("LiteralBoolean106");
				AssemblyConnectors_PWP_PWP_main_ObjectFlow105_LiteralBoolean106->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_main_ObjectFlow105_LiteralBoolean106->setValue(true);
			AssemblyConnectors_PWP_PWP_main_ObjectFlow105->setGuard(AssemblyConnectors_PWP_PWP_main_ObjectFlow105_LiteralBoolean106);
		AssemblyConnectors_PWP_PWP_main->addEdge(AssemblyConnectors_PWP_PWP_main_ObjectFlow105);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_main);
		// Class A_Unconnected_Pattern
		AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern->setThisClass_Ptr(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern);
		AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern->setName("A_Unconnected_Pattern");
		AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property partB
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB->setThisElementPtr(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB->setName("partB");
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB->setUpper(-1);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB->setLower(2);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB->setType(AssemblyConnectors_PWP_PWP_B);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB);
			// Property partC
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC->setThisElementPtr(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC->setName("partC");
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC->setUpper(-1);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC->setLower(3);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC->setType(AssemblyConnectors_PWP_PWP_C);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC);
		
		AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r->setName("r");
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd126->setUpper(-1);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd126->setLower(0);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd126->setRole(AssemblyConnectors_PWP_PWP_B_p);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd126->setPartWithPort(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partB);
				
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r->addEnd(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd126);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd125->setUpper(-1);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd125->setLower(0);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd125->setRole(AssemblyConnectors_PWP_PWP_C_q);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd125->setPartWithPort(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_partC);
				
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r->addEnd(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r_ConnectorEnd125);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r->setType(AssemblyConnectors_PWP_PWP_R);
		AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern->addOwnedConnector(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_r);
			// Operation A_Unconnected_Pattern_A_Unconnected_Pattern
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->setThisOperationPtr(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->setName("A_Unconnected_Pattern_A_Unconnected_Pattern");
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setName("result");
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setType(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern);
				AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setDirection(ParameterDirectionKind::return_);
			AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->addOwnedParameter(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result);
		AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern->addOwnedOperation(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_A_Unconnected_Pattern);
		// Class A_Array_Pattern
		AssemblyConnectors_PWP_PWP_A_Array_Pattern->setThisClass_Ptr(AssemblyConnectors_PWP_PWP_A_Array_Pattern);
		AssemblyConnectors_PWP_PWP_A_Array_Pattern->setName("A_Array_Pattern");
		AssemblyConnectors_PWP_PWP_A_Array_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property partB
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB->setThisElementPtr(AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB->setName("partB");
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB->setUpper(-1);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB->setLower(2);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB->setType(AssemblyConnectors_PWP_PWP_B);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_PWP_A_Array_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB);
			// Property partC
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC->setThisElementPtr(AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC->setName("partC");
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC->setUpper(-1);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC->setLower(4);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC->setType(AssemblyConnectors_PWP_PWP_C);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_PWP_A_Array_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC);
		
		AssemblyConnectors_PWP_PWP_A_Array_Pattern_r->setName("r");
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_r->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd132->setUpper(-1);
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd132->setRole(AssemblyConnectors_PWP_PWP_B_p);
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd132->setPartWithPort(AssemblyConnectors_PWP_PWP_A_Array_Pattern_partB);
				
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_r->addEnd(AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd132);
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd133->setUpper(-1);
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd133->setRole(AssemblyConnectors_PWP_PWP_C_q);
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd133->setPartWithPort(AssemblyConnectors_PWP_PWP_A_Array_Pattern_partC);
				
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_r->addEnd(AssemblyConnectors_PWP_PWP_A_Array_Pattern_r_ConnectorEnd133);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_r->setType(AssemblyConnectors_PWP_PWP_R);
		AssemblyConnectors_PWP_PWP_A_Array_Pattern->addOwnedConnector(AssemblyConnectors_PWP_PWP_A_Array_Pattern_r);
			// Operation A_Array_Pattern_A_Array_Pattern
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->setThisOperationPtr(AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->setName("A_Array_Pattern_A_Array_Pattern");
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result);
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setName("result");
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setType(AssemblyConnectors_PWP_PWP_A_Array_Pattern);
				AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setDirection(ParameterDirectionKind::return_);
			AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->addOwnedParameter(AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result);
		AssemblyConnectors_PWP_PWP_A_Array_Pattern->addOwnedOperation(AssemblyConnectors_PWP_PWP_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_A_Array_Pattern);
		// Activity instantiate_A_Empty_Pattern
		AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern);
		AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern->setName("instantiate_A_Empty_Pattern");
		AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Empty_Pattern
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern->setDirection(ParameterDirectionKind::return_);
		AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern->addOwnedParameter(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			// ActivityParameterNode a_Empty_Pattern_node
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setName("a_Empty_Pattern_node");
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setParameter(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern);
		AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern->addNode(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
			// CallOperationAction A_Empty_Pattern()
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setName("A_Empty_Pattern()");
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setName("result");
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setType(AssemblyConnectors_PWP_PWP_A_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_->addResult(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setOperation(AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
				// InputPin target
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setName("target");
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setType(AssemblyConnectors_PWP_PWP_A_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setTarget(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
		AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern->addNode(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern_);
			// CreateObjectAction Create A_Empty_Pattern
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setName("Create A_Empty_Pattern");
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setClassifier(AssemblyConnectors_PWP_PWP_A_Empty_Pattern);
				// OutputPin result
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setName("result");
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setType(AssemblyConnectors_PWP_PWP_A_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setResult(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
		AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern->addNode(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern);
			// ObjectFlow ObjectFlow139 from result to a_Empty_Pattern_node
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139->setName("ObjectFlow139");
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139->setSource(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139->setTarget(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
				// LiteralBoolean LiteralBoolean141
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139_LiteralBoolean141->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139_LiteralBoolean141);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139_LiteralBoolean141->setName("LiteralBoolean141");
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139_LiteralBoolean141->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139_LiteralBoolean141->setValue(true);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139->setGuard(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139_LiteralBoolean141);
		AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern->addEdge(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow139);
			// ObjectFlow ObjectFlow144 from result to target
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144->setName("ObjectFlow144");
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144->setSource(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144->setTarget(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
				// LiteralBoolean LiteralBoolean146
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144_LiteralBoolean146->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144_LiteralBoolean146);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144_LiteralBoolean146->setName("LiteralBoolean146");
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144_LiteralBoolean146->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144_LiteralBoolean146->setValue(true);
			AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144->setGuard(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144_LiteralBoolean146);
		AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern->addEdge(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern_ObjectFlow144);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_instantiate_A_Empty_Pattern);
		// Activity assert_A_Star_Pattern
		AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern);
		AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern->setName("assert_A_Star_Pattern");
		AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Star_Pattern
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Star_Pattern);
		AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern->addOwnedParameter(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern);
			// CallBehaviorAction writeLine
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine->setName("writeLine");
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus->setName("errorStatus");
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus->setLower(0);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine->addResult(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_errorStatus);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value->setName("value");
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine->addArgument(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value);
		AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern->addNode(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine);
			// ActivityParameterNode a_Star_Pattern_node
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern_node);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern_node->setName("a_Star_Pattern_node");
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern_node->setParameter(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern);
		AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern->addNode(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_a_Star_Pattern_node);
			// ValueSpecificationAction message
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message->setName("message");
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString159
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_LiteralString159->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_LiteralString159);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_LiteralString159->setName("LiteralString159");
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_LiteralString159->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_LiteralString159->setValue("Assertion currently not implemented for A_Star_Pattern.");
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message->setValue(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_LiteralString159);
				// OutputPin result
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result->setName("result");
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message->setResult(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result);
		AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern->addNode(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message);
			// ObjectFlow ObjectFlow147 from result to value
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147->setName("ObjectFlow147");
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147->setSource(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_message_result);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147->setTarget(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean148
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147_LiteralBoolean148->setThisElementPtr(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147_LiteralBoolean148);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147_LiteralBoolean148->setName("LiteralBoolean148");
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147_LiteralBoolean148->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147_LiteralBoolean148->setValue(true);
			AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147->setGuard(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147_LiteralBoolean148);
		AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern->addEdge(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern_ObjectFlow147);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_assert_A_Star_Pattern);
		// Class IImpl
		AssemblyConnectors_PWP_PWP_IImpl->setThisClass_Ptr(AssemblyConnectors_PWP_PWP_IImpl);
		AssemblyConnectors_PWP_PWP_IImpl->setName("IImpl");
		AssemblyConnectors_PWP_PWP_IImpl->setVisibility(VisibilityKind::public_);
		AssemblyConnectors_PWP_PWP_IImpl_I_Realization->setName("I_Realization");
			AssemblyConnectors_PWP_PWP_IImpl_I_Realization->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_IImpl_I_Realization->setContract(AssemblyConnectors_PWP_PWP_I);
			
		AssemblyConnectors_PWP_PWP_IImpl->addInterfaceRealization(AssemblyConnectors_PWP_PWP_IImpl_I_Realization);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_IImpl);
		// Interface I
		AssemblyConnectors_PWP_PWP_I->setName("I");
		AssemblyConnectors_PWP_PWP_I->setVisibility(VisibilityKind::public_);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_I);
		// Class A_Empty_Pattern
		AssemblyConnectors_PWP_PWP_A_Empty_Pattern->setThisClass_Ptr(AssemblyConnectors_PWP_PWP_A_Empty_Pattern);
		AssemblyConnectors_PWP_PWP_A_Empty_Pattern->setName("A_Empty_Pattern");
		AssemblyConnectors_PWP_PWP_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property partB
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB->setThisElementPtr(AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB->setName("partB");
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB->setUpper(-1);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB->setLower(0);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB->setType(AssemblyConnectors_PWP_PWP_B);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_PWP_A_Empty_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB);
			// Property partC
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC->setThisElementPtr(AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC->setName("partC");
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC->setUpper(-1);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC->setLower(0);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC->setType(AssemblyConnectors_PWP_PWP_C);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_PWP_A_Empty_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC);
		
		AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r->setName("r");
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd165->setUpper(-1);
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd165->setRole(AssemblyConnectors_PWP_PWP_B_p);
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd165->setPartWithPort(AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partB);
				
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r->addEnd(AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd165);
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd164->setUpper(-1);
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd164->setRole(AssemblyConnectors_PWP_PWP_C_q);
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd164->setPartWithPort(AssemblyConnectors_PWP_PWP_A_Empty_Pattern_partC);
				
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r->addEnd(AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r_ConnectorEnd164);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r->setType(AssemblyConnectors_PWP_PWP_R);
		AssemblyConnectors_PWP_PWP_A_Empty_Pattern->addOwnedConnector(AssemblyConnectors_PWP_PWP_A_Empty_Pattern_r);
			// Operation A_Empty_Pattern_A_Empty_Pattern
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->setThisOperationPtr(AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->setName("A_Empty_Pattern_A_Empty_Pattern");
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result);
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setName("result");
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setType(AssemblyConnectors_PWP_PWP_A_Empty_Pattern);
				AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setDirection(ParameterDirectionKind::return_);
			AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->addOwnedParameter(AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result);
		AssemblyConnectors_PWP_PWP_A_Empty_Pattern->addOwnedOperation(AssemblyConnectors_PWP_PWP_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_A_Empty_Pattern);
		// Activity instantiate_A_Star_Pattern
		AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern);
		AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern->setName("instantiate_A_Star_Pattern");
		AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Star_Pattern
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern->setType(AssemblyConnectors_PWP_PWP_A_Star_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern->setDirection(ParameterDirectionKind::return_);
		AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern->addOwnedParameter(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern);
			// CallOperationAction A_Star_Pattern()
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_->setName("A_Star_Pattern()");
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result->setName("result");
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result->setType(AssemblyConnectors_PWP_PWP_A_Star_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_->addResult(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_->setOperation(AssemblyConnectors_PWP_PWP_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
				// InputPin target
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target->setName("target");
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target->setType(AssemblyConnectors_PWP_PWP_A_Star_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_->setTarget(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target);
		AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern->addNode(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern_);
			// ActivityParameterNode a_Star_Pattern_node
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node->setName("a_Star_Pattern_node");
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node->setParameter(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern);
		AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern->addNode(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node);
			// CreateObjectAction Create A_Star_Pattern
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setName("Create A_Star_Pattern");
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setClassifier(AssemblyConnectors_PWP_PWP_A_Star_Pattern);
				// OutputPin result
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setName("result");
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setType(AssemblyConnectors_PWP_PWP_A_Star_Pattern);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setResult(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
		AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern->addNode(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern);
			// ObjectFlow ObjectFlow172 from result to a_Star_Pattern_node
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172->setName("ObjectFlow172");
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172->setSource(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__result);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172->setTarget(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_a_Star_Pattern_node);
				// LiteralBoolean LiteralBoolean173
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172_LiteralBoolean173->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172_LiteralBoolean173);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172_LiteralBoolean173->setName("LiteralBoolean173");
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172_LiteralBoolean173->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172_LiteralBoolean173->setValue(true);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172->setGuard(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172_LiteralBoolean173);
		AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern->addEdge(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow172);
			// ObjectFlow ObjectFlow175 from result to target
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175->setThisActivityEdgePtr(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175->setName("ObjectFlow175");
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175->setSource(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175->setTarget(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_A_Star_Pattern__target);
				// LiteralBoolean LiteralBoolean176
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175_LiteralBoolean176->setThisElementPtr(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175_LiteralBoolean176);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175_LiteralBoolean176->setName("LiteralBoolean176");
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175_LiteralBoolean176->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175_LiteralBoolean176->setValue(true);
			AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175->setGuard(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175_LiteralBoolean176);
		AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern->addEdge(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern_ObjectFlow175);
	AssemblyConnectors_PWP_PWP->addPackagedElement(AssemblyConnectors_PWP_PWP_instantiate_A_Star_Pattern);
}
