/*
 * AssemblyConnectors_PWP_PModel.cpp
 * 
 * Auto-generated file
 */

#include "AssemblyConnectors_PWP_PModel.h"

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

using namespace AssemblyConnectors_PWP_P;
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

AssemblyConnectors_PWP_PModel::AssemblyConnectors_PWP_PModel()
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

AssemblyConnectors_PWP_PModel::~AssemblyConnectors_PWP_PModel()
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

const std::shared_ptr<AssemblyConnectors_PWP_PModel>& AssemblyConnectors_PWP_PModel::Instance()
{
	static std::shared_ptr<AssemblyConnectors_PWP_PModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new AssemblyConnectors_PWP_PModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void AssemblyConnectors_PWP_PModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model AssemblyConnectors_PWP_P
	 */
	AssemblyConnectors_PWP_P.reset(new Package());
	this->addToElementRepository("AssemblyConnectors_PWP_P", AssemblyConnectors_PWP_P);
		AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Empty_Pattern", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Empty_Pattern()", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
					AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralInteger0.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger0", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralInteger0);
					AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralUnlimitedNatural1.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural1", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target_LiteralUnlimitedNatural1);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
					AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger2.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger2", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger2);
					AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger3.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger3", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralInteger3);
					AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralUnlimitedNatural4.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural4", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result_LiteralUnlimitedNatural4);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow5", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5_LiteralBoolean6.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean6", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5_LiteralBoolean6);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5_LiteralInteger7.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger7", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5_LiteralInteger7);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow8", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8_LiteralInteger9.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger9", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8_LiteralInteger9);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8_LiteralBoolean10.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean10", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8_LiteralBoolean10);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Empty_Pattern", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Empty_Pattern_node", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Empty_Pattern", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
					AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralUnlimitedNatural11.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural11", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralUnlimitedNatural11);
					AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralInteger12.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger12", AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result_LiteralInteger12);
		AssemblyConnectors_PWP_P_assert_A_Star_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Star_Pattern", AssemblyConnectors_PWP_P_assert_A_Star_Pattern);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Star_Pattern_node", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern_node);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern_node_LiteralInteger13.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger13", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern_node_LiteralInteger13);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Star_Pattern", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow14", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean15.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean15", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean15);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14_LiteralInteger16.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger16", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14_LiteralInteger16);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_LiteralString17.reset(new LiteralString());
				this->addToElementRepository("LiteralString17", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_LiteralString17);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_result);
					AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_result_LiteralInteger18.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger18", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_result_LiteralInteger18);
					AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_result_LiteralUnlimitedNatural19.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural19", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_result_LiteralUnlimitedNatural19);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_errorStatus);
					AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger20.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger20", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger20);
					AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger21.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger21", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralInteger21);
					AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural22.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural22", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural22);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_value);
					AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_value_LiteralUnlimitedNatural23.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural23", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_value_LiteralUnlimitedNatural23);
					AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_value_LiteralInteger24.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger24", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_value_LiteralInteger24);
					AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_value_LiteralInteger25.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger25", AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_value_LiteralInteger25);
		AssemblyConnectors_PWP_P_C.reset(new Class_());
		this->addToElementRepository("C", AssemblyConnectors_PWP_P_C);
		AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Star_Pattern", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Star_Pattern_node", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern_node);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Star_Pattern", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
					AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralInteger26.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger26", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralInteger26);
					AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralUnlimitedNatural27.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural27", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result_LiteralUnlimitedNatural27);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Star_Pattern()", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern_);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__target);
					AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralUnlimitedNatural28.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural28", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralUnlimitedNatural28);
					AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralInteger29.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger29", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__target_LiteralInteger29);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__result);
					AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger30.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger30", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger30);
					AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger31.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger31", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralInteger31);
					AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralUnlimitedNatural32.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural32", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__result_LiteralUnlimitedNatural32);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Star_Pattern", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow33", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33_LiteralInteger34.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger34", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33_LiteralInteger34);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33_LiteralBoolean35.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean35", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33_LiteralBoolean35);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow36", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36_LiteralBoolean37.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean37", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36_LiteralBoolean37);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36_LiteralInteger38.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger38", AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36_LiteralInteger38);
		AssemblyConnectors_PWP_P_B.reset(new Class_());
		this->addToElementRepository("B", AssemblyConnectors_PWP_P_B);
			AssemblyConnectors_PWP_P_B_p.reset(new Port());
			this->addToElementRepository("p", AssemblyConnectors_PWP_P_B_p);
				AssemblyConnectors_PWP_P_B_p_LiteralUnlimitedNatural39.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural39", AssemblyConnectors_PWP_P_B_p_LiteralUnlimitedNatural39);
				AssemblyConnectors_PWP_P_B_p_LiteralInteger40.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger40", AssemblyConnectors_PWP_P_B_p_LiteralInteger40);
		AssemblyConnectors_PWP_P_A_Star_Pattern.reset(new Class_());
		this->addToElementRepository("A_Star_Pattern", AssemblyConnectors_PWP_P_A_Star_Pattern);
			AssemblyConnectors_PWP_P_A_Star_Pattern_Comment41.reset(new Comment());
			this->addToElementRepository("Comment41", AssemblyConnectors_PWP_P_A_Star_Pattern_Comment41);
			AssemblyConnectors_PWP_P_A_Star_Pattern_partC.reset(new Property());
			this->addToElementRepository("partC", AssemblyConnectors_PWP_P_A_Star_Pattern_partC);
				AssemblyConnectors_PWP_P_A_Star_Pattern_partC_LiteralUnlimitedNatural42.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural42", AssemblyConnectors_PWP_P_A_Star_Pattern_partC_LiteralUnlimitedNatural42);
				AssemblyConnectors_PWP_P_A_Star_Pattern_partC_LiteralInteger43.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger43", AssemblyConnectors_PWP_P_A_Star_Pattern_partC_LiteralInteger43);
			AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern.reset(new Operation());
			this->addToElementRepository("A_Star_Pattern_A_Star_Pattern", AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
				AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
			AssemblyConnectors_PWP_P_A_Star_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", AssemblyConnectors_PWP_P_A_Star_Pattern_r);
				AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd44.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd44", AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd44);
					AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd44_connectorEnd_2_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_2_Lower", AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd44_connectorEnd_2_Lower);
					AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd44_connectorEnd_2_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_2_Upper", AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd44_connectorEnd_2_Upper);
				AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd45.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd45", AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd45);
					AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd45_connectorEnd_1_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_1_Upper", AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd45_connectorEnd_1_Upper);
					AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd45_connectorEnd_1_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_1_Lower", AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd45_connectorEnd_1_Lower);
			AssemblyConnectors_PWP_P_A_Star_Pattern_partB.reset(new Property());
			this->addToElementRepository("partB", AssemblyConnectors_PWP_P_A_Star_Pattern_partB);
				AssemblyConnectors_PWP_P_A_Star_Pattern_partB_LiteralUnlimitedNatural46.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural46", AssemblyConnectors_PWP_P_A_Star_Pattern_partB_LiteralUnlimitedNatural46);
				AssemblyConnectors_PWP_P_A_Star_Pattern_partB_LiteralInteger47.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger47", AssemblyConnectors_PWP_P_A_Star_Pattern_partB_LiteralInteger47);
		AssemblyConnectors_PWP_P_assert_A_Array_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Array_Pattern", AssemblyConnectors_PWP_P_assert_A_Array_Pattern);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Array_Pattern", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_result);
					AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_result_LiteralUnlimitedNatural48.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural48", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_result_LiteralUnlimitedNatural48);
					AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_result_LiteralInteger49.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger49", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_result_LiteralInteger49);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_LiteralString50.reset(new LiteralString());
				this->addToElementRepository("LiteralString50", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_LiteralString50);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_errorStatus);
					AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger51.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger51", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger51);
					AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural52.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural52", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural52);
					AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger53.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger53", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_errorStatus_LiteralInteger53);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_value);
					AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_value_LiteralInteger54.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger54", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_value_LiteralInteger54);
					AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_value_LiteralInteger55.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger55", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_value_LiteralInteger55);
					AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_value_LiteralUnlimitedNatural56.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural56", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_value_LiteralUnlimitedNatural56);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Array_Pattern_node", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern_node);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger57.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger57", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger57);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow58", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58_LiteralInteger59.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger59", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58_LiteralInteger59);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58_LiteralBoolean60.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean60", AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58_LiteralBoolean60);
		AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Array_Pattern", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Array_Pattern_node", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern_node);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger61.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger61", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern_node_LiteralInteger61);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Array_Pattern()", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern_);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__target);
					AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralInteger62.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger62", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralInteger62);
					AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralUnlimitedNatural63.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural63", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__target_LiteralUnlimitedNatural63);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__result);
					AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger64.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger64", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger64);
					AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralUnlimitedNatural65.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural65", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralUnlimitedNatural65);
					AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger66.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger66", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__result_LiteralInteger66);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Array_Pattern", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
					AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralUnlimitedNatural67.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural67", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralUnlimitedNatural67);
					AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralInteger68.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger68", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result_LiteralInteger68);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow69", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69_LiteralInteger70.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger70", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69_LiteralInteger70);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69_LiteralBoolean71.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean71", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69_LiteralBoolean71);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Array_Pattern", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow72", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72_LiteralBoolean73.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean73", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72_LiteralBoolean73);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72_LiteralInteger74.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger74", AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72_LiteralInteger74);
		AssemblyConnectors_PWP_P_I.reset(new Interface());
		this->addToElementRepository("I", AssemblyConnectors_PWP_P_I);
		AssemblyConnectors_PWP_P_A_Unconnected_Pattern.reset(new Class_());
		this->addToElementRepository("A_Unconnected_Pattern", AssemblyConnectors_PWP_P_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_Comment75.reset(new Comment());
			this->addToElementRepository("Comment75", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_Comment75);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC.reset(new Property());
			this->addToElementRepository("partC", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC_LiteralInteger76.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger76", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC_LiteralInteger76);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC_LiteralUnlimitedNatural77.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural77", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC_LiteralUnlimitedNatural77);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB.reset(new Property());
			this->addToElementRepository("partB", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB_LiteralUnlimitedNatural78.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural78", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB_LiteralUnlimitedNatural78);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB_LiteralInteger79.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger79", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB_LiteralInteger79);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd80.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd80", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd80);
					AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd80_connectorEnd_2_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_2_Lower", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd80_connectorEnd_2_Lower);
					AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd80_connectorEnd_2_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_2_Upper", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd80_connectorEnd_2_Upper);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd81.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd81", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd81);
					AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd81_connectorEnd_1_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_1_Lower", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd81_connectorEnd_1_Lower);
					AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd81_connectorEnd_1_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_1_Upper", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd81_connectorEnd_1_Upper);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern.reset(new Operation());
			this->addToElementRepository("A_Unconnected_Pattern_A_Unconnected_Pattern", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result);
		AssemblyConnectors_PWP_P_A_Array_Pattern.reset(new Class_());
		this->addToElementRepository("A_Array_Pattern", AssemblyConnectors_PWP_P_A_Array_Pattern);
			AssemblyConnectors_PWP_P_A_Array_Pattern_partB.reset(new Property());
			this->addToElementRepository("partB", AssemblyConnectors_PWP_P_A_Array_Pattern_partB);
				AssemblyConnectors_PWP_P_A_Array_Pattern_partB_LiteralInteger82.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger82", AssemblyConnectors_PWP_P_A_Array_Pattern_partB_LiteralInteger82);
				AssemblyConnectors_PWP_P_A_Array_Pattern_partB_LiteralUnlimitedNatural83.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural83", AssemblyConnectors_PWP_P_A_Array_Pattern_partB_LiteralUnlimitedNatural83);
			AssemblyConnectors_PWP_P_A_Array_Pattern_partC.reset(new Property());
			this->addToElementRepository("partC", AssemblyConnectors_PWP_P_A_Array_Pattern_partC);
				AssemblyConnectors_PWP_P_A_Array_Pattern_partC_LiteralUnlimitedNatural84.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural84", AssemblyConnectors_PWP_P_A_Array_Pattern_partC_LiteralUnlimitedNatural84);
				AssemblyConnectors_PWP_P_A_Array_Pattern_partC_LiteralInteger85.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger85", AssemblyConnectors_PWP_P_A_Array_Pattern_partC_LiteralInteger85);
			AssemblyConnectors_PWP_P_A_Array_Pattern_Comment86.reset(new Comment());
			this->addToElementRepository("Comment86", AssemblyConnectors_PWP_P_A_Array_Pattern_Comment86);
			AssemblyConnectors_PWP_P_A_Array_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", AssemblyConnectors_PWP_P_A_Array_Pattern_r);
				AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd87.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd87", AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd87);
					AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd87_connectorEnd_1_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_1_Lower", AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd87_connectorEnd_1_Lower);
					AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd87_connectorEnd_1_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_1_Upper", AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd87_connectorEnd_1_Upper);
				AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd88.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd88", AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd88);
					AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd88_connectorEnd_2_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_2_Lower", AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd88_connectorEnd_2_Lower);
					AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd88_connectorEnd_2_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_2_Upper", AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd88_connectorEnd_2_Upper);
			AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern.reset(new Operation());
			this->addToElementRepository("A_Array_Pattern_A_Array_Pattern", AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
				AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result);
		AssemblyConnectors_PWP_P_main.reset(new Activity());
		this->addToElementRepository("main", AssemblyConnectors_PWP_P_main);
			AssemblyConnectors_PWP_P_main_ObjectFlow89.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow89", AssemblyConnectors_PWP_P_main_ObjectFlow89);
				AssemblyConnectors_PWP_P_main_ObjectFlow89_LiteralBoolean90.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean90", AssemblyConnectors_PWP_P_main_ObjectFlow89_LiteralBoolean90);
				AssemblyConnectors_PWP_P_main_ObjectFlow89_LiteralInteger91.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger91", AssemblyConnectors_PWP_P_main_ObjectFlow89_LiteralInteger91);
			AssemblyConnectors_PWP_P_main_ControlFlow92.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow92", AssemblyConnectors_PWP_P_main_ControlFlow92);
			AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Star_Pattern", AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern);
				AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern_a_Star_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Star_Pattern", AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern_a_Star_Pattern);
					AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural93.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural93", AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural93);
					AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger94.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger94", AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger94);
					AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger95.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger95", AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern_a_Star_Pattern_LiteralInteger95);
			AssemblyConnectors_PWP_P_main_ObjectFlow96.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow96", AssemblyConnectors_PWP_P_main_ObjectFlow96);
				AssemblyConnectors_PWP_P_main_ObjectFlow96_LiteralBoolean97.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean97", AssemblyConnectors_PWP_P_main_ObjectFlow96_LiteralBoolean97);
				AssemblyConnectors_PWP_P_main_ObjectFlow96_LiteralInteger98.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger98", AssemblyConnectors_PWP_P_main_ObjectFlow96_LiteralInteger98);
			AssemblyConnectors_PWP_P_main_ObjectFlow99.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow99", AssemblyConnectors_PWP_P_main_ObjectFlow99);
				AssemblyConnectors_PWP_P_main_ObjectFlow99_LiteralInteger100.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger100", AssemblyConnectors_PWP_P_main_ObjectFlow99_LiteralInteger100);
				AssemblyConnectors_PWP_P_main_ObjectFlow99_LiteralBoolean101.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean101", AssemblyConnectors_PWP_P_main_ObjectFlow99_LiteralBoolean101);
			AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Array_Pattern", AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern);
				AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern_a_Array_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Array_Pattern", AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern_a_Array_Pattern);
					AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger102.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger102", AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger102);
					AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger103.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger103", AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralInteger103);
					AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural104.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural104", AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural104);
			AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Empty_Pattern", AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern);
				AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern_a_Empty_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Empty_Pattern", AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern_a_Empty_Pattern);
					AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger105.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger105", AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger105);
					AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural106.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural106", AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural106);
					AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger107.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger107", AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger107);
			AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Unconnected_Pattern", AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern);
				AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Unconnected_Pattern", AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
					AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger108.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger108", AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger108);
					AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural109.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural109", AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural109);
					AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger110.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger110", AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger110);
			AssemblyConnectors_PWP_P_main_ControlFlow111.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow111", AssemblyConnectors_PWP_P_main_ControlFlow111);
			AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Star_Pattern", AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern);
				AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern_a_Star_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Star_Pattern", AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern_a_Star_Pattern);
					AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural112.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural112", AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralUnlimitedNatural112);
					AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger113.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger113", AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger113);
					AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger114.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger114", AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern_a_Star_Pattern_LiteralInteger114);
			AssemblyConnectors_PWP_P_main_ControlFlow115.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow115", AssemblyConnectors_PWP_P_main_ControlFlow115);
			AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Empty_Pattern", AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern);
				AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Empty_Pattern", AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
					AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural116.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural116", AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralUnlimitedNatural116);
					AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger117.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger117", AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger117);
					AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger118.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger118", AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern_LiteralInteger118);
			AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A_Unconnected_Pattern", AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern);
				AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new InputPin());
				this->addToElementRepository("a_Unconnected_Pattern", AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
					AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger119.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger119", AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger119);
					AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural120.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural120", AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralUnlimitedNatural120);
					AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger121.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger121", AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_LiteralInteger121);
			AssemblyConnectors_PWP_P_main_ObjectFlow122.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow122", AssemblyConnectors_PWP_P_main_ObjectFlow122);
				AssemblyConnectors_PWP_P_main_ObjectFlow122_LiteralInteger123.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger123", AssemblyConnectors_PWP_P_main_ObjectFlow122_LiteralInteger123);
				AssemblyConnectors_PWP_P_main_ObjectFlow122_LiteralBoolean124.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean124", AssemblyConnectors_PWP_P_main_ObjectFlow122_LiteralBoolean124);
			AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A_Array_Pattern", AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern);
				AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern_a_Array_Pattern.reset(new OutputPin());
				this->addToElementRepository("a_Array_Pattern", AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern_a_Array_Pattern);
					AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural125.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural125", AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralUnlimitedNatural125);
					AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger126.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger126", AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger126);
					AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger127.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger127", AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern_a_Array_Pattern_LiteralInteger127);
		AssemblyConnectors_PWP_P_assert_A_Empty_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Empty_Pattern", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow128", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128_LiteralBoolean129.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean129", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128_LiteralBoolean129);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128_LiteralInteger130.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger130", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128_LiteralInteger130);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Empty_Pattern_node", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern_node);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern_node_LiteralInteger131.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger131", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern_node_LiteralInteger131);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_result);
					AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_result_LiteralUnlimitedNatural132.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural132", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_result_LiteralUnlimitedNatural132);
					AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_result_LiteralInteger133.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger133", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_result_LiteralInteger133);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_LiteralString134.reset(new LiteralString());
				this->addToElementRepository("LiteralString134", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_LiteralString134);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Empty_Pattern", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_value);
					AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_value_LiteralInteger135.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger135", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_value_LiteralInteger135);
					AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_value_LiteralInteger136.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger136", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_value_LiteralInteger136);
					AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_value_LiteralUnlimitedNatural137.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural137", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_value_LiteralUnlimitedNatural137);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_errorStatus);
					AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger138.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger138", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger138);
					AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger139.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger139", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralInteger139);
					AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural140.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural140", AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural140);
		AssemblyConnectors_PWP_P_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", AssemblyConnectors_PWP_P_IImpl);
			AssemblyConnectors_PWP_P_IImpl_I_Realization.reset(new InterfaceRealization());
			this->addToElementRepository("I_Realization", AssemblyConnectors_PWP_P_IImpl_I_Realization);
		AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern.reset(new Activity());
		this->addToElementRepository("instantiate_A_Unconnected_Pattern", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow141", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141_LiteralInteger142.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger142", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141_LiteralInteger142);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141_LiteralBoolean143.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean143", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141_LiteralBoolean143);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Unconnected_Pattern", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
					AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralUnlimitedNatural144.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural144", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralUnlimitedNatural144);
					AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralInteger145.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger145", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result_LiteralInteger145);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Unconnected_Pattern()", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
					AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralUnlimitedNatural146.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural146", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralUnlimitedNatural146);
					AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger147.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger147", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger147);
					AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger148.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger148", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result_LiteralInteger148);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
					AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralUnlimitedNatural149.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural149", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralUnlimitedNatural149);
					AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralInteger150.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger150", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target_LiteralInteger150);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Unconnected_Pattern", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Unconnected_Pattern_node", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow151", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151_LiteralBoolean152.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean152", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151_LiteralBoolean152);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151_LiteralInteger153.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger153", AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151_LiteralInteger153);
		AssemblyConnectors_PWP_P_A_Empty_Pattern.reset(new Class_());
		this->addToElementRepository("A_Empty_Pattern", AssemblyConnectors_PWP_P_A_Empty_Pattern);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partB.reset(new Property());
			this->addToElementRepository("partB", AssemblyConnectors_PWP_P_A_Empty_Pattern_partB);
				AssemblyConnectors_PWP_P_A_Empty_Pattern_partB_LiteralInteger154.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger154", AssemblyConnectors_PWP_P_A_Empty_Pattern_partB_LiteralInteger154);
				AssemblyConnectors_PWP_P_A_Empty_Pattern_partB_LiteralUnlimitedNatural155.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural155", AssemblyConnectors_PWP_P_A_Empty_Pattern_partB_LiteralUnlimitedNatural155);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partC.reset(new Property());
			this->addToElementRepository("partC", AssemblyConnectors_PWP_P_A_Empty_Pattern_partC);
				AssemblyConnectors_PWP_P_A_Empty_Pattern_partC_LiteralInteger156.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger156", AssemblyConnectors_PWP_P_A_Empty_Pattern_partC_LiteralInteger156);
				AssemblyConnectors_PWP_P_A_Empty_Pattern_partC_LiteralUnlimitedNatural157.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural157", AssemblyConnectors_PWP_P_A_Empty_Pattern_partC_LiteralUnlimitedNatural157);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern.reset(new Operation());
			this->addToElementRepository("A_Empty_Pattern_A_Empty_Pattern", AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
				AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", AssemblyConnectors_PWP_P_A_Empty_Pattern_r);
				AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd158.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd158", AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd158);
					AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd158_connectorEnd_2_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_2_Upper", AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd158_connectorEnd_2_Upper);
					AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd158_connectorEnd_2_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_2_Lower", AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd158_connectorEnd_2_Lower);
				AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd159.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd159", AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd159);
					AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd159_connectorEnd_1_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_1_Upper", AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd159_connectorEnd_1_Upper);
					AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd159_connectorEnd_1_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_1_Lower", AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd159_connectorEnd_1_Lower);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_Comment160.reset(new Comment());
			this->addToElementRepository("Comment160", AssemblyConnectors_PWP_P_A_Empty_Pattern_Comment160);
		AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern.reset(new Activity());
		this->addToElementRepository("assert_A_Unconnected_Pattern", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow161", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161_LiteralInteger162.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger162", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161_LiteralInteger162);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161_LiteralBoolean163.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean163", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161_LiteralBoolean163);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine.reset(new CallBehaviorAction());
			this->addToElementRepository("writeLine", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_errorStatus);
					AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural164.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural164", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralUnlimitedNatural164);
					AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger165.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger165", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger165);
					AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger166.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger166", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_errorStatus_LiteralInteger166);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_value.reset(new InputPin());
				this->addToElementRepository("value", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_value);
					AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger167.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger167", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger167);
					AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger168.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger168", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralInteger168);
					AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralUnlimitedNatural169.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural169", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_value_LiteralUnlimitedNatural169);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern.reset(new Parameter());
			this->addToElementRepository("a_Unconnected_Pattern", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_Unconnected_Pattern_node", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node_LiteralInteger170.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger170", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node_LiteralInteger170);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message.reset(new ValueSpecificationAction());
			this->addToElementRepository("message", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_LiteralString171.reset(new LiteralString());
				this->addToElementRepository("LiteralString171", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_LiteralString171);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_result.reset(new OutputPin());
				this->addToElementRepository("result", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_result);
					AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_result_LiteralInteger172.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger172", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_result_LiteralInteger172);
					AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_result_LiteralUnlimitedNatural173.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural173", AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_result_LiteralUnlimitedNatural173);
		AssemblyConnectors_PWP_P_R.reset(new Association());
		this->addToElementRepository("R", AssemblyConnectors_PWP_P_R);
			AssemblyConnectors_PWP_P_R_y.reset(new Property());
			this->addToElementRepository("y", AssemblyConnectors_PWP_P_R_y);
				AssemblyConnectors_PWP_P_R_y_LiteralUnlimitedNatural174.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural174", AssemblyConnectors_PWP_P_R_y_LiteralUnlimitedNatural174);
				AssemblyConnectors_PWP_P_R_y_LiteralInteger175.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger175", AssemblyConnectors_PWP_P_R_y_LiteralInteger175);
			AssemblyConnectors_PWP_P_R_x.reset(new Property());
			this->addToElementRepository("x", AssemblyConnectors_PWP_P_R_x);
				AssemblyConnectors_PWP_P_R_x_LiteralInteger176.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger176", AssemblyConnectors_PWP_P_R_x_LiteralInteger176);
				AssemblyConnectors_PWP_P_R_x_LiteralUnlimitedNatural177.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural177", AssemblyConnectors_PWP_P_R_x_LiteralUnlimitedNatural177);

	// Initialize public members
	/*
	 * Model AssemblyConnectors_PWP_P
	 */
	AssemblyConnectors_PWP_P->setThisPackagePtr(AssemblyConnectors_PWP_P);
	AssemblyConnectors_PWP_P->setName("AssemblyConnectors_PWP_P");
	AssemblyConnectors_PWP_P->setVisibility(VisibilityKind::public_);
		// Activity instantiate_A_Empty_Pattern
		AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern);
		AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern->setName("instantiate_A_Empty_Pattern");
		AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Empty_Pattern
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern->setType(AssemblyConnectors_PWP_P_A_Empty_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern->setDirection(ParameterDirectionKind::return_);
		AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern->addOwnedParameter(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			// CallOperationAction A_Empty_Pattern()
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setName("A_Empty_Pattern()");
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setName("result");
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result->setType(AssemblyConnectors_PWP_P_A_Empty_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->addResult(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setOperation(AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
				// InputPin target
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setName("target");
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target->setType(AssemblyConnectors_PWP_P_A_Empty_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_->setTarget(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
		AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern->addNode(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern_);
			// ActivityParameterNode a_Empty_Pattern_node
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setName("a_Empty_Pattern_node");
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node->setParameter(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern);
		AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern->addNode(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
			// CreateObjectAction Create A_Empty_Pattern
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setName("Create A_Empty_Pattern");
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setClassifier(AssemblyConnectors_PWP_P_A_Empty_Pattern);
				// OutputPin result
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setName("result");
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result->setType(AssemblyConnectors_PWP_P_A_Empty_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern->setResult(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
		AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern->addNode(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern);
			// ObjectFlow ObjectFlow5 from result to target
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5->setName("ObjectFlow5");
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5->setSource(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_Create_A_Empty_Pattern_result);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5->setTarget(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__target);
				// LiteralBoolean LiteralBoolean6
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5_LiteralBoolean6->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5_LiteralBoolean6);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5_LiteralBoolean6->setName("LiteralBoolean6");
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5_LiteralBoolean6->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5_LiteralBoolean6->setValue(true);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5->setGuard(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5_LiteralBoolean6);
		AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern->addEdge(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow5);
			// ObjectFlow ObjectFlow8 from result to a_Empty_Pattern_node
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8->setName("ObjectFlow8");
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8->setSource(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_A_Empty_Pattern__result);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8->setTarget(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_a_Empty_Pattern_node);
				// LiteralBoolean LiteralBoolean10
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8_LiteralBoolean10->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8_LiteralBoolean10);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8_LiteralBoolean10->setName("LiteralBoolean10");
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8_LiteralBoolean10->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8_LiteralBoolean10->setValue(true);
			AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8->setGuard(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8_LiteralBoolean10);
		AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern->addEdge(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern_ObjectFlow8);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern);
		// Activity assert_A_Star_Pattern
		AssemblyConnectors_PWP_P_assert_A_Star_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_P_assert_A_Star_Pattern);
		AssemblyConnectors_PWP_P_assert_A_Star_Pattern->setName("assert_A_Star_Pattern");
		AssemblyConnectors_PWP_P_assert_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Star_Pattern
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern->setType(AssemblyConnectors_PWP_P_A_Star_Pattern);
		AssemblyConnectors_PWP_P_assert_A_Star_Pattern->addOwnedParameter(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern);
			// ActivityParameterNode a_Star_Pattern_node
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern_node);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern_node->setName("a_Star_Pattern_node");
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern_node->setParameter(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern);
		AssemblyConnectors_PWP_P_assert_A_Star_Pattern->addNode(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_a_Star_Pattern_node);
			// ValueSpecificationAction message
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message->setName("message");
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString17
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_LiteralString17->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_LiteralString17);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_LiteralString17->setName("LiteralString17");
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_LiteralString17->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_LiteralString17->setValue("Assertion currently not implemented for A_Star_Pattern.");
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message->setValue(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_LiteralString17);
				// OutputPin result
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_result->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_result);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_result->setName("result");
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message->setResult(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_result);
		AssemblyConnectors_PWP_P_assert_A_Star_Pattern->addNode(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message);
			// CallBehaviorAction writeLine
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine->setName("writeLine");
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_errorStatus->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_errorStatus);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_errorStatus->setName("errorStatus");
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_errorStatus->setLower(0);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine->addResult(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_errorStatus);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_value->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_value);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_value->setName("value");
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine->addArgument(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_value);
		AssemblyConnectors_PWP_P_assert_A_Star_Pattern->addNode(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine);
			// ObjectFlow ObjectFlow14 from result to value
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14->setName("ObjectFlow14");
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14->setSource(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_message_result);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14->setTarget(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean15
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean15->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean15);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean15->setName("LiteralBoolean15");
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean15->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean15->setValue(true);
			AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14->setGuard(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14_LiteralBoolean15);
		AssemblyConnectors_PWP_P_assert_A_Star_Pattern->addEdge(AssemblyConnectors_PWP_P_assert_A_Star_Pattern_ObjectFlow14);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_assert_A_Star_Pattern);
		// Class C
		AssemblyConnectors_PWP_P_C->setThisClass_Ptr(AssemblyConnectors_PWP_P_C);
		AssemblyConnectors_PWP_P_C->setName("C");
		AssemblyConnectors_PWP_P_C->setVisibility(VisibilityKind::public_);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_C);
		// Activity instantiate_A_Star_Pattern
		AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern);
		AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern->setName("instantiate_A_Star_Pattern");
		AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Star_Pattern
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern->setType(AssemblyConnectors_PWP_P_A_Star_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern->setDirection(ParameterDirectionKind::return_);
		AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern->addOwnedParameter(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern);
			// ActivityParameterNode a_Star_Pattern_node
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern_node);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern_node->setName("a_Star_Pattern_node");
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern_node->setParameter(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern);
		AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern->addNode(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern_node);
			// CreateObjectAction Create A_Star_Pattern
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setName("Create A_Star_Pattern");
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setClassifier(AssemblyConnectors_PWP_P_A_Star_Pattern);
				// OutputPin result
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setName("result");
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result->setType(AssemblyConnectors_PWP_P_A_Star_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern->setResult(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
		AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern->addNode(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern);
			// CallOperationAction A_Star_Pattern()
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern_->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern_);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern_->setName("A_Star_Pattern()");
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__result->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__result);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__result->setName("result");
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__result->setType(AssemblyConnectors_PWP_P_A_Star_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern_->addResult(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__result);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern_->setOperation(AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
				// InputPin target
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__target->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__target);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__target->setName("target");
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__target->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__target->setType(AssemblyConnectors_PWP_P_A_Star_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern_->setTarget(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__target);
		AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern->addNode(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern_);
			// ObjectFlow ObjectFlow33 from result to target
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33->setName("ObjectFlow33");
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33->setSource(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_Create_A_Star_Pattern_result);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33->setTarget(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__target);
				// LiteralBoolean LiteralBoolean35
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33_LiteralBoolean35->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33_LiteralBoolean35);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33_LiteralBoolean35->setName("LiteralBoolean35");
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33_LiteralBoolean35->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33_LiteralBoolean35->setValue(true);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33->setGuard(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33_LiteralBoolean35);
		AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern->addEdge(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow33);
			// ObjectFlow ObjectFlow36 from result to a_Star_Pattern_node
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36->setName("ObjectFlow36");
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36->setSource(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_A_Star_Pattern__result);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36->setTarget(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_a_Star_Pattern_node);
				// LiteralBoolean LiteralBoolean37
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36_LiteralBoolean37->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36_LiteralBoolean37);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36_LiteralBoolean37->setName("LiteralBoolean37");
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36_LiteralBoolean37->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36_LiteralBoolean37->setValue(true);
			AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36->setGuard(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36_LiteralBoolean37);
		AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern->addEdge(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern_ObjectFlow36);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern);
		// Class B
		AssemblyConnectors_PWP_P_B->setThisClass_Ptr(AssemblyConnectors_PWP_P_B);
		AssemblyConnectors_PWP_P_B->setName("B");
		AssemblyConnectors_PWP_P_B->setVisibility(VisibilityKind::public_);
		
			// Port p
			AssemblyConnectors_PWP_P_B_p->setThisElementPtr(AssemblyConnectors_PWP_P_B_p);
			AssemblyConnectors_PWP_P_B_p->setName("p");
			AssemblyConnectors_PWP_P_B_p->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_B_p->setUpper(-1);
			AssemblyConnectors_PWP_P_B_p->setLower(2);
			AssemblyConnectors_PWP_P_B_p->setType(AssemblyConnectors_PWP_P_IImpl);
			AssemblyConnectors_PWP_P_B_p->setAggregation(AggregationKind::composite);
			AssemblyConnectors_PWP_P_B_p->isService = true;
			AssemblyConnectors_PWP_P_B_p->addProvided(AssemblyConnectors_PWP_P_I);
		AssemblyConnectors_PWP_P_B->addOwnedAttribute(AssemblyConnectors_PWP_P_B_p);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_B);
		// Class A_Star_Pattern
		AssemblyConnectors_PWP_P_A_Star_Pattern->setThisClass_Ptr(AssemblyConnectors_PWP_P_A_Star_Pattern);
		AssemblyConnectors_PWP_P_A_Star_Pattern->setName("A_Star_Pattern");
		AssemblyConnectors_PWP_P_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property partB
			AssemblyConnectors_PWP_P_A_Star_Pattern_partB->setThisElementPtr(AssemblyConnectors_PWP_P_A_Star_Pattern_partB);
			AssemblyConnectors_PWP_P_A_Star_Pattern_partB->setName("partB");
			AssemblyConnectors_PWP_P_A_Star_Pattern_partB->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_A_Star_Pattern_partB->setUpper(-1);
			AssemblyConnectors_PWP_P_A_Star_Pattern_partB->setLower(2);
			AssemblyConnectors_PWP_P_A_Star_Pattern_partB->setType(AssemblyConnectors_PWP_P_B);
			AssemblyConnectors_PWP_P_A_Star_Pattern_partB->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_P_A_Star_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_P_A_Star_Pattern_partB);
			// Property partC
			AssemblyConnectors_PWP_P_A_Star_Pattern_partC->setThisElementPtr(AssemblyConnectors_PWP_P_A_Star_Pattern_partC);
			AssemblyConnectors_PWP_P_A_Star_Pattern_partC->setName("partC");
			AssemblyConnectors_PWP_P_A_Star_Pattern_partC->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_A_Star_Pattern_partC->setUpper(-1);
			AssemblyConnectors_PWP_P_A_Star_Pattern_partC->setLower(5);
			AssemblyConnectors_PWP_P_A_Star_Pattern_partC->setType(AssemblyConnectors_PWP_P_C);
			AssemblyConnectors_PWP_P_A_Star_Pattern_partC->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_P_A_Star_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_P_A_Star_Pattern_partC);
		
		AssemblyConnectors_PWP_P_A_Star_Pattern_r->setName("r");
			AssemblyConnectors_PWP_P_A_Star_Pattern_r->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd45->setUpper(-1);
				AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd45->setLower(4);
				AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd45->setRole(AssemblyConnectors_PWP_P_B_p);
				AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd45->setPartWithPort(AssemblyConnectors_PWP_P_A_Star_Pattern_partB);
				
			AssemblyConnectors_PWP_P_A_Star_Pattern_r->addEnd(AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd45);
				AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd44->setUpper(-1);
				AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd44->setLower(5);
				AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd44->setRole(AssemblyConnectors_PWP_P_A_Star_Pattern_partC);
				
			AssemblyConnectors_PWP_P_A_Star_Pattern_r->addEnd(AssemblyConnectors_PWP_P_A_Star_Pattern_r_ConnectorEnd44);
			AssemblyConnectors_PWP_P_A_Star_Pattern_r->setType(AssemblyConnectors_PWP_P_R);
		AssemblyConnectors_PWP_P_A_Star_Pattern->addOwnedConnector(AssemblyConnectors_PWP_P_A_Star_Pattern_r);
			// Operation A_Star_Pattern_A_Star_Pattern
			AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setThisOperationPtr(AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
			AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setName("A_Star_Pattern_A_Star_Pattern");
			AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
				AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setName("result");
				AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setType(AssemblyConnectors_PWP_P_A_Star_Pattern);
				AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setDirection(ParameterDirectionKind::return_);
			AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->addOwnedParameter(AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
		AssemblyConnectors_PWP_P_A_Star_Pattern->addOwnedOperation(AssemblyConnectors_PWP_P_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_A_Star_Pattern);
		// Activity assert_A_Array_Pattern
		AssemblyConnectors_PWP_P_assert_A_Array_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_P_assert_A_Array_Pattern);
		AssemblyConnectors_PWP_P_assert_A_Array_Pattern->setName("assert_A_Array_Pattern");
		AssemblyConnectors_PWP_P_assert_A_Array_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Array_Pattern
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern->setType(AssemblyConnectors_PWP_P_A_Array_Pattern);
		AssemblyConnectors_PWP_P_assert_A_Array_Pattern->addOwnedParameter(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern);
			// ValueSpecificationAction message
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message->setName("message");
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString50
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_LiteralString50->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_LiteralString50);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_LiteralString50->setName("LiteralString50");
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_LiteralString50->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_LiteralString50->setValue("Assertion currently not implemented for A_Array_Pattern.");
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message->setValue(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_LiteralString50);
				// OutputPin result
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_result->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_result);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_result->setName("result");
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message->setResult(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_result);
		AssemblyConnectors_PWP_P_assert_A_Array_Pattern->addNode(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message);
			// CallBehaviorAction writeLine
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine->setName("writeLine");
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_errorStatus->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_errorStatus);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_errorStatus->setName("errorStatus");
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_errorStatus->setLower(0);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine->addResult(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_errorStatus);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_value->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_value);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_value->setName("value");
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine->addArgument(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_value);
		AssemblyConnectors_PWP_P_assert_A_Array_Pattern->addNode(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine);
			// ActivityParameterNode a_Array_Pattern_node
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern_node);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern_node->setName("a_Array_Pattern_node");
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern_node->setParameter(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern);
		AssemblyConnectors_PWP_P_assert_A_Array_Pattern->addNode(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_a_Array_Pattern_node);
			// ObjectFlow ObjectFlow58 from result to value
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58->setName("ObjectFlow58");
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58->setSource(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_message_result);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58->setTarget(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean60
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58_LiteralBoolean60->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58_LiteralBoolean60);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58_LiteralBoolean60->setName("LiteralBoolean60");
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58_LiteralBoolean60->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58_LiteralBoolean60->setValue(true);
			AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58->setGuard(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58_LiteralBoolean60);
		AssemblyConnectors_PWP_P_assert_A_Array_Pattern->addEdge(AssemblyConnectors_PWP_P_assert_A_Array_Pattern_ObjectFlow58);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_assert_A_Array_Pattern);
		// Activity instantiate_A_Array_Pattern
		AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern);
		AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern->setName("instantiate_A_Array_Pattern");
		AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Array_Pattern
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern->setType(AssemblyConnectors_PWP_P_A_Array_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern->setDirection(ParameterDirectionKind::return_);
		AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern->addOwnedParameter(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern);
			// ActivityParameterNode a_Array_Pattern_node
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern_node);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern_node->setName("a_Array_Pattern_node");
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern_node->setParameter(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern);
		AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern->addNode(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern_node);
			// CallOperationAction A_Array_Pattern()
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern_->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern_);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern_->setName("A_Array_Pattern()");
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__result->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__result);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__result->setName("result");
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__result->setType(AssemblyConnectors_PWP_P_A_Array_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern_->addResult(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__result);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern_->setOperation(AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
				// InputPin target
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__target->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__target);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__target->setName("target");
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__target->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__target->setType(AssemblyConnectors_PWP_P_A_Array_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern_->setTarget(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__target);
		AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern->addNode(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern_);
			// CreateObjectAction Create A_Array_Pattern
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setName("Create A_Array_Pattern");
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setClassifier(AssemblyConnectors_PWP_P_A_Array_Pattern);
				// OutputPin result
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setName("result");
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result->setType(AssemblyConnectors_PWP_P_A_Array_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern->setResult(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
		AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern->addNode(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern);
			// ObjectFlow ObjectFlow69 from result to a_Array_Pattern_node
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69->setName("ObjectFlow69");
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69->setSource(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__result);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69->setTarget(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_a_Array_Pattern_node);
				// LiteralBoolean LiteralBoolean71
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69_LiteralBoolean71->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69_LiteralBoolean71);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69_LiteralBoolean71->setName("LiteralBoolean71");
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69_LiteralBoolean71->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69_LiteralBoolean71->setValue(true);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69->setGuard(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69_LiteralBoolean71);
		AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern->addEdge(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow69);
			// ObjectFlow ObjectFlow72 from result to target
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72->setName("ObjectFlow72");
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72->setSource(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_Create_A_Array_Pattern_result);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72->setTarget(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_A_Array_Pattern__target);
				// LiteralBoolean LiteralBoolean73
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72_LiteralBoolean73->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72_LiteralBoolean73);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72_LiteralBoolean73->setName("LiteralBoolean73");
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72_LiteralBoolean73->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72_LiteralBoolean73->setValue(true);
			AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72->setGuard(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72_LiteralBoolean73);
		AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern->addEdge(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern_ObjectFlow72);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern);
		// Interface I
		AssemblyConnectors_PWP_P_I->setName("I");
		AssemblyConnectors_PWP_P_I->setVisibility(VisibilityKind::public_);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_I);
		// Class A_Unconnected_Pattern
		AssemblyConnectors_PWP_P_A_Unconnected_Pattern->setThisClass_Ptr(AssemblyConnectors_PWP_P_A_Unconnected_Pattern);
		AssemblyConnectors_PWP_P_A_Unconnected_Pattern->setName("A_Unconnected_Pattern");
		AssemblyConnectors_PWP_P_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property partB
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB->setThisElementPtr(AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB->setName("partB");
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB->setUpper(-1);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB->setLower(2);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB->setType(AssemblyConnectors_PWP_P_B);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_P_A_Unconnected_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB);
			// Property partC
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC->setThisElementPtr(AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC->setName("partC");
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC->setUpper(-1);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC->setLower(3);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC->setType(AssemblyConnectors_PWP_P_C);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_P_A_Unconnected_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC);
		
		AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r->setName("r");
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd81->setUpper(-1);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd81->setLower(0);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd81->setRole(AssemblyConnectors_PWP_P_B_p);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd81->setPartWithPort(AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partB);
				
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r->addEnd(AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd81);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd80->setUpper(-1);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd80->setLower(0);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd80->setRole(AssemblyConnectors_PWP_P_A_Unconnected_Pattern_partC);
				
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r->addEnd(AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r_ConnectorEnd80);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r->setType(AssemblyConnectors_PWP_P_R);
		AssemblyConnectors_PWP_P_A_Unconnected_Pattern->addOwnedConnector(AssemblyConnectors_PWP_P_A_Unconnected_Pattern_r);
			// Operation A_Unconnected_Pattern_A_Unconnected_Pattern
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->setThisOperationPtr(AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->setName("A_Unconnected_Pattern_A_Unconnected_Pattern");
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setName("result");
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setType(AssemblyConnectors_PWP_P_A_Unconnected_Pattern);
				AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result->setDirection(ParameterDirectionKind::return_);
			AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern->addOwnedParameter(AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern_result);
		AssemblyConnectors_PWP_P_A_Unconnected_Pattern->addOwnedOperation(AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_A_Unconnected_Pattern);
		// Class A_Array_Pattern
		AssemblyConnectors_PWP_P_A_Array_Pattern->setThisClass_Ptr(AssemblyConnectors_PWP_P_A_Array_Pattern);
		AssemblyConnectors_PWP_P_A_Array_Pattern->setName("A_Array_Pattern");
		AssemblyConnectors_PWP_P_A_Array_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property partB
			AssemblyConnectors_PWP_P_A_Array_Pattern_partB->setThisElementPtr(AssemblyConnectors_PWP_P_A_Array_Pattern_partB);
			AssemblyConnectors_PWP_P_A_Array_Pattern_partB->setName("partB");
			AssemblyConnectors_PWP_P_A_Array_Pattern_partB->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_A_Array_Pattern_partB->setUpper(-1);
			AssemblyConnectors_PWP_P_A_Array_Pattern_partB->setLower(2);
			AssemblyConnectors_PWP_P_A_Array_Pattern_partB->setType(AssemblyConnectors_PWP_P_B);
			AssemblyConnectors_PWP_P_A_Array_Pattern_partB->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_P_A_Array_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_P_A_Array_Pattern_partB);
			// Property partC
			AssemblyConnectors_PWP_P_A_Array_Pattern_partC->setThisElementPtr(AssemblyConnectors_PWP_P_A_Array_Pattern_partC);
			AssemblyConnectors_PWP_P_A_Array_Pattern_partC->setName("partC");
			AssemblyConnectors_PWP_P_A_Array_Pattern_partC->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_A_Array_Pattern_partC->setUpper(-1);
			AssemblyConnectors_PWP_P_A_Array_Pattern_partC->setLower(4);
			AssemblyConnectors_PWP_P_A_Array_Pattern_partC->setType(AssemblyConnectors_PWP_P_C);
			AssemblyConnectors_PWP_P_A_Array_Pattern_partC->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_P_A_Array_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_P_A_Array_Pattern_partC);
		
		AssemblyConnectors_PWP_P_A_Array_Pattern_r->setName("r");
			AssemblyConnectors_PWP_P_A_Array_Pattern_r->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd87->setUpper(-1);
				AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd87->setRole(AssemblyConnectors_PWP_P_B_p);
				AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd87->setPartWithPort(AssemblyConnectors_PWP_P_A_Array_Pattern_partB);
				
			AssemblyConnectors_PWP_P_A_Array_Pattern_r->addEnd(AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd87);
				AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd88->setUpper(-1);
				AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd88->setRole(AssemblyConnectors_PWP_P_A_Array_Pattern_partC);
				
			AssemblyConnectors_PWP_P_A_Array_Pattern_r->addEnd(AssemblyConnectors_PWP_P_A_Array_Pattern_r_ConnectorEnd88);
			AssemblyConnectors_PWP_P_A_Array_Pattern_r->setType(AssemblyConnectors_PWP_P_R);
		AssemblyConnectors_PWP_P_A_Array_Pattern->addOwnedConnector(AssemblyConnectors_PWP_P_A_Array_Pattern_r);
			// Operation A_Array_Pattern_A_Array_Pattern
			AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->setThisOperationPtr(AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
			AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->setName("A_Array_Pattern_A_Array_Pattern");
			AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result);
				AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setName("result");
				AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setType(AssemblyConnectors_PWP_P_A_Array_Pattern);
				AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result->setDirection(ParameterDirectionKind::return_);
			AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern->addOwnedParameter(AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern_result);
		AssemblyConnectors_PWP_P_A_Array_Pattern->addOwnedOperation(AssemblyConnectors_PWP_P_A_Array_Pattern_A_Array_Pattern_A_Array_Pattern);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_A_Array_Pattern);
		// Activity main
		AssemblyConnectors_PWP_P_main->setThisActivityPtr(AssemblyConnectors_PWP_P_main);
		AssemblyConnectors_PWP_P_main->setName("main");
		AssemblyConnectors_PWP_P_main->setVisibility(VisibilityKind::public_);
			// CallBehaviorAction instantiate_A_Unconnected_Pattern
			AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern->setName("instantiate_A_Unconnected_Pattern");
			AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Unconnected_Pattern
				AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
				AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
				AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(AssemblyConnectors_PWP_P_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern->addResult(AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern->setBehavior(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern);
		AssemblyConnectors_PWP_P_main->addNode(AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern);
			// CallBehaviorAction instantiate_A_Star_Pattern
			AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern);
			AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern->setName("instantiate_A_Star_Pattern");
			AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Star_Pattern
				AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern_a_Star_Pattern);
				AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
				AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern_a_Star_Pattern->setType(AssemblyConnectors_PWP_P_A_Star_Pattern);
			AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern->addResult(AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern->setBehavior(AssemblyConnectors_PWP_P_instantiate_A_Star_Pattern);
		AssemblyConnectors_PWP_P_main->addNode(AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern);
			// CallBehaviorAction assert_A_Star_Pattern
			AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern);
			AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern->setName("assert_A_Star_Pattern");
			AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern->setBehavior(AssemblyConnectors_PWP_P_assert_A_Star_Pattern);
				// InputPin a_Star_Pattern
				AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern_a_Star_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern_a_Star_Pattern);
				AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern_a_Star_Pattern->setName("a_Star_Pattern");
				AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern_a_Star_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern_a_Star_Pattern->setType(AssemblyConnectors_PWP_P_A_Star_Pattern);
			AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern->addArgument(AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern_a_Star_Pattern);
		AssemblyConnectors_PWP_P_main->addNode(AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern);
			// CallBehaviorAction assert_A_Array_Pattern
			AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern);
			AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern->setName("assert_A_Array_Pattern");
			AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern->setBehavior(AssemblyConnectors_PWP_P_assert_A_Array_Pattern);
				// InputPin a_Array_Pattern
				AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern_a_Array_Pattern);
				AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
				AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern_a_Array_Pattern->setType(AssemblyConnectors_PWP_P_A_Array_Pattern);
			AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern->addArgument(AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern_a_Array_Pattern);
		AssemblyConnectors_PWP_P_main->addNode(AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern);
			// CallBehaviorAction instantiate_A_Empty_Pattern
			AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern);
			AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern->setName("instantiate_A_Empty_Pattern");
			AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Empty_Pattern
				AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
				AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
				AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern->setType(AssemblyConnectors_PWP_P_A_Empty_Pattern);
			AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern->addResult(AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern->setBehavior(AssemblyConnectors_PWP_P_instantiate_A_Empty_Pattern);
		AssemblyConnectors_PWP_P_main->addNode(AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern);
			// CallBehaviorAction assert_A_Unconnected_Pattern
			AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern->setName("assert_A_Unconnected_Pattern");
			AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern->setBehavior(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern);
				// InputPin a_Unconnected_Pattern
				AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
				AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
				AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(AssemblyConnectors_PWP_P_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern->addArgument(AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
		AssemblyConnectors_PWP_P_main->addNode(AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern);
			// CallBehaviorAction instantiate_A_Array_Pattern
			AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern);
			AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern->setName("instantiate_A_Array_Pattern");
			AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern->setVisibility(VisibilityKind::public_);
			
				// OutputPin a_Array_Pattern
				AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern_a_Array_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern_a_Array_Pattern);
				AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern_a_Array_Pattern->setName("a_Array_Pattern");
				AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern_a_Array_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern_a_Array_Pattern->setType(AssemblyConnectors_PWP_P_A_Array_Pattern);
			AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern->addResult(AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern->setBehavior(AssemblyConnectors_PWP_P_instantiate_A_Array_Pattern);
		AssemblyConnectors_PWP_P_main->addNode(AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern);
			// CallBehaviorAction assert_A_Empty_Pattern
			AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern);
			AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern->setName("assert_A_Empty_Pattern");
			AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern->setBehavior(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern);
				// InputPin a_Empty_Pattern
				AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern_a_Empty_Pattern);
				AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
				AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern_a_Empty_Pattern->setType(AssemblyConnectors_PWP_P_A_Empty_Pattern);
			AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern->addArgument(AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern_a_Empty_Pattern);
		AssemblyConnectors_PWP_P_main->addNode(AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern);
			// ObjectFlow ObjectFlow89 from a_Star_Pattern to a_Star_Pattern
			AssemblyConnectors_PWP_P_main_ObjectFlow89->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_main_ObjectFlow89);
			AssemblyConnectors_PWP_P_main_ObjectFlow89->setName("ObjectFlow89");
			AssemblyConnectors_PWP_P_main_ObjectFlow89->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_main_ObjectFlow89->setSource(AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern_a_Star_Pattern);
			AssemblyConnectors_PWP_P_main_ObjectFlow89->setTarget(AssemblyConnectors_PWP_P_main_assert_A_Star_Pattern_a_Star_Pattern);
				// LiteralBoolean LiteralBoolean90
				AssemblyConnectors_PWP_P_main_ObjectFlow89_LiteralBoolean90->setThisElementPtr(AssemblyConnectors_PWP_P_main_ObjectFlow89_LiteralBoolean90);
				AssemblyConnectors_PWP_P_main_ObjectFlow89_LiteralBoolean90->setName("LiteralBoolean90");
				AssemblyConnectors_PWP_P_main_ObjectFlow89_LiteralBoolean90->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_main_ObjectFlow89_LiteralBoolean90->setValue(true);
			AssemblyConnectors_PWP_P_main_ObjectFlow89->setGuard(AssemblyConnectors_PWP_P_main_ObjectFlow89_LiteralBoolean90);
		AssemblyConnectors_PWP_P_main->addEdge(AssemblyConnectors_PWP_P_main_ObjectFlow89);
			// ControlFlow ControlFlow92 from assert_A_Empty_Pattern to instantiate_A_Unconnected_Pattern
			AssemblyConnectors_PWP_P_main_ControlFlow92->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_main_ControlFlow92);
			AssemblyConnectors_PWP_P_main_ControlFlow92->setName("ControlFlow92");
			AssemblyConnectors_PWP_P_main_ControlFlow92->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_main_ControlFlow92->setSource(AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern);
			AssemblyConnectors_PWP_P_main_ControlFlow92->setTarget(AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern);
		AssemblyConnectors_PWP_P_main->addEdge(AssemblyConnectors_PWP_P_main_ControlFlow92);
			// ControlFlow ControlFlow111 from assert_A_Unconnected_Pattern to instantiate_A_Array_Pattern
			AssemblyConnectors_PWP_P_main_ControlFlow111->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_main_ControlFlow111);
			AssemblyConnectors_PWP_P_main_ControlFlow111->setName("ControlFlow111");
			AssemblyConnectors_PWP_P_main_ControlFlow111->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_main_ControlFlow111->setSource(AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_main_ControlFlow111->setTarget(AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern);
		AssemblyConnectors_PWP_P_main->addEdge(AssemblyConnectors_PWP_P_main_ControlFlow111);
			// ControlFlow ControlFlow115 from assert_A_Array_Pattern to instantiate_A_Star_Pattern
			AssemblyConnectors_PWP_P_main_ControlFlow115->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_main_ControlFlow115);
			AssemblyConnectors_PWP_P_main_ControlFlow115->setName("ControlFlow115");
			AssemblyConnectors_PWP_P_main_ControlFlow115->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_main_ControlFlow115->setSource(AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern);
			AssemblyConnectors_PWP_P_main_ControlFlow115->setTarget(AssemblyConnectors_PWP_P_main_instantiate_A_Star_Pattern);
		AssemblyConnectors_PWP_P_main->addEdge(AssemblyConnectors_PWP_P_main_ControlFlow115);
			// ObjectFlow ObjectFlow96 from a_Empty_Pattern to a_Empty_Pattern
			AssemblyConnectors_PWP_P_main_ObjectFlow96->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_main_ObjectFlow96);
			AssemblyConnectors_PWP_P_main_ObjectFlow96->setName("ObjectFlow96");
			AssemblyConnectors_PWP_P_main_ObjectFlow96->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_main_ObjectFlow96->setSource(AssemblyConnectors_PWP_P_main_instantiate_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_PWP_P_main_ObjectFlow96->setTarget(AssemblyConnectors_PWP_P_main_assert_A_Empty_Pattern_a_Empty_Pattern);
				// LiteralBoolean LiteralBoolean97
				AssemblyConnectors_PWP_P_main_ObjectFlow96_LiteralBoolean97->setThisElementPtr(AssemblyConnectors_PWP_P_main_ObjectFlow96_LiteralBoolean97);
				AssemblyConnectors_PWP_P_main_ObjectFlow96_LiteralBoolean97->setName("LiteralBoolean97");
				AssemblyConnectors_PWP_P_main_ObjectFlow96_LiteralBoolean97->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_main_ObjectFlow96_LiteralBoolean97->setValue(true);
			AssemblyConnectors_PWP_P_main_ObjectFlow96->setGuard(AssemblyConnectors_PWP_P_main_ObjectFlow96_LiteralBoolean97);
		AssemblyConnectors_PWP_P_main->addEdge(AssemblyConnectors_PWP_P_main_ObjectFlow96);
			// ObjectFlow ObjectFlow99 from a_Unconnected_Pattern to a_Unconnected_Pattern
			AssemblyConnectors_PWP_P_main_ObjectFlow99->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_main_ObjectFlow99);
			AssemblyConnectors_PWP_P_main_ObjectFlow99->setName("ObjectFlow99");
			AssemblyConnectors_PWP_P_main_ObjectFlow99->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_main_ObjectFlow99->setSource(AssemblyConnectors_PWP_P_main_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_main_ObjectFlow99->setTarget(AssemblyConnectors_PWP_P_main_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
				// LiteralBoolean LiteralBoolean101
				AssemblyConnectors_PWP_P_main_ObjectFlow99_LiteralBoolean101->setThisElementPtr(AssemblyConnectors_PWP_P_main_ObjectFlow99_LiteralBoolean101);
				AssemblyConnectors_PWP_P_main_ObjectFlow99_LiteralBoolean101->setName("LiteralBoolean101");
				AssemblyConnectors_PWP_P_main_ObjectFlow99_LiteralBoolean101->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_main_ObjectFlow99_LiteralBoolean101->setValue(true);
			AssemblyConnectors_PWP_P_main_ObjectFlow99->setGuard(AssemblyConnectors_PWP_P_main_ObjectFlow99_LiteralBoolean101);
		AssemblyConnectors_PWP_P_main->addEdge(AssemblyConnectors_PWP_P_main_ObjectFlow99);
			// ObjectFlow ObjectFlow122 from a_Array_Pattern to a_Array_Pattern
			AssemblyConnectors_PWP_P_main_ObjectFlow122->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_main_ObjectFlow122);
			AssemblyConnectors_PWP_P_main_ObjectFlow122->setName("ObjectFlow122");
			AssemblyConnectors_PWP_P_main_ObjectFlow122->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_main_ObjectFlow122->setSource(AssemblyConnectors_PWP_P_main_instantiate_A_Array_Pattern_a_Array_Pattern);
			AssemblyConnectors_PWP_P_main_ObjectFlow122->setTarget(AssemblyConnectors_PWP_P_main_assert_A_Array_Pattern_a_Array_Pattern);
				// LiteralBoolean LiteralBoolean124
				AssemblyConnectors_PWP_P_main_ObjectFlow122_LiteralBoolean124->setThisElementPtr(AssemblyConnectors_PWP_P_main_ObjectFlow122_LiteralBoolean124);
				AssemblyConnectors_PWP_P_main_ObjectFlow122_LiteralBoolean124->setName("LiteralBoolean124");
				AssemblyConnectors_PWP_P_main_ObjectFlow122_LiteralBoolean124->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_main_ObjectFlow122_LiteralBoolean124->setValue(true);
			AssemblyConnectors_PWP_P_main_ObjectFlow122->setGuard(AssemblyConnectors_PWP_P_main_ObjectFlow122_LiteralBoolean124);
		AssemblyConnectors_PWP_P_main->addEdge(AssemblyConnectors_PWP_P_main_ObjectFlow122);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_main);
		// Activity assert_A_Empty_Pattern
		AssemblyConnectors_PWP_P_assert_A_Empty_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern);
		AssemblyConnectors_PWP_P_assert_A_Empty_Pattern->setName("assert_A_Empty_Pattern");
		AssemblyConnectors_PWP_P_assert_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Empty_Pattern
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern->setName("a_Empty_Pattern");
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern->setType(AssemblyConnectors_PWP_P_A_Empty_Pattern);
		AssemblyConnectors_PWP_P_assert_A_Empty_Pattern->addOwnedParameter(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern);
			// ActivityParameterNode a_Empty_Pattern_node
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern_node);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern_node->setName("a_Empty_Pattern_node");
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern_node->setParameter(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern);
		AssemblyConnectors_PWP_P_assert_A_Empty_Pattern->addNode(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_a_Empty_Pattern_node);
			// ValueSpecificationAction message
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message->setName("message");
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString134
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_LiteralString134->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_LiteralString134);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_LiteralString134->setName("LiteralString134");
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_LiteralString134->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_LiteralString134->setValue("Assertion currently not implemented for A_Empty_Pattern.");
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message->setValue(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_LiteralString134);
				// OutputPin result
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_result->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_result);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_result->setName("result");
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message->setResult(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_result);
		AssemblyConnectors_PWP_P_assert_A_Empty_Pattern->addNode(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message);
			// CallBehaviorAction writeLine
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine->setName("writeLine");
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_errorStatus->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_errorStatus);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_errorStatus->setName("errorStatus");
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_errorStatus->setLower(0);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine->addResult(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_errorStatus);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_value->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_value);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_value->setName("value");
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine->addArgument(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_value);
		AssemblyConnectors_PWP_P_assert_A_Empty_Pattern->addNode(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine);
			// ObjectFlow ObjectFlow128 from result to value
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128->setName("ObjectFlow128");
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128->setSource(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_message_result);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128->setTarget(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean129
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128_LiteralBoolean129->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128_LiteralBoolean129);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128_LiteralBoolean129->setName("LiteralBoolean129");
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128_LiteralBoolean129->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128_LiteralBoolean129->setValue(true);
			AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128->setGuard(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128_LiteralBoolean129);
		AssemblyConnectors_PWP_P_assert_A_Empty_Pattern->addEdge(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern_ObjectFlow128);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_assert_A_Empty_Pattern);
		// Class IImpl
		AssemblyConnectors_PWP_P_IImpl->setThisClass_Ptr(AssemblyConnectors_PWP_P_IImpl);
		AssemblyConnectors_PWP_P_IImpl->setName("IImpl");
		AssemblyConnectors_PWP_P_IImpl->setVisibility(VisibilityKind::public_);
		AssemblyConnectors_PWP_P_IImpl_I_Realization->setName("I_Realization");
			AssemblyConnectors_PWP_P_IImpl_I_Realization->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_IImpl_I_Realization->setContract(AssemblyConnectors_PWP_P_I);
			
		AssemblyConnectors_PWP_P_IImpl->addInterfaceRealization(AssemblyConnectors_PWP_P_IImpl_I_Realization);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_IImpl);
		// Activity instantiate_A_Unconnected_Pattern
		AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern);
		AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern->setName("instantiate_A_Unconnected_Pattern");
		AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Unconnected_Pattern
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(AssemblyConnectors_PWP_P_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern->setDirection(ParameterDirectionKind::return_);
		AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern->addOwnedParameter(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
			// CreateObjectAction Create A_Unconnected_Pattern
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setName("Create A_Unconnected_Pattern");
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setClassifier(AssemblyConnectors_PWP_P_A_Unconnected_Pattern);
				// OutputPin result
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setName("result");
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result->setType(AssemblyConnectors_PWP_P_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern->setResult(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
		AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern->addNode(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern);
			// CallOperationAction A_Unconnected_Pattern()
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setName("A_Unconnected_Pattern()");
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setName("result");
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result->setType(AssemblyConnectors_PWP_P_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->addResult(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setOperation(AssemblyConnectors_PWP_P_A_Unconnected_Pattern_A_Unconnected_Pattern_A_Unconnected_Pattern);
				// InputPin target
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setName("target");
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target->setType(AssemblyConnectors_PWP_P_A_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_->setTarget(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
		AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern->addNode(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern_);
			// ActivityParameterNode a_Unconnected_Pattern_node
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setName("a_Unconnected_Pattern_node");
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setParameter(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern);
		AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern->addNode(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			// ObjectFlow ObjectFlow141 from result to target
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141->setName("ObjectFlow141");
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141->setSource(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_Create_A_Unconnected_Pattern_result);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141->setTarget(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__target);
				// LiteralBoolean LiteralBoolean143
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141_LiteralBoolean143->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141_LiteralBoolean143);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141_LiteralBoolean143->setName("LiteralBoolean143");
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141_LiteralBoolean143->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141_LiteralBoolean143->setValue(true);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141->setGuard(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141_LiteralBoolean143);
		AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern->addEdge(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow141);
			// ObjectFlow ObjectFlow151 from result to a_Unconnected_Pattern_node
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151->setName("ObjectFlow151");
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151->setSource(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_A_Unconnected_Pattern__result);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151->setTarget(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
				// LiteralBoolean LiteralBoolean152
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151_LiteralBoolean152->setThisElementPtr(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151_LiteralBoolean152);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151_LiteralBoolean152->setName("LiteralBoolean152");
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151_LiteralBoolean152->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151_LiteralBoolean152->setValue(true);
			AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151->setGuard(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151_LiteralBoolean152);
		AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern->addEdge(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern_ObjectFlow151);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_instantiate_A_Unconnected_Pattern);
		// Class A_Empty_Pattern
		AssemblyConnectors_PWP_P_A_Empty_Pattern->setThisClass_Ptr(AssemblyConnectors_PWP_P_A_Empty_Pattern);
		AssemblyConnectors_PWP_P_A_Empty_Pattern->setName("A_Empty_Pattern");
		AssemblyConnectors_PWP_P_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property partB
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partB->setThisElementPtr(AssemblyConnectors_PWP_P_A_Empty_Pattern_partB);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partB->setName("partB");
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partB->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partB->setUpper(-1);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partB->setLower(0);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partB->setType(AssemblyConnectors_PWP_P_B);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partB->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_P_A_Empty_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_P_A_Empty_Pattern_partB);
			// Property partC
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partC->setThisElementPtr(AssemblyConnectors_PWP_P_A_Empty_Pattern_partC);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partC->setName("partC");
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partC->setVisibility(VisibilityKind::public_);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partC->setUpper(-1);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partC->setLower(0);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partC->setType(AssemblyConnectors_PWP_P_C);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_partC->setAggregation(AggregationKind::composite);
		AssemblyConnectors_PWP_P_A_Empty_Pattern->addOwnedAttribute(AssemblyConnectors_PWP_P_A_Empty_Pattern_partC);
		
		AssemblyConnectors_PWP_P_A_Empty_Pattern_r->setName("r");
			AssemblyConnectors_PWP_P_A_Empty_Pattern_r->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd159->setUpper(-1);
				AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd159->setRole(AssemblyConnectors_PWP_P_B_p);
				AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd159->setPartWithPort(AssemblyConnectors_PWP_P_A_Empty_Pattern_partB);
				
			AssemblyConnectors_PWP_P_A_Empty_Pattern_r->addEnd(AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd159);
				AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd158->setUpper(-1);
				AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd158->setRole(AssemblyConnectors_PWP_P_A_Empty_Pattern_partC);
				
			AssemblyConnectors_PWP_P_A_Empty_Pattern_r->addEnd(AssemblyConnectors_PWP_P_A_Empty_Pattern_r_ConnectorEnd158);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_r->setType(AssemblyConnectors_PWP_P_R);
		AssemblyConnectors_PWP_P_A_Empty_Pattern->addOwnedConnector(AssemblyConnectors_PWP_P_A_Empty_Pattern_r);
			// Operation A_Empty_Pattern_A_Empty_Pattern
			AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->setThisOperationPtr(AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->setName("A_Empty_Pattern_A_Empty_Pattern");
			AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setThisElementPtr(AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result);
				AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setName("result");
				AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setType(AssemblyConnectors_PWP_P_A_Empty_Pattern);
				AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result->setDirection(ParameterDirectionKind::return_);
			AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern->addOwnedParameter(AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern_result);
		AssemblyConnectors_PWP_P_A_Empty_Pattern->addOwnedOperation(AssemblyConnectors_PWP_P_A_Empty_Pattern_A_Empty_Pattern_A_Empty_Pattern);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_A_Empty_Pattern);
		// Activity assert_A_Unconnected_Pattern
		AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern->setThisActivityPtr(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern);
		AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern->setName("assert_A_Unconnected_Pattern");
		AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
		
			// Parameter a_Unconnected_Pattern
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setName("a_Unconnected_Pattern");
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern->setType(AssemblyConnectors_PWP_P_A_Unconnected_Pattern);
		AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern->addOwnedParameter(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
			// CallBehaviorAction writeLine
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine->setName("writeLine");
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_errorStatus->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_errorStatus);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_errorStatus->setName("errorStatus");
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_errorStatus->setVisibility(VisibilityKind::public_);
				
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_errorStatus->setLower(0);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine->addResult(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_errorStatus);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_value->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_value);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_value->setName("value");
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_value->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine->addArgument(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_value);
		AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern->addNode(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine);
			// ActivityParameterNode a_Unconnected_Pattern_node
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setName("a_Unconnected_Pattern_node");
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node->setParameter(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern);
		AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern->addNode(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_a_Unconnected_Pattern_node);
			// ValueSpecificationAction message
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message->setThisExecutableNodePtr(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message->setName("message");
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString171
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_LiteralString171->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_LiteralString171);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_LiteralString171->setName("LiteralString171");
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_LiteralString171->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_LiteralString171->setValue("Assertion currently not implemented for A_Unconnected_Pattern.");
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message->setValue(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_LiteralString171);
				// OutputPin result
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_result->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_result);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_result->setName("result");
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_result->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message->setResult(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_result);
		AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern->addNode(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message);
			// ObjectFlow ObjectFlow161 from result to value
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161->setThisActivityEdgePtr(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161->setName("ObjectFlow161");
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161->setVisibility(VisibilityKind::public_);
			
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161->setSource(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_message_result);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161->setTarget(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_writeLine_value);
				// LiteralBoolean LiteralBoolean163
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161_LiteralBoolean163->setThisElementPtr(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161_LiteralBoolean163);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161_LiteralBoolean163->setName("LiteralBoolean163");
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161_LiteralBoolean163->setVisibility(VisibilityKind::public_);
				AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161_LiteralBoolean163->setValue(true);
			AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161->setGuard(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161_LiteralBoolean163);
		AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern->addEdge(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern_ObjectFlow161);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_assert_A_Unconnected_Pattern);
		// Association R
		AssemblyConnectors_PWP_P_R->setThisAssociationPtr(AssemblyConnectors_PWP_P_R);
		AssemblyConnectors_PWP_P_R->setName("R");
		AssemblyConnectors_PWP_P_R->setVisibility(VisibilityKind::public_);
		AssemblyConnectors_PWP_P_R->addOwnedEnd(AssemblyConnectors_PWP_P_R_x);
		AssemblyConnectors_PWP_P_R->addOwnedEnd(AssemblyConnectors_PWP_P_R_y);
	AssemblyConnectors_PWP_P->addPackagedElement(AssemblyConnectors_PWP_P_R);
}
