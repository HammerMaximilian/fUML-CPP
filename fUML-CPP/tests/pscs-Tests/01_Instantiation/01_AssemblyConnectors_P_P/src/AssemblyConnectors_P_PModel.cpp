/*
 * AssemblyConnectors_P_PModel.cpp
 * 
 * Auto-generated file
 */

#include "AssemblyConnectors_P_PModel.h"

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
#include <uml/structuredclassifiers/ConnectorEnd.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/structuredclassifiers/Connector.h>
#include <uml/structuredclassifiers/Association.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/CallOperationAction.h>
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

using namespace AssemblyConnectors_P_P;
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

AssemblyConnectors_P_PModel::AssemblyConnectors_P_PModel()
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

AssemblyConnectors_P_PModel::~AssemblyConnectors_P_PModel()
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

const std::shared_ptr<AssemblyConnectors_P_PModel>& AssemblyConnectors_P_PModel::Instance()
{
	static std::shared_ptr<AssemblyConnectors_P_PModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new AssemblyConnectors_P_PModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void AssemblyConnectors_P_PModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model AssemblyConnectors_P_P
	 */
	AssemblyConnectors_P_P.reset(new Package());
	this->addToElementRepository("AssemblyConnectors_P_P", AssemblyConnectors_P_P);
		AssemblyConnectors_P_P_instantiate_A_Empty_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Empty_Pattern", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Empty_Pattern_node", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow0", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0_LiteralInteger1.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger1", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0_LiteralInteger1);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0_LiteralBoolean2.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean2", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0_LiteralBoolean2);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow3", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3_LiteralBoolean4.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean4", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3_LiteralBoolean4);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3_LiteralInteger5.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger5", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3_LiteralInteger5);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Empty_Pattern()", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
					AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger6.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger6", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger6);
					AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralUnlimitedNatural7.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural7", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralUnlimitedNatural7);
					AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger8.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger8", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger8);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
					AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralInteger9.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger9", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralInteger9);
					AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralUnlimitedNatural10.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural10", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralUnlimitedNatural10);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Empty_Pattern", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
					AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralUnlimitedNatural11.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural11", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralUnlimitedNatural11);
					AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralInteger12.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger12", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralInteger12);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Empty_Pattern", AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern);
		AssemblyConnectors_P_P_C.reset(new Class_());
		this->addToElementRepository("C", AssemblyConnectors_P_P_C);
		AssemblyConnectors_P_P_assert_A_Star_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Star_Pattern", AssemblyConnectors_P_P_assert_A_Star_Pattern);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Star_Pattern", AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Star_Pattern_node", AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node_LiteralInteger13.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger13", AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node_LiteralInteger13);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow14", AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14_LiteralInteger15.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger15", AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14_LiteralInteger15);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean16.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean16", AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean16);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", AssemblyConnectors_P_P_assert_A_Star_Pattern_message);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_P_P_assert_A_Star_Pattern_message_result);
					AssemblyConnectors_P_P_assert_A_Star_Pattern_message_result_LiteralUnlimitedNatural17.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural17", AssemblyConnectors_P_P_assert_A_Star_Pattern_message_result_LiteralUnlimitedNatural17);
					AssemblyConnectors_P_P_assert_A_Star_Pattern_message_result_LiteralInteger18.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger18", AssemblyConnectors_P_P_assert_A_Star_Pattern_message_result_LiteralInteger18);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_message_LiteralString19.reset(new LiteralString());
				this->addToElementRepository("LiteralString19", AssemblyConnectors_P_P_assert_A_Star_Pattern_message_LiteralString19);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus);
					AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger20.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger20", AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger20);
					AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural21.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural21", AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural21);
					AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger22.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger22", AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger22);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_value);
					AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_value_LiteralInteger23.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger23", AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_value_LiteralInteger23);
					AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_value_LiteralInteger24.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger24", AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_value_LiteralInteger24);
					AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_value_LiteralUnlimitedNatural25.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural25", AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_value_LiteralUnlimitedNatural25);
		AssemblyConnectors_P_P_B.reset(new Class_());
		this->addToElementRepository("B", AssemblyConnectors_P_P_B);
		AssemblyConnectors_P_P_A_Star_Pattern.reset(new Class_());
		this->addToElementRepository("A_Star_Pattern", AssemblyConnectors_P_P_A_Star_Pattern);
			AssemblyConnectors_P_P_A_Star_Pattern_Comment26.reset(new Comment());
			this->addToElementRepository("Comment26", AssemblyConnectors_P_P_A_Star_Pattern_Comment26);
			AssemblyConnectors_P_P_A_Star_Pattern_partC.reset(new Property());
			this->addToElementRepository("partC", AssemblyConnectors_P_P_A_Star_Pattern_partC);
				AssemblyConnectors_P_P_A_Star_Pattern_partC_LiteralUnlimitedNatural27.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural27", AssemblyConnectors_P_P_A_Star_Pattern_partC_LiteralUnlimitedNatural27);
				AssemblyConnectors_P_P_A_Star_Pattern_partC_LiteralInteger28.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger28", AssemblyConnectors_P_P_A_Star_Pattern_partC_LiteralInteger28);
			AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern.reset(new Operation());
			this->addToElementRepository("A_Star_Pattern_A_Star_Pattern", AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
				AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
			AssemblyConnectors_P_P_A_Star_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", AssemblyConnectors_P_P_A_Star_Pattern_r);
				AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd29.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd29", AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd29);
					AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd29_connectorEnd_2_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_2_Lower", AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd29_connectorEnd_2_Lower);
					AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd29_connectorEnd_2_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_2_Upper", AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd29_connectorEnd_2_Upper);
				AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd30", AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30);
					AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30_connectorEnd_1_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_1_Upper", AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30_connectorEnd_1_Upper);
					AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30_connectorEnd_1_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_1_Lower", AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30_connectorEnd_1_Lower);
			AssemblyConnectors_P_P_A_Star_Pattern_partB.reset(new Property());
			this->addToElementRepository("partB", AssemblyConnectors_P_P_A_Star_Pattern_partB);
				AssemblyConnectors_P_P_A_Star_Pattern_partB_LiteralUnlimitedNatural31.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural31", AssemblyConnectors_P_P_A_Star_Pattern_partB_LiteralUnlimitedNatural31);
				AssemblyConnectors_P_P_A_Star_Pattern_partB_LiteralInteger32.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger32", AssemblyConnectors_P_P_A_Star_Pattern_partB_LiteralInteger32);
		AssemblyConnectors_P_P_R.reset(new Association());
		this->addToElementRepository("R", AssemblyConnectors_P_P_R);
			AssemblyConnectors_P_P_R_y.reset(new Property());
			this->addToElementRepository("y", AssemblyConnectors_P_P_R_y);
				AssemblyConnectors_P_P_R_y_LiteralInteger33.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger33", AssemblyConnectors_P_P_R_y_LiteralInteger33);
				AssemblyConnectors_P_P_R_y_LiteralUnlimitedNatural34.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural34", AssemblyConnectors_P_P_R_y_LiteralUnlimitedNatural34);
			AssemblyConnectors_P_P_R_x.reset(new Property());
			this->addToElementRepository("x", AssemblyConnectors_P_P_R_x);
				AssemblyConnectors_P_P_R_x_LiteralInteger35.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger35", AssemblyConnectors_P_P_R_x_LiteralInteger35);
				AssemblyConnectors_P_P_R_x_LiteralUnlimitedNatural36.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural36", AssemblyConnectors_P_P_R_x_LiteralUnlimitedNatural36);
		AssemblyConnectors_P_P_main.reset(new Activity());
		this->addToElementRepository("main", AssemblyConnectors_P_P_main);
			AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Star_Pattern", AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern);
				AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Star_Pattern", AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern);
					AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger37.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger37", AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger37);
					AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural38.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural38", AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural38);
					AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger39.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger39", AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger39);
			AssemblyConnectors_P_P_main_ObjectFlow40.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow40", AssemblyConnectors_P_P_main_ObjectFlow40);
				AssemblyConnectors_P_P_main_ObjectFlow40_LiteralBoolean41.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean41", AssemblyConnectors_P_P_main_ObjectFlow40_LiteralBoolean41);
				AssemblyConnectors_P_P_main_ObjectFlow40_LiteralInteger42.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger42", AssemblyConnectors_P_P_main_ObjectFlow40_LiteralInteger42);
			AssemblyConnectors_P_P_main_ObjectFlow43.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow43", AssemblyConnectors_P_P_main_ObjectFlow43);
				AssemblyConnectors_P_P_main_ObjectFlow43_LiteralBoolean44.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean44", AssemblyConnectors_P_P_main_ObjectFlow43_LiteralBoolean44);
				AssemblyConnectors_P_P_main_ObjectFlow43_LiteralInteger45.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger45", AssemblyConnectors_P_P_main_ObjectFlow43_LiteralInteger45);
			AssemblyConnectors_P_P_main_assert_A_Array_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Array_Pattern", AssemblyConnectors_P_P_main_assert_A_Array_Pattern);
				AssemblyConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Array_Pattern", AssemblyConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern);
					AssemblyConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural46.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural46", AssemblyConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural46);
					AssemblyConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", AssemblyConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger47);
					AssemblyConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger48.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger48", AssemblyConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger48);
			AssemblyConnectors_P_P_main_ObjectFlow49.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow49", AssemblyConnectors_P_P_main_ObjectFlow49);
				AssemblyConnectors_P_P_main_ObjectFlow49_LiteralInteger50.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger50", AssemblyConnectors_P_P_main_ObjectFlow49_LiteralInteger50);
				AssemblyConnectors_P_P_main_ObjectFlow49_LiteralBoolean51.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean51", AssemblyConnectors_P_P_main_ObjectFlow49_LiteralBoolean51);
			AssemblyConnectors_P_P_main_ControlFlow52.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow52", AssemblyConnectors_P_P_main_ControlFlow52);
			AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Unconnected_Pattern", AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern);
				AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Unconnected_Pattern", AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
					AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger53.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger53", AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger53);
					AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural54.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural54", AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural54);
					AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger55.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger55", AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger55);
			AssemblyConnectors_P_P_main_ControlFlow56.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow56", AssemblyConnectors_P_P_main_ControlFlow56);
			AssemblyConnectors_P_P_main_assert_A_Empty_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Empty_Pattern", AssemblyConnectors_P_P_main_assert_A_Empty_Pattern);
				AssemblyConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Empty_Pattern", AssemblyConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern);
					AssemblyConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural57.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural57", AssemblyConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural57);
					AssemblyConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger58.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger58", AssemblyConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger58);
					AssemblyConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger59.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger59", AssemblyConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger59);
			AssemblyConnectors_P_P_main_ObjectFlow60.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow60", AssemblyConnectors_P_P_main_ObjectFlow60);
				AssemblyConnectors_P_P_main_ObjectFlow60_LiteralBoolean61.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean61", AssemblyConnectors_P_P_main_ObjectFlow60_LiteralBoolean61);
				AssemblyConnectors_P_P_main_ObjectFlow60_LiteralInteger62.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger62", AssemblyConnectors_P_P_main_ObjectFlow60_LiteralInteger62);
			AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Unconnected_Pattern", AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern);
				AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Unconnected_Pattern", AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
					AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural63.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural63", AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural63);
					AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger64.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger64", AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger64);
					AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger65.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger65", AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger65);
			AssemblyConnectors_P_P_main_ControlFlow66.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow66", AssemblyConnectors_P_P_main_ControlFlow66);
			AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Array_Pattern", AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern);
				AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Array_Pattern", AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern);
					AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger67.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger67", AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger67);
					AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural68.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural68", AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural68);
					AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger69.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger69", AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger69);
			AssemblyConnectors_P_P_main_assert_A_Star_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Star_Pattern", AssemblyConnectors_P_P_main_assert_A_Star_Pattern);
				AssemblyConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Star_Pattern", AssemblyConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern);
					AssemblyConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger70.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger70", AssemblyConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger70);
					AssemblyConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger71.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger71", AssemblyConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger71);
					AssemblyConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural72.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural72", AssemblyConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural72);
			AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Empty_Pattern", AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern);
				AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Empty_Pattern", AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
					AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger73.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger73", AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger73);
					AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural74.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural74", AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural74);
					AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger75.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger75", AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger75);
		AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Unconnected_Pattern", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Unconnected_Pattern", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
					AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralUnlimitedNatural76.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural76", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralUnlimitedNatural76);
					AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralInteger77.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger77", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralInteger77);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow78", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78_LiteralBoolean79.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean79", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78_LiteralBoolean79);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78_LiteralInteger80.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger80", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78_LiteralInteger80);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Unconnected_Pattern", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow81", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean82", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralInteger83.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger83", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralInteger83);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Unconnected_Pattern_node", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Unconnected_Pattern()", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
					AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralUnlimitedNatural84.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural84", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralUnlimitedNatural84);
					AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralInteger85.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger85", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralInteger85);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
					AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger86.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger86", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger86);
					AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger87.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger87", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger87);
					AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralUnlimitedNatural88.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural88", AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralUnlimitedNatural88);
		AssemblyConnectors_P_P_assert_A_Empty_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Empty_Pattern", AssemblyConnectors_P_P_assert_A_Empty_Pattern);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_value);
					AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_value_LiteralInteger89.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger89", AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_value_LiteralInteger89);
					AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_value_LiteralUnlimitedNatural90.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural90", AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_value_LiteralUnlimitedNatural90);
					AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_value_LiteralInteger91.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger91", AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_value_LiteralInteger91);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus);
					AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger92.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger92", AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger92);
					AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger93.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger93", AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger93);
					AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural94.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural94", AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural94);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow95", AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95_LiteralBoolean96.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean96", AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95_LiteralBoolean96);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95_LiteralInteger97.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger97", AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95_LiteralInteger97);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Empty_Pattern", AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", AssemblyConnectors_P_P_assert_A_Empty_Pattern_message);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_result);
					AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_result_LiteralUnlimitedNatural98.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural98", AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_result_LiteralUnlimitedNatural98);
					AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_result_LiteralInteger99.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger99", AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_result_LiteralInteger99);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString100.reset(new LiteralString());
				this->addToElementRepository("LiteralString100", AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString100);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Empty_Pattern_node", AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node_LiteralInteger101.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger101", AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node_LiteralInteger101);
		AssemblyConnectors_P_P_A_Unconnected_Pattern.reset(new Class_());
		this->addToElementRepository("A_Unconnected_Pattern", AssemblyConnectors_P_P_A_Unconnected_Pattern);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_Comment102.reset(new Comment());
			this->addToElementRepository("Comment102", AssemblyConnectors_P_P_A_Unconnected_Pattern_Comment102);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partC.reset(new Property());
			this->addToElementRepository("partC", AssemblyConnectors_P_P_A_Unconnected_Pattern_partC);
				AssemblyConnectors_P_P_A_Unconnected_Pattern_partC_LiteralInteger103.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger103", AssemblyConnectors_P_P_A_Unconnected_Pattern_partC_LiteralInteger103);
				AssemblyConnectors_P_P_A_Unconnected_Pattern_partC_LiteralUnlimitedNatural104.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural104", AssemblyConnectors_P_P_A_Unconnected_Pattern_partC_LiteralUnlimitedNatural104);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partB.reset(new Property());
			this->addToElementRepository("partB", AssemblyConnectors_P_P_A_Unconnected_Pattern_partB);
				AssemblyConnectors_P_P_A_Unconnected_Pattern_partB_LiteralUnlimitedNatural105.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural105", AssemblyConnectors_P_P_A_Unconnected_Pattern_partB_LiteralUnlimitedNatural105);
				AssemblyConnectors_P_P_A_Unconnected_Pattern_partB_LiteralInteger106.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger106", AssemblyConnectors_P_P_A_Unconnected_Pattern_partB_LiteralInteger106);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", AssemblyConnectors_P_P_A_Unconnected_Pattern_r);
				AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd107.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd107", AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd107);
					AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd107_connectorEnd_2_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_2_Lower", AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd107_connectorEnd_2_Lower);
					AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd107_connectorEnd_2_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_2_Upper", AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd107_connectorEnd_2_Upper);
				AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd108.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd108", AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd108);
					AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd108_connectorEnd_1_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_1_Lower", AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd108_connectorEnd_1_Lower);
					AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd108_connectorEnd_1_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_1_Upper", AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd108_connectorEnd_1_Upper);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern.reset(new Operation());
			this->addToElementRepository("A_Unconnected_Pattern_A_Unconnected_Pattern", AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
				AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result);
		AssemblyConnectors_P_P_A_Array_Pattern.reset(new Class_());
		this->addToElementRepository("A_Array_Pattern", AssemblyConnectors_P_P_A_Array_Pattern);
			AssemblyConnectors_P_P_A_Array_Pattern_partB.reset(new Property());
			this->addToElementRepository("partB", AssemblyConnectors_P_P_A_Array_Pattern_partB);
				AssemblyConnectors_P_P_A_Array_Pattern_partB_LiteralInteger109.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger109", AssemblyConnectors_P_P_A_Array_Pattern_partB_LiteralInteger109);
				AssemblyConnectors_P_P_A_Array_Pattern_partB_LiteralUnlimitedNatural110.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural110", AssemblyConnectors_P_P_A_Array_Pattern_partB_LiteralUnlimitedNatural110);
			AssemblyConnectors_P_P_A_Array_Pattern_partC.reset(new Property());
			this->addToElementRepository("partC", AssemblyConnectors_P_P_A_Array_Pattern_partC);
				AssemblyConnectors_P_P_A_Array_Pattern_partC_LiteralUnlimitedNatural111.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural111", AssemblyConnectors_P_P_A_Array_Pattern_partC_LiteralUnlimitedNatural111);
				AssemblyConnectors_P_P_A_Array_Pattern_partC_LiteralInteger112.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger112", AssemblyConnectors_P_P_A_Array_Pattern_partC_LiteralInteger112);
			AssemblyConnectors_P_P_A_Array_Pattern_Comment113.reset(new Comment());
			this->addToElementRepository("Comment113", AssemblyConnectors_P_P_A_Array_Pattern_Comment113);
			AssemblyConnectors_P_P_A_Array_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", AssemblyConnectors_P_P_A_Array_Pattern_r);
				AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd114.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd114", AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd114);
					AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd114_connectorEnd_1_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_1_Lower", AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd114_connectorEnd_1_Lower);
					AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd114_connectorEnd_1_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_1_Upper", AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd114_connectorEnd_1_Upper);
				AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd115.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd115", AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd115);
					AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd115_connectorEnd_2_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_2_Lower", AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd115_connectorEnd_2_Lower);
					AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd115_connectorEnd_2_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_2_Upper", AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd115_connectorEnd_2_Upper);
			AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern.reset(new Operation());
			this->addToElementRepository("A_Array_Pattern_A_Array_Pattern", AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
				AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result);
		AssemblyConnectors_P_P_assert_A_Array_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Array_Pattern", AssemblyConnectors_P_P_assert_A_Array_Pattern);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_value);
					AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_value_LiteralInteger116.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger116", AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_value_LiteralInteger116);
					AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_value_LiteralUnlimitedNatural117.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural117", AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_value_LiteralUnlimitedNatural117);
					AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_value_LiteralInteger118.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger118", AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_value_LiteralInteger118);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus);
					AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural119.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural119", AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural119);
					AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger120.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger120", AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger120);
					AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger121.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger121", AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger121);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow122", AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122_LiteralBoolean123.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean123", AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122_LiteralBoolean123);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122_LiteralInteger124.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger124", AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122_LiteralInteger124);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", AssemblyConnectors_P_P_assert_A_Array_Pattern_message);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_message_LiteralString125.reset(new LiteralString());
				this->addToElementRepository("LiteralString125", AssemblyConnectors_P_P_assert_A_Array_Pattern_message_LiteralString125);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_P_P_assert_A_Array_Pattern_message_result);
					AssemblyConnectors_P_P_assert_A_Array_Pattern_message_result_LiteralInteger126.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger126", AssemblyConnectors_P_P_assert_A_Array_Pattern_message_result_LiteralInteger126);
					AssemblyConnectors_P_P_assert_A_Array_Pattern_message_result_LiteralUnlimitedNatural127.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural127", AssemblyConnectors_P_P_assert_A_Array_Pattern_message_result_LiteralUnlimitedNatural127);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Array_Pattern", AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Array_Pattern_node", AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger128.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger128", AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger128);
		AssemblyConnectors_P_P_instantiate_A_Star_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Star_Pattern", AssemblyConnectors_P_P_instantiate_A_Star_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Star_Pattern", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
					AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralUnlimitedNatural129.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural129", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralUnlimitedNatural129);
					AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralInteger130.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger130", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralInteger130);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Star_Pattern", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow131", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131_LiteralBoolean132.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean132", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131_LiteralBoolean132);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131_LiteralInteger133.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger133", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131_LiteralInteger133);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow134", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134_LiteralInteger135.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger135", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134_LiteralInteger135);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134_LiteralBoolean136.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean136", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134_LiteralBoolean136);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Star_Pattern()", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result);
					AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger137.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger137", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger137);
					AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralUnlimitedNatural138.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural138", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralUnlimitedNatural138);
					AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger139.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger139", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger139);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target);
					AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralUnlimitedNatural140.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural140", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralUnlimitedNatural140);
					AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralInteger141.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger141", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralInteger141);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Star_Pattern_node", AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node);
		AssemblyConnectors_P_P_instantiate_A_Array_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Array_Pattern", AssemblyConnectors_P_P_instantiate_A_Array_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Array_Pattern_node", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger142.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger142", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger142);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Array_Pattern()", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target);
					AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralUnlimitedNatural143.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural143", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralUnlimitedNatural143);
					AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralInteger144.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger144", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralInteger144);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result);
					AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger145.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger145", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger145);
					AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralUnlimitedNatural146.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural146", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralUnlimitedNatural146);
					AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger147.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger147", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger147);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow148", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148_LiteralInteger149.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger149", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148_LiteralInteger149);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148_LiteralBoolean150.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean150", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148_LiteralBoolean150);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Array_Pattern", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Array_Pattern", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
					AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralInteger151.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger151", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralInteger151);
					AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralUnlimitedNatural152.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural152", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralUnlimitedNatural152);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow153", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153_LiteralBoolean154.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean154", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153_LiteralBoolean154);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153_LiteralInteger155.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger155", AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153_LiteralInteger155);
		AssemblyConnectors_P_P_assert_A_Unconnected_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Unconnected_Pattern", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow156", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156_LiteralInteger157.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger157", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156_LiteralInteger157);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156_LiteralBoolean158.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean158", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156_LiteralBoolean158);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value);
					AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralUnlimitedNatural159.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural159", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralUnlimitedNatural159);
					AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger160.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger160", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger160);
					AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger161.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger161", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger161);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus);
					AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural162.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural162", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural162);
					AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger163.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger163", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger163);
					AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger164.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger164", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger164);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString165.reset(new LiteralString());
				this->addToElementRepository("LiteralString165", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString165);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_result);
					AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_result_LiteralInteger166.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger166", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_result_LiteralInteger166);
					AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_result_LiteralUnlimitedNatural167.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural167", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_result_LiteralUnlimitedNatural167);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Unconnected_Pattern_node", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node_LiteralInteger168.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger168", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node_LiteralInteger168);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Unconnected_Pattern", AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
		AssemblyConnectors_P_P_A_Empty_Pattern.reset(new Class_());
		this->addToElementRepository("A_Empty_Pattern", AssemblyConnectors_P_P_A_Empty_Pattern);
			AssemblyConnectors_P_P_A_Empty_Pattern_partB.reset(new Property());
			this->addToElementRepository("partB", AssemblyConnectors_P_P_A_Empty_Pattern_partB);
				AssemblyConnectors_P_P_A_Empty_Pattern_partB_LiteralInteger169.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger169", AssemblyConnectors_P_P_A_Empty_Pattern_partB_LiteralInteger169);
				AssemblyConnectors_P_P_A_Empty_Pattern_partB_LiteralUnlimitedNatural170.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural170", AssemblyConnectors_P_P_A_Empty_Pattern_partB_LiteralUnlimitedNatural170);
			AssemblyConnectors_P_P_A_Empty_Pattern_partC.reset(new Property());
			this->addToElementRepository("partC", AssemblyConnectors_P_P_A_Empty_Pattern_partC);
				AssemblyConnectors_P_P_A_Empty_Pattern_partC_LiteralInteger171.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger171", AssemblyConnectors_P_P_A_Empty_Pattern_partC_LiteralInteger171);
				AssemblyConnectors_P_P_A_Empty_Pattern_partC_LiteralUnlimitedNatural172.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural172", AssemblyConnectors_P_P_A_Empty_Pattern_partC_LiteralUnlimitedNatural172);
			AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern.reset(new Operation());
			this->addToElementRepository("A_Empty_Pattern_A_Empty_Pattern", AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
				AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result);
			AssemblyConnectors_P_P_A_Empty_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", AssemblyConnectors_P_P_A_Empty_Pattern_r);
				AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd173", AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173);
					AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173_connectorEnd_2_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_2_Upper", AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173_connectorEnd_2_Upper);
					AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173_connectorEnd_2_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_2_Lower", AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173_connectorEnd_2_Lower);
				AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd174.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd174", AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd174);
					AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd174_connectorEnd_1_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_1_Upper", AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd174_connectorEnd_1_Upper);
					AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd174_connectorEnd_1_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_1_Lower", AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd174_connectorEnd_1_Lower);
			AssemblyConnectors_P_P_A_Empty_Pattern_Comment175.reset(new Comment());
			this->addToElementRepository("Comment175", AssemblyConnectors_P_P_A_Empty_Pattern_Comment175);

	// Initialize public members
	/*
	 * Model AssemblyConnectors_P_P
	 */
	AssemblyConnectors_P_P->setThisPackagePtr(AssemblyConnectors_P_P);
	AssemblyConnectors_P_P->setName("AssemblyConnectors_P_P");
	AssemblyConnectors_P_P->setVisibility(VisibilityKind::public_);
		// Activity instantiate_A_Empty_Pattern
		AssemblyConnectors_P_P_instantiate_A_Empty_Pattern->setThisActivityPtr(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern);
		AssemblyConnectors_P_P_instantiate_A_Empty_Pattern->setName("instantiate_A_Empty_Pattern");
		AssemblyConnectors_P_P_instantiate_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Empty_Pattern
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern->setType(AssemblyConnectors_P_P_A_Empty_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern->setDirection(ParameterDirectionKind::return_);
		AssemblyConnectors_P_P_instantiate_A_Empty_Pattern->addOwnedParameter(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			// ActivityParameterNode a_Empty_Pattern_node
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setName("a_Empty_Pattern_node");
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setParameter(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern);
		AssemblyConnectors_P_P_instantiate_A_Empty_Pattern->addNode(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
			// CallOperationAction A_Empty_Pattern()
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setThisExecutableNodePtr(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setName("A_Empty_Pattern()");
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setName("result");
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setType(AssemblyConnectors_P_P_A_Empty_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->addResult(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setOperation(AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
				// InputPin target
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setName("target");
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setType(AssemblyConnectors_P_P_A_Empty_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setTarget(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
		AssemblyConnectors_P_P_instantiate_A_Empty_Pattern->addNode(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_);
			// CreateObjectAction Create A_Empty_Pattern
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setThisExecutableNodePtr(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setName("Create A_Empty_Pattern");
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setClassifier(AssemblyConnectors_P_P_A_Empty_Pattern);
				// OutputPin result
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setName("result");
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setType(AssemblyConnectors_P_P_A_Empty_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setResult(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
		AssemblyConnectors_P_P_instantiate_A_Empty_Pattern->addNode(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern);
			// ObjectFlow ObjectFlow0 from result to target
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0->setThisActivityEdgePtr(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0->setName("ObjectFlow0");
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0->setSource(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0->setTarget(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
				// LiteralBoolean LiteralBoolean2
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0_LiteralBoolean2->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0_LiteralBoolean2);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0_LiteralBoolean2->setName("LiteralBoolean2");
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0_LiteralBoolean2->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0_LiteralBoolean2->setValue(true);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0->setGuard(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0_LiteralBoolean2);
		AssemblyConnectors_P_P_instantiate_A_Empty_Pattern->addEdge(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow0);
			// ObjectFlow ObjectFlow3 from result to a_Empty_Pattern_node
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3->setThisActivityEdgePtr(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3->setName("ObjectFlow3");
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3->setSource(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3->setTarget(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
				// LiteralBoolean LiteralBoolean4
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3_LiteralBoolean4->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3_LiteralBoolean4);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3_LiteralBoolean4->setName("LiteralBoolean4");
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3_LiteralBoolean4->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3_LiteralBoolean4->setValue(true);
			AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3->setGuard(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3_LiteralBoolean4);
		AssemblyConnectors_P_P_instantiate_A_Empty_Pattern->addEdge(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern_ObjectFlow3);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern);
		// Class C
		AssemblyConnectors_P_P_C->setThisClass_Ptr(AssemblyConnectors_P_P_C);
		AssemblyConnectors_P_P_C->setName("C");
		AssemblyConnectors_P_P_C->setVisibility(VisibilityKind::public_);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_C);
		// Activity assert_A_Star_Pattern
		AssemblyConnectors_P_P_assert_A_Star_Pattern->setThisActivityPtr(AssemblyConnectors_P_P_assert_A_Star_Pattern);
		AssemblyConnectors_P_P_assert_A_Star_Pattern->setName("assert_A_Star_Pattern");
		AssemblyConnectors_P_P_assert_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Star_Pattern
			AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
			AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern->setType(AssemblyConnectors_P_P_A_Star_Pattern);
		AssemblyConnectors_P_P_assert_A_Star_Pattern->addOwnedParameter(AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern);
			// ActivityParameterNode a_Star_Pattern_node
			AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node->setName("a_Star_Pattern_node");
			AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node->setParameter(AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern);
		AssemblyConnectors_P_P_assert_A_Star_Pattern->addNode(AssemblyConnectors_P_P_assert_A_Star_Pattern_a_Star_Pattern_node);
			// ValueSpecificationAction message
			AssemblyConnectors_P_P_assert_A_Star_Pattern_message->setThisExecutableNodePtr(AssemblyConnectors_P_P_assert_A_Star_Pattern_message);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_message->setName("message");
			AssemblyConnectors_P_P_assert_A_Star_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString19
				AssemblyConnectors_P_P_assert_A_Star_Pattern_message_LiteralString19->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Star_Pattern_message_LiteralString19);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_message_LiteralString19->setName("LiteralString19");
				AssemblyConnectors_P_P_assert_A_Star_Pattern_message_LiteralString19->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_message_LiteralString19->setValue("Assertion currently not implemented for A_Star_Pattern.");
			AssemblyConnectors_P_P_assert_A_Star_Pattern_message->setValue(AssemblyConnectors_P_P_assert_A_Star_Pattern_message_LiteralString19);
				// OutputPin result
				AssemblyConnectors_P_P_assert_A_Star_Pattern_message_result->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Star_Pattern_message_result);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_message_result->setName("result");
				AssemblyConnectors_P_P_assert_A_Star_Pattern_message_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_message->setResult(AssemblyConnectors_P_P_assert_A_Star_Pattern_message_result);
		AssemblyConnectors_P_P_assert_A_Star_Pattern->addNode(AssemblyConnectors_P_P_assert_A_Star_Pattern_message);
			// CallBehaviorAction writeLine
			AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine->setThisExecutableNodePtr(AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine->setName("writeLine");
			AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus->setName("errorStatus");
				AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus->setLower(0);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine->addResult(AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_errorStatus);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_value->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_value);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_value->setName("value");
				AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine->addArgument(AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_value);
		AssemblyConnectors_P_P_assert_A_Star_Pattern->addNode(AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine);
			// ObjectFlow ObjectFlow14 from result to value
			AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14->setThisActivityEdgePtr(AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14->setName("ObjectFlow14");
			AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14->setSource(AssemblyConnectors_P_P_assert_A_Star_Pattern_message_result);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14->setTarget(AssemblyConnectors_P_P_assert_A_Star_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean16
				AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean16->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean16);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean16->setName("LiteralBoolean16");
				AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean16->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean16->setValue(true);
			AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14->setGuard(AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean16);
		AssemblyConnectors_P_P_assert_A_Star_Pattern->addEdge(AssemblyConnectors_P_P_assert_A_Star_Pattern_ObjectFlow14);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_assert_A_Star_Pattern);
		// Class B
		AssemblyConnectors_P_P_B->setThisClass_Ptr(AssemblyConnectors_P_P_B);
		AssemblyConnectors_P_P_B->setName("B");
		AssemblyConnectors_P_P_B->setVisibility(VisibilityKind::public_);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_B);
		// Class A_Star_Pattern
		AssemblyConnectors_P_P_A_Star_Pattern->setThisClass_Ptr(AssemblyConnectors_P_P_A_Star_Pattern);
		AssemblyConnectors_P_P_A_Star_Pattern->setName("A_Star_Pattern");
		AssemblyConnectors_P_P_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property partB
			AssemblyConnectors_P_P_A_Star_Pattern_partB->setThisElementPtr(AssemblyConnectors_P_P_A_Star_Pattern_partB);
			AssemblyConnectors_P_P_A_Star_Pattern_partB->setName("partB");
			AssemblyConnectors_P_P_A_Star_Pattern_partB->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_A_Star_Pattern_partB->setUpper(-1);
			AssemblyConnectors_P_P_A_Star_Pattern_partB->setLower(4);
			AssemblyConnectors_P_P_A_Star_Pattern_partB->setType(AssemblyConnectors_P_P_B);
			AssemblyConnectors_P_P_A_Star_Pattern_partB->setAggregation(AggregationKind::composite);
		AssemblyConnectors_P_P_A_Star_Pattern->addOwnedAttribute(AssemblyConnectors_P_P_A_Star_Pattern_partB);
			// Property partC
			AssemblyConnectors_P_P_A_Star_Pattern_partC->setThisElementPtr(AssemblyConnectors_P_P_A_Star_Pattern_partC);
			AssemblyConnectors_P_P_A_Star_Pattern_partC->setName("partC");
			AssemblyConnectors_P_P_A_Star_Pattern_partC->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_A_Star_Pattern_partC->setUpper(-1);
			AssemblyConnectors_P_P_A_Star_Pattern_partC->setLower(3);
			AssemblyConnectors_P_P_A_Star_Pattern_partC->setType(AssemblyConnectors_P_P_C);
			AssemblyConnectors_P_P_A_Star_Pattern_partC->setAggregation(AggregationKind::composite);
		AssemblyConnectors_P_P_A_Star_Pattern->addOwnedAttribute(AssemblyConnectors_P_P_A_Star_Pattern_partC);
		
		AssemblyConnectors_P_P_A_Star_Pattern_r->setName("r");
			AssemblyConnectors_P_P_A_Star_Pattern_r->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30->setUpper(-1);
				AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30->setLower(4);
				AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30->setRole(AssemblyConnectors_P_P_A_Star_Pattern_partB);
				
			AssemblyConnectors_P_P_A_Star_Pattern_r->addEnd(AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd30);
				AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd29->setUpper(-1);
				AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd29->setLower(3);
				AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd29->setRole(AssemblyConnectors_P_P_A_Star_Pattern_partC);
				
			AssemblyConnectors_P_P_A_Star_Pattern_r->addEnd(AssemblyConnectors_P_P_A_Star_Pattern_r_ConnectorEnd29);
			AssemblyConnectors_P_P_A_Star_Pattern_r->setType(AssemblyConnectors_P_P_R);
		AssemblyConnectors_P_P_A_Star_Pattern->addOwnedConnector(AssemblyConnectors_P_P_A_Star_Pattern_r);
			// Operation A_Star_Pattern_A_Star_Pattern
			AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setThisOperationPtr(AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
			AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setName("A_Star_Pattern_A_Star_Pattern");
			AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setThisElementPtr(AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
				AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setName("result");
				AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setType(AssemblyConnectors_P_P_A_Star_Pattern);
				AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setDirection(ParameterDirectionKind::return_);
			AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->addOwnedParameter(AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
		AssemblyConnectors_P_P_A_Star_Pattern->addOwnedOperation(AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_A_Star_Pattern);
		// Association R
		AssemblyConnectors_P_P_R->setThisAssociationPtr(AssemblyConnectors_P_P_R);
		AssemblyConnectors_P_P_R->setName("R");
		AssemblyConnectors_P_P_R->setVisibility(VisibilityKind::public_);
		AssemblyConnectors_P_P_R->addOwnedEnd(AssemblyConnectors_P_P_R_x);
		AssemblyConnectors_P_P_R->addOwnedEnd(AssemblyConnectors_P_P_R_y);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_R);
		// Activity main
		AssemblyConnectors_P_P_main->setThisActivityPtr(AssemblyConnectors_P_P_main);
		AssemblyConnectors_P_P_main->setName("main");
		AssemblyConnectors_P_P_main->setVisibility(VisibilityKind::public_);
			// CallBehaviorAction assert_A_Unconnected_Pattern
			AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern->setThisExecutableNodePtr(AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern);
			AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern->setName("assert_A_Unconnected_Pattern");
			AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern->setBehavior(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern);
				// InputPin a_Unconnected_Pattern
				AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
				AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
				AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(AssemblyConnectors_P_P_A_Unconnected_Pattern);
			AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern->addArgument(AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
		AssemblyConnectors_P_P_main->addNode(AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern);
			// CallBehaviorAction instantiate_A_Star_Pattern
			AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern->setThisExecutableNodePtr(AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern);
			AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern->setName("instantiate_A_Star_Pattern");
			AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Star_Pattern
				AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern);
				AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
				AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern->setType(AssemblyConnectors_P_P_A_Star_Pattern);
			AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern->addResult(AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern->setBehavior(AssemblyConnectors_P_P_instantiate_A_Star_Pattern);
		AssemblyConnectors_P_P_main->addNode(AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern);
			// CallBehaviorAction assert_A_Empty_Pattern
			AssemblyConnectors_P_P_main_assert_A_Empty_Pattern->setThisExecutableNodePtr(AssemblyConnectors_P_P_main_assert_A_Empty_Pattern);
			AssemblyConnectors_P_P_main_assert_A_Empty_Pattern->setName("assert_A_Empty_Pattern");
			AssemblyConnectors_P_P_main_assert_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_main_assert_A_Empty_Pattern->setBehavior(AssemblyConnectors_P_P_assert_A_Empty_Pattern);
				// InputPin a_Empty_Pattern
				AssemblyConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(AssemblyConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern);
				AssemblyConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
				AssemblyConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern->setType(AssemblyConnectors_P_P_A_Empty_Pattern);
			AssemblyConnectors_P_P_main_assert_A_Empty_Pattern->addArgument(AssemblyConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern);
		AssemblyConnectors_P_P_main->addNode(AssemblyConnectors_P_P_main_assert_A_Empty_Pattern);
			// CallBehaviorAction assert_A_Array_Pattern
			AssemblyConnectors_P_P_main_assert_A_Array_Pattern->setThisExecutableNodePtr(AssemblyConnectors_P_P_main_assert_A_Array_Pattern);
			AssemblyConnectors_P_P_main_assert_A_Array_Pattern->setName("assert_A_Array_Pattern");
			AssemblyConnectors_P_P_main_assert_A_Array_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_main_assert_A_Array_Pattern->setBehavior(AssemblyConnectors_P_P_assert_A_Array_Pattern);
				// InputPin a_Array_Pattern
				AssemblyConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(AssemblyConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern);
				AssemblyConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
				AssemblyConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern->setType(AssemblyConnectors_P_P_A_Array_Pattern);
			AssemblyConnectors_P_P_main_assert_A_Array_Pattern->addArgument(AssemblyConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern);
		AssemblyConnectors_P_P_main->addNode(AssemblyConnectors_P_P_main_assert_A_Array_Pattern);
			// CallBehaviorAction instantiate_A_Unconnected_Pattern
			AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern->setThisExecutableNodePtr(AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern);
			AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern->setName("instantiate_A_Unconnected_Pattern");
			AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Unconnected_Pattern
				AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
				AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
				AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(AssemblyConnectors_P_P_A_Unconnected_Pattern);
			AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern->addResult(AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern->setBehavior(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern);
		AssemblyConnectors_P_P_main->addNode(AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern);
			// CallBehaviorAction instantiate_A_Array_Pattern
			AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern->setThisExecutableNodePtr(AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern);
			AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern->setName("instantiate_A_Array_Pattern");
			AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Array_Pattern
				AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern);
				AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
				AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern->setType(AssemblyConnectors_P_P_A_Array_Pattern);
			AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern->addResult(AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern->setBehavior(AssemblyConnectors_P_P_instantiate_A_Array_Pattern);
		AssemblyConnectors_P_P_main->addNode(AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern);
			// CallBehaviorAction assert_A_Star_Pattern
			AssemblyConnectors_P_P_main_assert_A_Star_Pattern->setThisExecutableNodePtr(AssemblyConnectors_P_P_main_assert_A_Star_Pattern);
			AssemblyConnectors_P_P_main_assert_A_Star_Pattern->setName("assert_A_Star_Pattern");
			AssemblyConnectors_P_P_main_assert_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_main_assert_A_Star_Pattern->setBehavior(AssemblyConnectors_P_P_assert_A_Star_Pattern);
				// InputPin a_Star_Pattern
				AssemblyConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(AssemblyConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern);
				AssemblyConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
				AssemblyConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern->setType(AssemblyConnectors_P_P_A_Star_Pattern);
			AssemblyConnectors_P_P_main_assert_A_Star_Pattern->addArgument(AssemblyConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern);
		AssemblyConnectors_P_P_main->addNode(AssemblyConnectors_P_P_main_assert_A_Star_Pattern);
			// CallBehaviorAction instantiate_A_Empty_Pattern
			AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern->setThisExecutableNodePtr(AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern);
			AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern->setName("instantiate_A_Empty_Pattern");
			AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Empty_Pattern
				AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
				AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
				AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setType(AssemblyConnectors_P_P_A_Empty_Pattern);
			AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern->addResult(AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern->setBehavior(AssemblyConnectors_P_P_instantiate_A_Empty_Pattern);
		AssemblyConnectors_P_P_main->addNode(AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern);
			// ControlFlow ControlFlow52 from assert_A_Array_Pattern to instantiate_A_Star_Pattern
			AssemblyConnectors_P_P_main_ControlFlow52->setThisActivityEdgePtr(AssemblyConnectors_P_P_main_ControlFlow52);
			AssemblyConnectors_P_P_main_ControlFlow52->setName("ControlFlow52");
			AssemblyConnectors_P_P_main_ControlFlow52->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_main_ControlFlow52->setSource(AssemblyConnectors_P_P_main_assert_A_Array_Pattern);
			AssemblyConnectors_P_P_main_ControlFlow52->setTarget(AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern);
		AssemblyConnectors_P_P_main->addEdge(AssemblyConnectors_P_P_main_ControlFlow52);
			// ObjectFlow ObjectFlow40 from a_Star_Pattern to a_Star_Pattern
			AssemblyConnectors_P_P_main_ObjectFlow40->setThisActivityEdgePtr(AssemblyConnectors_P_P_main_ObjectFlow40);
			AssemblyConnectors_P_P_main_ObjectFlow40->setName("ObjectFlow40");
			AssemblyConnectors_P_P_main_ObjectFlow40->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_main_ObjectFlow40->setSource(AssemblyConnectors_P_P_main_instantiate_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_P_P_main_ObjectFlow40->setTarget(AssemblyConnectors_P_P_main_assert_A_Star_Pattern_a_Star_Pattern);
				// LiteralBoolean LiteralBoolean41
				AssemblyConnectors_P_P_main_ObjectFlow40_LiteralBoolean41->setThisElementPtr(AssemblyConnectors_P_P_main_ObjectFlow40_LiteralBoolean41);
				AssemblyConnectors_P_P_main_ObjectFlow40_LiteralBoolean41->setName("LiteralBoolean41");
				AssemblyConnectors_P_P_main_ObjectFlow40_LiteralBoolean41->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_main_ObjectFlow40_LiteralBoolean41->setValue(true);
			AssemblyConnectors_P_P_main_ObjectFlow40->setGuard(AssemblyConnectors_P_P_main_ObjectFlow40_LiteralBoolean41);
		AssemblyConnectors_P_P_main->addEdge(AssemblyConnectors_P_P_main_ObjectFlow40);
			// ControlFlow ControlFlow56 from assert_A_Empty_Pattern to instantiate_A_Unconnected_Pattern
			AssemblyConnectors_P_P_main_ControlFlow56->setThisActivityEdgePtr(AssemblyConnectors_P_P_main_ControlFlow56);
			AssemblyConnectors_P_P_main_ControlFlow56->setName("ControlFlow56");
			AssemblyConnectors_P_P_main_ControlFlow56->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_main_ControlFlow56->setSource(AssemblyConnectors_P_P_main_assert_A_Empty_Pattern);
			AssemblyConnectors_P_P_main_ControlFlow56->setTarget(AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern);
		AssemblyConnectors_P_P_main->addEdge(AssemblyConnectors_P_P_main_ControlFlow56);
			// ObjectFlow ObjectFlow43 from a_Unconnected_Pattern to a_Unconnected_Pattern
			AssemblyConnectors_P_P_main_ObjectFlow43->setThisActivityEdgePtr(AssemblyConnectors_P_P_main_ObjectFlow43);
			AssemblyConnectors_P_P_main_ObjectFlow43->setName("ObjectFlow43");
			AssemblyConnectors_P_P_main_ObjectFlow43->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_main_ObjectFlow43->setSource(AssemblyConnectors_P_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_P_P_main_ObjectFlow43->setTarget(AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
				// LiteralBoolean LiteralBoolean44
				AssemblyConnectors_P_P_main_ObjectFlow43_LiteralBoolean44->setThisElementPtr(AssemblyConnectors_P_P_main_ObjectFlow43_LiteralBoolean44);
				AssemblyConnectors_P_P_main_ObjectFlow43_LiteralBoolean44->setName("LiteralBoolean44");
				AssemblyConnectors_P_P_main_ObjectFlow43_LiteralBoolean44->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_main_ObjectFlow43_LiteralBoolean44->setValue(true);
			AssemblyConnectors_P_P_main_ObjectFlow43->setGuard(AssemblyConnectors_P_P_main_ObjectFlow43_LiteralBoolean44);
		AssemblyConnectors_P_P_main->addEdge(AssemblyConnectors_P_P_main_ObjectFlow43);
			// ObjectFlow ObjectFlow49 from a_Empty_Pattern to a_Empty_Pattern
			AssemblyConnectors_P_P_main_ObjectFlow49->setThisActivityEdgePtr(AssemblyConnectors_P_P_main_ObjectFlow49);
			AssemblyConnectors_P_P_main_ObjectFlow49->setName("ObjectFlow49");
			AssemblyConnectors_P_P_main_ObjectFlow49->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_main_ObjectFlow49->setSource(AssemblyConnectors_P_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_P_P_main_ObjectFlow49->setTarget(AssemblyConnectors_P_P_main_assert_A_Empty_Pattern_a_Empty_Pattern);
				// LiteralBoolean LiteralBoolean51
				AssemblyConnectors_P_P_main_ObjectFlow49_LiteralBoolean51->setThisElementPtr(AssemblyConnectors_P_P_main_ObjectFlow49_LiteralBoolean51);
				AssemblyConnectors_P_P_main_ObjectFlow49_LiteralBoolean51->setName("LiteralBoolean51");
				AssemblyConnectors_P_P_main_ObjectFlow49_LiteralBoolean51->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_main_ObjectFlow49_LiteralBoolean51->setValue(true);
			AssemblyConnectors_P_P_main_ObjectFlow49->setGuard(AssemblyConnectors_P_P_main_ObjectFlow49_LiteralBoolean51);
		AssemblyConnectors_P_P_main->addEdge(AssemblyConnectors_P_P_main_ObjectFlow49);
			// ObjectFlow ObjectFlow60 from a_Array_Pattern to a_Array_Pattern
			AssemblyConnectors_P_P_main_ObjectFlow60->setThisActivityEdgePtr(AssemblyConnectors_P_P_main_ObjectFlow60);
			AssemblyConnectors_P_P_main_ObjectFlow60->setName("ObjectFlow60");
			AssemblyConnectors_P_P_main_ObjectFlow60->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_main_ObjectFlow60->setSource(AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_P_P_main_ObjectFlow60->setTarget(AssemblyConnectors_P_P_main_assert_A_Array_Pattern_a_Array_Pattern);
				// LiteralBoolean LiteralBoolean61
				AssemblyConnectors_P_P_main_ObjectFlow60_LiteralBoolean61->setThisElementPtr(AssemblyConnectors_P_P_main_ObjectFlow60_LiteralBoolean61);
				AssemblyConnectors_P_P_main_ObjectFlow60_LiteralBoolean61->setName("LiteralBoolean61");
				AssemblyConnectors_P_P_main_ObjectFlow60_LiteralBoolean61->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_main_ObjectFlow60_LiteralBoolean61->setValue(true);
			AssemblyConnectors_P_P_main_ObjectFlow60->setGuard(AssemblyConnectors_P_P_main_ObjectFlow60_LiteralBoolean61);
		AssemblyConnectors_P_P_main->addEdge(AssemblyConnectors_P_P_main_ObjectFlow60);
			// ControlFlow ControlFlow66 from assert_A_Unconnected_Pattern to instantiate_A_Array_Pattern
			AssemblyConnectors_P_P_main_ControlFlow66->setThisActivityEdgePtr(AssemblyConnectors_P_P_main_ControlFlow66);
			AssemblyConnectors_P_P_main_ControlFlow66->setName("ControlFlow66");
			AssemblyConnectors_P_P_main_ControlFlow66->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_main_ControlFlow66->setSource(AssemblyConnectors_P_P_main_assert_A_Unconnected_Pattern);
			AssemblyConnectors_P_P_main_ControlFlow66->setTarget(AssemblyConnectors_P_P_main_instantiate_A_Array_Pattern);
		AssemblyConnectors_P_P_main->addEdge(AssemblyConnectors_P_P_main_ControlFlow66);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_main);
		// Activity instantiate_A_Unconnected_Pattern
		AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern->setThisActivityPtr(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern);
		AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern->setName("instantiate_A_Unconnected_Pattern");
		AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Unconnected_Pattern
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(AssemblyConnectors_P_P_A_Unconnected_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setDirection(ParameterDirectionKind::return_);
		AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern->addOwnedParameter(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			// CreateObjectAction Create A_Unconnected_Pattern
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setThisExecutableNodePtr(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setName("Create A_Unconnected_Pattern");
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setClassifier(AssemblyConnectors_P_P_A_Unconnected_Pattern);
				// OutputPin result
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setName("result");
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setType(AssemblyConnectors_P_P_A_Unconnected_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setResult(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
		AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern->addNode(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern);
			// ActivityParameterNode a_Unconnected_Pattern_node
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setName("a_Unconnected_Pattern_node");
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setParameter(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
		AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern->addNode(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			// CallOperationAction A_Unconnected_Pattern()
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setThisExecutableNodePtr(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setName("A_Unconnected_Pattern()");
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setName("result");
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setType(AssemblyConnectors_P_P_A_Unconnected_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->addResult(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setOperation(AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
				// InputPin target
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setName("target");
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setType(AssemblyConnectors_P_P_A_Unconnected_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setTarget(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
		AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern->addNode(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_);
			// ObjectFlow ObjectFlow78 from result to a_Unconnected_Pattern_node
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78->setThisActivityEdgePtr(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78->setName("ObjectFlow78");
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78->setSource(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78->setTarget(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
				// LiteralBoolean LiteralBoolean79
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78_LiteralBoolean79->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78_LiteralBoolean79);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78_LiteralBoolean79->setName("LiteralBoolean79");
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78_LiteralBoolean79->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78_LiteralBoolean79->setValue(true);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78->setGuard(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78_LiteralBoolean79);
		AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern->addEdge(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow78);
			// ObjectFlow ObjectFlow81 from result to target
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81->setThisActivityEdgePtr(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81->setName("ObjectFlow81");
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81->setSource(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81->setTarget(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
				// LiteralBoolean LiteralBoolean82
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82->setName("LiteralBoolean82");
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82->setValue(true);
			AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81->setGuard(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81_LiteralBoolean82);
		AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern->addEdge(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern_ObjectFlow81);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_instantiate_A_Unconnected_Pattern);
		// Activity assert_A_Empty_Pattern
		AssemblyConnectors_P_P_assert_A_Empty_Pattern->setThisActivityPtr(AssemblyConnectors_P_P_assert_A_Empty_Pattern);
		AssemblyConnectors_P_P_assert_A_Empty_Pattern->setName("assert_A_Empty_Pattern");
		AssemblyConnectors_P_P_assert_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Empty_Pattern
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern->setType(AssemblyConnectors_P_P_A_Empty_Pattern);
		AssemblyConnectors_P_P_assert_A_Empty_Pattern->addOwnedParameter(AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern);
			// CallBehaviorAction writeLine
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine->setThisExecutableNodePtr(AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine->setName("writeLine");
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus->setName("errorStatus");
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus->setLower(0);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine->addResult(AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_errorStatus);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_value->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_value);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_value->setName("value");
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine->addArgument(AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_value);
		AssemblyConnectors_P_P_assert_A_Empty_Pattern->addNode(AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine);
			// ValueSpecificationAction message
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_message->setThisExecutableNodePtr(AssemblyConnectors_P_P_assert_A_Empty_Pattern_message);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_message->setName("message");
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString100
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString100->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString100);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString100->setName("LiteralString100");
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString100->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString100->setValue("Assertion currently not implemented for A_Empty_Pattern.");
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_message->setValue(AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_LiteralString100);
				// OutputPin result
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_result->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_result);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_result->setName("result");
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_message->setResult(AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_result);
		AssemblyConnectors_P_P_assert_A_Empty_Pattern->addNode(AssemblyConnectors_P_P_assert_A_Empty_Pattern_message);
			// ActivityParameterNode a_Empty_Pattern_node
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node->setName("a_Empty_Pattern_node");
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node->setParameter(AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern);
		AssemblyConnectors_P_P_assert_A_Empty_Pattern->addNode(AssemblyConnectors_P_P_assert_A_Empty_Pattern_a_Empty_Pattern_node);
			// ObjectFlow ObjectFlow95 from result to value
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95->setThisActivityEdgePtr(AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95->setName("ObjectFlow95");
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95->setSource(AssemblyConnectors_P_P_assert_A_Empty_Pattern_message_result);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95->setTarget(AssemblyConnectors_P_P_assert_A_Empty_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean96
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95_LiteralBoolean96->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95_LiteralBoolean96);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95_LiteralBoolean96->setName("LiteralBoolean96");
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95_LiteralBoolean96->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95_LiteralBoolean96->setValue(true);
			AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95->setGuard(AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95_LiteralBoolean96);
		AssemblyConnectors_P_P_assert_A_Empty_Pattern->addEdge(AssemblyConnectors_P_P_assert_A_Empty_Pattern_ObjectFlow95);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_assert_A_Empty_Pattern);
		// Class A_Unconnected_Pattern
		AssemblyConnectors_P_P_A_Unconnected_Pattern->setThisClass_Ptr(AssemblyConnectors_P_P_A_Unconnected_Pattern);
		AssemblyConnectors_P_P_A_Unconnected_Pattern->setName("A_Unconnected_Pattern");
		AssemblyConnectors_P_P_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property partB
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partB->setThisElementPtr(AssemblyConnectors_P_P_A_Unconnected_Pattern_partB);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partB->setName("partB");
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partB->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partB->setUpper(-1);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partB->setLower(2);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partB->setType(AssemblyConnectors_P_P_B);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partB->setAggregation(AggregationKind::composite);
		AssemblyConnectors_P_P_A_Unconnected_Pattern->addOwnedAttribute(AssemblyConnectors_P_P_A_Unconnected_Pattern_partB);
			// Property partC
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partC->setThisElementPtr(AssemblyConnectors_P_P_A_Unconnected_Pattern_partC);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partC->setName("partC");
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partC->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partC->setUpper(-1);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partC->setLower(3);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partC->setType(AssemblyConnectors_P_P_C);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_partC->setAggregation(AggregationKind::composite);
		AssemblyConnectors_P_P_A_Unconnected_Pattern->addOwnedAttribute(AssemblyConnectors_P_P_A_Unconnected_Pattern_partC);
		
		AssemblyConnectors_P_P_A_Unconnected_Pattern_r->setName("r");
			AssemblyConnectors_P_P_A_Unconnected_Pattern_r->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd108->setUpper(-1);
				AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd108->setLower(0);
				AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd108->setRole(AssemblyConnectors_P_P_A_Unconnected_Pattern_partB);
				
			AssemblyConnectors_P_P_A_Unconnected_Pattern_r->addEnd(AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd108);
				AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd107->setUpper(-1);
				AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd107->setLower(0);
				AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd107->setRole(AssemblyConnectors_P_P_A_Unconnected_Pattern_partC);
				
			AssemblyConnectors_P_P_A_Unconnected_Pattern_r->addEnd(AssemblyConnectors_P_P_A_Unconnected_Pattern_r_ConnectorEnd107);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_r->setType(AssemblyConnectors_P_P_R);
		AssemblyConnectors_P_P_A_Unconnected_Pattern->addOwnedConnector(AssemblyConnectors_P_P_A_Unconnected_Pattern_r);
			// Operation A_Unconnected_Pattern_A_Unconnected_Pattern
			AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->setThisOperationPtr(AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->setName("A_Unconnected_Pattern_A_Unconnected_Pattern");
			AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setThisElementPtr(AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result);
				AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setName("result");
				AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setType(AssemblyConnectors_P_P_A_Unconnected_Pattern);
				AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setDirection(ParameterDirectionKind::return_);
			AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->addOwnedParameter(AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result);
		AssemblyConnectors_P_P_A_Unconnected_Pattern->addOwnedOperation(AssemblyConnectors_P_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_A_Unconnected_Pattern);
		// Class A_Array_Pattern
		AssemblyConnectors_P_P_A_Array_Pattern->setThisClass_Ptr(AssemblyConnectors_P_P_A_Array_Pattern);
		AssemblyConnectors_P_P_A_Array_Pattern->setName("A_Array_Pattern");
		AssemblyConnectors_P_P_A_Array_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property partB
			AssemblyConnectors_P_P_A_Array_Pattern_partB->setThisElementPtr(AssemblyConnectors_P_P_A_Array_Pattern_partB);
			AssemblyConnectors_P_P_A_Array_Pattern_partB->setName("partB");
			AssemblyConnectors_P_P_A_Array_Pattern_partB->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_A_Array_Pattern_partB->setUpper(-1);
			AssemblyConnectors_P_P_A_Array_Pattern_partB->setLower(4);
			AssemblyConnectors_P_P_A_Array_Pattern_partB->setType(AssemblyConnectors_P_P_B);
			AssemblyConnectors_P_P_A_Array_Pattern_partB->setAggregation(AggregationKind::composite);
		AssemblyConnectors_P_P_A_Array_Pattern->addOwnedAttribute(AssemblyConnectors_P_P_A_Array_Pattern_partB);
			// Property partC
			AssemblyConnectors_P_P_A_Array_Pattern_partC->setThisElementPtr(AssemblyConnectors_P_P_A_Array_Pattern_partC);
			AssemblyConnectors_P_P_A_Array_Pattern_partC->setName("partC");
			AssemblyConnectors_P_P_A_Array_Pattern_partC->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_A_Array_Pattern_partC->setUpper(-1);
			AssemblyConnectors_P_P_A_Array_Pattern_partC->setLower(4);
			AssemblyConnectors_P_P_A_Array_Pattern_partC->setType(AssemblyConnectors_P_P_C);
			AssemblyConnectors_P_P_A_Array_Pattern_partC->setAggregation(AggregationKind::composite);
		AssemblyConnectors_P_P_A_Array_Pattern->addOwnedAttribute(AssemblyConnectors_P_P_A_Array_Pattern_partC);
		
		AssemblyConnectors_P_P_A_Array_Pattern_r->setName("r");
			AssemblyConnectors_P_P_A_Array_Pattern_r->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd114->setUpper(-1);
				AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd114->setRole(AssemblyConnectors_P_P_A_Array_Pattern_partB);
				
			AssemblyConnectors_P_P_A_Array_Pattern_r->addEnd(AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd114);
				AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd115->setUpper(-1);
				AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd115->setRole(AssemblyConnectors_P_P_A_Array_Pattern_partC);
				
			AssemblyConnectors_P_P_A_Array_Pattern_r->addEnd(AssemblyConnectors_P_P_A_Array_Pattern_r_ConnectorEnd115);
			AssemblyConnectors_P_P_A_Array_Pattern_r->setType(AssemblyConnectors_P_P_R);
		AssemblyConnectors_P_P_A_Array_Pattern->addOwnedConnector(AssemblyConnectors_P_P_A_Array_Pattern_r);
			// Operation A_Array_Pattern_A_Array_Pattern
			AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->setThisOperationPtr(AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
			AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->setName("A_Array_Pattern_A_Array_Pattern");
			AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setThisElementPtr(AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result);
				AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setName("result");
				AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setType(AssemblyConnectors_P_P_A_Array_Pattern);
				AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setDirection(ParameterDirectionKind::return_);
			AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->addOwnedParameter(AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result);
		AssemblyConnectors_P_P_A_Array_Pattern->addOwnedOperation(AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_A_Array_Pattern);
		// Activity assert_A_Array_Pattern
		AssemblyConnectors_P_P_assert_A_Array_Pattern->setThisActivityPtr(AssemblyConnectors_P_P_assert_A_Array_Pattern);
		AssemblyConnectors_P_P_assert_A_Array_Pattern->setName("assert_A_Array_Pattern");
		AssemblyConnectors_P_P_assert_A_Array_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Array_Pattern
			AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
			AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern->setType(AssemblyConnectors_P_P_A_Array_Pattern);
		AssemblyConnectors_P_P_assert_A_Array_Pattern->addOwnedParameter(AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern);
			// CallBehaviorAction writeLine
			AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine->setThisExecutableNodePtr(AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine->setName("writeLine");
			AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus->setName("errorStatus");
				AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus->setLower(0);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine->addResult(AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_errorStatus);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_value->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_value);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_value->setName("value");
				AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine->addArgument(AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_value);
		AssemblyConnectors_P_P_assert_A_Array_Pattern->addNode(AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine);
			// ValueSpecificationAction message
			AssemblyConnectors_P_P_assert_A_Array_Pattern_message->setThisExecutableNodePtr(AssemblyConnectors_P_P_assert_A_Array_Pattern_message);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_message->setName("message");
			AssemblyConnectors_P_P_assert_A_Array_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString125
				AssemblyConnectors_P_P_assert_A_Array_Pattern_message_LiteralString125->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Array_Pattern_message_LiteralString125);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_message_LiteralString125->setName("LiteralString125");
				AssemblyConnectors_P_P_assert_A_Array_Pattern_message_LiteralString125->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_message_LiteralString125->setValue("Assertion currently not implemented for A_Array_Pattern.");
			AssemblyConnectors_P_P_assert_A_Array_Pattern_message->setValue(AssemblyConnectors_P_P_assert_A_Array_Pattern_message_LiteralString125);
				// OutputPin result
				AssemblyConnectors_P_P_assert_A_Array_Pattern_message_result->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Array_Pattern_message_result);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_message_result->setName("result");
				AssemblyConnectors_P_P_assert_A_Array_Pattern_message_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_message->setResult(AssemblyConnectors_P_P_assert_A_Array_Pattern_message_result);
		AssemblyConnectors_P_P_assert_A_Array_Pattern->addNode(AssemblyConnectors_P_P_assert_A_Array_Pattern_message);
			// ActivityParameterNode a_Array_Pattern_node
			AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node->setName("a_Array_Pattern_node");
			AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node->setParameter(AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern);
		AssemblyConnectors_P_P_assert_A_Array_Pattern->addNode(AssemblyConnectors_P_P_assert_A_Array_Pattern_a_Array_Pattern_node);
			// ObjectFlow ObjectFlow122 from result to value
			AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122->setThisActivityEdgePtr(AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122->setName("ObjectFlow122");
			AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122->setSource(AssemblyConnectors_P_P_assert_A_Array_Pattern_message_result);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122->setTarget(AssemblyConnectors_P_P_assert_A_Array_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean123
				AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122_LiteralBoolean123->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122_LiteralBoolean123);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122_LiteralBoolean123->setName("LiteralBoolean123");
				AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122_LiteralBoolean123->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122_LiteralBoolean123->setValue(true);
			AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122->setGuard(AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122_LiteralBoolean123);
		AssemblyConnectors_P_P_assert_A_Array_Pattern->addEdge(AssemblyConnectors_P_P_assert_A_Array_Pattern_ObjectFlow122);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_assert_A_Array_Pattern);
		// Activity instantiate_A_Star_Pattern
		AssemblyConnectors_P_P_instantiate_A_Star_Pattern->setThisActivityPtr(AssemblyConnectors_P_P_instantiate_A_Star_Pattern);
		AssemblyConnectors_P_P_instantiate_A_Star_Pattern->setName("instantiate_A_Star_Pattern");
		AssemblyConnectors_P_P_instantiate_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Star_Pattern
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern->setType(AssemblyConnectors_P_P_A_Star_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern->setDirection(ParameterDirectionKind::return_);
		AssemblyConnectors_P_P_instantiate_A_Star_Pattern->addOwnedParameter(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern);
			// CreateObjectAction Create A_Star_Pattern
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setThisExecutableNodePtr(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setName("Create A_Star_Pattern");
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setClassifier(AssemblyConnectors_P_P_A_Star_Pattern);
				// OutputPin result
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setName("result");
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setType(AssemblyConnectors_P_P_A_Star_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setResult(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
		AssemblyConnectors_P_P_instantiate_A_Star_Pattern->addNode(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern);
			// CallOperationAction A_Star_Pattern()
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_->setThisExecutableNodePtr(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_->setName("A_Star_Pattern()");
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result->setName("result");
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result->setType(AssemblyConnectors_P_P_A_Star_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_->addResult(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_->setOperation(AssemblyConnectors_P_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
				// InputPin target
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target->setName("target");
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target->setType(AssemblyConnectors_P_P_A_Star_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_->setTarget(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target);
		AssemblyConnectors_P_P_instantiate_A_Star_Pattern->addNode(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern_);
			// ActivityParameterNode a_Star_Pattern_node
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node->setName("a_Star_Pattern_node");
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node->setParameter(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern);
		AssemblyConnectors_P_P_instantiate_A_Star_Pattern->addNode(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node);
			// ObjectFlow ObjectFlow131 from result to target
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131->setThisActivityEdgePtr(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131->setName("ObjectFlow131");
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131->setSource(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131->setTarget(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__target);
				// LiteralBoolean LiteralBoolean132
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131_LiteralBoolean132->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131_LiteralBoolean132);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131_LiteralBoolean132->setName("LiteralBoolean132");
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131_LiteralBoolean132->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131_LiteralBoolean132->setValue(true);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131->setGuard(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131_LiteralBoolean132);
		AssemblyConnectors_P_P_instantiate_A_Star_Pattern->addEdge(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow131);
			// ObjectFlow ObjectFlow134 from result to a_Star_Pattern_node
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134->setThisActivityEdgePtr(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134->setName("ObjectFlow134");
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134->setSource(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_A_Star_Pattern__result);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134->setTarget(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_a_Star_Pattern_node);
				// LiteralBoolean LiteralBoolean136
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134_LiteralBoolean136->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134_LiteralBoolean136);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134_LiteralBoolean136->setName("LiteralBoolean136");
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134_LiteralBoolean136->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134_LiteralBoolean136->setValue(true);
			AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134->setGuard(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134_LiteralBoolean136);
		AssemblyConnectors_P_P_instantiate_A_Star_Pattern->addEdge(AssemblyConnectors_P_P_instantiate_A_Star_Pattern_ObjectFlow134);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_instantiate_A_Star_Pattern);
		// Activity instantiate_A_Array_Pattern
		AssemblyConnectors_P_P_instantiate_A_Array_Pattern->setThisActivityPtr(AssemblyConnectors_P_P_instantiate_A_Array_Pattern);
		AssemblyConnectors_P_P_instantiate_A_Array_Pattern->setName("instantiate_A_Array_Pattern");
		AssemblyConnectors_P_P_instantiate_A_Array_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Array_Pattern
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern->setType(AssemblyConnectors_P_P_A_Array_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern->setDirection(ParameterDirectionKind::return_);
		AssemblyConnectors_P_P_instantiate_A_Array_Pattern->addOwnedParameter(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern);
			// ActivityParameterNode a_Array_Pattern_node
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node->setName("a_Array_Pattern_node");
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node->setParameter(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern);
		AssemblyConnectors_P_P_instantiate_A_Array_Pattern->addNode(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node);
			// CallOperationAction A_Array_Pattern()
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_->setThisExecutableNodePtr(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_->setName("A_Array_Pattern()");
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result->setName("result");
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result->setType(AssemblyConnectors_P_P_A_Array_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_->addResult(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_->setOperation(AssemblyConnectors_P_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
				// InputPin target
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target->setName("target");
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target->setType(AssemblyConnectors_P_P_A_Array_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_->setTarget(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target);
		AssemblyConnectors_P_P_instantiate_A_Array_Pattern->addNode(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern_);
			// CreateObjectAction Create A_Array_Pattern
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setThisExecutableNodePtr(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setName("Create A_Array_Pattern");
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setClassifier(AssemblyConnectors_P_P_A_Array_Pattern);
				// OutputPin result
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setName("result");
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setType(AssemblyConnectors_P_P_A_Array_Pattern);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setResult(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
		AssemblyConnectors_P_P_instantiate_A_Array_Pattern->addNode(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern);
			// ObjectFlow ObjectFlow148 from result to target
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148->setThisActivityEdgePtr(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148->setName("ObjectFlow148");
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148->setSource(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148->setTarget(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__target);
				// LiteralBoolean LiteralBoolean150
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148_LiteralBoolean150->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148_LiteralBoolean150);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148_LiteralBoolean150->setName("LiteralBoolean150");
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148_LiteralBoolean150->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148_LiteralBoolean150->setValue(true);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148->setGuard(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148_LiteralBoolean150);
		AssemblyConnectors_P_P_instantiate_A_Array_Pattern->addEdge(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow148);
			// ObjectFlow ObjectFlow153 from result to a_Array_Pattern_node
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153->setThisActivityEdgePtr(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153->setName("ObjectFlow153");
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153->setSource(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_A_Array_Pattern__result);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153->setTarget(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_a_Array_Pattern_node);
				// LiteralBoolean LiteralBoolean154
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153_LiteralBoolean154->setThisElementPtr(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153_LiteralBoolean154);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153_LiteralBoolean154->setName("LiteralBoolean154");
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153_LiteralBoolean154->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153_LiteralBoolean154->setValue(true);
			AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153->setGuard(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153_LiteralBoolean154);
		AssemblyConnectors_P_P_instantiate_A_Array_Pattern->addEdge(AssemblyConnectors_P_P_instantiate_A_Array_Pattern_ObjectFlow153);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_instantiate_A_Array_Pattern);
		// Activity assert_A_Unconnected_Pattern
		AssemblyConnectors_P_P_assert_A_Unconnected_Pattern->setThisActivityPtr(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern);
		AssemblyConnectors_P_P_assert_A_Unconnected_Pattern->setName("assert_A_Unconnected_Pattern");
		AssemblyConnectors_P_P_assert_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Unconnected_Pattern
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(AssemblyConnectors_P_P_A_Unconnected_Pattern);
		AssemblyConnectors_P_P_assert_A_Unconnected_Pattern->addOwnedParameter(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
			// CallBehaviorAction writeLine
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine->setThisExecutableNodePtr(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine->setName("writeLine");
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus->setName("errorStatus");
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus->setLower(0);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine->addResult(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_errorStatus);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value->setName("value");
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine->addArgument(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value);
		AssemblyConnectors_P_P_assert_A_Unconnected_Pattern->addNode(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine);
			// ValueSpecificationAction message
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message->setThisExecutableNodePtr(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message->setName("message");
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString165
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString165->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString165);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString165->setName("LiteralString165");
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString165->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString165->setValue("Assertion currently not implemented for A_Unconnected_Pattern.");
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message->setValue(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_LiteralString165);
				// OutputPin result
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_result->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_result);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_result->setName("result");
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message->setResult(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_result);
		AssemblyConnectors_P_P_assert_A_Unconnected_Pattern->addNode(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message);
			// ActivityParameterNode a_Unconnected_Pattern_node
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setName("a_Unconnected_Pattern_node");
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setParameter(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
		AssemblyConnectors_P_P_assert_A_Unconnected_Pattern->addNode(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			// ObjectFlow ObjectFlow156 from result to value
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156->setThisActivityEdgePtr(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156->setName("ObjectFlow156");
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156->setSource(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_message_result);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156->setTarget(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean158
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156_LiteralBoolean158->setThisElementPtr(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156_LiteralBoolean158);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156_LiteralBoolean158->setName("LiteralBoolean158");
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156_LiteralBoolean158->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156_LiteralBoolean158->setValue(true);
			AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156->setGuard(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156_LiteralBoolean158);
		AssemblyConnectors_P_P_assert_A_Unconnected_Pattern->addEdge(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern_ObjectFlow156);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_assert_A_Unconnected_Pattern);
		// Class A_Empty_Pattern
		AssemblyConnectors_P_P_A_Empty_Pattern->setThisClass_Ptr(AssemblyConnectors_P_P_A_Empty_Pattern);
		AssemblyConnectors_P_P_A_Empty_Pattern->setName("A_Empty_Pattern");
		AssemblyConnectors_P_P_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property partB
			AssemblyConnectors_P_P_A_Empty_Pattern_partB->setThisElementPtr(AssemblyConnectors_P_P_A_Empty_Pattern_partB);
			AssemblyConnectors_P_P_A_Empty_Pattern_partB->setName("partB");
			AssemblyConnectors_P_P_A_Empty_Pattern_partB->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_A_Empty_Pattern_partB->setUpper(-1);
			AssemblyConnectors_P_P_A_Empty_Pattern_partB->setLower(0);
			AssemblyConnectors_P_P_A_Empty_Pattern_partB->setType(AssemblyConnectors_P_P_B);
			AssemblyConnectors_P_P_A_Empty_Pattern_partB->setAggregation(AggregationKind::composite);
		AssemblyConnectors_P_P_A_Empty_Pattern->addOwnedAttribute(AssemblyConnectors_P_P_A_Empty_Pattern_partB);
			// Property partC
			AssemblyConnectors_P_P_A_Empty_Pattern_partC->setThisElementPtr(AssemblyConnectors_P_P_A_Empty_Pattern_partC);
			AssemblyConnectors_P_P_A_Empty_Pattern_partC->setName("partC");
			AssemblyConnectors_P_P_A_Empty_Pattern_partC->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_P_P_A_Empty_Pattern_partC->setUpper(-1);
			AssemblyConnectors_P_P_A_Empty_Pattern_partC->setLower(0);
			AssemblyConnectors_P_P_A_Empty_Pattern_partC->setType(AssemblyConnectors_P_P_C);
			AssemblyConnectors_P_P_A_Empty_Pattern_partC->setAggregation(AggregationKind::composite);
		AssemblyConnectors_P_P_A_Empty_Pattern->addOwnedAttribute(AssemblyConnectors_P_P_A_Empty_Pattern_partC);
		
		AssemblyConnectors_P_P_A_Empty_Pattern_r->setName("r");
			AssemblyConnectors_P_P_A_Empty_Pattern_r->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd174->setUpper(-1);
				AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd174->setRole(AssemblyConnectors_P_P_A_Empty_Pattern_partB);
				
			AssemblyConnectors_P_P_A_Empty_Pattern_r->addEnd(AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd174);
				AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173->setUpper(-1);
				AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173->setRole(AssemblyConnectors_P_P_A_Empty_Pattern_partC);
				
			AssemblyConnectors_P_P_A_Empty_Pattern_r->addEnd(AssemblyConnectors_P_P_A_Empty_Pattern_r_ConnectorEnd173);
			AssemblyConnectors_P_P_A_Empty_Pattern_r->setType(AssemblyConnectors_P_P_R);
		AssemblyConnectors_P_P_A_Empty_Pattern->addOwnedConnector(AssemblyConnectors_P_P_A_Empty_Pattern_r);
			// Operation A_Empty_Pattern_A_Empty_Pattern
			AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->setThisOperationPtr(AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
			AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->setName("A_Empty_Pattern_A_Empty_Pattern");
			AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setThisElementPtr(AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result);
				AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setName("result");
				AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setType(AssemblyConnectors_P_P_A_Empty_Pattern);
				AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setDirection(ParameterDirectionKind::return_);
			AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->addOwnedParameter(AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result);
		AssemblyConnectors_P_P_A_Empty_Pattern->addOwnedOperation(AssemblyConnectors_P_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
	AssemblyConnectors_P_P->addPackagedElement(AssemblyConnectors_P_P_A_Empty_Pattern);
}
