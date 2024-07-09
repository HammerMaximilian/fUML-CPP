/*
 * PolymorphismTestModel.cpp
 * 
 * Auto-generated file
 */

#include "PolymorphismTestModel.h"

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/actions/CallBehaviorAction.h>
#include <uml/activities/ObjectFlow.h>
#include <uml/activities/Activity.h>
#include <uml/values/LiteralBoolean.h>
#include <uml/actions/InputPin.h>
#include <uml/values/LiteralInteger.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/classification/Parameter.h>
#include <uml/activities/ActivityParameterNode.h>
#include <uml/classification/Operation.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/commonstructure/PackageImport.h>
#include <uml/activities/ControlFlow.h>
#include <uml/activities/ForkNode.h>
#include <uml/classification/Generalization.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/packages/Package.h>
#include <utils/extensionsprofile/ExtensionsProfileModel.h>
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

using namespace PolymorphismTest;
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

PolymorphismTestModel::PolymorphismTestModel()
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

PolymorphismTestModel::~PolymorphismTestModel()
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

const std::shared_ptr<PolymorphismTestModel>& PolymorphismTestModel::Instance()
{
	static std::shared_ptr<PolymorphismTestModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new PolymorphismTestModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void PolymorphismTestModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model PolymorphismTest
	 */
	PolymorphismTest.reset(new Package());
	this->addToElementRepository("PolymorphismTest", PolymorphismTest);
		PolymorphismTest_U.reset(new Class_());
		this->addToElementRepository("U", PolymorphismTest_U);
			PolymorphismTest_U_o4_method.reset(new Activity());
			this->addToElementRepository("o4_method", PolymorphismTest_U_o4_method);
				PolymorphismTest_U_o4_method_Call_WriteLine.reset(new CallBehaviorAction());
				this->addToElementRepository("Call WriteLine", PolymorphismTest_U_o4_method_Call_WriteLine);
					PolymorphismTest_U_o4_method_Call_WriteLine_value.reset(new InputPin());
					this->addToElementRepository("value", PolymorphismTest_U_o4_method_Call_WriteLine_value);
						PolymorphismTest_U_o4_method_Call_WriteLine_value_LiteralInteger0.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger0", PolymorphismTest_U_o4_method_Call_WriteLine_value_LiteralInteger0);
						PolymorphismTest_U_o4_method_Call_WriteLine_value_LiteralInteger1.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger1", PolymorphismTest_U_o4_method_Call_WriteLine_value_LiteralInteger1);
						PolymorphismTest_U_o4_method_Call_WriteLine_value_LiteralUnlimitedNatural2.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural2", PolymorphismTest_U_o4_method_Call_WriteLine_value_LiteralUnlimitedNatural2);
					PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus);
						PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus_LiteralInteger3.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger3", PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus_LiteralInteger3);
						PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus_LiteralInteger4.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger4", PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus_LiteralInteger4);
						PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural5.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural5", PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural5);
				PolymorphismTest_U_o4_method_Message.reset(new ValueSpecificationAction());
				this->addToElementRepository("Message", PolymorphismTest_U_o4_method_Message);
					PolymorphismTest_U_o4_method_Message_LiteralString6.reset(new LiteralString());
					this->addToElementRepository("LiteralString6", PolymorphismTest_U_o4_method_Message_LiteralString6);
					PolymorphismTest_U_o4_method_Message_result.reset(new OutputPin());
					this->addToElementRepository("result", PolymorphismTest_U_o4_method_Message_result);
						PolymorphismTest_U_o4_method_Message_result_LiteralInteger7.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger7", PolymorphismTest_U_o4_method_Message_result_LiteralInteger7);
						PolymorphismTest_U_o4_method_Message_result_LiteralUnlimitedNatural8.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural8", PolymorphismTest_U_o4_method_Message_result_LiteralUnlimitedNatural8);
				PolymorphismTest_U_o4_method_ObjectFlow9.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow9", PolymorphismTest_U_o4_method_ObjectFlow9);
					PolymorphismTest_U_o4_method_ObjectFlow9_LiteralInteger10.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger10", PolymorphismTest_U_o4_method_ObjectFlow9_LiteralInteger10);
					PolymorphismTest_U_o4_method_ObjectFlow9_LiteralBoolean11.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean11", PolymorphismTest_U_o4_method_ObjectFlow9_LiteralBoolean11);
			PolymorphismTest_U_o2_method.reset(new Activity());
			this->addToElementRepository("o2_method", PolymorphismTest_U_o2_method);
				PolymorphismTest_U_o2_method_b_node.reset(new ActivityParameterNode());
				this->addToElementRepository("b_node", PolymorphismTest_U_o2_method_b_node);
					PolymorphismTest_U_o2_method_b_node_LiteralInteger12.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger12", PolymorphismTest_U_o2_method_b_node_LiteralInteger12);
				PolymorphismTest_U_o2_method_ObjectFlow13.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow13", PolymorphismTest_U_o2_method_ObjectFlow13);
					PolymorphismTest_U_o2_method_ObjectFlow13_LiteralInteger14.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger14", PolymorphismTest_U_o2_method_ObjectFlow13_LiteralInteger14);
					PolymorphismTest_U_o2_method_ObjectFlow13_LiteralBoolean15.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean15", PolymorphismTest_U_o2_method_ObjectFlow13_LiteralBoolean15);
				PolymorphismTest_U_o2_method_Call_WriteLine.reset(new CallBehaviorAction());
				this->addToElementRepository("Call WriteLine", PolymorphismTest_U_o2_method_Call_WriteLine);
					PolymorphismTest_U_o2_method_Call_WriteLine_value.reset(new InputPin());
					this->addToElementRepository("value", PolymorphismTest_U_o2_method_Call_WriteLine_value);
						PolymorphismTest_U_o2_method_Call_WriteLine_value_LiteralInteger16.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger16", PolymorphismTest_U_o2_method_Call_WriteLine_value_LiteralInteger16);
						PolymorphismTest_U_o2_method_Call_WriteLine_value_LiteralInteger17.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger17", PolymorphismTest_U_o2_method_Call_WriteLine_value_LiteralInteger17);
						PolymorphismTest_U_o2_method_Call_WriteLine_value_LiteralUnlimitedNatural18.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural18", PolymorphismTest_U_o2_method_Call_WriteLine_value_LiteralUnlimitedNatural18);
					PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus);
						PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus_LiteralInteger19.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger19", PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus_LiteralInteger19);
						PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus_LiteralInteger20.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger20", PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus_LiteralInteger20);
						PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural21.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural21", PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural21);
				PolymorphismTest_U_o2_method_b.reset(new Parameter());
				this->addToElementRepository("b", PolymorphismTest_U_o2_method_b);
				PolymorphismTest_U_o2_method_a.reset(new Parameter());
				this->addToElementRepository("a", PolymorphismTest_U_o2_method_a);
				PolymorphismTest_U_o2_method_Message.reset(new ValueSpecificationAction());
				this->addToElementRepository("Message", PolymorphismTest_U_o2_method_Message);
					PolymorphismTest_U_o2_method_Message_result.reset(new OutputPin());
					this->addToElementRepository("result", PolymorphismTest_U_o2_method_Message_result);
						PolymorphismTest_U_o2_method_Message_result_LiteralInteger22.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger22", PolymorphismTest_U_o2_method_Message_result_LiteralInteger22);
						PolymorphismTest_U_o2_method_Message_result_LiteralUnlimitedNatural23.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural23", PolymorphismTest_U_o2_method_Message_result_LiteralUnlimitedNatural23);
					PolymorphismTest_U_o2_method_Message_LiteralString24.reset(new LiteralString());
					this->addToElementRepository("LiteralString24", PolymorphismTest_U_o2_method_Message_LiteralString24);
				PolymorphismTest_U_o2_method_a_node.reset(new ActivityParameterNode());
				this->addToElementRepository("a_node", PolymorphismTest_U_o2_method_a_node);
					PolymorphismTest_U_o2_method_a_node_LiteralInteger25.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger25", PolymorphismTest_U_o2_method_a_node_LiteralInteger25);
			PolymorphismTest_U_x.reset(new Operation());
			this->addToElementRepository("x", PolymorphismTest_U_x);
			PolymorphismTest_U_A_o1_B.reset(new Operation());
			this->addToElementRepository("A_o1_B", PolymorphismTest_U_A_o1_B);
				PolymorphismTest_U_A_o1_B_b.reset(new Parameter());
				this->addToElementRepository("b", PolymorphismTest_U_A_o1_B_b);
				PolymorphismTest_U_A_o1_B_a.reset(new Parameter());
				this->addToElementRepository("a", PolymorphismTest_U_A_o1_B_a);
			PolymorphismTest_U_A_o2_B.reset(new Operation());
			this->addToElementRepository("A_o2_B", PolymorphismTest_U_A_o2_B);
				PolymorphismTest_U_A_o2_B_a.reset(new Parameter());
				this->addToElementRepository("a", PolymorphismTest_U_A_o2_B_a);
				PolymorphismTest_U_A_o2_B_b.reset(new Parameter());
				this->addToElementRepository("b", PolymorphismTest_U_A_o2_B_b);
			PolymorphismTest_U_o4.reset(new Operation());
			this->addToElementRepository("o4", PolymorphismTest_U_o4);
			PolymorphismTest_U_o3_Integer.reset(new Operation());
			this->addToElementRepository("o3_Integer", PolymorphismTest_U_o3_Integer);
				PolymorphismTest_U_o3_Integer_i.reset(new Parameter());
				this->addToElementRepository("i", PolymorphismTest_U_o3_Integer_i);
			PolymorphismTest_U_o3_method.reset(new Activity());
			this->addToElementRepository("o3_method", PolymorphismTest_U_o3_method);
				PolymorphismTest_U_o3_method_i_node.reset(new ActivityParameterNode());
				this->addToElementRepository("i_node", PolymorphismTest_U_o3_method_i_node);
					PolymorphismTest_U_o3_method_i_node_LiteralInteger26.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger26", PolymorphismTest_U_o3_method_i_node_LiteralInteger26);
				PolymorphismTest_U_o3_method_Message.reset(new ValueSpecificationAction());
				this->addToElementRepository("Message", PolymorphismTest_U_o3_method_Message);
					PolymorphismTest_U_o3_method_Message_result.reset(new OutputPin());
					this->addToElementRepository("result", PolymorphismTest_U_o3_method_Message_result);
						PolymorphismTest_U_o3_method_Message_result_LiteralInteger27.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger27", PolymorphismTest_U_o3_method_Message_result_LiteralInteger27);
						PolymorphismTest_U_o3_method_Message_result_LiteralUnlimitedNatural28.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural28", PolymorphismTest_U_o3_method_Message_result_LiteralUnlimitedNatural28);
					PolymorphismTest_U_o3_method_Message_LiteralString29.reset(new LiteralString());
					this->addToElementRepository("LiteralString29", PolymorphismTest_U_o3_method_Message_LiteralString29);
				PolymorphismTest_U_o3_method_Call_WriteLine.reset(new CallBehaviorAction());
				this->addToElementRepository("Call WriteLine", PolymorphismTest_U_o3_method_Call_WriteLine);
					PolymorphismTest_U_o3_method_Call_WriteLine_value.reset(new InputPin());
					this->addToElementRepository("value", PolymorphismTest_U_o3_method_Call_WriteLine_value);
						PolymorphismTest_U_o3_method_Call_WriteLine_value_LiteralUnlimitedNatural30.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural30", PolymorphismTest_U_o3_method_Call_WriteLine_value_LiteralUnlimitedNatural30);
						PolymorphismTest_U_o3_method_Call_WriteLine_value_LiteralInteger31.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger31", PolymorphismTest_U_o3_method_Call_WriteLine_value_LiteralInteger31);
						PolymorphismTest_U_o3_method_Call_WriteLine_value_LiteralInteger32.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger32", PolymorphismTest_U_o3_method_Call_WriteLine_value_LiteralInteger32);
					PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus);
						PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus_LiteralInteger33.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger33", PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus_LiteralInteger33);
						PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus_LiteralInteger34.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger34", PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus_LiteralInteger34);
						PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural35.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural35", PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural35);
				PolymorphismTest_U_o3_method_i.reset(new Parameter());
				this->addToElementRepository("i", PolymorphismTest_U_o3_method_i);
				PolymorphismTest_U_o3_method_ObjectFlow36.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow36", PolymorphismTest_U_o3_method_ObjectFlow36);
					PolymorphismTest_U_o3_method_ObjectFlow36_LiteralInteger37.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger37", PolymorphismTest_U_o3_method_ObjectFlow36_LiteralInteger37);
					PolymorphismTest_U_o3_method_ObjectFlow36_LiteralBoolean38.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean38", PolymorphismTest_U_o3_method_ObjectFlow36_LiteralBoolean38);
			PolymorphismTest_U_x_method.reset(new Activity());
			this->addToElementRepository("x_method", PolymorphismTest_U_x_method);
				PolymorphismTest_U_x_method_Call_WriteLine.reset(new CallBehaviorAction());
				this->addToElementRepository("Call WriteLine", PolymorphismTest_U_x_method_Call_WriteLine);
					PolymorphismTest_U_x_method_Call_WriteLine_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", PolymorphismTest_U_x_method_Call_WriteLine_errorStatus);
						PolymorphismTest_U_x_method_Call_WriteLine_errorStatus_LiteralInteger39.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger39", PolymorphismTest_U_x_method_Call_WriteLine_errorStatus_LiteralInteger39);
						PolymorphismTest_U_x_method_Call_WriteLine_errorStatus_LiteralInteger40.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger40", PolymorphismTest_U_x_method_Call_WriteLine_errorStatus_LiteralInteger40);
						PolymorphismTest_U_x_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural41.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural41", PolymorphismTest_U_x_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural41);
					PolymorphismTest_U_x_method_Call_WriteLine_value.reset(new InputPin());
					this->addToElementRepository("value", PolymorphismTest_U_x_method_Call_WriteLine_value);
						PolymorphismTest_U_x_method_Call_WriteLine_value_LiteralInteger42.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger42", PolymorphismTest_U_x_method_Call_WriteLine_value_LiteralInteger42);
						PolymorphismTest_U_x_method_Call_WriteLine_value_LiteralInteger43.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger43", PolymorphismTest_U_x_method_Call_WriteLine_value_LiteralInteger43);
						PolymorphismTest_U_x_method_Call_WriteLine_value_LiteralUnlimitedNatural44.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural44", PolymorphismTest_U_x_method_Call_WriteLine_value_LiteralUnlimitedNatural44);
				PolymorphismTest_U_x_method_ObjectFlow45.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow45", PolymorphismTest_U_x_method_ObjectFlow45);
					PolymorphismTest_U_x_method_ObjectFlow45_LiteralBoolean46.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean46", PolymorphismTest_U_x_method_ObjectFlow45_LiteralBoolean46);
					PolymorphismTest_U_x_method_ObjectFlow45_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", PolymorphismTest_U_x_method_ObjectFlow45_LiteralInteger47);
				PolymorphismTest_U_x_method_Message.reset(new ValueSpecificationAction());
				this->addToElementRepository("Message", PolymorphismTest_U_x_method_Message);
					PolymorphismTest_U_x_method_Message_LiteralString48.reset(new LiteralString());
					this->addToElementRepository("LiteralString48", PolymorphismTest_U_x_method_Message_LiteralString48);
					PolymorphismTest_U_x_method_Message_result.reset(new OutputPin());
					this->addToElementRepository("result", PolymorphismTest_U_x_method_Message_result);
						PolymorphismTest_U_x_method_Message_result_LiteralInteger49.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger49", PolymorphismTest_U_x_method_Message_result_LiteralInteger49);
						PolymorphismTest_U_x_method_Message_result_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural50", PolymorphismTest_U_x_method_Message_result_LiteralUnlimitedNatural50);
			PolymorphismTest_U_o1_method.reset(new Activity());
			this->addToElementRepository("o1_method", PolymorphismTest_U_o1_method);
				PolymorphismTest_U_o1_method_b.reset(new Parameter());
				this->addToElementRepository("b", PolymorphismTest_U_o1_method_b);
				PolymorphismTest_U_o1_method_Message.reset(new ValueSpecificationAction());
				this->addToElementRepository("Message", PolymorphismTest_U_o1_method_Message);
					PolymorphismTest_U_o1_method_Message_result.reset(new OutputPin());
					this->addToElementRepository("result", PolymorphismTest_U_o1_method_Message_result);
						PolymorphismTest_U_o1_method_Message_result_LiteralInteger51.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger51", PolymorphismTest_U_o1_method_Message_result_LiteralInteger51);
						PolymorphismTest_U_o1_method_Message_result_LiteralUnlimitedNatural52.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural52", PolymorphismTest_U_o1_method_Message_result_LiteralUnlimitedNatural52);
					PolymorphismTest_U_o1_method_Message_LiteralString53.reset(new LiteralString());
					this->addToElementRepository("LiteralString53", PolymorphismTest_U_o1_method_Message_LiteralString53);
				PolymorphismTest_U_o1_method_a.reset(new Parameter());
				this->addToElementRepository("a", PolymorphismTest_U_o1_method_a);
				PolymorphismTest_U_o1_method_Call_WriteLine.reset(new CallBehaviorAction());
				this->addToElementRepository("Call WriteLine", PolymorphismTest_U_o1_method_Call_WriteLine);
					PolymorphismTest_U_o1_method_Call_WriteLine_value.reset(new InputPin());
					this->addToElementRepository("value", PolymorphismTest_U_o1_method_Call_WriteLine_value);
						PolymorphismTest_U_o1_method_Call_WriteLine_value_LiteralUnlimitedNatural54.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural54", PolymorphismTest_U_o1_method_Call_WriteLine_value_LiteralUnlimitedNatural54);
						PolymorphismTest_U_o1_method_Call_WriteLine_value_LiteralInteger55.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger55", PolymorphismTest_U_o1_method_Call_WriteLine_value_LiteralInteger55);
						PolymorphismTest_U_o1_method_Call_WriteLine_value_LiteralInteger56.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger56", PolymorphismTest_U_o1_method_Call_WriteLine_value_LiteralInteger56);
					PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus);
						PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural57.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural57", PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural57);
						PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus_LiteralInteger58.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger58", PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus_LiteralInteger58);
						PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus_LiteralInteger59.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger59", PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus_LiteralInteger59);
				PolymorphismTest_U_o1_method_b_node.reset(new ActivityParameterNode());
				this->addToElementRepository("b_node", PolymorphismTest_U_o1_method_b_node);
					PolymorphismTest_U_o1_method_b_node_LiteralInteger60.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger60", PolymorphismTest_U_o1_method_b_node_LiteralInteger60);
				PolymorphismTest_U_o1_method_a_node.reset(new ActivityParameterNode());
				this->addToElementRepository("a_node", PolymorphismTest_U_o1_method_a_node);
					PolymorphismTest_U_o1_method_a_node_LiteralInteger61.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger61", PolymorphismTest_U_o1_method_a_node_LiteralInteger61);
				PolymorphismTest_U_o1_method_ObjectFlow62.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow62", PolymorphismTest_U_o1_method_ObjectFlow62);
					PolymorphismTest_U_o1_method_ObjectFlow62_LiteralInteger63.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger63", PolymorphismTest_U_o1_method_ObjectFlow62_LiteralInteger63);
					PolymorphismTest_U_o1_method_ObjectFlow62_LiteralBoolean64.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean64", PolymorphismTest_U_o1_method_ObjectFlow62_LiteralBoolean64);
		PolymorphismTest_B.reset(new Class_());
		this->addToElementRepository("B", PolymorphismTest_B);
			PolymorphismTest_B_Generalization65.reset(new Generalization());
			this->addToElementRepository("Generalization65", PolymorphismTest_B_Generalization65);
		PolymorphismTest_A.reset(new Class_());
		this->addToElementRepository("A", PolymorphismTest_A);
			PolymorphismTest_A_x_method.reset(new Activity());
			this->addToElementRepository("x_method", PolymorphismTest_A_x_method);
				PolymorphismTest_A_x_method_Call_WriteLine.reset(new CallBehaviorAction());
				this->addToElementRepository("Call WriteLine", PolymorphismTest_A_x_method_Call_WriteLine);
					PolymorphismTest_A_x_method_Call_WriteLine_value.reset(new InputPin());
					this->addToElementRepository("value", PolymorphismTest_A_x_method_Call_WriteLine_value);
						PolymorphismTest_A_x_method_Call_WriteLine_value_LiteralUnlimitedNatural66.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural66", PolymorphismTest_A_x_method_Call_WriteLine_value_LiteralUnlimitedNatural66);
						PolymorphismTest_A_x_method_Call_WriteLine_value_LiteralInteger67.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger67", PolymorphismTest_A_x_method_Call_WriteLine_value_LiteralInteger67);
						PolymorphismTest_A_x_method_Call_WriteLine_value_LiteralInteger68.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger68", PolymorphismTest_A_x_method_Call_WriteLine_value_LiteralInteger68);
					PolymorphismTest_A_x_method_Call_WriteLine_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", PolymorphismTest_A_x_method_Call_WriteLine_errorStatus);
						PolymorphismTest_A_x_method_Call_WriteLine_errorStatus_LiteralInteger69.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger69", PolymorphismTest_A_x_method_Call_WriteLine_errorStatus_LiteralInteger69);
						PolymorphismTest_A_x_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural70.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural70", PolymorphismTest_A_x_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural70);
						PolymorphismTest_A_x_method_Call_WriteLine_errorStatus_LiteralInteger71.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger71", PolymorphismTest_A_x_method_Call_WriteLine_errorStatus_LiteralInteger71);
				PolymorphismTest_A_x_method_Message.reset(new ValueSpecificationAction());
				this->addToElementRepository("Message", PolymorphismTest_A_x_method_Message);
					PolymorphismTest_A_x_method_Message_LiteralString72.reset(new LiteralString());
					this->addToElementRepository("LiteralString72", PolymorphismTest_A_x_method_Message_LiteralString72);
					PolymorphismTest_A_x_method_Message_result.reset(new OutputPin());
					this->addToElementRepository("result", PolymorphismTest_A_x_method_Message_result);
						PolymorphismTest_A_x_method_Message_result_LiteralUnlimitedNatural73.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural73", PolymorphismTest_A_x_method_Message_result_LiteralUnlimitedNatural73);
						PolymorphismTest_A_x_method_Message_result_LiteralInteger74.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger74", PolymorphismTest_A_x_method_Message_result_LiteralInteger74);
				PolymorphismTest_A_x_method_ObjectFlow75.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow75", PolymorphismTest_A_x_method_ObjectFlow75);
					PolymorphismTest_A_x_method_ObjectFlow75_LiteralBoolean76.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean76", PolymorphismTest_A_x_method_ObjectFlow75_LiteralBoolean76);
					PolymorphismTest_A_x_method_ObjectFlow75_LiteralInteger77.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger77", PolymorphismTest_A_x_method_ObjectFlow75_LiteralInteger77);
			PolymorphismTest_A_x.reset(new Operation());
			this->addToElementRepository("x", PolymorphismTest_A_x);
		PolymorphismTest_main.reset(new Activity());
		this->addToElementRepository("main", PolymorphismTest_main);
			PolymorphismTest_main_Call_runTests.reset(new CallBehaviorAction());
			this->addToElementRepository("Call runTests", PolymorphismTest_main_Call_runTests);
				PolymorphismTest_main_Call_runTests_u.reset(new InputPin());
				this->addToElementRepository("u", PolymorphismTest_main_Call_runTests_u);
					PolymorphismTest_main_Call_runTests_u_LiteralInteger78.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger78", PolymorphismTest_main_Call_runTests_u_LiteralInteger78);
					PolymorphismTest_main_Call_runTests_u_LiteralUnlimitedNatural79.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural79", PolymorphismTest_main_Call_runTests_u_LiteralUnlimitedNatural79);
					PolymorphismTest_main_Call_runTests_u_LiteralInteger80.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger80", PolymorphismTest_main_Call_runTests_u_LiteralInteger80);
			PolymorphismTest_main_runTests.reset(new Activity());
			this->addToElementRepository("runTests", PolymorphismTest_main_runTests);
				PolymorphismTest_main_runTests_ObjectFlow81.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow81", PolymorphismTest_main_runTests_ObjectFlow81);
					PolymorphismTest_main_runTests_ObjectFlow81_LiteralBoolean82.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean82", PolymorphismTest_main_runTests_ObjectFlow81_LiteralBoolean82);
					PolymorphismTest_main_runTests_ObjectFlow81_LiteralInteger83.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger83", PolymorphismTest_main_runTests_ObjectFlow81_LiteralInteger83);
				PolymorphismTest_main_runTests_ControlFlow84.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow84", PolymorphismTest_main_runTests_ControlFlow84);
				PolymorphismTest_main_runTests_Call_o3_.reset(new CallOperationAction());
				this->addToElementRepository("Call o3()", PolymorphismTest_main_runTests_Call_o3_);
					PolymorphismTest_main_runTests_Call_o3__target.reset(new InputPin());
					this->addToElementRepository("target", PolymorphismTest_main_runTests_Call_o3__target);
						PolymorphismTest_main_runTests_Call_o3__target_LiteralUnlimitedNatural85.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural85", PolymorphismTest_main_runTests_Call_o3__target_LiteralUnlimitedNatural85);
						PolymorphismTest_main_runTests_Call_o3__target_LiteralInteger86.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger86", PolymorphismTest_main_runTests_Call_o3__target_LiteralInteger86);
					PolymorphismTest_main_runTests_Call_o3__i.reset(new InputPin());
					this->addToElementRepository("i", PolymorphismTest_main_runTests_Call_o3__i);
						PolymorphismTest_main_runTests_Call_o3__i_LiteralInteger87.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger87", PolymorphismTest_main_runTests_Call_o3__i_LiteralInteger87);
						PolymorphismTest_main_runTests_Call_o3__i_LiteralInteger88.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger88", PolymorphismTest_main_runTests_Call_o3__i_LiteralInteger88);
				PolymorphismTest_main_runTests_Call_A_x_.reset(new CallOperationAction());
				this->addToElementRepository("Call A::x()", PolymorphismTest_main_runTests_Call_A_x_);
					PolymorphismTest_main_runTests_Call_A_x__target.reset(new InputPin());
					this->addToElementRepository("target", PolymorphismTest_main_runTests_Call_A_x__target);
						PolymorphismTest_main_runTests_Call_A_x__target_LiteralInteger89.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger89", PolymorphismTest_main_runTests_Call_A_x__target_LiteralInteger89);
						PolymorphismTest_main_runTests_Call_A_x__target_LiteralUnlimitedNatural90.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural90", PolymorphismTest_main_runTests_Call_A_x__target_LiteralUnlimitedNatural90);
				PolymorphismTest_main_runTests_Call_U_o1_.reset(new CallOperationAction());
				this->addToElementRepository("Call U::o1()", PolymorphismTest_main_runTests_Call_U_o1_);
					PolymorphismTest_main_runTests_Call_U_o1__target.reset(new InputPin());
					this->addToElementRepository("target", PolymorphismTest_main_runTests_Call_U_o1__target);
					PolymorphismTest_main_runTests_Call_U_o1__b.reset(new InputPin());
					this->addToElementRepository("b", PolymorphismTest_main_runTests_Call_U_o1__b);
						PolymorphismTest_main_runTests_Call_U_o1__b_LiteralInteger91.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger91", PolymorphismTest_main_runTests_Call_U_o1__b_LiteralInteger91);
						PolymorphismTest_main_runTests_Call_U_o1__b_LiteralInteger92.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger92", PolymorphismTest_main_runTests_Call_U_o1__b_LiteralInteger92);
					PolymorphismTest_main_runTests_Call_U_o1__a.reset(new OutputPin());
					this->addToElementRepository("a", PolymorphismTest_main_runTests_Call_U_o1__a);
						PolymorphismTest_main_runTests_Call_U_o1__a_LiteralUnlimitedNatural93.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural93", PolymorphismTest_main_runTests_Call_U_o1__a_LiteralUnlimitedNatural93);
						PolymorphismTest_main_runTests_Call_U_o1__a_LiteralInteger94.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger94", PolymorphismTest_main_runTests_Call_U_o1__a_LiteralInteger94);
						PolymorphismTest_main_runTests_Call_U_o1__a_LiteralInteger95.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger95", PolymorphismTest_main_runTests_Call_U_o1__a_LiteralInteger95);
				PolymorphismTest_main_runTests_ObjectFlow96.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow96", PolymorphismTest_main_runTests_ObjectFlow96);
					PolymorphismTest_main_runTests_ObjectFlow96_LiteralBoolean97.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean97", PolymorphismTest_main_runTests_ObjectFlow96_LiteralBoolean97);
					PolymorphismTest_main_runTests_ObjectFlow96_LiteralInteger98.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger98", PolymorphismTest_main_runTests_ObjectFlow96_LiteralInteger98);
				PolymorphismTest_main_runTests_Call_o4_.reset(new CallOperationAction());
				this->addToElementRepository("Call o4()", PolymorphismTest_main_runTests_Call_o4_);
					PolymorphismTest_main_runTests_Call_o4__target.reset(new InputPin());
					this->addToElementRepository("target", PolymorphismTest_main_runTests_Call_o4__target);
						PolymorphismTest_main_runTests_Call_o4__target_LiteralInteger99.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger99", PolymorphismTest_main_runTests_Call_o4__target_LiteralInteger99);
						PolymorphismTest_main_runTests_Call_o4__target_LiteralUnlimitedNatural100.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural100", PolymorphismTest_main_runTests_Call_o4__target_LiteralUnlimitedNatural100);
				PolymorphismTest_main_runTests_ObjectFlow101.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow101", PolymorphismTest_main_runTests_ObjectFlow101);
					PolymorphismTest_main_runTests_ObjectFlow101_LiteralBoolean102.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean102", PolymorphismTest_main_runTests_ObjectFlow101_LiteralBoolean102);
					PolymorphismTest_main_runTests_ObjectFlow101_LiteralInteger103.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger103", PolymorphismTest_main_runTests_ObjectFlow101_LiteralInteger103);
				PolymorphismTest_main_runTests_u.reset(new Parameter());
				this->addToElementRepository("u", PolymorphismTest_main_runTests_u);
				PolymorphismTest_main_runTests_ObjectFlow104.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow104", PolymorphismTest_main_runTests_ObjectFlow104);
					PolymorphismTest_main_runTests_ObjectFlow104_LiteralInteger105.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger105", PolymorphismTest_main_runTests_ObjectFlow104_LiteralInteger105);
					PolymorphismTest_main_runTests_ObjectFlow104_LiteralBoolean106.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean106", PolymorphismTest_main_runTests_ObjectFlow104_LiteralBoolean106);
				PolymorphismTest_main_runTests_ObjectFlow107.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow107", PolymorphismTest_main_runTests_ObjectFlow107);
					PolymorphismTest_main_runTests_ObjectFlow107_LiteralInteger108.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger108", PolymorphismTest_main_runTests_ObjectFlow107_LiteralInteger108);
					PolymorphismTest_main_runTests_ObjectFlow107_LiteralBoolean109.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean109", PolymorphismTest_main_runTests_ObjectFlow107_LiteralBoolean109);
				PolymorphismTest_main_runTests_ControlFlow110.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow110", PolymorphismTest_main_runTests_ControlFlow110);
				PolymorphismTest_main_runTests_u_node.reset(new ActivityParameterNode());
				this->addToElementRepository("u_node", PolymorphismTest_main_runTests_u_node);
					PolymorphismTest_main_runTests_u_node_LiteralInteger111.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger111", PolymorphismTest_main_runTests_u_node_LiteralInteger111);
				PolymorphismTest_main_runTests_ControlFlow112.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow112", PolymorphismTest_main_runTests_ControlFlow112);
				PolymorphismTest_main_runTests_Fork_u.reset(new ForkNode());
				this->addToElementRepository("Fork u", PolymorphismTest_main_runTests_Fork_u);
				PolymorphismTest_main_runTests_Call_o2_.reset(new CallOperationAction());
				this->addToElementRepository("Call o2()", PolymorphismTest_main_runTests_Call_o2_);
					PolymorphismTest_main_runTests_Call_o2__a.reset(new OutputPin());
					this->addToElementRepository("a", PolymorphismTest_main_runTests_Call_o2__a);
						PolymorphismTest_main_runTests_Call_o2__a_LiteralInteger113.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger113", PolymorphismTest_main_runTests_Call_o2__a_LiteralInteger113);
						PolymorphismTest_main_runTests_Call_o2__a_LiteralUnlimitedNatural114.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural114", PolymorphismTest_main_runTests_Call_o2__a_LiteralUnlimitedNatural114);
						PolymorphismTest_main_runTests_Call_o2__a_LiteralInteger115.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger115", PolymorphismTest_main_runTests_Call_o2__a_LiteralInteger115);
					PolymorphismTest_main_runTests_Call_o2__target.reset(new InputPin());
					this->addToElementRepository("target", PolymorphismTest_main_runTests_Call_o2__target);
						PolymorphismTest_main_runTests_Call_o2__target_LiteralUnlimitedNatural116.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural116", PolymorphismTest_main_runTests_Call_o2__target_LiteralUnlimitedNatural116);
						PolymorphismTest_main_runTests_Call_o2__target_LiteralInteger117.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger117", PolymorphismTest_main_runTests_Call_o2__target_LiteralInteger117);
					PolymorphismTest_main_runTests_Call_o2__b.reset(new InputPin());
					this->addToElementRepository("b", PolymorphismTest_main_runTests_Call_o2__b);
						PolymorphismTest_main_runTests_Call_o2__b_LiteralInteger118.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger118", PolymorphismTest_main_runTests_Call_o2__b_LiteralInteger118);
						PolymorphismTest_main_runTests_Call_o2__b_LiteralInteger119.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger119", PolymorphismTest_main_runTests_Call_o2__b_LiteralInteger119);
				PolymorphismTest_main_runTests_ObjectFlow120.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow120", PolymorphismTest_main_runTests_ObjectFlow120);
					PolymorphismTest_main_runTests_ObjectFlow120_LiteralBoolean121.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean121", PolymorphismTest_main_runTests_ObjectFlow120_LiteralBoolean121);
					PolymorphismTest_main_runTests_ObjectFlow120_LiteralInteger122.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger122", PolymorphismTest_main_runTests_ObjectFlow120_LiteralInteger122);
				PolymorphismTest_main_runTests_ObjectFlow123.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow123", PolymorphismTest_main_runTests_ObjectFlow123);
					PolymorphismTest_main_runTests_ObjectFlow123_LiteralBoolean124.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean124", PolymorphismTest_main_runTests_ObjectFlow123_LiteralBoolean124);
					PolymorphismTest_main_runTests_ObjectFlow123_LiteralInteger125.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger125", PolymorphismTest_main_runTests_ObjectFlow123_LiteralInteger125);
				PolymorphismTest_main_runTests_ControlFlow126.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow126", PolymorphismTest_main_runTests_ControlFlow126);
				PolymorphismTest_main_runTests_ControlFlow127.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow127", PolymorphismTest_main_runTests_ControlFlow127);
				PolymorphismTest_main_runTests_Call_o1_.reset(new CallOperationAction());
				this->addToElementRepository("Call o1()", PolymorphismTest_main_runTests_Call_o1_);
					PolymorphismTest_main_runTests_Call_o1__target.reset(new InputPin());
					this->addToElementRepository("target", PolymorphismTest_main_runTests_Call_o1__target);
						PolymorphismTest_main_runTests_Call_o1__target_LiteralUnlimitedNatural128.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural128", PolymorphismTest_main_runTests_Call_o1__target_LiteralUnlimitedNatural128);
						PolymorphismTest_main_runTests_Call_o1__target_LiteralInteger129.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger129", PolymorphismTest_main_runTests_Call_o1__target_LiteralInteger129);
					PolymorphismTest_main_runTests_Call_o1__b.reset(new InputPin());
					this->addToElementRepository("b", PolymorphismTest_main_runTests_Call_o1__b);
						PolymorphismTest_main_runTests_Call_o1__b_LiteralInteger130.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger130", PolymorphismTest_main_runTests_Call_o1__b_LiteralInteger130);
						PolymorphismTest_main_runTests_Call_o1__b_LiteralInteger131.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger131", PolymorphismTest_main_runTests_Call_o1__b_LiteralInteger131);
					PolymorphismTest_main_runTests_Call_o1__a.reset(new OutputPin());
					this->addToElementRepository("a", PolymorphismTest_main_runTests_Call_o1__a);
						PolymorphismTest_main_runTests_Call_o1__a_LiteralInteger132.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger132", PolymorphismTest_main_runTests_Call_o1__a_LiteralInteger132);
						PolymorphismTest_main_runTests_Call_o1__a_LiteralUnlimitedNatural133.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural133", PolymorphismTest_main_runTests_Call_o1__a_LiteralUnlimitedNatural133);
						PolymorphismTest_main_runTests_Call_o1__a_LiteralInteger134.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger134", PolymorphismTest_main_runTests_Call_o1__a_LiteralInteger134);
			PolymorphismTest_main_Create_S.reset(new CreateObjectAction());
			this->addToElementRepository("Create S", PolymorphismTest_main_Create_S);
				PolymorphismTest_main_Create_S_result.reset(new OutputPin());
				this->addToElementRepository("result", PolymorphismTest_main_Create_S_result);
					PolymorphismTest_main_Create_S_result_LiteralInteger135.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger135", PolymorphismTest_main_Create_S_result_LiteralInteger135);
					PolymorphismTest_main_Create_S_result_LiteralUnlimitedNatural136.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural136", PolymorphismTest_main_Create_S_result_LiteralUnlimitedNatural136);
			PolymorphismTest_main_ObjectFlow137.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow137", PolymorphismTest_main_ObjectFlow137);
				PolymorphismTest_main_ObjectFlow137_LiteralBoolean138.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean138", PolymorphismTest_main_ObjectFlow137_LiteralBoolean138);
				PolymorphismTest_main_ObjectFlow137_LiteralInteger139.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger139", PolymorphismTest_main_ObjectFlow137_LiteralInteger139);
		PolymorphismTest_T.reset(new Class_());
		this->addToElementRepository("T", PolymorphismTest_T);
			PolymorphismTest_T_o4_method.reset(new Activity());
			this->addToElementRepository("o4_method", PolymorphismTest_T_o4_method);
				PolymorphismTest_T_o4_method_Message.reset(new ValueSpecificationAction());
				this->addToElementRepository("Message", PolymorphismTest_T_o4_method_Message);
					PolymorphismTest_T_o4_method_Message_result.reset(new OutputPin());
					this->addToElementRepository("result", PolymorphismTest_T_o4_method_Message_result);
						PolymorphismTest_T_o4_method_Message_result_LiteralInteger140.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger140", PolymorphismTest_T_o4_method_Message_result_LiteralInteger140);
						PolymorphismTest_T_o4_method_Message_result_LiteralUnlimitedNatural141.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural141", PolymorphismTest_T_o4_method_Message_result_LiteralUnlimitedNatural141);
					PolymorphismTest_T_o4_method_Message_LiteralString142.reset(new LiteralString());
					this->addToElementRepository("LiteralString142", PolymorphismTest_T_o4_method_Message_LiteralString142);
				PolymorphismTest_T_o4_method_Call_WriteLine.reset(new CallBehaviorAction());
				this->addToElementRepository("Call WriteLine", PolymorphismTest_T_o4_method_Call_WriteLine);
					PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus);
						PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus_LiteralInteger143.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger143", PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus_LiteralInteger143);
						PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus_LiteralInteger144.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger144", PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus_LiteralInteger144);
						PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural145.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural145", PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural145);
					PolymorphismTest_T_o4_method_Call_WriteLine_value.reset(new InputPin());
					this->addToElementRepository("value", PolymorphismTest_T_o4_method_Call_WriteLine_value);
						PolymorphismTest_T_o4_method_Call_WriteLine_value_LiteralInteger146.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger146", PolymorphismTest_T_o4_method_Call_WriteLine_value_LiteralInteger146);
						PolymorphismTest_T_o4_method_Call_WriteLine_value_LiteralUnlimitedNatural147.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural147", PolymorphismTest_T_o4_method_Call_WriteLine_value_LiteralUnlimitedNatural147);
						PolymorphismTest_T_o4_method_Call_WriteLine_value_LiteralInteger148.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger148", PolymorphismTest_T_o4_method_Call_WriteLine_value_LiteralInteger148);
				PolymorphismTest_T_o4_method_ObjectFlow149.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow149", PolymorphismTest_T_o4_method_ObjectFlow149);
					PolymorphismTest_T_o4_method_ObjectFlow149_LiteralBoolean150.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean150", PolymorphismTest_T_o4_method_ObjectFlow149_LiteralBoolean150);
					PolymorphismTest_T_o4_method_ObjectFlow149_LiteralInteger151.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger151", PolymorphismTest_T_o4_method_ObjectFlow149_LiteralInteger151);
			PolymorphismTest_T_o3_Integer.reset(new Operation());
			this->addToElementRepository("o3_Integer", PolymorphismTest_T_o3_Integer);
				PolymorphismTest_T_o3_Integer_i.reset(new Parameter());
				this->addToElementRepository("i", PolymorphismTest_T_o3_Integer_i);
			PolymorphismTest_T_o1_method.reset(new Activity());
			this->addToElementRepository("o1_method", PolymorphismTest_T_o1_method);
				PolymorphismTest_T_o1_method_Message.reset(new ValueSpecificationAction());
				this->addToElementRepository("Message", PolymorphismTest_T_o1_method_Message);
					PolymorphismTest_T_o1_method_Message_LiteralString152.reset(new LiteralString());
					this->addToElementRepository("LiteralString152", PolymorphismTest_T_o1_method_Message_LiteralString152);
					PolymorphismTest_T_o1_method_Message_result.reset(new OutputPin());
					this->addToElementRepository("result", PolymorphismTest_T_o1_method_Message_result);
						PolymorphismTest_T_o1_method_Message_result_LiteralUnlimitedNatural153.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural153", PolymorphismTest_T_o1_method_Message_result_LiteralUnlimitedNatural153);
						PolymorphismTest_T_o1_method_Message_result_LiteralInteger154.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger154", PolymorphismTest_T_o1_method_Message_result_LiteralInteger154);
				PolymorphismTest_T_o1_method_Call_WriteLine.reset(new CallBehaviorAction());
				this->addToElementRepository("Call WriteLine", PolymorphismTest_T_o1_method_Call_WriteLine);
					PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus);
						PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus_LiteralInteger155.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger155", PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus_LiteralInteger155);
						PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus_LiteralInteger156.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger156", PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus_LiteralInteger156);
						PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural157.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural157", PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural157);
					PolymorphismTest_T_o1_method_Call_WriteLine_value.reset(new InputPin());
					this->addToElementRepository("value", PolymorphismTest_T_o1_method_Call_WriteLine_value);
						PolymorphismTest_T_o1_method_Call_WriteLine_value_LiteralInteger158.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger158", PolymorphismTest_T_o1_method_Call_WriteLine_value_LiteralInteger158);
						PolymorphismTest_T_o1_method_Call_WriteLine_value_LiteralUnlimitedNatural159.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural159", PolymorphismTest_T_o1_method_Call_WriteLine_value_LiteralUnlimitedNatural159);
						PolymorphismTest_T_o1_method_Call_WriteLine_value_LiteralInteger160.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger160", PolymorphismTest_T_o1_method_Call_WriteLine_value_LiteralInteger160);
				PolymorphismTest_T_o1_method_b_node.reset(new ActivityParameterNode());
				this->addToElementRepository("b_node", PolymorphismTest_T_o1_method_b_node);
					PolymorphismTest_T_o1_method_b_node_LiteralInteger161.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger161", PolymorphismTest_T_o1_method_b_node_LiteralInteger161);
				PolymorphismTest_T_o1_method_a.reset(new Parameter());
				this->addToElementRepository("a", PolymorphismTest_T_o1_method_a);
				PolymorphismTest_T_o1_method_a_node.reset(new ActivityParameterNode());
				this->addToElementRepository("a_node", PolymorphismTest_T_o1_method_a_node);
					PolymorphismTest_T_o1_method_a_node_LiteralInteger162.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger162", PolymorphismTest_T_o1_method_a_node_LiteralInteger162);
				PolymorphismTest_T_o1_method_ObjectFlow163.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow163", PolymorphismTest_T_o1_method_ObjectFlow163);
					PolymorphismTest_T_o1_method_ObjectFlow163_LiteralBoolean164.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean164", PolymorphismTest_T_o1_method_ObjectFlow163_LiteralBoolean164);
					PolymorphismTest_T_o1_method_ObjectFlow163_LiteralInteger165.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger165", PolymorphismTest_T_o1_method_ObjectFlow163_LiteralInteger165);
				PolymorphismTest_T_o1_method_b.reset(new Parameter());
				this->addToElementRepository("b", PolymorphismTest_T_o1_method_b);
			PolymorphismTest_T_o3_method.reset(new Activity());
			this->addToElementRepository("o3_method", PolymorphismTest_T_o3_method);
				PolymorphismTest_T_o3_method_ObjectFlow166.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow166", PolymorphismTest_T_o3_method_ObjectFlow166);
					PolymorphismTest_T_o3_method_ObjectFlow166_LiteralInteger167.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger167", PolymorphismTest_T_o3_method_ObjectFlow166_LiteralInteger167);
					PolymorphismTest_T_o3_method_ObjectFlow166_LiteralBoolean168.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean168", PolymorphismTest_T_o3_method_ObjectFlow166_LiteralBoolean168);
				PolymorphismTest_T_o3_method_Call_WriteLine.reset(new CallBehaviorAction());
				this->addToElementRepository("Call WriteLine", PolymorphismTest_T_o3_method_Call_WriteLine);
					PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus);
						PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural169.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural169", PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural169);
						PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus_LiteralInteger170.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger170", PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus_LiteralInteger170);
						PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus_LiteralInteger171.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger171", PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus_LiteralInteger171);
					PolymorphismTest_T_o3_method_Call_WriteLine_value.reset(new InputPin());
					this->addToElementRepository("value", PolymorphismTest_T_o3_method_Call_WriteLine_value);
						PolymorphismTest_T_o3_method_Call_WriteLine_value_LiteralInteger172.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger172", PolymorphismTest_T_o3_method_Call_WriteLine_value_LiteralInteger172);
						PolymorphismTest_T_o3_method_Call_WriteLine_value_LiteralUnlimitedNatural173.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural173", PolymorphismTest_T_o3_method_Call_WriteLine_value_LiteralUnlimitedNatural173);
						PolymorphismTest_T_o3_method_Call_WriteLine_value_LiteralInteger174.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger174", PolymorphismTest_T_o3_method_Call_WriteLine_value_LiteralInteger174);
				PolymorphismTest_T_o3_method_i.reset(new Parameter());
				this->addToElementRepository("i", PolymorphismTest_T_o3_method_i);
				PolymorphismTest_T_o3_method_i_node.reset(new ActivityParameterNode());
				this->addToElementRepository("i_node", PolymorphismTest_T_o3_method_i_node);
					PolymorphismTest_T_o3_method_i_node_LiteralInteger175.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger175", PolymorphismTest_T_o3_method_i_node_LiteralInteger175);
				PolymorphismTest_T_o3_method_Message.reset(new ValueSpecificationAction());
				this->addToElementRepository("Message", PolymorphismTest_T_o3_method_Message);
					PolymorphismTest_T_o3_method_Message_result.reset(new OutputPin());
					this->addToElementRepository("result", PolymorphismTest_T_o3_method_Message_result);
						PolymorphismTest_T_o3_method_Message_result_LiteralUnlimitedNatural176.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural176", PolymorphismTest_T_o3_method_Message_result_LiteralUnlimitedNatural176);
						PolymorphismTest_T_o3_method_Message_result_LiteralInteger177.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger177", PolymorphismTest_T_o3_method_Message_result_LiteralInteger177);
					PolymorphismTest_T_o3_method_Message_LiteralString178.reset(new LiteralString());
					this->addToElementRepository("LiteralString178", PolymorphismTest_T_o3_method_Message_LiteralString178);
			PolymorphismTest_T_o4.reset(new Operation());
			this->addToElementRepository("o4", PolymorphismTest_T_o4);
			PolymorphismTest_T_Generalization179.reset(new Generalization());
			this->addToElementRepository("Generalization179", PolymorphismTest_T_Generalization179);
			PolymorphismTest_T_o2_method.reset(new Activity());
			this->addToElementRepository("o2_method", PolymorphismTest_T_o2_method);
				PolymorphismTest_T_o2_method_b.reset(new Parameter());
				this->addToElementRepository("b", PolymorphismTest_T_o2_method_b);
				PolymorphismTest_T_o2_method_ObjectFlow180.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow180", PolymorphismTest_T_o2_method_ObjectFlow180);
					PolymorphismTest_T_o2_method_ObjectFlow180_LiteralInteger181.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger181", PolymorphismTest_T_o2_method_ObjectFlow180_LiteralInteger181);
					PolymorphismTest_T_o2_method_ObjectFlow180_LiteralBoolean182.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean182", PolymorphismTest_T_o2_method_ObjectFlow180_LiteralBoolean182);
				PolymorphismTest_T_o2_method_Call_WriteLine.reset(new CallBehaviorAction());
				this->addToElementRepository("Call WriteLine", PolymorphismTest_T_o2_method_Call_WriteLine);
					PolymorphismTest_T_o2_method_Call_WriteLine_value.reset(new InputPin());
					this->addToElementRepository("value", PolymorphismTest_T_o2_method_Call_WriteLine_value);
						PolymorphismTest_T_o2_method_Call_WriteLine_value_LiteralInteger183.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger183", PolymorphismTest_T_o2_method_Call_WriteLine_value_LiteralInteger183);
						PolymorphismTest_T_o2_method_Call_WriteLine_value_LiteralInteger184.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger184", PolymorphismTest_T_o2_method_Call_WriteLine_value_LiteralInteger184);
						PolymorphismTest_T_o2_method_Call_WriteLine_value_LiteralUnlimitedNatural185.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural185", PolymorphismTest_T_o2_method_Call_WriteLine_value_LiteralUnlimitedNatural185);
					PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus);
						PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural186.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural186", PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural186);
						PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus_LiteralInteger187.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger187", PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus_LiteralInteger187);
						PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus_LiteralInteger188.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger188", PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus_LiteralInteger188);
				PolymorphismTest_T_o2_method_result.reset(new Parameter());
				this->addToElementRepository("result", PolymorphismTest_T_o2_method_result);
				PolymorphismTest_T_o2_method_Message.reset(new ValueSpecificationAction());
				this->addToElementRepository("Message", PolymorphismTest_T_o2_method_Message);
					PolymorphismTest_T_o2_method_Message_result.reset(new OutputPin());
					this->addToElementRepository("result", PolymorphismTest_T_o2_method_Message_result);
						PolymorphismTest_T_o2_method_Message_result_LiteralInteger189.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger189", PolymorphismTest_T_o2_method_Message_result_LiteralInteger189);
						PolymorphismTest_T_o2_method_Message_result_LiteralUnlimitedNatural190.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural190", PolymorphismTest_T_o2_method_Message_result_LiteralUnlimitedNatural190);
					PolymorphismTest_T_o2_method_Message_LiteralString191.reset(new LiteralString());
					this->addToElementRepository("LiteralString191", PolymorphismTest_T_o2_method_Message_LiteralString191);
				PolymorphismTest_T_o2_method_b_node.reset(new ActivityParameterNode());
				this->addToElementRepository("b_node", PolymorphismTest_T_o2_method_b_node);
					PolymorphismTest_T_o2_method_b_node_LiteralInteger192.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger192", PolymorphismTest_T_o2_method_b_node_LiteralInteger192);
				PolymorphismTest_T_o2_method_result_node.reset(new ActivityParameterNode());
				this->addToElementRepository("result_node", PolymorphismTest_T_o2_method_result_node);
					PolymorphismTest_T_o2_method_result_node_LiteralInteger193.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger193", PolymorphismTest_T_o2_method_result_node_LiteralInteger193);
			PolymorphismTest_T_B_o2_B.reset(new Operation());
			this->addToElementRepository("B_o2_B", PolymorphismTest_T_B_o2_B);
				PolymorphismTest_T_B_o2_B_result.reset(new Parameter());
				this->addToElementRepository("result", PolymorphismTest_T_B_o2_B_result);
				PolymorphismTest_T_B_o2_B_b.reset(new Parameter());
				this->addToElementRepository("b", PolymorphismTest_T_B_o2_B_b);
			PolymorphismTest_T_A_o1_B.reset(new Operation());
			this->addToElementRepository("A_o1_B", PolymorphismTest_T_A_o1_B);
				PolymorphismTest_T_A_o1_B_b.reset(new Parameter());
				this->addToElementRepository("b", PolymorphismTest_T_A_o1_B_b);
				PolymorphismTest_T_A_o1_B_a.reset(new Parameter());
				this->addToElementRepository("a", PolymorphismTest_T_A_o1_B_a);
		PolymorphismTest_S.reset(new Class_());
		this->addToElementRepository("S", PolymorphismTest_S);
			PolymorphismTest_S_o1_method.reset(new Activity());
			this->addToElementRepository("o1_method", PolymorphismTest_S_o1_method);
				PolymorphismTest_S_o1_method_b.reset(new Parameter());
				this->addToElementRepository("b", PolymorphismTest_S_o1_method_b);
				PolymorphismTest_S_o1_method_ObjectFlow194.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow194", PolymorphismTest_S_o1_method_ObjectFlow194);
					PolymorphismTest_S_o1_method_ObjectFlow194_LiteralInteger195.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger195", PolymorphismTest_S_o1_method_ObjectFlow194_LiteralInteger195);
					PolymorphismTest_S_o1_method_ObjectFlow194_LiteralBoolean196.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean196", PolymorphismTest_S_o1_method_ObjectFlow194_LiteralBoolean196);
				PolymorphismTest_S_o1_method_a_node.reset(new ActivityParameterNode());
				this->addToElementRepository("a_node", PolymorphismTest_S_o1_method_a_node);
					PolymorphismTest_S_o1_method_a_node_LiteralInteger197.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger197", PolymorphismTest_S_o1_method_a_node_LiteralInteger197);
				PolymorphismTest_S_o1_method_Message.reset(new ValueSpecificationAction());
				this->addToElementRepository("Message", PolymorphismTest_S_o1_method_Message);
					PolymorphismTest_S_o1_method_Message_result.reset(new OutputPin());
					this->addToElementRepository("result", PolymorphismTest_S_o1_method_Message_result);
						PolymorphismTest_S_o1_method_Message_result_LiteralInteger198.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger198", PolymorphismTest_S_o1_method_Message_result_LiteralInteger198);
						PolymorphismTest_S_o1_method_Message_result_LiteralUnlimitedNatural199.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural199", PolymorphismTest_S_o1_method_Message_result_LiteralUnlimitedNatural199);
					PolymorphismTest_S_o1_method_Message_LiteralString200.reset(new LiteralString());
					this->addToElementRepository("LiteralString200", PolymorphismTest_S_o1_method_Message_LiteralString200);
				PolymorphismTest_S_o1_method_b_node.reset(new ActivityParameterNode());
				this->addToElementRepository("b_node", PolymorphismTest_S_o1_method_b_node);
					PolymorphismTest_S_o1_method_b_node_LiteralInteger201.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger201", PolymorphismTest_S_o1_method_b_node_LiteralInteger201);
				PolymorphismTest_S_o1_method_a.reset(new Parameter());
				this->addToElementRepository("a", PolymorphismTest_S_o1_method_a);
				PolymorphismTest_S_o1_method_Call_WriteLine.reset(new CallBehaviorAction());
				this->addToElementRepository("Call WriteLine", PolymorphismTest_S_o1_method_Call_WriteLine);
					PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus);
						PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus_LiteralInteger202.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger202", PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus_LiteralInteger202);
						PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural203.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural203", PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural203);
						PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus_LiteralInteger204.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger204", PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus_LiteralInteger204);
					PolymorphismTest_S_o1_method_Call_WriteLine_value.reset(new InputPin());
					this->addToElementRepository("value", PolymorphismTest_S_o1_method_Call_WriteLine_value);
						PolymorphismTest_S_o1_method_Call_WriteLine_value_LiteralInteger205.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger205", PolymorphismTest_S_o1_method_Call_WriteLine_value_LiteralInteger205);
						PolymorphismTest_S_o1_method_Call_WriteLine_value_LiteralInteger206.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger206", PolymorphismTest_S_o1_method_Call_WriteLine_value_LiteralInteger206);
						PolymorphismTest_S_o1_method_Call_WriteLine_value_LiteralUnlimitedNatural207.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural207", PolymorphismTest_S_o1_method_Call_WriteLine_value_LiteralUnlimitedNatural207);
			PolymorphismTest_S_o3_method.reset(new Activity());
			this->addToElementRepository("o3_method", PolymorphismTest_S_o3_method);
				PolymorphismTest_S_o3_method_ObjectFlow208.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow208", PolymorphismTest_S_o3_method_ObjectFlow208);
					PolymorphismTest_S_o3_method_ObjectFlow208_LiteralBoolean209.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean209", PolymorphismTest_S_o3_method_ObjectFlow208_LiteralBoolean209);
					PolymorphismTest_S_o3_method_ObjectFlow208_LiteralInteger210.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger210", PolymorphismTest_S_o3_method_ObjectFlow208_LiteralInteger210);
				PolymorphismTest_S_o3_method_Message.reset(new ValueSpecificationAction());
				this->addToElementRepository("Message", PolymorphismTest_S_o3_method_Message);
					PolymorphismTest_S_o3_method_Message_LiteralString211.reset(new LiteralString());
					this->addToElementRepository("LiteralString211", PolymorphismTest_S_o3_method_Message_LiteralString211);
					PolymorphismTest_S_o3_method_Message_result.reset(new OutputPin());
					this->addToElementRepository("result", PolymorphismTest_S_o3_method_Message_result);
						PolymorphismTest_S_o3_method_Message_result_LiteralInteger212.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger212", PolymorphismTest_S_o3_method_Message_result_LiteralInteger212);
						PolymorphismTest_S_o3_method_Message_result_LiteralUnlimitedNatural213.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural213", PolymorphismTest_S_o3_method_Message_result_LiteralUnlimitedNatural213);
				PolymorphismTest_S_o3_method_Call_WriteLine.reset(new CallBehaviorAction());
				this->addToElementRepository("Call WriteLine", PolymorphismTest_S_o3_method_Call_WriteLine);
					PolymorphismTest_S_o3_method_Call_WriteLine_value.reset(new InputPin());
					this->addToElementRepository("value", PolymorphismTest_S_o3_method_Call_WriteLine_value);
						PolymorphismTest_S_o3_method_Call_WriteLine_value_LiteralInteger214.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger214", PolymorphismTest_S_o3_method_Call_WriteLine_value_LiteralInteger214);
						PolymorphismTest_S_o3_method_Call_WriteLine_value_LiteralInteger215.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger215", PolymorphismTest_S_o3_method_Call_WriteLine_value_LiteralInteger215);
						PolymorphismTest_S_o3_method_Call_WriteLine_value_LiteralUnlimitedNatural216.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural216", PolymorphismTest_S_o3_method_Call_WriteLine_value_LiteralUnlimitedNatural216);
					PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus);
						PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus_LiteralInteger217.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger217", PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus_LiteralInteger217);
						PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural218.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural218", PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural218);
						PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus_LiteralInteger219.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger219", PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus_LiteralInteger219);
			PolymorphismTest_S_o5_method.reset(new Activity());
			this->addToElementRepository("o5_method", PolymorphismTest_S_o5_method);
				PolymorphismTest_S_o5_method_Call_WriteLine.reset(new CallBehaviorAction());
				this->addToElementRepository("Call WriteLine", PolymorphismTest_S_o5_method_Call_WriteLine);
					PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus);
						PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural220.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural220", PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural220);
						PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus_LiteralInteger221.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger221", PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus_LiteralInteger221);
						PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus_LiteralInteger222.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger222", PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus_LiteralInteger222);
					PolymorphismTest_S_o5_method_Call_WriteLine_value.reset(new InputPin());
					this->addToElementRepository("value", PolymorphismTest_S_o5_method_Call_WriteLine_value);
						PolymorphismTest_S_o5_method_Call_WriteLine_value_LiteralInteger223.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger223", PolymorphismTest_S_o5_method_Call_WriteLine_value_LiteralInteger223);
						PolymorphismTest_S_o5_method_Call_WriteLine_value_LiteralInteger224.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger224", PolymorphismTest_S_o5_method_Call_WriteLine_value_LiteralInteger224);
						PolymorphismTest_S_o5_method_Call_WriteLine_value_LiteralUnlimitedNatural225.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural225", PolymorphismTest_S_o5_method_Call_WriteLine_value_LiteralUnlimitedNatural225);
				PolymorphismTest_S_o5_method_Message.reset(new ValueSpecificationAction());
				this->addToElementRepository("Message", PolymorphismTest_S_o5_method_Message);
					PolymorphismTest_S_o5_method_Message_LiteralString226.reset(new LiteralString());
					this->addToElementRepository("LiteralString226", PolymorphismTest_S_o5_method_Message_LiteralString226);
					PolymorphismTest_S_o5_method_Message_result.reset(new OutputPin());
					this->addToElementRepository("result", PolymorphismTest_S_o5_method_Message_result);
						PolymorphismTest_S_o5_method_Message_result_LiteralUnlimitedNatural227.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural227", PolymorphismTest_S_o5_method_Message_result_LiteralUnlimitedNatural227);
						PolymorphismTest_S_o5_method_Message_result_LiteralInteger228.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger228", PolymorphismTest_S_o5_method_Message_result_LiteralInteger228);
				PolymorphismTest_S_o5_method_ObjectFlow229.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow229", PolymorphismTest_S_o5_method_ObjectFlow229);
					PolymorphismTest_S_o5_method_ObjectFlow229_LiteralInteger230.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger230", PolymorphismTest_S_o5_method_ObjectFlow229_LiteralInteger230);
					PolymorphismTest_S_o5_method_ObjectFlow229_LiteralBoolean231.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean231", PolymorphismTest_S_o5_method_ObjectFlow229_LiteralBoolean231);
			PolymorphismTest_S_o5.reset(new Operation());
			this->addToElementRepository("o5", PolymorphismTest_S_o5);
			PolymorphismTest_S_Generalization232.reset(new Generalization());
			this->addToElementRepository("Generalization232", PolymorphismTest_S_Generalization232);
			PolymorphismTest_S_o2_method.reset(new Activity());
			this->addToElementRepository("o2_method", PolymorphismTest_S_o2_method);
				PolymorphismTest_S_o2_method_b.reset(new Parameter());
				this->addToElementRepository("b", PolymorphismTest_S_o2_method_b);
				PolymorphismTest_S_o2_method_a_node.reset(new ActivityParameterNode());
				this->addToElementRepository("a_node", PolymorphismTest_S_o2_method_a_node);
					PolymorphismTest_S_o2_method_a_node_LiteralInteger233.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger233", PolymorphismTest_S_o2_method_a_node_LiteralInteger233);
				PolymorphismTest_S_o2_method_a.reset(new Parameter());
				this->addToElementRepository("a", PolymorphismTest_S_o2_method_a);
				PolymorphismTest_S_o2_method_Message.reset(new ValueSpecificationAction());
				this->addToElementRepository("Message", PolymorphismTest_S_o2_method_Message);
					PolymorphismTest_S_o2_method_Message_LiteralString234.reset(new LiteralString());
					this->addToElementRepository("LiteralString234", PolymorphismTest_S_o2_method_Message_LiteralString234);
					PolymorphismTest_S_o2_method_Message_result.reset(new OutputPin());
					this->addToElementRepository("result", PolymorphismTest_S_o2_method_Message_result);
						PolymorphismTest_S_o2_method_Message_result_LiteralUnlimitedNatural235.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural235", PolymorphismTest_S_o2_method_Message_result_LiteralUnlimitedNatural235);
						PolymorphismTest_S_o2_method_Message_result_LiteralInteger236.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger236", PolymorphismTest_S_o2_method_Message_result_LiteralInteger236);
				PolymorphismTest_S_o2_method_Call_WriteLine.reset(new CallBehaviorAction());
				this->addToElementRepository("Call WriteLine", PolymorphismTest_S_o2_method_Call_WriteLine);
					PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus);
						PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus_LiteralInteger237.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger237", PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus_LiteralInteger237);
						PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural238.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural238", PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus_LiteralUnlimitedNatural238);
						PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus_LiteralInteger239.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger239", PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus_LiteralInteger239);
					PolymorphismTest_S_o2_method_Call_WriteLine_value.reset(new InputPin());
					this->addToElementRepository("value", PolymorphismTest_S_o2_method_Call_WriteLine_value);
						PolymorphismTest_S_o2_method_Call_WriteLine_value_LiteralInteger240.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger240", PolymorphismTest_S_o2_method_Call_WriteLine_value_LiteralInteger240);
						PolymorphismTest_S_o2_method_Call_WriteLine_value_LiteralUnlimitedNatural241.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural241", PolymorphismTest_S_o2_method_Call_WriteLine_value_LiteralUnlimitedNatural241);
						PolymorphismTest_S_o2_method_Call_WriteLine_value_LiteralInteger242.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger242", PolymorphismTest_S_o2_method_Call_WriteLine_value_LiteralInteger242);
				PolymorphismTest_S_o2_method_b_node.reset(new ActivityParameterNode());
				this->addToElementRepository("b_node", PolymorphismTest_S_o2_method_b_node);
					PolymorphismTest_S_o2_method_b_node_LiteralInteger243.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger243", PolymorphismTest_S_o2_method_b_node_LiteralInteger243);
				PolymorphismTest_S_o2_method_ObjectFlow244.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow244", PolymorphismTest_S_o2_method_ObjectFlow244);
					PolymorphismTest_S_o2_method_ObjectFlow244_LiteralInteger245.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger245", PolymorphismTest_S_o2_method_ObjectFlow244_LiteralInteger245);
					PolymorphismTest_S_o2_method_ObjectFlow244_LiteralBoolean246.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean246", PolymorphismTest_S_o2_method_ObjectFlow244_LiteralBoolean246);
			PolymorphismTest_S_A_o1_B.reset(new Operation());
			this->addToElementRepository("A_o1_B", PolymorphismTest_S_A_o1_B);
				PolymorphismTest_S_A_o1_B_a.reset(new Parameter());
				this->addToElementRepository("a", PolymorphismTest_S_A_o1_B_a);
				PolymorphismTest_S_A_o1_B_b.reset(new Parameter());
				this->addToElementRepository("b", PolymorphismTest_S_A_o1_B_b);
			PolymorphismTest_S_B_o2_A.reset(new Operation());
			this->addToElementRepository("B_o2_A", PolymorphismTest_S_B_o2_A);
				PolymorphismTest_S_B_o2_A_a.reset(new Parameter());
				this->addToElementRepository("a", PolymorphismTest_S_B_o2_A_a);
				PolymorphismTest_S_B_o2_A_b.reset(new Parameter());
				this->addToElementRepository("b", PolymorphismTest_S_B_o2_A_b);
			PolymorphismTest_S_o3.reset(new Operation());
			this->addToElementRepository("o3", PolymorphismTest_S_o3);

	// Initialize public members
	/*
	 * Model PolymorphismTest
	 */
	PolymorphismTest->setThisPackagePtr(PolymorphismTest);
	PolymorphismTest->setName("PolymorphismTest");
	PolymorphismTest->setVisibility(VisibilityKind::public_);
		// Class U
		PolymorphismTest_U->setThisClass_Ptr(PolymorphismTest_U);
		PolymorphismTest_U->setName("U");
		PolymorphismTest_U->setVisibility(VisibilityKind::public_);
		// Activity o4_method
			PolymorphismTest_U_o4_method->setThisActivityPtr(PolymorphismTest_U_o4_method);
			PolymorphismTest_U_o4_method->setName("o4_method");
			PolymorphismTest_U_o4_method->setVisibility(VisibilityKind::public_);
				// CallBehaviorAction Call WriteLine
				PolymorphismTest_U_o4_method_Call_WriteLine->setThisExecutableNodePtr(PolymorphismTest_U_o4_method_Call_WriteLine);
				PolymorphismTest_U_o4_method_Call_WriteLine->setName("Call WriteLine");
				PolymorphismTest_U_o4_method_Call_WriteLine->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus->setThisElementPtr(PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus);
					PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus->setName("errorStatus");
					PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus->setLower(0);
				PolymorphismTest_U_o4_method_Call_WriteLine->addResult(PolymorphismTest_U_o4_method_Call_WriteLine_errorStatus);
				PolymorphismTest_U_o4_method_Call_WriteLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					PolymorphismTest_U_o4_method_Call_WriteLine_value->setThisElementPtr(PolymorphismTest_U_o4_method_Call_WriteLine_value);
					PolymorphismTest_U_o4_method_Call_WriteLine_value->setName("value");
					PolymorphismTest_U_o4_method_Call_WriteLine_value->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o4_method_Call_WriteLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_U_o4_method_Call_WriteLine->addArgument(PolymorphismTest_U_o4_method_Call_WriteLine_value);
			PolymorphismTest_U_o4_method->addNode(PolymorphismTest_U_o4_method_Call_WriteLine);
				// ValueSpecificationAction Message
				PolymorphismTest_U_o4_method_Message->setThisExecutableNodePtr(PolymorphismTest_U_o4_method_Message);
				PolymorphismTest_U_o4_method_Message->setName("Message");
				PolymorphismTest_U_o4_method_Message->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString6
					PolymorphismTest_U_o4_method_Message_LiteralString6->setThisElementPtr(PolymorphismTest_U_o4_method_Message_LiteralString6);
					PolymorphismTest_U_o4_method_Message_LiteralString6->setName("LiteralString6");
					PolymorphismTest_U_o4_method_Message_LiteralString6->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o4_method_Message_LiteralString6->setValue("U::o4()");
				PolymorphismTest_U_o4_method_Message->setValue(PolymorphismTest_U_o4_method_Message_LiteralString6);
					// OutputPin result
					PolymorphismTest_U_o4_method_Message_result->setThisElementPtr(PolymorphismTest_U_o4_method_Message_result);
					PolymorphismTest_U_o4_method_Message_result->setName("result");
					PolymorphismTest_U_o4_method_Message_result->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o4_method_Message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_U_o4_method_Message->setResult(PolymorphismTest_U_o4_method_Message_result);
			PolymorphismTest_U_o4_method->addNode(PolymorphismTest_U_o4_method_Message);
				// ObjectFlow ObjectFlow9 from result to value
				PolymorphismTest_U_o4_method_ObjectFlow9->setThisActivityEdgePtr(PolymorphismTest_U_o4_method_ObjectFlow9);
				PolymorphismTest_U_o4_method_ObjectFlow9->setName("ObjectFlow9");
				PolymorphismTest_U_o4_method_ObjectFlow9->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_o4_method_ObjectFlow9->setSource(PolymorphismTest_U_o4_method_Message_result);
				PolymorphismTest_U_o4_method_ObjectFlow9->setTarget(PolymorphismTest_U_o4_method_Call_WriteLine_value);
					// LiteralBoolean LiteralBoolean11
					PolymorphismTest_U_o4_method_ObjectFlow9_LiteralBoolean11->setThisElementPtr(PolymorphismTest_U_o4_method_ObjectFlow9_LiteralBoolean11);
					PolymorphismTest_U_o4_method_ObjectFlow9_LiteralBoolean11->setName("LiteralBoolean11");
					PolymorphismTest_U_o4_method_ObjectFlow9_LiteralBoolean11->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o4_method_ObjectFlow9_LiteralBoolean11->setValue(true);
				PolymorphismTest_U_o4_method_ObjectFlow9->setGuard(PolymorphismTest_U_o4_method_ObjectFlow9_LiteralBoolean11);
			PolymorphismTest_U_o4_method->addEdge(PolymorphismTest_U_o4_method_ObjectFlow9);
		PolymorphismTest_U->addOwnedBehavior(PolymorphismTest_U_o4_method);
			// Activity o2_method
			PolymorphismTest_U_o2_method->setThisActivityPtr(PolymorphismTest_U_o2_method);
			PolymorphismTest_U_o2_method->setName("o2_method");
			PolymorphismTest_U_o2_method->setVisibility(VisibilityKind::public_);
			
				// Parameter b
				PolymorphismTest_U_o2_method_b->setThisElementPtr(PolymorphismTest_U_o2_method_b);
				PolymorphismTest_U_o2_method_b->setName("b");
				PolymorphismTest_U_o2_method_b->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_o2_method_b->setType(PolymorphismTest_B);
			PolymorphismTest_U_o2_method->addOwnedParameter(PolymorphismTest_U_o2_method_b);
				// Parameter a
				PolymorphismTest_U_o2_method_a->setThisElementPtr(PolymorphismTest_U_o2_method_a);
				PolymorphismTest_U_o2_method_a->setName("a");
				PolymorphismTest_U_o2_method_a->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_o2_method_a->setType(PolymorphismTest_A);
				PolymorphismTest_U_o2_method_a->setDirection(ParameterDirectionKind::return_);
			PolymorphismTest_U_o2_method->addOwnedParameter(PolymorphismTest_U_o2_method_a);
				// ActivityParameterNode b_node
				PolymorphismTest_U_o2_method_b_node->setThisElementPtr(PolymorphismTest_U_o2_method_b_node);
				PolymorphismTest_U_o2_method_b_node->setName("b_node");
				PolymorphismTest_U_o2_method_b_node->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_o2_method_b_node->setParameter(PolymorphismTest_U_o2_method_b);
			PolymorphismTest_U_o2_method->addNode(PolymorphismTest_U_o2_method_b_node);
				// CallBehaviorAction Call WriteLine
				PolymorphismTest_U_o2_method_Call_WriteLine->setThisExecutableNodePtr(PolymorphismTest_U_o2_method_Call_WriteLine);
				PolymorphismTest_U_o2_method_Call_WriteLine->setName("Call WriteLine");
				PolymorphismTest_U_o2_method_Call_WriteLine->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus->setThisElementPtr(PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus);
					PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus->setName("errorStatus");
					PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus->setLower(0);
				PolymorphismTest_U_o2_method_Call_WriteLine->addResult(PolymorphismTest_U_o2_method_Call_WriteLine_errorStatus);
				PolymorphismTest_U_o2_method_Call_WriteLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					PolymorphismTest_U_o2_method_Call_WriteLine_value->setThisElementPtr(PolymorphismTest_U_o2_method_Call_WriteLine_value);
					PolymorphismTest_U_o2_method_Call_WriteLine_value->setName("value");
					PolymorphismTest_U_o2_method_Call_WriteLine_value->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o2_method_Call_WriteLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_U_o2_method_Call_WriteLine->addArgument(PolymorphismTest_U_o2_method_Call_WriteLine_value);
			PolymorphismTest_U_o2_method->addNode(PolymorphismTest_U_o2_method_Call_WriteLine);
				// ValueSpecificationAction Message
				PolymorphismTest_U_o2_method_Message->setThisExecutableNodePtr(PolymorphismTest_U_o2_method_Message);
				PolymorphismTest_U_o2_method_Message->setName("Message");
				PolymorphismTest_U_o2_method_Message->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString24
					PolymorphismTest_U_o2_method_Message_LiteralString24->setThisElementPtr(PolymorphismTest_U_o2_method_Message_LiteralString24);
					PolymorphismTest_U_o2_method_Message_LiteralString24->setName("LiteralString24");
					PolymorphismTest_U_o2_method_Message_LiteralString24->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o2_method_Message_LiteralString24->setValue("U::o2(b : B) : A");
				PolymorphismTest_U_o2_method_Message->setValue(PolymorphismTest_U_o2_method_Message_LiteralString24);
					// OutputPin result
					PolymorphismTest_U_o2_method_Message_result->setThisElementPtr(PolymorphismTest_U_o2_method_Message_result);
					PolymorphismTest_U_o2_method_Message_result->setName("result");
					PolymorphismTest_U_o2_method_Message_result->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o2_method_Message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_U_o2_method_Message->setResult(PolymorphismTest_U_o2_method_Message_result);
			PolymorphismTest_U_o2_method->addNode(PolymorphismTest_U_o2_method_Message);
				// ActivityParameterNode a_node
				PolymorphismTest_U_o2_method_a_node->setThisElementPtr(PolymorphismTest_U_o2_method_a_node);
				PolymorphismTest_U_o2_method_a_node->setName("a_node");
				PolymorphismTest_U_o2_method_a_node->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_o2_method_a_node->setParameter(PolymorphismTest_U_o2_method_a);
			PolymorphismTest_U_o2_method->addNode(PolymorphismTest_U_o2_method_a_node);
				// ObjectFlow ObjectFlow13 from result to value
				PolymorphismTest_U_o2_method_ObjectFlow13->setThisActivityEdgePtr(PolymorphismTest_U_o2_method_ObjectFlow13);
				PolymorphismTest_U_o2_method_ObjectFlow13->setName("ObjectFlow13");
				PolymorphismTest_U_o2_method_ObjectFlow13->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_o2_method_ObjectFlow13->setSource(PolymorphismTest_U_o2_method_Message_result);
				PolymorphismTest_U_o2_method_ObjectFlow13->setTarget(PolymorphismTest_U_o2_method_Call_WriteLine_value);
					// LiteralBoolean LiteralBoolean15
					PolymorphismTest_U_o2_method_ObjectFlow13_LiteralBoolean15->setThisElementPtr(PolymorphismTest_U_o2_method_ObjectFlow13_LiteralBoolean15);
					PolymorphismTest_U_o2_method_ObjectFlow13_LiteralBoolean15->setName("LiteralBoolean15");
					PolymorphismTest_U_o2_method_ObjectFlow13_LiteralBoolean15->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o2_method_ObjectFlow13_LiteralBoolean15->setValue(true);
				PolymorphismTest_U_o2_method_ObjectFlow13->setGuard(PolymorphismTest_U_o2_method_ObjectFlow13_LiteralBoolean15);
			PolymorphismTest_U_o2_method->addEdge(PolymorphismTest_U_o2_method_ObjectFlow13);
		PolymorphismTest_U->addOwnedBehavior(PolymorphismTest_U_o2_method);
			// Activity o3_method
			PolymorphismTest_U_o3_method->setThisActivityPtr(PolymorphismTest_U_o3_method);
			PolymorphismTest_U_o3_method->setName("o3_method");
			PolymorphismTest_U_o3_method->setVisibility(VisibilityKind::public_);
			
				// Parameter i
				PolymorphismTest_U_o3_method_i->setThisElementPtr(PolymorphismTest_U_o3_method_i);
				PolymorphismTest_U_o3_method_i->setName("i");
				PolymorphismTest_U_o3_method_i->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_o3_method_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			PolymorphismTest_U_o3_method->addOwnedParameter(PolymorphismTest_U_o3_method_i);
				// ActivityParameterNode i_node
				PolymorphismTest_U_o3_method_i_node->setThisElementPtr(PolymorphismTest_U_o3_method_i_node);
				PolymorphismTest_U_o3_method_i_node->setName("i_node");
				PolymorphismTest_U_o3_method_i_node->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_o3_method_i_node->setParameter(PolymorphismTest_U_o3_method_i);
			PolymorphismTest_U_o3_method->addNode(PolymorphismTest_U_o3_method_i_node);
				// ValueSpecificationAction Message
				PolymorphismTest_U_o3_method_Message->setThisExecutableNodePtr(PolymorphismTest_U_o3_method_Message);
				PolymorphismTest_U_o3_method_Message->setName("Message");
				PolymorphismTest_U_o3_method_Message->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString29
					PolymorphismTest_U_o3_method_Message_LiteralString29->setThisElementPtr(PolymorphismTest_U_o3_method_Message_LiteralString29);
					PolymorphismTest_U_o3_method_Message_LiteralString29->setName("LiteralString29");
					PolymorphismTest_U_o3_method_Message_LiteralString29->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o3_method_Message_LiteralString29->setValue("U::o3(i : int)");
				PolymorphismTest_U_o3_method_Message->setValue(PolymorphismTest_U_o3_method_Message_LiteralString29);
					// OutputPin result
					PolymorphismTest_U_o3_method_Message_result->setThisElementPtr(PolymorphismTest_U_o3_method_Message_result);
					PolymorphismTest_U_o3_method_Message_result->setName("result");
					PolymorphismTest_U_o3_method_Message_result->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o3_method_Message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_U_o3_method_Message->setResult(PolymorphismTest_U_o3_method_Message_result);
			PolymorphismTest_U_o3_method->addNode(PolymorphismTest_U_o3_method_Message);
				// CallBehaviorAction Call WriteLine
				PolymorphismTest_U_o3_method_Call_WriteLine->setThisExecutableNodePtr(PolymorphismTest_U_o3_method_Call_WriteLine);
				PolymorphismTest_U_o3_method_Call_WriteLine->setName("Call WriteLine");
				PolymorphismTest_U_o3_method_Call_WriteLine->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus->setThisElementPtr(PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus);
					PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus->setName("errorStatus");
					PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus->setLower(0);
				PolymorphismTest_U_o3_method_Call_WriteLine->addResult(PolymorphismTest_U_o3_method_Call_WriteLine_errorStatus);
				PolymorphismTest_U_o3_method_Call_WriteLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					PolymorphismTest_U_o3_method_Call_WriteLine_value->setThisElementPtr(PolymorphismTest_U_o3_method_Call_WriteLine_value);
					PolymorphismTest_U_o3_method_Call_WriteLine_value->setName("value");
					PolymorphismTest_U_o3_method_Call_WriteLine_value->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o3_method_Call_WriteLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_U_o3_method_Call_WriteLine->addArgument(PolymorphismTest_U_o3_method_Call_WriteLine_value);
			PolymorphismTest_U_o3_method->addNode(PolymorphismTest_U_o3_method_Call_WriteLine);
				// ObjectFlow ObjectFlow36 from result to value
				PolymorphismTest_U_o3_method_ObjectFlow36->setThisActivityEdgePtr(PolymorphismTest_U_o3_method_ObjectFlow36);
				PolymorphismTest_U_o3_method_ObjectFlow36->setName("ObjectFlow36");
				PolymorphismTest_U_o3_method_ObjectFlow36->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_o3_method_ObjectFlow36->setSource(PolymorphismTest_U_o3_method_Message_result);
				PolymorphismTest_U_o3_method_ObjectFlow36->setTarget(PolymorphismTest_U_o3_method_Call_WriteLine_value);
					// LiteralBoolean LiteralBoolean38
					PolymorphismTest_U_o3_method_ObjectFlow36_LiteralBoolean38->setThisElementPtr(PolymorphismTest_U_o3_method_ObjectFlow36_LiteralBoolean38);
					PolymorphismTest_U_o3_method_ObjectFlow36_LiteralBoolean38->setName("LiteralBoolean38");
					PolymorphismTest_U_o3_method_ObjectFlow36_LiteralBoolean38->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o3_method_ObjectFlow36_LiteralBoolean38->setValue(true);
				PolymorphismTest_U_o3_method_ObjectFlow36->setGuard(PolymorphismTest_U_o3_method_ObjectFlow36_LiteralBoolean38);
			PolymorphismTest_U_o3_method->addEdge(PolymorphismTest_U_o3_method_ObjectFlow36);
		PolymorphismTest_U->addOwnedBehavior(PolymorphismTest_U_o3_method);
			// Activity x_method
			PolymorphismTest_U_x_method->setThisActivityPtr(PolymorphismTest_U_x_method);
			PolymorphismTest_U_x_method->setName("x_method");
			PolymorphismTest_U_x_method->setVisibility(VisibilityKind::public_);
				// CallBehaviorAction Call WriteLine
				PolymorphismTest_U_x_method_Call_WriteLine->setThisExecutableNodePtr(PolymorphismTest_U_x_method_Call_WriteLine);
				PolymorphismTest_U_x_method_Call_WriteLine->setName("Call WriteLine");
				PolymorphismTest_U_x_method_Call_WriteLine->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					PolymorphismTest_U_x_method_Call_WriteLine_errorStatus->setThisElementPtr(PolymorphismTest_U_x_method_Call_WriteLine_errorStatus);
					PolymorphismTest_U_x_method_Call_WriteLine_errorStatus->setName("errorStatus");
					PolymorphismTest_U_x_method_Call_WriteLine_errorStatus->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_x_method_Call_WriteLine_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					PolymorphismTest_U_x_method_Call_WriteLine_errorStatus->setLower(0);
				PolymorphismTest_U_x_method_Call_WriteLine->addResult(PolymorphismTest_U_x_method_Call_WriteLine_errorStatus);
				PolymorphismTest_U_x_method_Call_WriteLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					PolymorphismTest_U_x_method_Call_WriteLine_value->setThisElementPtr(PolymorphismTest_U_x_method_Call_WriteLine_value);
					PolymorphismTest_U_x_method_Call_WriteLine_value->setName("value");
					PolymorphismTest_U_x_method_Call_WriteLine_value->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_x_method_Call_WriteLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_U_x_method_Call_WriteLine->addArgument(PolymorphismTest_U_x_method_Call_WriteLine_value);
			PolymorphismTest_U_x_method->addNode(PolymorphismTest_U_x_method_Call_WriteLine);
				// ValueSpecificationAction Message
				PolymorphismTest_U_x_method_Message->setThisExecutableNodePtr(PolymorphismTest_U_x_method_Message);
				PolymorphismTest_U_x_method_Message->setName("Message");
				PolymorphismTest_U_x_method_Message->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString48
					PolymorphismTest_U_x_method_Message_LiteralString48->setThisElementPtr(PolymorphismTest_U_x_method_Message_LiteralString48);
					PolymorphismTest_U_x_method_Message_LiteralString48->setName("LiteralString48");
					PolymorphismTest_U_x_method_Message_LiteralString48->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_x_method_Message_LiteralString48->setValue("U::x()");
				PolymorphismTest_U_x_method_Message->setValue(PolymorphismTest_U_x_method_Message_LiteralString48);
					// OutputPin result
					PolymorphismTest_U_x_method_Message_result->setThisElementPtr(PolymorphismTest_U_x_method_Message_result);
					PolymorphismTest_U_x_method_Message_result->setName("result");
					PolymorphismTest_U_x_method_Message_result->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_x_method_Message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_U_x_method_Message->setResult(PolymorphismTest_U_x_method_Message_result);
			PolymorphismTest_U_x_method->addNode(PolymorphismTest_U_x_method_Message);
				// ObjectFlow ObjectFlow45 from result to value
				PolymorphismTest_U_x_method_ObjectFlow45->setThisActivityEdgePtr(PolymorphismTest_U_x_method_ObjectFlow45);
				PolymorphismTest_U_x_method_ObjectFlow45->setName("ObjectFlow45");
				PolymorphismTest_U_x_method_ObjectFlow45->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_x_method_ObjectFlow45->setSource(PolymorphismTest_U_x_method_Message_result);
				PolymorphismTest_U_x_method_ObjectFlow45->setTarget(PolymorphismTest_U_x_method_Call_WriteLine_value);
					// LiteralBoolean LiteralBoolean46
					PolymorphismTest_U_x_method_ObjectFlow45_LiteralBoolean46->setThisElementPtr(PolymorphismTest_U_x_method_ObjectFlow45_LiteralBoolean46);
					PolymorphismTest_U_x_method_ObjectFlow45_LiteralBoolean46->setName("LiteralBoolean46");
					PolymorphismTest_U_x_method_ObjectFlow45_LiteralBoolean46->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_x_method_ObjectFlow45_LiteralBoolean46->setValue(true);
				PolymorphismTest_U_x_method_ObjectFlow45->setGuard(PolymorphismTest_U_x_method_ObjectFlow45_LiteralBoolean46);
			PolymorphismTest_U_x_method->addEdge(PolymorphismTest_U_x_method_ObjectFlow45);
		PolymorphismTest_U->addOwnedBehavior(PolymorphismTest_U_x_method);
			// Activity o1_method
			PolymorphismTest_U_o1_method->setThisActivityPtr(PolymorphismTest_U_o1_method);
			PolymorphismTest_U_o1_method->setName("o1_method");
			PolymorphismTest_U_o1_method->setVisibility(VisibilityKind::public_);
			
				// Parameter b
				PolymorphismTest_U_o1_method_b->setThisElementPtr(PolymorphismTest_U_o1_method_b);
				PolymorphismTest_U_o1_method_b->setName("b");
				PolymorphismTest_U_o1_method_b->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_o1_method_b->setType(PolymorphismTest_B);
			PolymorphismTest_U_o1_method->addOwnedParameter(PolymorphismTest_U_o1_method_b);
				// Parameter a
				PolymorphismTest_U_o1_method_a->setThisElementPtr(PolymorphismTest_U_o1_method_a);
				PolymorphismTest_U_o1_method_a->setName("a");
				PolymorphismTest_U_o1_method_a->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_o1_method_a->setType(PolymorphismTest_A);
				PolymorphismTest_U_o1_method_a->setDirection(ParameterDirectionKind::return_);
			PolymorphismTest_U_o1_method->addOwnedParameter(PolymorphismTest_U_o1_method_a);
				// ValueSpecificationAction Message
				PolymorphismTest_U_o1_method_Message->setThisExecutableNodePtr(PolymorphismTest_U_o1_method_Message);
				PolymorphismTest_U_o1_method_Message->setName("Message");
				PolymorphismTest_U_o1_method_Message->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString53
					PolymorphismTest_U_o1_method_Message_LiteralString53->setThisElementPtr(PolymorphismTest_U_o1_method_Message_LiteralString53);
					PolymorphismTest_U_o1_method_Message_LiteralString53->setName("LiteralString53");
					PolymorphismTest_U_o1_method_Message_LiteralString53->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o1_method_Message_LiteralString53->setValue("U::o1(b : B) : A");
				PolymorphismTest_U_o1_method_Message->setValue(PolymorphismTest_U_o1_method_Message_LiteralString53);
					// OutputPin result
					PolymorphismTest_U_o1_method_Message_result->setThisElementPtr(PolymorphismTest_U_o1_method_Message_result);
					PolymorphismTest_U_o1_method_Message_result->setName("result");
					PolymorphismTest_U_o1_method_Message_result->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o1_method_Message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_U_o1_method_Message->setResult(PolymorphismTest_U_o1_method_Message_result);
			PolymorphismTest_U_o1_method->addNode(PolymorphismTest_U_o1_method_Message);
				// CallBehaviorAction Call WriteLine
				PolymorphismTest_U_o1_method_Call_WriteLine->setThisExecutableNodePtr(PolymorphismTest_U_o1_method_Call_WriteLine);
				PolymorphismTest_U_o1_method_Call_WriteLine->setName("Call WriteLine");
				PolymorphismTest_U_o1_method_Call_WriteLine->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus->setThisElementPtr(PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus);
					PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus->setName("errorStatus");
					PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus->setLower(0);
				PolymorphismTest_U_o1_method_Call_WriteLine->addResult(PolymorphismTest_U_o1_method_Call_WriteLine_errorStatus);
				PolymorphismTest_U_o1_method_Call_WriteLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					PolymorphismTest_U_o1_method_Call_WriteLine_value->setThisElementPtr(PolymorphismTest_U_o1_method_Call_WriteLine_value);
					PolymorphismTest_U_o1_method_Call_WriteLine_value->setName("value");
					PolymorphismTest_U_o1_method_Call_WriteLine_value->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o1_method_Call_WriteLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_U_o1_method_Call_WriteLine->addArgument(PolymorphismTest_U_o1_method_Call_WriteLine_value);
			PolymorphismTest_U_o1_method->addNode(PolymorphismTest_U_o1_method_Call_WriteLine);
				// ActivityParameterNode b_node
				PolymorphismTest_U_o1_method_b_node->setThisElementPtr(PolymorphismTest_U_o1_method_b_node);
				PolymorphismTest_U_o1_method_b_node->setName("b_node");
				PolymorphismTest_U_o1_method_b_node->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_o1_method_b_node->setParameter(PolymorphismTest_U_o1_method_b);
			PolymorphismTest_U_o1_method->addNode(PolymorphismTest_U_o1_method_b_node);
				// ActivityParameterNode a_node
				PolymorphismTest_U_o1_method_a_node->setThisElementPtr(PolymorphismTest_U_o1_method_a_node);
				PolymorphismTest_U_o1_method_a_node->setName("a_node");
				PolymorphismTest_U_o1_method_a_node->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_o1_method_a_node->setParameter(PolymorphismTest_U_o1_method_a);
			PolymorphismTest_U_o1_method->addNode(PolymorphismTest_U_o1_method_a_node);
				// ObjectFlow ObjectFlow62 from result to value
				PolymorphismTest_U_o1_method_ObjectFlow62->setThisActivityEdgePtr(PolymorphismTest_U_o1_method_ObjectFlow62);
				PolymorphismTest_U_o1_method_ObjectFlow62->setName("ObjectFlow62");
				PolymorphismTest_U_o1_method_ObjectFlow62->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_o1_method_ObjectFlow62->setSource(PolymorphismTest_U_o1_method_Message_result);
				PolymorphismTest_U_o1_method_ObjectFlow62->setTarget(PolymorphismTest_U_o1_method_Call_WriteLine_value);
					// LiteralBoolean LiteralBoolean64
					PolymorphismTest_U_o1_method_ObjectFlow62_LiteralBoolean64->setThisElementPtr(PolymorphismTest_U_o1_method_ObjectFlow62_LiteralBoolean64);
					PolymorphismTest_U_o1_method_ObjectFlow62_LiteralBoolean64->setName("LiteralBoolean64");
					PolymorphismTest_U_o1_method_ObjectFlow62_LiteralBoolean64->setVisibility(VisibilityKind::public_);
					PolymorphismTest_U_o1_method_ObjectFlow62_LiteralBoolean64->setValue(true);
				PolymorphismTest_U_o1_method_ObjectFlow62->setGuard(PolymorphismTest_U_o1_method_ObjectFlow62_LiteralBoolean64);
			PolymorphismTest_U_o1_method->addEdge(PolymorphismTest_U_o1_method_ObjectFlow62);
		PolymorphismTest_U->addOwnedBehavior(PolymorphismTest_U_o1_method);
		
			// Operation x
			PolymorphismTest_U_x->setThisOperationPtr(PolymorphismTest_U_x);
			PolymorphismTest_U_x->setName("x");
			PolymorphismTest_U_x->setVisibility(VisibilityKind::public_);
			PolymorphismTest_U_x->addMethod(PolymorphismTest_U_x_method);
			PolymorphismTest_U_x->addRedefinedOperation(PolymorphismTest_A_x);
		PolymorphismTest_U->addOwnedOperation(PolymorphismTest_U_x);
			// Operation A_o1_B
			PolymorphismTest_U_A_o1_B->setThisOperationPtr(PolymorphismTest_U_A_o1_B);
			PolymorphismTest_U_A_o1_B->setName("o1");
			PolymorphismTest_U_A_o1_B->setVisibility(VisibilityKind::public_);
				// Parameter b
				PolymorphismTest_U_A_o1_B_b->setThisElementPtr(PolymorphismTest_U_A_o1_B_b);
				PolymorphismTest_U_A_o1_B_b->setName("b");
				PolymorphismTest_U_A_o1_B_b->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_A_o1_B_b->setType(PolymorphismTest_B);
			PolymorphismTest_U_A_o1_B->addOwnedParameter(PolymorphismTest_U_A_o1_B_b);
				// Parameter a
				PolymorphismTest_U_A_o1_B_a->setThisElementPtr(PolymorphismTest_U_A_o1_B_a);
				PolymorphismTest_U_A_o1_B_a->setName("a");
				PolymorphismTest_U_A_o1_B_a->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_A_o1_B_a->setType(PolymorphismTest_A);
				PolymorphismTest_U_A_o1_B_a->setDirection(ParameterDirectionKind::return_);
			PolymorphismTest_U_A_o1_B->addOwnedParameter(PolymorphismTest_U_A_o1_B_a);
			PolymorphismTest_U_A_o1_B->addMethod(PolymorphismTest_U_o1_method);
		PolymorphismTest_U->addOwnedOperation(PolymorphismTest_U_A_o1_B);
			// Operation A_o2_B
			PolymorphismTest_U_A_o2_B->setThisOperationPtr(PolymorphismTest_U_A_o2_B);
			PolymorphismTest_U_A_o2_B->setName("o2");
			PolymorphismTest_U_A_o2_B->setVisibility(VisibilityKind::public_);
				// Parameter b
				PolymorphismTest_U_A_o2_B_b->setThisElementPtr(PolymorphismTest_U_A_o2_B_b);
				PolymorphismTest_U_A_o2_B_b->setName("b");
				PolymorphismTest_U_A_o2_B_b->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_A_o2_B_b->setType(PolymorphismTest_B);
			PolymorphismTest_U_A_o2_B->addOwnedParameter(PolymorphismTest_U_A_o2_B_b);
				// Parameter a
				PolymorphismTest_U_A_o2_B_a->setThisElementPtr(PolymorphismTest_U_A_o2_B_a);
				PolymorphismTest_U_A_o2_B_a->setName("a");
				PolymorphismTest_U_A_o2_B_a->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_A_o2_B_a->setType(PolymorphismTest_A);
				PolymorphismTest_U_A_o2_B_a->setDirection(ParameterDirectionKind::return_);
			PolymorphismTest_U_A_o2_B->addOwnedParameter(PolymorphismTest_U_A_o2_B_a);
			PolymorphismTest_U_A_o2_B->addMethod(PolymorphismTest_U_o2_method);
		PolymorphismTest_U->addOwnedOperation(PolymorphismTest_U_A_o2_B);
			// Operation o3_Integer
			PolymorphismTest_U_o3_Integer->setThisOperationPtr(PolymorphismTest_U_o3_Integer);
			PolymorphismTest_U_o3_Integer->setName("o3");
			PolymorphismTest_U_o3_Integer->setVisibility(VisibilityKind::public_);
				// Parameter i
				PolymorphismTest_U_o3_Integer_i->setThisElementPtr(PolymorphismTest_U_o3_Integer_i);
				PolymorphismTest_U_o3_Integer_i->setName("i");
				PolymorphismTest_U_o3_Integer_i->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_U_o3_Integer_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			PolymorphismTest_U_o3_Integer->addOwnedParameter(PolymorphismTest_U_o3_Integer_i);
			PolymorphismTest_U_o3_Integer->addMethod(PolymorphismTest_U_o3_method);
		PolymorphismTest_U->addOwnedOperation(PolymorphismTest_U_o3_Integer);
			// Operation o4
			PolymorphismTest_U_o4->setThisOperationPtr(PolymorphismTest_U_o4);
			PolymorphismTest_U_o4->setName("o4");
			PolymorphismTest_U_o4->setVisibility(VisibilityKind::public_);
			PolymorphismTest_U_o4->addMethod(PolymorphismTest_U_o4_method);
		PolymorphismTest_U->addOwnedOperation(PolymorphismTest_U_o4);
	PolymorphismTest->addPackagedElement(PolymorphismTest_U);
		// Class B
		PolymorphismTest_B->setThisClass_Ptr(PolymorphismTest_B);
		PolymorphismTest_B->setName("B");
		PolymorphismTest_B->setVisibility(VisibilityKind::public_);
		
			// Generalization to A
			PolymorphismTest_B_Generalization65->setThisElementPtr(PolymorphismTest_B_Generalization65);
			PolymorphismTest_B_Generalization65->setGeneral(PolymorphismTest_A);
		PolymorphismTest_B->addGeneralization(PolymorphismTest_B_Generalization65);
	PolymorphismTest->addPackagedElement(PolymorphismTest_B);
		// Class A
		PolymorphismTest_A->setThisClass_Ptr(PolymorphismTest_A);
		PolymorphismTest_A->setName("A");
		PolymorphismTest_A->setVisibility(VisibilityKind::public_);
		// Activity x_method
			PolymorphismTest_A_x_method->setThisActivityPtr(PolymorphismTest_A_x_method);
			PolymorphismTest_A_x_method->setName("x_method");
			PolymorphismTest_A_x_method->setVisibility(VisibilityKind::public_);
				// CallBehaviorAction Call WriteLine
				PolymorphismTest_A_x_method_Call_WriteLine->setThisExecutableNodePtr(PolymorphismTest_A_x_method_Call_WriteLine);
				PolymorphismTest_A_x_method_Call_WriteLine->setName("Call WriteLine");
				PolymorphismTest_A_x_method_Call_WriteLine->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					PolymorphismTest_A_x_method_Call_WriteLine_errorStatus->setThisElementPtr(PolymorphismTest_A_x_method_Call_WriteLine_errorStatus);
					PolymorphismTest_A_x_method_Call_WriteLine_errorStatus->setName("errorStatus");
					PolymorphismTest_A_x_method_Call_WriteLine_errorStatus->setVisibility(VisibilityKind::public_);
					PolymorphismTest_A_x_method_Call_WriteLine_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					PolymorphismTest_A_x_method_Call_WriteLine_errorStatus->setLower(0);
				PolymorphismTest_A_x_method_Call_WriteLine->addResult(PolymorphismTest_A_x_method_Call_WriteLine_errorStatus);
				PolymorphismTest_A_x_method_Call_WriteLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					PolymorphismTest_A_x_method_Call_WriteLine_value->setThisElementPtr(PolymorphismTest_A_x_method_Call_WriteLine_value);
					PolymorphismTest_A_x_method_Call_WriteLine_value->setName("value");
					PolymorphismTest_A_x_method_Call_WriteLine_value->setVisibility(VisibilityKind::public_);
					PolymorphismTest_A_x_method_Call_WriteLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_A_x_method_Call_WriteLine->addArgument(PolymorphismTest_A_x_method_Call_WriteLine_value);
			PolymorphismTest_A_x_method->addNode(PolymorphismTest_A_x_method_Call_WriteLine);
				// ValueSpecificationAction Message
				PolymorphismTest_A_x_method_Message->setThisExecutableNodePtr(PolymorphismTest_A_x_method_Message);
				PolymorphismTest_A_x_method_Message->setName("Message");
				PolymorphismTest_A_x_method_Message->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString72
					PolymorphismTest_A_x_method_Message_LiteralString72->setThisElementPtr(PolymorphismTest_A_x_method_Message_LiteralString72);
					PolymorphismTest_A_x_method_Message_LiteralString72->setName("LiteralString72");
					PolymorphismTest_A_x_method_Message_LiteralString72->setVisibility(VisibilityKind::public_);
					PolymorphismTest_A_x_method_Message_LiteralString72->setValue("A::x()");
				PolymorphismTest_A_x_method_Message->setValue(PolymorphismTest_A_x_method_Message_LiteralString72);
					// OutputPin result
					PolymorphismTest_A_x_method_Message_result->setThisElementPtr(PolymorphismTest_A_x_method_Message_result);
					PolymorphismTest_A_x_method_Message_result->setName("result");
					PolymorphismTest_A_x_method_Message_result->setVisibility(VisibilityKind::public_);
					PolymorphismTest_A_x_method_Message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_A_x_method_Message->setResult(PolymorphismTest_A_x_method_Message_result);
			PolymorphismTest_A_x_method->addNode(PolymorphismTest_A_x_method_Message);
				// ObjectFlow ObjectFlow75 from result to value
				PolymorphismTest_A_x_method_ObjectFlow75->setThisActivityEdgePtr(PolymorphismTest_A_x_method_ObjectFlow75);
				PolymorphismTest_A_x_method_ObjectFlow75->setName("ObjectFlow75");
				PolymorphismTest_A_x_method_ObjectFlow75->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_A_x_method_ObjectFlow75->setSource(PolymorphismTest_A_x_method_Message_result);
				PolymorphismTest_A_x_method_ObjectFlow75->setTarget(PolymorphismTest_A_x_method_Call_WriteLine_value);
					// LiteralBoolean LiteralBoolean76
					PolymorphismTest_A_x_method_ObjectFlow75_LiteralBoolean76->setThisElementPtr(PolymorphismTest_A_x_method_ObjectFlow75_LiteralBoolean76);
					PolymorphismTest_A_x_method_ObjectFlow75_LiteralBoolean76->setName("LiteralBoolean76");
					PolymorphismTest_A_x_method_ObjectFlow75_LiteralBoolean76->setVisibility(VisibilityKind::public_);
					PolymorphismTest_A_x_method_ObjectFlow75_LiteralBoolean76->setValue(true);
				PolymorphismTest_A_x_method_ObjectFlow75->setGuard(PolymorphismTest_A_x_method_ObjectFlow75_LiteralBoolean76);
			PolymorphismTest_A_x_method->addEdge(PolymorphismTest_A_x_method_ObjectFlow75);
		PolymorphismTest_A->addOwnedBehavior(PolymorphismTest_A_x_method);
		
			// Operation x
			PolymorphismTest_A_x->setThisOperationPtr(PolymorphismTest_A_x);
			PolymorphismTest_A_x->setName("x");
			PolymorphismTest_A_x->setVisibility(VisibilityKind::public_);
			PolymorphismTest_A_x->addMethod(PolymorphismTest_A_x_method);
		PolymorphismTest_A->addOwnedOperation(PolymorphismTest_A_x);
	PolymorphismTest->addPackagedElement(PolymorphismTest_A);
		// Activity main
		PolymorphismTest_main->setThisActivityPtr(PolymorphismTest_main);
		PolymorphismTest_main->setName("main");
		PolymorphismTest_main->setVisibility(VisibilityKind::public_);
		// Activity runTests
			PolymorphismTest_main_runTests->setThisActivityPtr(PolymorphismTest_main_runTests);
			PolymorphismTest_main_runTests->setName("runTests");
			PolymorphismTest_main_runTests->setVisibility(VisibilityKind::public_);
			
				// Parameter u
				PolymorphismTest_main_runTests_u->setThisElementPtr(PolymorphismTest_main_runTests_u);
				PolymorphismTest_main_runTests_u->setName("u");
				PolymorphismTest_main_runTests_u->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_main_runTests_u->setType(PolymorphismTest_U);
			PolymorphismTest_main_runTests->addOwnedParameter(PolymorphismTest_main_runTests_u);
				// CallOperationAction Call o3()
				PolymorphismTest_main_runTests_Call_o3_->setThisExecutableNodePtr(PolymorphismTest_main_runTests_Call_o3_);
				PolymorphismTest_main_runTests_Call_o3_->setName("Call o3()");
				PolymorphismTest_main_runTests_Call_o3_->setVisibility(VisibilityKind::public_);
				PolymorphismTest_main_runTests_Call_o3_->setOperation(PolymorphismTest_U_o3_Integer);
					// InputPin target
					PolymorphismTest_main_runTests_Call_o3__target->setThisElementPtr(PolymorphismTest_main_runTests_Call_o3__target);
					PolymorphismTest_main_runTests_Call_o3__target->setName("target");
					PolymorphismTest_main_runTests_Call_o3__target->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_Call_o3__target->setType(PolymorphismTest_U);
				PolymorphismTest_main_runTests_Call_o3_->setTarget(PolymorphismTest_main_runTests_Call_o3__target);
					// InputPin i
					PolymorphismTest_main_runTests_Call_o3__i->setThisElementPtr(PolymorphismTest_main_runTests_Call_o3__i);
					PolymorphismTest_main_runTests_Call_o3__i->setName("i");
					PolymorphismTest_main_runTests_Call_o3__i->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_Call_o3__i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
					PolymorphismTest_main_runTests_Call_o3__i->setLower(0);
				PolymorphismTest_main_runTests_Call_o3_->addArgument(PolymorphismTest_main_runTests_Call_o3__i);
			PolymorphismTest_main_runTests->addNode(PolymorphismTest_main_runTests_Call_o3_);
				// CallOperationAction Call A::x()
				PolymorphismTest_main_runTests_Call_A_x_->setThisExecutableNodePtr(PolymorphismTest_main_runTests_Call_A_x_);
				PolymorphismTest_main_runTests_Call_A_x_->setName("Call A::x()");
				PolymorphismTest_main_runTests_Call_A_x_->setVisibility(VisibilityKind::public_);
				PolymorphismTest_main_runTests_Call_A_x_->setOperation(PolymorphismTest_A_x);
					// InputPin target
					PolymorphismTest_main_runTests_Call_A_x__target->setThisElementPtr(PolymorphismTest_main_runTests_Call_A_x__target);
					PolymorphismTest_main_runTests_Call_A_x__target->setName("target");
					PolymorphismTest_main_runTests_Call_A_x__target->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_Call_A_x__target->setType(PolymorphismTest_A);
				PolymorphismTest_main_runTests_Call_A_x_->setTarget(PolymorphismTest_main_runTests_Call_A_x__target);
			PolymorphismTest_main_runTests->addNode(PolymorphismTest_main_runTests_Call_A_x_);
				// ActivityParameterNode u_node
				PolymorphismTest_main_runTests_u_node->setThisElementPtr(PolymorphismTest_main_runTests_u_node);
				PolymorphismTest_main_runTests_u_node->setName("u_node");
				PolymorphismTest_main_runTests_u_node->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_main_runTests_u_node->setParameter(PolymorphismTest_main_runTests_u);
			PolymorphismTest_main_runTests->addNode(PolymorphismTest_main_runTests_u_node);
				// ForkNode Fork u
				PolymorphismTest_main_runTests_Fork_u->setThisElementPtr(PolymorphismTest_main_runTests_Fork_u);
				PolymorphismTest_main_runTests_Fork_u->setName("Fork u");
				PolymorphismTest_main_runTests_Fork_u->setVisibility(VisibilityKind::public_);
			PolymorphismTest_main_runTests->addNode(PolymorphismTest_main_runTests_Fork_u);
				// CallOperationAction Call U::o1()
				PolymorphismTest_main_runTests_Call_U_o1_->setThisExecutableNodePtr(PolymorphismTest_main_runTests_Call_U_o1_);
				PolymorphismTest_main_runTests_Call_U_o1_->applyStereotype(uml::extensionsprofile::ExtensionsProfileModel::Instance()->Stereotype_ExplicitBaseClassCall);
				PolymorphismTest_main_runTests_Call_U_o1_->setName("Call U::o1()");
				PolymorphismTest_main_runTests_Call_U_o1_->setVisibility(VisibilityKind::public_);
				
					// OutputPin a
					PolymorphismTest_main_runTests_Call_U_o1__a->setThisElementPtr(PolymorphismTest_main_runTests_Call_U_o1__a);
					PolymorphismTest_main_runTests_Call_U_o1__a->setName("a");
					PolymorphismTest_main_runTests_Call_U_o1__a->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_Call_U_o1__a->setType(PolymorphismTest_A);
				PolymorphismTest_main_runTests_Call_U_o1_->addResult(PolymorphismTest_main_runTests_Call_U_o1__a);
				PolymorphismTest_main_runTests_Call_U_o1_->setOperation(PolymorphismTest_U_A_o1_B);
					// InputPin target
					PolymorphismTest_main_runTests_Call_U_o1__target->setThisElementPtr(PolymorphismTest_main_runTests_Call_U_o1__target);
					PolymorphismTest_main_runTests_Call_U_o1__target->setName("target");
					PolymorphismTest_main_runTests_Call_U_o1__target->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_Call_U_o1__target->setType(PolymorphismTest_U);
				PolymorphismTest_main_runTests_Call_U_o1_->setTarget(PolymorphismTest_main_runTests_Call_U_o1__target);
					// InputPin b
					PolymorphismTest_main_runTests_Call_U_o1__b->setThisElementPtr(PolymorphismTest_main_runTests_Call_U_o1__b);
					PolymorphismTest_main_runTests_Call_U_o1__b->setName("b");
					PolymorphismTest_main_runTests_Call_U_o1__b->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_Call_U_o1__b->setType(PolymorphismTest_B);
					PolymorphismTest_main_runTests_Call_U_o1__b->setLower(0);
				PolymorphismTest_main_runTests_Call_U_o1_->addArgument(PolymorphismTest_main_runTests_Call_U_o1__b);
			PolymorphismTest_main_runTests->addNode(PolymorphismTest_main_runTests_Call_U_o1_);
				// CallOperationAction Call o2()
				PolymorphismTest_main_runTests_Call_o2_->setThisExecutableNodePtr(PolymorphismTest_main_runTests_Call_o2_);
				PolymorphismTest_main_runTests_Call_o2_->setName("Call o2()");
				PolymorphismTest_main_runTests_Call_o2_->setVisibility(VisibilityKind::public_);
				
					// OutputPin a
					PolymorphismTest_main_runTests_Call_o2__a->setThisElementPtr(PolymorphismTest_main_runTests_Call_o2__a);
					PolymorphismTest_main_runTests_Call_o2__a->setName("a");
					PolymorphismTest_main_runTests_Call_o2__a->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_Call_o2__a->setType(PolymorphismTest_A);
				PolymorphismTest_main_runTests_Call_o2_->addResult(PolymorphismTest_main_runTests_Call_o2__a);
				PolymorphismTest_main_runTests_Call_o2_->setOperation(PolymorphismTest_U_A_o2_B);
					// InputPin target
					PolymorphismTest_main_runTests_Call_o2__target->setThisElementPtr(PolymorphismTest_main_runTests_Call_o2__target);
					PolymorphismTest_main_runTests_Call_o2__target->setName("target");
					PolymorphismTest_main_runTests_Call_o2__target->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_Call_o2__target->setType(PolymorphismTest_U);
				PolymorphismTest_main_runTests_Call_o2_->setTarget(PolymorphismTest_main_runTests_Call_o2__target);
					// InputPin b
					PolymorphismTest_main_runTests_Call_o2__b->setThisElementPtr(PolymorphismTest_main_runTests_Call_o2__b);
					PolymorphismTest_main_runTests_Call_o2__b->setName("b");
					PolymorphismTest_main_runTests_Call_o2__b->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_Call_o2__b->setType(PolymorphismTest_B);
					PolymorphismTest_main_runTests_Call_o2__b->setLower(0);
				PolymorphismTest_main_runTests_Call_o2_->addArgument(PolymorphismTest_main_runTests_Call_o2__b);
			PolymorphismTest_main_runTests->addNode(PolymorphismTest_main_runTests_Call_o2_);
				// CallOperationAction Call o4()
				PolymorphismTest_main_runTests_Call_o4_->setThisExecutableNodePtr(PolymorphismTest_main_runTests_Call_o4_);
				PolymorphismTest_main_runTests_Call_o4_->setName("Call o4()");
				PolymorphismTest_main_runTests_Call_o4_->setVisibility(VisibilityKind::public_);
				PolymorphismTest_main_runTests_Call_o4_->setOperation(PolymorphismTest_U_o4);
					// InputPin target
					PolymorphismTest_main_runTests_Call_o4__target->setThisElementPtr(PolymorphismTest_main_runTests_Call_o4__target);
					PolymorphismTest_main_runTests_Call_o4__target->setName("target");
					PolymorphismTest_main_runTests_Call_o4__target->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_Call_o4__target->setType(PolymorphismTest_U);
				PolymorphismTest_main_runTests_Call_o4_->setTarget(PolymorphismTest_main_runTests_Call_o4__target);
			PolymorphismTest_main_runTests->addNode(PolymorphismTest_main_runTests_Call_o4_);
				// CallOperationAction Call o1()
				PolymorphismTest_main_runTests_Call_o1_->setThisExecutableNodePtr(PolymorphismTest_main_runTests_Call_o1_);
				PolymorphismTest_main_runTests_Call_o1_->setName("Call o1()");
				PolymorphismTest_main_runTests_Call_o1_->setVisibility(VisibilityKind::public_);
				
					// OutputPin a
					PolymorphismTest_main_runTests_Call_o1__a->setThisElementPtr(PolymorphismTest_main_runTests_Call_o1__a);
					PolymorphismTest_main_runTests_Call_o1__a->setName("a");
					PolymorphismTest_main_runTests_Call_o1__a->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_Call_o1__a->setType(PolymorphismTest_A);
				PolymorphismTest_main_runTests_Call_o1_->addResult(PolymorphismTest_main_runTests_Call_o1__a);
				PolymorphismTest_main_runTests_Call_o1_->setOperation(PolymorphismTest_U_A_o1_B);
					// InputPin target
					PolymorphismTest_main_runTests_Call_o1__target->setThisElementPtr(PolymorphismTest_main_runTests_Call_o1__target);
					PolymorphismTest_main_runTests_Call_o1__target->setName("target");
					PolymorphismTest_main_runTests_Call_o1__target->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_Call_o1__target->setType(PolymorphismTest_U);
				PolymorphismTest_main_runTests_Call_o1_->setTarget(PolymorphismTest_main_runTests_Call_o1__target);
					// InputPin b
					PolymorphismTest_main_runTests_Call_o1__b->setThisElementPtr(PolymorphismTest_main_runTests_Call_o1__b);
					PolymorphismTest_main_runTests_Call_o1__b->setName("b");
					PolymorphismTest_main_runTests_Call_o1__b->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_Call_o1__b->setType(PolymorphismTest_B);
					PolymorphismTest_main_runTests_Call_o1__b->setLower(0);
				PolymorphismTest_main_runTests_Call_o1_->addArgument(PolymorphismTest_main_runTests_Call_o1__b);
			PolymorphismTest_main_runTests->addNode(PolymorphismTest_main_runTests_Call_o1_);
				// ObjectFlow ObjectFlow81 from Fork u to target
				PolymorphismTest_main_runTests_ObjectFlow81->setThisActivityEdgePtr(PolymorphismTest_main_runTests_ObjectFlow81);
				PolymorphismTest_main_runTests_ObjectFlow81->setName("ObjectFlow81");
				PolymorphismTest_main_runTests_ObjectFlow81->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_main_runTests_ObjectFlow81->setSource(PolymorphismTest_main_runTests_Fork_u);
				PolymorphismTest_main_runTests_ObjectFlow81->setTarget(PolymorphismTest_main_runTests_Call_o4__target);
					// LiteralBoolean LiteralBoolean82
					PolymorphismTest_main_runTests_ObjectFlow81_LiteralBoolean82->setThisElementPtr(PolymorphismTest_main_runTests_ObjectFlow81_LiteralBoolean82);
					PolymorphismTest_main_runTests_ObjectFlow81_LiteralBoolean82->setName("LiteralBoolean82");
					PolymorphismTest_main_runTests_ObjectFlow81_LiteralBoolean82->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_ObjectFlow81_LiteralBoolean82->setValue(true);
				PolymorphismTest_main_runTests_ObjectFlow81->setGuard(PolymorphismTest_main_runTests_ObjectFlow81_LiteralBoolean82);
			PolymorphismTest_main_runTests->addEdge(PolymorphismTest_main_runTests_ObjectFlow81);
				// ControlFlow ControlFlow84 from Call U::o1() to Call o2()
				PolymorphismTest_main_runTests_ControlFlow84->setThisActivityEdgePtr(PolymorphismTest_main_runTests_ControlFlow84);
				PolymorphismTest_main_runTests_ControlFlow84->setName("ControlFlow84");
				PolymorphismTest_main_runTests_ControlFlow84->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_main_runTests_ControlFlow84->setSource(PolymorphismTest_main_runTests_Call_U_o1_);
				PolymorphismTest_main_runTests_ControlFlow84->setTarget(PolymorphismTest_main_runTests_Call_o2_);
			PolymorphismTest_main_runTests->addEdge(PolymorphismTest_main_runTests_ControlFlow84);
				// ObjectFlow ObjectFlow96 from u_node to Fork u
				PolymorphismTest_main_runTests_ObjectFlow96->setThisActivityEdgePtr(PolymorphismTest_main_runTests_ObjectFlow96);
				PolymorphismTest_main_runTests_ObjectFlow96->setName("ObjectFlow96");
				PolymorphismTest_main_runTests_ObjectFlow96->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_main_runTests_ObjectFlow96->setSource(PolymorphismTest_main_runTests_u_node);
				PolymorphismTest_main_runTests_ObjectFlow96->setTarget(PolymorphismTest_main_runTests_Fork_u);
					// LiteralBoolean LiteralBoolean97
					PolymorphismTest_main_runTests_ObjectFlow96_LiteralBoolean97->setThisElementPtr(PolymorphismTest_main_runTests_ObjectFlow96_LiteralBoolean97);
					PolymorphismTest_main_runTests_ObjectFlow96_LiteralBoolean97->setName("LiteralBoolean97");
					PolymorphismTest_main_runTests_ObjectFlow96_LiteralBoolean97->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_ObjectFlow96_LiteralBoolean97->setValue(true);
				PolymorphismTest_main_runTests_ObjectFlow96->setGuard(PolymorphismTest_main_runTests_ObjectFlow96_LiteralBoolean97);
			PolymorphismTest_main_runTests->addEdge(PolymorphismTest_main_runTests_ObjectFlow96);
				// ObjectFlow ObjectFlow101 from Fork u to target
				PolymorphismTest_main_runTests_ObjectFlow101->setThisActivityEdgePtr(PolymorphismTest_main_runTests_ObjectFlow101);
				PolymorphismTest_main_runTests_ObjectFlow101->setName("ObjectFlow101");
				PolymorphismTest_main_runTests_ObjectFlow101->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_main_runTests_ObjectFlow101->setSource(PolymorphismTest_main_runTests_Fork_u);
				PolymorphismTest_main_runTests_ObjectFlow101->setTarget(PolymorphismTest_main_runTests_Call_U_o1__target);
					// LiteralBoolean LiteralBoolean102
					PolymorphismTest_main_runTests_ObjectFlow101_LiteralBoolean102->setThisElementPtr(PolymorphismTest_main_runTests_ObjectFlow101_LiteralBoolean102);
					PolymorphismTest_main_runTests_ObjectFlow101_LiteralBoolean102->setName("LiteralBoolean102");
					PolymorphismTest_main_runTests_ObjectFlow101_LiteralBoolean102->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_ObjectFlow101_LiteralBoolean102->setValue(true);
				PolymorphismTest_main_runTests_ObjectFlow101->setGuard(PolymorphismTest_main_runTests_ObjectFlow101_LiteralBoolean102);
			PolymorphismTest_main_runTests->addEdge(PolymorphismTest_main_runTests_ObjectFlow101);
				// ObjectFlow ObjectFlow104 from Fork u to target
				PolymorphismTest_main_runTests_ObjectFlow104->setThisActivityEdgePtr(PolymorphismTest_main_runTests_ObjectFlow104);
				PolymorphismTest_main_runTests_ObjectFlow104->setName("ObjectFlow104");
				PolymorphismTest_main_runTests_ObjectFlow104->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_main_runTests_ObjectFlow104->setSource(PolymorphismTest_main_runTests_Fork_u);
				PolymorphismTest_main_runTests_ObjectFlow104->setTarget(PolymorphismTest_main_runTests_Call_o2__target);
					// LiteralBoolean LiteralBoolean106
					PolymorphismTest_main_runTests_ObjectFlow104_LiteralBoolean106->setThisElementPtr(PolymorphismTest_main_runTests_ObjectFlow104_LiteralBoolean106);
					PolymorphismTest_main_runTests_ObjectFlow104_LiteralBoolean106->setName("LiteralBoolean106");
					PolymorphismTest_main_runTests_ObjectFlow104_LiteralBoolean106->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_ObjectFlow104_LiteralBoolean106->setValue(true);
				PolymorphismTest_main_runTests_ObjectFlow104->setGuard(PolymorphismTest_main_runTests_ObjectFlow104_LiteralBoolean106);
			PolymorphismTest_main_runTests->addEdge(PolymorphismTest_main_runTests_ObjectFlow104);
				// ObjectFlow ObjectFlow107 from Fork u to target
				PolymorphismTest_main_runTests_ObjectFlow107->setThisActivityEdgePtr(PolymorphismTest_main_runTests_ObjectFlow107);
				PolymorphismTest_main_runTests_ObjectFlow107->setName("ObjectFlow107");
				PolymorphismTest_main_runTests_ObjectFlow107->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_main_runTests_ObjectFlow107->setSource(PolymorphismTest_main_runTests_Fork_u);
				PolymorphismTest_main_runTests_ObjectFlow107->setTarget(PolymorphismTest_main_runTests_Call_o3__target);
					// LiteralBoolean LiteralBoolean109
					PolymorphismTest_main_runTests_ObjectFlow107_LiteralBoolean109->setThisElementPtr(PolymorphismTest_main_runTests_ObjectFlow107_LiteralBoolean109);
					PolymorphismTest_main_runTests_ObjectFlow107_LiteralBoolean109->setName("LiteralBoolean109");
					PolymorphismTest_main_runTests_ObjectFlow107_LiteralBoolean109->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_ObjectFlow107_LiteralBoolean109->setValue(true);
				PolymorphismTest_main_runTests_ObjectFlow107->setGuard(PolymorphismTest_main_runTests_ObjectFlow107_LiteralBoolean109);
			PolymorphismTest_main_runTests->addEdge(PolymorphismTest_main_runTests_ObjectFlow107);
				// ControlFlow ControlFlow110 from Call o2() to Call o3()
				PolymorphismTest_main_runTests_ControlFlow110->setThisActivityEdgePtr(PolymorphismTest_main_runTests_ControlFlow110);
				PolymorphismTest_main_runTests_ControlFlow110->setName("ControlFlow110");
				PolymorphismTest_main_runTests_ControlFlow110->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_main_runTests_ControlFlow110->setSource(PolymorphismTest_main_runTests_Call_o2_);
				PolymorphismTest_main_runTests_ControlFlow110->setTarget(PolymorphismTest_main_runTests_Call_o3_);
			PolymorphismTest_main_runTests->addEdge(PolymorphismTest_main_runTests_ControlFlow110);
				// ControlFlow ControlFlow112 from Call o1() to Call U::o1()
				PolymorphismTest_main_runTests_ControlFlow112->setThisActivityEdgePtr(PolymorphismTest_main_runTests_ControlFlow112);
				PolymorphismTest_main_runTests_ControlFlow112->setName("ControlFlow112");
				PolymorphismTest_main_runTests_ControlFlow112->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_main_runTests_ControlFlow112->setSource(PolymorphismTest_main_runTests_Call_o1_);
				PolymorphismTest_main_runTests_ControlFlow112->setTarget(PolymorphismTest_main_runTests_Call_U_o1_);
			PolymorphismTest_main_runTests->addEdge(PolymorphismTest_main_runTests_ControlFlow112);
				// ObjectFlow ObjectFlow120 from Fork u to target
				PolymorphismTest_main_runTests_ObjectFlow120->setThisActivityEdgePtr(PolymorphismTest_main_runTests_ObjectFlow120);
				PolymorphismTest_main_runTests_ObjectFlow120->setName("ObjectFlow120");
				PolymorphismTest_main_runTests_ObjectFlow120->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_main_runTests_ObjectFlow120->setSource(PolymorphismTest_main_runTests_Fork_u);
				PolymorphismTest_main_runTests_ObjectFlow120->setTarget(PolymorphismTest_main_runTests_Call_o1__target);
					// LiteralBoolean LiteralBoolean121
					PolymorphismTest_main_runTests_ObjectFlow120_LiteralBoolean121->setThisElementPtr(PolymorphismTest_main_runTests_ObjectFlow120_LiteralBoolean121);
					PolymorphismTest_main_runTests_ObjectFlow120_LiteralBoolean121->setName("LiteralBoolean121");
					PolymorphismTest_main_runTests_ObjectFlow120_LiteralBoolean121->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_ObjectFlow120_LiteralBoolean121->setValue(true);
				PolymorphismTest_main_runTests_ObjectFlow120->setGuard(PolymorphismTest_main_runTests_ObjectFlow120_LiteralBoolean121);
			PolymorphismTest_main_runTests->addEdge(PolymorphismTest_main_runTests_ObjectFlow120);
				// ObjectFlow ObjectFlow123 from Fork u to target
				PolymorphismTest_main_runTests_ObjectFlow123->setThisActivityEdgePtr(PolymorphismTest_main_runTests_ObjectFlow123);
				PolymorphismTest_main_runTests_ObjectFlow123->setName("ObjectFlow123");
				PolymorphismTest_main_runTests_ObjectFlow123->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_main_runTests_ObjectFlow123->setSource(PolymorphismTest_main_runTests_Fork_u);
				PolymorphismTest_main_runTests_ObjectFlow123->setTarget(PolymorphismTest_main_runTests_Call_A_x__target);
					// LiteralBoolean LiteralBoolean124
					PolymorphismTest_main_runTests_ObjectFlow123_LiteralBoolean124->setThisElementPtr(PolymorphismTest_main_runTests_ObjectFlow123_LiteralBoolean124);
					PolymorphismTest_main_runTests_ObjectFlow123_LiteralBoolean124->setName("LiteralBoolean124");
					PolymorphismTest_main_runTests_ObjectFlow123_LiteralBoolean124->setVisibility(VisibilityKind::public_);
					PolymorphismTest_main_runTests_ObjectFlow123_LiteralBoolean124->setValue(true);
				PolymorphismTest_main_runTests_ObjectFlow123->setGuard(PolymorphismTest_main_runTests_ObjectFlow123_LiteralBoolean124);
			PolymorphismTest_main_runTests->addEdge(PolymorphismTest_main_runTests_ObjectFlow123);
				// ControlFlow ControlFlow126 from Call A::x() to Call o1()
				PolymorphismTest_main_runTests_ControlFlow126->setThisActivityEdgePtr(PolymorphismTest_main_runTests_ControlFlow126);
				PolymorphismTest_main_runTests_ControlFlow126->setName("ControlFlow126");
				PolymorphismTest_main_runTests_ControlFlow126->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_main_runTests_ControlFlow126->setSource(PolymorphismTest_main_runTests_Call_A_x_);
				PolymorphismTest_main_runTests_ControlFlow126->setTarget(PolymorphismTest_main_runTests_Call_o1_);
			PolymorphismTest_main_runTests->addEdge(PolymorphismTest_main_runTests_ControlFlow126);
				// ControlFlow ControlFlow127 from Call o3() to Call o4()
				PolymorphismTest_main_runTests_ControlFlow127->setThisActivityEdgePtr(PolymorphismTest_main_runTests_ControlFlow127);
				PolymorphismTest_main_runTests_ControlFlow127->setName("ControlFlow127");
				PolymorphismTest_main_runTests_ControlFlow127->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_main_runTests_ControlFlow127->setSource(PolymorphismTest_main_runTests_Call_o3_);
				PolymorphismTest_main_runTests_ControlFlow127->setTarget(PolymorphismTest_main_runTests_Call_o4_);
			PolymorphismTest_main_runTests->addEdge(PolymorphismTest_main_runTests_ControlFlow127);
		PolymorphismTest_main->addOwnedBehavior(PolymorphismTest_main_runTests);
			// CallBehaviorAction Call runTests
			PolymorphismTest_main_Call_runTests->setThisExecutableNodePtr(PolymorphismTest_main_Call_runTests);
			PolymorphismTest_main_Call_runTests->setName("Call runTests");
			PolymorphismTest_main_Call_runTests->setVisibility(VisibilityKind::public_);
			PolymorphismTest_main_Call_runTests->setBehavior(PolymorphismTest_main_runTests);
				// InputPin u
				PolymorphismTest_main_Call_runTests_u->setThisElementPtr(PolymorphismTest_main_Call_runTests_u);
				PolymorphismTest_main_Call_runTests_u->setName("u");
				PolymorphismTest_main_Call_runTests_u->setVisibility(VisibilityKind::public_);
				PolymorphismTest_main_Call_runTests_u->setType(PolymorphismTest_U);
			PolymorphismTest_main_Call_runTests->addArgument(PolymorphismTest_main_Call_runTests_u);
		PolymorphismTest_main->addNode(PolymorphismTest_main_Call_runTests);
			// CreateObjectAction Create S
			PolymorphismTest_main_Create_S->setThisExecutableNodePtr(PolymorphismTest_main_Create_S);
			PolymorphismTest_main_Create_S->setName("Create S");
			PolymorphismTest_main_Create_S->setVisibility(VisibilityKind::public_);
			PolymorphismTest_main_Create_S->setClassifier(PolymorphismTest_S);
				// OutputPin result
				PolymorphismTest_main_Create_S_result->setThisElementPtr(PolymorphismTest_main_Create_S_result);
				PolymorphismTest_main_Create_S_result->setName("result");
				PolymorphismTest_main_Create_S_result->setVisibility(VisibilityKind::public_);
				PolymorphismTest_main_Create_S_result->setType(PolymorphismTest_S);
			PolymorphismTest_main_Create_S->setResult(PolymorphismTest_main_Create_S_result);
		PolymorphismTest_main->addNode(PolymorphismTest_main_Create_S);
			// ObjectFlow ObjectFlow137 from result to u
			PolymorphismTest_main_ObjectFlow137->setThisActivityEdgePtr(PolymorphismTest_main_ObjectFlow137);
			PolymorphismTest_main_ObjectFlow137->setName("ObjectFlow137");
			PolymorphismTest_main_ObjectFlow137->setVisibility(VisibilityKind::public_);
			
			PolymorphismTest_main_ObjectFlow137->setSource(PolymorphismTest_main_Create_S_result);
			PolymorphismTest_main_ObjectFlow137->setTarget(PolymorphismTest_main_Call_runTests_u);
				// LiteralBoolean LiteralBoolean138
				PolymorphismTest_main_ObjectFlow137_LiteralBoolean138->setThisElementPtr(PolymorphismTest_main_ObjectFlow137_LiteralBoolean138);
				PolymorphismTest_main_ObjectFlow137_LiteralBoolean138->setName("LiteralBoolean138");
				PolymorphismTest_main_ObjectFlow137_LiteralBoolean138->setVisibility(VisibilityKind::public_);
				PolymorphismTest_main_ObjectFlow137_LiteralBoolean138->setValue(true);
			PolymorphismTest_main_ObjectFlow137->setGuard(PolymorphismTest_main_ObjectFlow137_LiteralBoolean138);
		PolymorphismTest_main->addEdge(PolymorphismTest_main_ObjectFlow137);
	PolymorphismTest->addPackagedElement(PolymorphismTest_main);
		// Class T
		PolymorphismTest_T->setThisClass_Ptr(PolymorphismTest_T);
		PolymorphismTest_T->setName("T");
		PolymorphismTest_T->setVisibility(VisibilityKind::public_);
		
			// Generalization to U
			PolymorphismTest_T_Generalization179->setThisElementPtr(PolymorphismTest_T_Generalization179);
			PolymorphismTest_T_Generalization179->setGeneral(PolymorphismTest_U);
		PolymorphismTest_T->addGeneralization(PolymorphismTest_T_Generalization179);
		// Activity o4_method
			PolymorphismTest_T_o4_method->setThisActivityPtr(PolymorphismTest_T_o4_method);
			PolymorphismTest_T_o4_method->setName("o4_method");
			PolymorphismTest_T_o4_method->setVisibility(VisibilityKind::public_);
				// ValueSpecificationAction Message
				PolymorphismTest_T_o4_method_Message->setThisExecutableNodePtr(PolymorphismTest_T_o4_method_Message);
				PolymorphismTest_T_o4_method_Message->setName("Message");
				PolymorphismTest_T_o4_method_Message->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString142
					PolymorphismTest_T_o4_method_Message_LiteralString142->setThisElementPtr(PolymorphismTest_T_o4_method_Message_LiteralString142);
					PolymorphismTest_T_o4_method_Message_LiteralString142->setName("LiteralString142");
					PolymorphismTest_T_o4_method_Message_LiteralString142->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o4_method_Message_LiteralString142->setValue("T::o4()");
				PolymorphismTest_T_o4_method_Message->setValue(PolymorphismTest_T_o4_method_Message_LiteralString142);
					// OutputPin result
					PolymorphismTest_T_o4_method_Message_result->setThisElementPtr(PolymorphismTest_T_o4_method_Message_result);
					PolymorphismTest_T_o4_method_Message_result->setName("result");
					PolymorphismTest_T_o4_method_Message_result->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o4_method_Message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_T_o4_method_Message->setResult(PolymorphismTest_T_o4_method_Message_result);
			PolymorphismTest_T_o4_method->addNode(PolymorphismTest_T_o4_method_Message);
				// CallBehaviorAction Call WriteLine
				PolymorphismTest_T_o4_method_Call_WriteLine->setThisExecutableNodePtr(PolymorphismTest_T_o4_method_Call_WriteLine);
				PolymorphismTest_T_o4_method_Call_WriteLine->setName("Call WriteLine");
				PolymorphismTest_T_o4_method_Call_WriteLine->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus->setThisElementPtr(PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus);
					PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus->setName("errorStatus");
					PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus->setLower(0);
				PolymorphismTest_T_o4_method_Call_WriteLine->addResult(PolymorphismTest_T_o4_method_Call_WriteLine_errorStatus);
				PolymorphismTest_T_o4_method_Call_WriteLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					PolymorphismTest_T_o4_method_Call_WriteLine_value->setThisElementPtr(PolymorphismTest_T_o4_method_Call_WriteLine_value);
					PolymorphismTest_T_o4_method_Call_WriteLine_value->setName("value");
					PolymorphismTest_T_o4_method_Call_WriteLine_value->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o4_method_Call_WriteLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_T_o4_method_Call_WriteLine->addArgument(PolymorphismTest_T_o4_method_Call_WriteLine_value);
			PolymorphismTest_T_o4_method->addNode(PolymorphismTest_T_o4_method_Call_WriteLine);
				// ObjectFlow ObjectFlow149 from result to value
				PolymorphismTest_T_o4_method_ObjectFlow149->setThisActivityEdgePtr(PolymorphismTest_T_o4_method_ObjectFlow149);
				PolymorphismTest_T_o4_method_ObjectFlow149->setName("ObjectFlow149");
				PolymorphismTest_T_o4_method_ObjectFlow149->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_o4_method_ObjectFlow149->setSource(PolymorphismTest_T_o4_method_Message_result);
				PolymorphismTest_T_o4_method_ObjectFlow149->setTarget(PolymorphismTest_T_o4_method_Call_WriteLine_value);
					// LiteralBoolean LiteralBoolean150
					PolymorphismTest_T_o4_method_ObjectFlow149_LiteralBoolean150->setThisElementPtr(PolymorphismTest_T_o4_method_ObjectFlow149_LiteralBoolean150);
					PolymorphismTest_T_o4_method_ObjectFlow149_LiteralBoolean150->setName("LiteralBoolean150");
					PolymorphismTest_T_o4_method_ObjectFlow149_LiteralBoolean150->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o4_method_ObjectFlow149_LiteralBoolean150->setValue(true);
				PolymorphismTest_T_o4_method_ObjectFlow149->setGuard(PolymorphismTest_T_o4_method_ObjectFlow149_LiteralBoolean150);
			PolymorphismTest_T_o4_method->addEdge(PolymorphismTest_T_o4_method_ObjectFlow149);
		PolymorphismTest_T->addOwnedBehavior(PolymorphismTest_T_o4_method);
			// Activity o1_method
			PolymorphismTest_T_o1_method->setThisActivityPtr(PolymorphismTest_T_o1_method);
			PolymorphismTest_T_o1_method->setName("o1_method");
			PolymorphismTest_T_o1_method->setVisibility(VisibilityKind::public_);
			
				// Parameter b
				PolymorphismTest_T_o1_method_b->setThisElementPtr(PolymorphismTest_T_o1_method_b);
				PolymorphismTest_T_o1_method_b->setName("b");
				PolymorphismTest_T_o1_method_b->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_o1_method_b->setType(PolymorphismTest_B);
			PolymorphismTest_T_o1_method->addOwnedParameter(PolymorphismTest_T_o1_method_b);
				// Parameter a
				PolymorphismTest_T_o1_method_a->setThisElementPtr(PolymorphismTest_T_o1_method_a);
				PolymorphismTest_T_o1_method_a->setName("a");
				PolymorphismTest_T_o1_method_a->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_o1_method_a->setType(PolymorphismTest_A);
				PolymorphismTest_T_o1_method_a->setDirection(ParameterDirectionKind::return_);
			PolymorphismTest_T_o1_method->addOwnedParameter(PolymorphismTest_T_o1_method_a);
				// ValueSpecificationAction Message
				PolymorphismTest_T_o1_method_Message->setThisExecutableNodePtr(PolymorphismTest_T_o1_method_Message);
				PolymorphismTest_T_o1_method_Message->setName("Message");
				PolymorphismTest_T_o1_method_Message->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString152
					PolymorphismTest_T_o1_method_Message_LiteralString152->setThisElementPtr(PolymorphismTest_T_o1_method_Message_LiteralString152);
					PolymorphismTest_T_o1_method_Message_LiteralString152->setName("LiteralString152");
					PolymorphismTest_T_o1_method_Message_LiteralString152->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o1_method_Message_LiteralString152->setValue("T::o1(b : B) : A");
				PolymorphismTest_T_o1_method_Message->setValue(PolymorphismTest_T_o1_method_Message_LiteralString152);
					// OutputPin result
					PolymorphismTest_T_o1_method_Message_result->setThisElementPtr(PolymorphismTest_T_o1_method_Message_result);
					PolymorphismTest_T_o1_method_Message_result->setName("result");
					PolymorphismTest_T_o1_method_Message_result->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o1_method_Message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_T_o1_method_Message->setResult(PolymorphismTest_T_o1_method_Message_result);
			PolymorphismTest_T_o1_method->addNode(PolymorphismTest_T_o1_method_Message);
				// CallBehaviorAction Call WriteLine
				PolymorphismTest_T_o1_method_Call_WriteLine->setThisExecutableNodePtr(PolymorphismTest_T_o1_method_Call_WriteLine);
				PolymorphismTest_T_o1_method_Call_WriteLine->setName("Call WriteLine");
				PolymorphismTest_T_o1_method_Call_WriteLine->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus->setThisElementPtr(PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus);
					PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus->setName("errorStatus");
					PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus->setLower(0);
				PolymorphismTest_T_o1_method_Call_WriteLine->addResult(PolymorphismTest_T_o1_method_Call_WriteLine_errorStatus);
				PolymorphismTest_T_o1_method_Call_WriteLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					PolymorphismTest_T_o1_method_Call_WriteLine_value->setThisElementPtr(PolymorphismTest_T_o1_method_Call_WriteLine_value);
					PolymorphismTest_T_o1_method_Call_WriteLine_value->setName("value");
					PolymorphismTest_T_o1_method_Call_WriteLine_value->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o1_method_Call_WriteLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_T_o1_method_Call_WriteLine->addArgument(PolymorphismTest_T_o1_method_Call_WriteLine_value);
			PolymorphismTest_T_o1_method->addNode(PolymorphismTest_T_o1_method_Call_WriteLine);
				// ActivityParameterNode b_node
				PolymorphismTest_T_o1_method_b_node->setThisElementPtr(PolymorphismTest_T_o1_method_b_node);
				PolymorphismTest_T_o1_method_b_node->setName("b_node");
				PolymorphismTest_T_o1_method_b_node->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_o1_method_b_node->setParameter(PolymorphismTest_T_o1_method_b);
			PolymorphismTest_T_o1_method->addNode(PolymorphismTest_T_o1_method_b_node);
				// ActivityParameterNode a_node
				PolymorphismTest_T_o1_method_a_node->setThisElementPtr(PolymorphismTest_T_o1_method_a_node);
				PolymorphismTest_T_o1_method_a_node->setName("a_node");
				PolymorphismTest_T_o1_method_a_node->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_o1_method_a_node->setParameter(PolymorphismTest_T_o1_method_a);
			PolymorphismTest_T_o1_method->addNode(PolymorphismTest_T_o1_method_a_node);
				// ObjectFlow ObjectFlow163 from result to value
				PolymorphismTest_T_o1_method_ObjectFlow163->setThisActivityEdgePtr(PolymorphismTest_T_o1_method_ObjectFlow163);
				PolymorphismTest_T_o1_method_ObjectFlow163->setName("ObjectFlow163");
				PolymorphismTest_T_o1_method_ObjectFlow163->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_o1_method_ObjectFlow163->setSource(PolymorphismTest_T_o1_method_Message_result);
				PolymorphismTest_T_o1_method_ObjectFlow163->setTarget(PolymorphismTest_T_o1_method_Call_WriteLine_value);
					// LiteralBoolean LiteralBoolean164
					PolymorphismTest_T_o1_method_ObjectFlow163_LiteralBoolean164->setThisElementPtr(PolymorphismTest_T_o1_method_ObjectFlow163_LiteralBoolean164);
					PolymorphismTest_T_o1_method_ObjectFlow163_LiteralBoolean164->setName("LiteralBoolean164");
					PolymorphismTest_T_o1_method_ObjectFlow163_LiteralBoolean164->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o1_method_ObjectFlow163_LiteralBoolean164->setValue(true);
				PolymorphismTest_T_o1_method_ObjectFlow163->setGuard(PolymorphismTest_T_o1_method_ObjectFlow163_LiteralBoolean164);
			PolymorphismTest_T_o1_method->addEdge(PolymorphismTest_T_o1_method_ObjectFlow163);
		PolymorphismTest_T->addOwnedBehavior(PolymorphismTest_T_o1_method);
			// Activity o3_method
			PolymorphismTest_T_o3_method->setThisActivityPtr(PolymorphismTest_T_o3_method);
			PolymorphismTest_T_o3_method->setName("o3_method");
			PolymorphismTest_T_o3_method->setVisibility(VisibilityKind::public_);
			
				// Parameter i
				PolymorphismTest_T_o3_method_i->setThisElementPtr(PolymorphismTest_T_o3_method_i);
				PolymorphismTest_T_o3_method_i->setName("i");
				PolymorphismTest_T_o3_method_i->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_o3_method_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			PolymorphismTest_T_o3_method->addOwnedParameter(PolymorphismTest_T_o3_method_i);
				// CallBehaviorAction Call WriteLine
				PolymorphismTest_T_o3_method_Call_WriteLine->setThisExecutableNodePtr(PolymorphismTest_T_o3_method_Call_WriteLine);
				PolymorphismTest_T_o3_method_Call_WriteLine->setName("Call WriteLine");
				PolymorphismTest_T_o3_method_Call_WriteLine->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus->setThisElementPtr(PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus);
					PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus->setName("errorStatus");
					PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus->setLower(0);
				PolymorphismTest_T_o3_method_Call_WriteLine->addResult(PolymorphismTest_T_o3_method_Call_WriteLine_errorStatus);
				PolymorphismTest_T_o3_method_Call_WriteLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					PolymorphismTest_T_o3_method_Call_WriteLine_value->setThisElementPtr(PolymorphismTest_T_o3_method_Call_WriteLine_value);
					PolymorphismTest_T_o3_method_Call_WriteLine_value->setName("value");
					PolymorphismTest_T_o3_method_Call_WriteLine_value->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o3_method_Call_WriteLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_T_o3_method_Call_WriteLine->addArgument(PolymorphismTest_T_o3_method_Call_WriteLine_value);
			PolymorphismTest_T_o3_method->addNode(PolymorphismTest_T_o3_method_Call_WriteLine);
				// ActivityParameterNode i_node
				PolymorphismTest_T_o3_method_i_node->setThisElementPtr(PolymorphismTest_T_o3_method_i_node);
				PolymorphismTest_T_o3_method_i_node->setName("i_node");
				PolymorphismTest_T_o3_method_i_node->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_o3_method_i_node->setParameter(PolymorphismTest_T_o3_method_i);
			PolymorphismTest_T_o3_method->addNode(PolymorphismTest_T_o3_method_i_node);
				// ValueSpecificationAction Message
				PolymorphismTest_T_o3_method_Message->setThisExecutableNodePtr(PolymorphismTest_T_o3_method_Message);
				PolymorphismTest_T_o3_method_Message->setName("Message");
				PolymorphismTest_T_o3_method_Message->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString178
					PolymorphismTest_T_o3_method_Message_LiteralString178->setThisElementPtr(PolymorphismTest_T_o3_method_Message_LiteralString178);
					PolymorphismTest_T_o3_method_Message_LiteralString178->setName("LiteralString178");
					PolymorphismTest_T_o3_method_Message_LiteralString178->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o3_method_Message_LiteralString178->setValue("T::o3(i : int)");
				PolymorphismTest_T_o3_method_Message->setValue(PolymorphismTest_T_o3_method_Message_LiteralString178);
					// OutputPin result
					PolymorphismTest_T_o3_method_Message_result->setThisElementPtr(PolymorphismTest_T_o3_method_Message_result);
					PolymorphismTest_T_o3_method_Message_result->setName("result");
					PolymorphismTest_T_o3_method_Message_result->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o3_method_Message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_T_o3_method_Message->setResult(PolymorphismTest_T_o3_method_Message_result);
			PolymorphismTest_T_o3_method->addNode(PolymorphismTest_T_o3_method_Message);
				// ObjectFlow ObjectFlow166 from result to value
				PolymorphismTest_T_o3_method_ObjectFlow166->setThisActivityEdgePtr(PolymorphismTest_T_o3_method_ObjectFlow166);
				PolymorphismTest_T_o3_method_ObjectFlow166->setName("ObjectFlow166");
				PolymorphismTest_T_o3_method_ObjectFlow166->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_o3_method_ObjectFlow166->setSource(PolymorphismTest_T_o3_method_Message_result);
				PolymorphismTest_T_o3_method_ObjectFlow166->setTarget(PolymorphismTest_T_o3_method_Call_WriteLine_value);
					// LiteralBoolean LiteralBoolean168
					PolymorphismTest_T_o3_method_ObjectFlow166_LiteralBoolean168->setThisElementPtr(PolymorphismTest_T_o3_method_ObjectFlow166_LiteralBoolean168);
					PolymorphismTest_T_o3_method_ObjectFlow166_LiteralBoolean168->setName("LiteralBoolean168");
					PolymorphismTest_T_o3_method_ObjectFlow166_LiteralBoolean168->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o3_method_ObjectFlow166_LiteralBoolean168->setValue(true);
				PolymorphismTest_T_o3_method_ObjectFlow166->setGuard(PolymorphismTest_T_o3_method_ObjectFlow166_LiteralBoolean168);
			PolymorphismTest_T_o3_method->addEdge(PolymorphismTest_T_o3_method_ObjectFlow166);
		PolymorphismTest_T->addOwnedBehavior(PolymorphismTest_T_o3_method);
			// Activity o2_method
			PolymorphismTest_T_o2_method->setThisActivityPtr(PolymorphismTest_T_o2_method);
			PolymorphismTest_T_o2_method->setName("o2_method");
			PolymorphismTest_T_o2_method->setVisibility(VisibilityKind::public_);
			
				// Parameter b
				PolymorphismTest_T_o2_method_b->setThisElementPtr(PolymorphismTest_T_o2_method_b);
				PolymorphismTest_T_o2_method_b->setName("b");
				PolymorphismTest_T_o2_method_b->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_o2_method_b->setType(PolymorphismTest_B);
			PolymorphismTest_T_o2_method->addOwnedParameter(PolymorphismTest_T_o2_method_b);
				// Parameter result
				PolymorphismTest_T_o2_method_result->setThisElementPtr(PolymorphismTest_T_o2_method_result);
				PolymorphismTest_T_o2_method_result->setName("result");
				PolymorphismTest_T_o2_method_result->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_o2_method_result->setType(PolymorphismTest_B);
				PolymorphismTest_T_o2_method_result->setDirection(ParameterDirectionKind::return_);
			PolymorphismTest_T_o2_method->addOwnedParameter(PolymorphismTest_T_o2_method_result);
				// CallBehaviorAction Call WriteLine
				PolymorphismTest_T_o2_method_Call_WriteLine->setThisExecutableNodePtr(PolymorphismTest_T_o2_method_Call_WriteLine);
				PolymorphismTest_T_o2_method_Call_WriteLine->setName("Call WriteLine");
				PolymorphismTest_T_o2_method_Call_WriteLine->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus->setThisElementPtr(PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus);
					PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus->setName("errorStatus");
					PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus->setLower(0);
				PolymorphismTest_T_o2_method_Call_WriteLine->addResult(PolymorphismTest_T_o2_method_Call_WriteLine_errorStatus);
				PolymorphismTest_T_o2_method_Call_WriteLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					PolymorphismTest_T_o2_method_Call_WriteLine_value->setThisElementPtr(PolymorphismTest_T_o2_method_Call_WriteLine_value);
					PolymorphismTest_T_o2_method_Call_WriteLine_value->setName("value");
					PolymorphismTest_T_o2_method_Call_WriteLine_value->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o2_method_Call_WriteLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_T_o2_method_Call_WriteLine->addArgument(PolymorphismTest_T_o2_method_Call_WriteLine_value);
			PolymorphismTest_T_o2_method->addNode(PolymorphismTest_T_o2_method_Call_WriteLine);
				// ValueSpecificationAction Message
				PolymorphismTest_T_o2_method_Message->setThisExecutableNodePtr(PolymorphismTest_T_o2_method_Message);
				PolymorphismTest_T_o2_method_Message->setName("Message");
				PolymorphismTest_T_o2_method_Message->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString191
					PolymorphismTest_T_o2_method_Message_LiteralString191->setThisElementPtr(PolymorphismTest_T_o2_method_Message_LiteralString191);
					PolymorphismTest_T_o2_method_Message_LiteralString191->setName("LiteralString191");
					PolymorphismTest_T_o2_method_Message_LiteralString191->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o2_method_Message_LiteralString191->setValue("T::o2(b : B) : B");
				PolymorphismTest_T_o2_method_Message->setValue(PolymorphismTest_T_o2_method_Message_LiteralString191);
					// OutputPin result
					PolymorphismTest_T_o2_method_Message_result->setThisElementPtr(PolymorphismTest_T_o2_method_Message_result);
					PolymorphismTest_T_o2_method_Message_result->setName("result");
					PolymorphismTest_T_o2_method_Message_result->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o2_method_Message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_T_o2_method_Message->setResult(PolymorphismTest_T_o2_method_Message_result);
			PolymorphismTest_T_o2_method->addNode(PolymorphismTest_T_o2_method_Message);
				// ActivityParameterNode b_node
				PolymorphismTest_T_o2_method_b_node->setThisElementPtr(PolymorphismTest_T_o2_method_b_node);
				PolymorphismTest_T_o2_method_b_node->setName("b_node");
				PolymorphismTest_T_o2_method_b_node->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_o2_method_b_node->setParameter(PolymorphismTest_T_o2_method_b);
			PolymorphismTest_T_o2_method->addNode(PolymorphismTest_T_o2_method_b_node);
				// ActivityParameterNode result_node
				PolymorphismTest_T_o2_method_result_node->setThisElementPtr(PolymorphismTest_T_o2_method_result_node);
				PolymorphismTest_T_o2_method_result_node->setName("result_node");
				PolymorphismTest_T_o2_method_result_node->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_o2_method_result_node->setParameter(PolymorphismTest_T_o2_method_result);
			PolymorphismTest_T_o2_method->addNode(PolymorphismTest_T_o2_method_result_node);
				// ObjectFlow ObjectFlow180 from result to value
				PolymorphismTest_T_o2_method_ObjectFlow180->setThisActivityEdgePtr(PolymorphismTest_T_o2_method_ObjectFlow180);
				PolymorphismTest_T_o2_method_ObjectFlow180->setName("ObjectFlow180");
				PolymorphismTest_T_o2_method_ObjectFlow180->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_o2_method_ObjectFlow180->setSource(PolymorphismTest_T_o2_method_Message_result);
				PolymorphismTest_T_o2_method_ObjectFlow180->setTarget(PolymorphismTest_T_o2_method_Call_WriteLine_value);
					// LiteralBoolean LiteralBoolean182
					PolymorphismTest_T_o2_method_ObjectFlow180_LiteralBoolean182->setThisElementPtr(PolymorphismTest_T_o2_method_ObjectFlow180_LiteralBoolean182);
					PolymorphismTest_T_o2_method_ObjectFlow180_LiteralBoolean182->setName("LiteralBoolean182");
					PolymorphismTest_T_o2_method_ObjectFlow180_LiteralBoolean182->setVisibility(VisibilityKind::public_);
					PolymorphismTest_T_o2_method_ObjectFlow180_LiteralBoolean182->setValue(true);
				PolymorphismTest_T_o2_method_ObjectFlow180->setGuard(PolymorphismTest_T_o2_method_ObjectFlow180_LiteralBoolean182);
			PolymorphismTest_T_o2_method->addEdge(PolymorphismTest_T_o2_method_ObjectFlow180);
		PolymorphismTest_T->addOwnedBehavior(PolymorphismTest_T_o2_method);
		
			// Operation A_o1_B
			PolymorphismTest_T_A_o1_B->setThisOperationPtr(PolymorphismTest_T_A_o1_B);
			PolymorphismTest_T_A_o1_B->setName("o1");
			PolymorphismTest_T_A_o1_B->setVisibility(VisibilityKind::public_);
				// Parameter b
				PolymorphismTest_T_A_o1_B_b->setThisElementPtr(PolymorphismTest_T_A_o1_B_b);
				PolymorphismTest_T_A_o1_B_b->setName("b");
				PolymorphismTest_T_A_o1_B_b->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_A_o1_B_b->setType(PolymorphismTest_B);
			PolymorphismTest_T_A_o1_B->addOwnedParameter(PolymorphismTest_T_A_o1_B_b);
				// Parameter a
				PolymorphismTest_T_A_o1_B_a->setThisElementPtr(PolymorphismTest_T_A_o1_B_a);
				PolymorphismTest_T_A_o1_B_a->setName("a");
				PolymorphismTest_T_A_o1_B_a->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_A_o1_B_a->setType(PolymorphismTest_A);
				PolymorphismTest_T_A_o1_B_a->setDirection(ParameterDirectionKind::return_);
			PolymorphismTest_T_A_o1_B->addOwnedParameter(PolymorphismTest_T_A_o1_B_a);
			PolymorphismTest_T_A_o1_B->addMethod(PolymorphismTest_T_o1_method);
			PolymorphismTest_T_A_o1_B->addRedefinedOperation(PolymorphismTest_U_A_o1_B);
		PolymorphismTest_T->addOwnedOperation(PolymorphismTest_T_A_o1_B);
			// Operation B_o2_B
			PolymorphismTest_T_B_o2_B->setThisOperationPtr(PolymorphismTest_T_B_o2_B);
			PolymorphismTest_T_B_o2_B->setName("o2");
			PolymorphismTest_T_B_o2_B->setVisibility(VisibilityKind::public_);
				// Parameter b
				PolymorphismTest_T_B_o2_B_b->setThisElementPtr(PolymorphismTest_T_B_o2_B_b);
				PolymorphismTest_T_B_o2_B_b->setName("b");
				PolymorphismTest_T_B_o2_B_b->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_B_o2_B_b->setType(PolymorphismTest_B);
			PolymorphismTest_T_B_o2_B->addOwnedParameter(PolymorphismTest_T_B_o2_B_b);
				// Parameter result
				PolymorphismTest_T_B_o2_B_result->setThisElementPtr(PolymorphismTest_T_B_o2_B_result);
				PolymorphismTest_T_B_o2_B_result->setName("result");
				PolymorphismTest_T_B_o2_B_result->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_B_o2_B_result->setType(PolymorphismTest_B);
				PolymorphismTest_T_B_o2_B_result->setDirection(ParameterDirectionKind::return_);
			PolymorphismTest_T_B_o2_B->addOwnedParameter(PolymorphismTest_T_B_o2_B_result);
			PolymorphismTest_T_B_o2_B->addMethod(PolymorphismTest_T_o2_method);
			PolymorphismTest_T_B_o2_B->addRedefinedOperation(PolymorphismTest_U_A_o2_B);
		PolymorphismTest_T->addOwnedOperation(PolymorphismTest_T_B_o2_B);
			// Operation o3_Integer
			PolymorphismTest_T_o3_Integer->setThisOperationPtr(PolymorphismTest_T_o3_Integer);
			PolymorphismTest_T_o3_Integer->setName("o3");
			PolymorphismTest_T_o3_Integer->setVisibility(VisibilityKind::public_);
				// Parameter i
				PolymorphismTest_T_o3_Integer_i->setThisElementPtr(PolymorphismTest_T_o3_Integer_i);
				PolymorphismTest_T_o3_Integer_i->setName("i");
				PolymorphismTest_T_o3_Integer_i->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_T_o3_Integer_i->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			PolymorphismTest_T_o3_Integer->addOwnedParameter(PolymorphismTest_T_o3_Integer_i);
			PolymorphismTest_T_o3_Integer->addMethod(PolymorphismTest_T_o3_method);
			PolymorphismTest_T_o3_Integer->addRedefinedOperation(PolymorphismTest_U_o3_Integer);
		PolymorphismTest_T->addOwnedOperation(PolymorphismTest_T_o3_Integer);
			// Operation o4
			PolymorphismTest_T_o4->setThisOperationPtr(PolymorphismTest_T_o4);
			PolymorphismTest_T_o4->setName("o4");
			PolymorphismTest_T_o4->setVisibility(VisibilityKind::public_);
			PolymorphismTest_T_o4->addMethod(PolymorphismTest_T_o4_method);
			PolymorphismTest_T_o4->addRedefinedOperation(PolymorphismTest_U_o4);
		PolymorphismTest_T->addOwnedOperation(PolymorphismTest_T_o4);
	PolymorphismTest->addPackagedElement(PolymorphismTest_T);
		// Class S
		PolymorphismTest_S->setThisClass_Ptr(PolymorphismTest_S);
		PolymorphismTest_S->setName("S");
		PolymorphismTest_S->setVisibility(VisibilityKind::public_);
		
			// Generalization to T
			PolymorphismTest_S_Generalization232->setThisElementPtr(PolymorphismTest_S_Generalization232);
			PolymorphismTest_S_Generalization232->setGeneral(PolymorphismTest_T);
		PolymorphismTest_S->addGeneralization(PolymorphismTest_S_Generalization232);
		// Activity o1_method
			PolymorphismTest_S_o1_method->setThisActivityPtr(PolymorphismTest_S_o1_method);
			PolymorphismTest_S_o1_method->setName("o1_method");
			PolymorphismTest_S_o1_method->setVisibility(VisibilityKind::public_);
			
				// Parameter b
				PolymorphismTest_S_o1_method_b->setThisElementPtr(PolymorphismTest_S_o1_method_b);
				PolymorphismTest_S_o1_method_b->setName("b");
				PolymorphismTest_S_o1_method_b->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_o1_method_b->setType(PolymorphismTest_B);
			PolymorphismTest_S_o1_method->addOwnedParameter(PolymorphismTest_S_o1_method_b);
				// Parameter a
				PolymorphismTest_S_o1_method_a->setThisElementPtr(PolymorphismTest_S_o1_method_a);
				PolymorphismTest_S_o1_method_a->setName("a");
				PolymorphismTest_S_o1_method_a->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_o1_method_a->setType(PolymorphismTest_A);
				PolymorphismTest_S_o1_method_a->setDirection(ParameterDirectionKind::return_);
			PolymorphismTest_S_o1_method->addOwnedParameter(PolymorphismTest_S_o1_method_a);
				// ActivityParameterNode a_node
				PolymorphismTest_S_o1_method_a_node->setThisElementPtr(PolymorphismTest_S_o1_method_a_node);
				PolymorphismTest_S_o1_method_a_node->setName("a_node");
				PolymorphismTest_S_o1_method_a_node->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_o1_method_a_node->setParameter(PolymorphismTest_S_o1_method_a);
			PolymorphismTest_S_o1_method->addNode(PolymorphismTest_S_o1_method_a_node);
				// ValueSpecificationAction Message
				PolymorphismTest_S_o1_method_Message->setThisExecutableNodePtr(PolymorphismTest_S_o1_method_Message);
				PolymorphismTest_S_o1_method_Message->setName("Message");
				PolymorphismTest_S_o1_method_Message->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString200
					PolymorphismTest_S_o1_method_Message_LiteralString200->setThisElementPtr(PolymorphismTest_S_o1_method_Message_LiteralString200);
					PolymorphismTest_S_o1_method_Message_LiteralString200->setName("LiteralString200");
					PolymorphismTest_S_o1_method_Message_LiteralString200->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o1_method_Message_LiteralString200->setValue("S::o1(b : B) : A");
				PolymorphismTest_S_o1_method_Message->setValue(PolymorphismTest_S_o1_method_Message_LiteralString200);
					// OutputPin result
					PolymorphismTest_S_o1_method_Message_result->setThisElementPtr(PolymorphismTest_S_o1_method_Message_result);
					PolymorphismTest_S_o1_method_Message_result->setName("result");
					PolymorphismTest_S_o1_method_Message_result->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o1_method_Message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_S_o1_method_Message->setResult(PolymorphismTest_S_o1_method_Message_result);
			PolymorphismTest_S_o1_method->addNode(PolymorphismTest_S_o1_method_Message);
				// ActivityParameterNode b_node
				PolymorphismTest_S_o1_method_b_node->setThisElementPtr(PolymorphismTest_S_o1_method_b_node);
				PolymorphismTest_S_o1_method_b_node->setName("b_node");
				PolymorphismTest_S_o1_method_b_node->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_o1_method_b_node->setParameter(PolymorphismTest_S_o1_method_b);
			PolymorphismTest_S_o1_method->addNode(PolymorphismTest_S_o1_method_b_node);
				// CallBehaviorAction Call WriteLine
				PolymorphismTest_S_o1_method_Call_WriteLine->setThisExecutableNodePtr(PolymorphismTest_S_o1_method_Call_WriteLine);
				PolymorphismTest_S_o1_method_Call_WriteLine->setName("Call WriteLine");
				PolymorphismTest_S_o1_method_Call_WriteLine->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus->setThisElementPtr(PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus);
					PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus->setName("errorStatus");
					PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus->setLower(0);
				PolymorphismTest_S_o1_method_Call_WriteLine->addResult(PolymorphismTest_S_o1_method_Call_WriteLine_errorStatus);
				PolymorphismTest_S_o1_method_Call_WriteLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					PolymorphismTest_S_o1_method_Call_WriteLine_value->setThisElementPtr(PolymorphismTest_S_o1_method_Call_WriteLine_value);
					PolymorphismTest_S_o1_method_Call_WriteLine_value->setName("value");
					PolymorphismTest_S_o1_method_Call_WriteLine_value->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o1_method_Call_WriteLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_S_o1_method_Call_WriteLine->addArgument(PolymorphismTest_S_o1_method_Call_WriteLine_value);
			PolymorphismTest_S_o1_method->addNode(PolymorphismTest_S_o1_method_Call_WriteLine);
				// ObjectFlow ObjectFlow194 from result to value
				PolymorphismTest_S_o1_method_ObjectFlow194->setThisActivityEdgePtr(PolymorphismTest_S_o1_method_ObjectFlow194);
				PolymorphismTest_S_o1_method_ObjectFlow194->setName("ObjectFlow194");
				PolymorphismTest_S_o1_method_ObjectFlow194->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_o1_method_ObjectFlow194->setSource(PolymorphismTest_S_o1_method_Message_result);
				PolymorphismTest_S_o1_method_ObjectFlow194->setTarget(PolymorphismTest_S_o1_method_Call_WriteLine_value);
					// LiteralBoolean LiteralBoolean196
					PolymorphismTest_S_o1_method_ObjectFlow194_LiteralBoolean196->setThisElementPtr(PolymorphismTest_S_o1_method_ObjectFlow194_LiteralBoolean196);
					PolymorphismTest_S_o1_method_ObjectFlow194_LiteralBoolean196->setName("LiteralBoolean196");
					PolymorphismTest_S_o1_method_ObjectFlow194_LiteralBoolean196->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o1_method_ObjectFlow194_LiteralBoolean196->setValue(true);
				PolymorphismTest_S_o1_method_ObjectFlow194->setGuard(PolymorphismTest_S_o1_method_ObjectFlow194_LiteralBoolean196);
			PolymorphismTest_S_o1_method->addEdge(PolymorphismTest_S_o1_method_ObjectFlow194);
		PolymorphismTest_S->addOwnedBehavior(PolymorphismTest_S_o1_method);
			// Activity o3_method
			PolymorphismTest_S_o3_method->setThisActivityPtr(PolymorphismTest_S_o3_method);
			PolymorphismTest_S_o3_method->setName("o3_method");
			PolymorphismTest_S_o3_method->setVisibility(VisibilityKind::public_);
				// ValueSpecificationAction Message
				PolymorphismTest_S_o3_method_Message->setThisExecutableNodePtr(PolymorphismTest_S_o3_method_Message);
				PolymorphismTest_S_o3_method_Message->setName("Message");
				PolymorphismTest_S_o3_method_Message->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString211
					PolymorphismTest_S_o3_method_Message_LiteralString211->setThisElementPtr(PolymorphismTest_S_o3_method_Message_LiteralString211);
					PolymorphismTest_S_o3_method_Message_LiteralString211->setName("LiteralString211");
					PolymorphismTest_S_o3_method_Message_LiteralString211->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o3_method_Message_LiteralString211->setValue("S::o3()");
				PolymorphismTest_S_o3_method_Message->setValue(PolymorphismTest_S_o3_method_Message_LiteralString211);
					// OutputPin result
					PolymorphismTest_S_o3_method_Message_result->setThisElementPtr(PolymorphismTest_S_o3_method_Message_result);
					PolymorphismTest_S_o3_method_Message_result->setName("result");
					PolymorphismTest_S_o3_method_Message_result->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o3_method_Message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_S_o3_method_Message->setResult(PolymorphismTest_S_o3_method_Message_result);
			PolymorphismTest_S_o3_method->addNode(PolymorphismTest_S_o3_method_Message);
				// CallBehaviorAction Call WriteLine
				PolymorphismTest_S_o3_method_Call_WriteLine->setThisExecutableNodePtr(PolymorphismTest_S_o3_method_Call_WriteLine);
				PolymorphismTest_S_o3_method_Call_WriteLine->setName("Call WriteLine");
				PolymorphismTest_S_o3_method_Call_WriteLine->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus->setThisElementPtr(PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus);
					PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus->setName("errorStatus");
					PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus->setLower(0);
				PolymorphismTest_S_o3_method_Call_WriteLine->addResult(PolymorphismTest_S_o3_method_Call_WriteLine_errorStatus);
				PolymorphismTest_S_o3_method_Call_WriteLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					PolymorphismTest_S_o3_method_Call_WriteLine_value->setThisElementPtr(PolymorphismTest_S_o3_method_Call_WriteLine_value);
					PolymorphismTest_S_o3_method_Call_WriteLine_value->setName("value");
					PolymorphismTest_S_o3_method_Call_WriteLine_value->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o3_method_Call_WriteLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_S_o3_method_Call_WriteLine->addArgument(PolymorphismTest_S_o3_method_Call_WriteLine_value);
			PolymorphismTest_S_o3_method->addNode(PolymorphismTest_S_o3_method_Call_WriteLine);
				// ObjectFlow ObjectFlow208 from result to value
				PolymorphismTest_S_o3_method_ObjectFlow208->setThisActivityEdgePtr(PolymorphismTest_S_o3_method_ObjectFlow208);
				PolymorphismTest_S_o3_method_ObjectFlow208->setName("ObjectFlow208");
				PolymorphismTest_S_o3_method_ObjectFlow208->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_o3_method_ObjectFlow208->setSource(PolymorphismTest_S_o3_method_Message_result);
				PolymorphismTest_S_o3_method_ObjectFlow208->setTarget(PolymorphismTest_S_o3_method_Call_WriteLine_value);
					// LiteralBoolean LiteralBoolean209
					PolymorphismTest_S_o3_method_ObjectFlow208_LiteralBoolean209->setThisElementPtr(PolymorphismTest_S_o3_method_ObjectFlow208_LiteralBoolean209);
					PolymorphismTest_S_o3_method_ObjectFlow208_LiteralBoolean209->setName("LiteralBoolean209");
					PolymorphismTest_S_o3_method_ObjectFlow208_LiteralBoolean209->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o3_method_ObjectFlow208_LiteralBoolean209->setValue(true);
				PolymorphismTest_S_o3_method_ObjectFlow208->setGuard(PolymorphismTest_S_o3_method_ObjectFlow208_LiteralBoolean209);
			PolymorphismTest_S_o3_method->addEdge(PolymorphismTest_S_o3_method_ObjectFlow208);
		PolymorphismTest_S->addOwnedBehavior(PolymorphismTest_S_o3_method);
			// Activity o5_method
			PolymorphismTest_S_o5_method->setThisActivityPtr(PolymorphismTest_S_o5_method);
			PolymorphismTest_S_o5_method->setName("o5_method");
			PolymorphismTest_S_o5_method->setVisibility(VisibilityKind::public_);
				// CallBehaviorAction Call WriteLine
				PolymorphismTest_S_o5_method_Call_WriteLine->setThisExecutableNodePtr(PolymorphismTest_S_o5_method_Call_WriteLine);
				PolymorphismTest_S_o5_method_Call_WriteLine->setName("Call WriteLine");
				PolymorphismTest_S_o5_method_Call_WriteLine->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus->setThisElementPtr(PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus);
					PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus->setName("errorStatus");
					PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus->setLower(0);
				PolymorphismTest_S_o5_method_Call_WriteLine->addResult(PolymorphismTest_S_o5_method_Call_WriteLine_errorStatus);
				PolymorphismTest_S_o5_method_Call_WriteLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					PolymorphismTest_S_o5_method_Call_WriteLine_value->setThisElementPtr(PolymorphismTest_S_o5_method_Call_WriteLine_value);
					PolymorphismTest_S_o5_method_Call_WriteLine_value->setName("value");
					PolymorphismTest_S_o5_method_Call_WriteLine_value->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o5_method_Call_WriteLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_S_o5_method_Call_WriteLine->addArgument(PolymorphismTest_S_o5_method_Call_WriteLine_value);
			PolymorphismTest_S_o5_method->addNode(PolymorphismTest_S_o5_method_Call_WriteLine);
				// ValueSpecificationAction Message
				PolymorphismTest_S_o5_method_Message->setThisExecutableNodePtr(PolymorphismTest_S_o5_method_Message);
				PolymorphismTest_S_o5_method_Message->setName("Message");
				PolymorphismTest_S_o5_method_Message->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString226
					PolymorphismTest_S_o5_method_Message_LiteralString226->setThisElementPtr(PolymorphismTest_S_o5_method_Message_LiteralString226);
					PolymorphismTest_S_o5_method_Message_LiteralString226->setName("LiteralString226");
					PolymorphismTest_S_o5_method_Message_LiteralString226->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o5_method_Message_LiteralString226->setValue("S::o5()");
				PolymorphismTest_S_o5_method_Message->setValue(PolymorphismTest_S_o5_method_Message_LiteralString226);
					// OutputPin result
					PolymorphismTest_S_o5_method_Message_result->setThisElementPtr(PolymorphismTest_S_o5_method_Message_result);
					PolymorphismTest_S_o5_method_Message_result->setName("result");
					PolymorphismTest_S_o5_method_Message_result->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o5_method_Message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_S_o5_method_Message->setResult(PolymorphismTest_S_o5_method_Message_result);
			PolymorphismTest_S_o5_method->addNode(PolymorphismTest_S_o5_method_Message);
				// ObjectFlow ObjectFlow229 from result to value
				PolymorphismTest_S_o5_method_ObjectFlow229->setThisActivityEdgePtr(PolymorphismTest_S_o5_method_ObjectFlow229);
				PolymorphismTest_S_o5_method_ObjectFlow229->setName("ObjectFlow229");
				PolymorphismTest_S_o5_method_ObjectFlow229->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_o5_method_ObjectFlow229->setSource(PolymorphismTest_S_o5_method_Message_result);
				PolymorphismTest_S_o5_method_ObjectFlow229->setTarget(PolymorphismTest_S_o5_method_Call_WriteLine_value);
					// LiteralBoolean LiteralBoolean231
					PolymorphismTest_S_o5_method_ObjectFlow229_LiteralBoolean231->setThisElementPtr(PolymorphismTest_S_o5_method_ObjectFlow229_LiteralBoolean231);
					PolymorphismTest_S_o5_method_ObjectFlow229_LiteralBoolean231->setName("LiteralBoolean231");
					PolymorphismTest_S_o5_method_ObjectFlow229_LiteralBoolean231->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o5_method_ObjectFlow229_LiteralBoolean231->setValue(true);
				PolymorphismTest_S_o5_method_ObjectFlow229->setGuard(PolymorphismTest_S_o5_method_ObjectFlow229_LiteralBoolean231);
			PolymorphismTest_S_o5_method->addEdge(PolymorphismTest_S_o5_method_ObjectFlow229);
		PolymorphismTest_S->addOwnedBehavior(PolymorphismTest_S_o5_method);
			// Activity o2_method
			PolymorphismTest_S_o2_method->setThisActivityPtr(PolymorphismTest_S_o2_method);
			PolymorphismTest_S_o2_method->setName("o2_method");
			PolymorphismTest_S_o2_method->setVisibility(VisibilityKind::public_);
			
				// Parameter a
				PolymorphismTest_S_o2_method_a->setThisElementPtr(PolymorphismTest_S_o2_method_a);
				PolymorphismTest_S_o2_method_a->setName("a");
				PolymorphismTest_S_o2_method_a->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_o2_method_a->setType(PolymorphismTest_A);
			PolymorphismTest_S_o2_method->addOwnedParameter(PolymorphismTest_S_o2_method_a);
				// Parameter b
				PolymorphismTest_S_o2_method_b->setThisElementPtr(PolymorphismTest_S_o2_method_b);
				PolymorphismTest_S_o2_method_b->setName("b");
				PolymorphismTest_S_o2_method_b->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_o2_method_b->setType(PolymorphismTest_B);
				PolymorphismTest_S_o2_method_b->setDirection(ParameterDirectionKind::return_);
			PolymorphismTest_S_o2_method->addOwnedParameter(PolymorphismTest_S_o2_method_b);
				// ActivityParameterNode a_node
				PolymorphismTest_S_o2_method_a_node->setThisElementPtr(PolymorphismTest_S_o2_method_a_node);
				PolymorphismTest_S_o2_method_a_node->setName("a_node");
				PolymorphismTest_S_o2_method_a_node->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_o2_method_a_node->setParameter(PolymorphismTest_S_o2_method_a);
			PolymorphismTest_S_o2_method->addNode(PolymorphismTest_S_o2_method_a_node);
				// ValueSpecificationAction Message
				PolymorphismTest_S_o2_method_Message->setThisExecutableNodePtr(PolymorphismTest_S_o2_method_Message);
				PolymorphismTest_S_o2_method_Message->setName("Message");
				PolymorphismTest_S_o2_method_Message->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString234
					PolymorphismTest_S_o2_method_Message_LiteralString234->setThisElementPtr(PolymorphismTest_S_o2_method_Message_LiteralString234);
					PolymorphismTest_S_o2_method_Message_LiteralString234->setName("LiteralString234");
					PolymorphismTest_S_o2_method_Message_LiteralString234->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o2_method_Message_LiteralString234->setValue("S::o2(a : A) : B");
				PolymorphismTest_S_o2_method_Message->setValue(PolymorphismTest_S_o2_method_Message_LiteralString234);
					// OutputPin result
					PolymorphismTest_S_o2_method_Message_result->setThisElementPtr(PolymorphismTest_S_o2_method_Message_result);
					PolymorphismTest_S_o2_method_Message_result->setName("result");
					PolymorphismTest_S_o2_method_Message_result->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o2_method_Message_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_S_o2_method_Message->setResult(PolymorphismTest_S_o2_method_Message_result);
			PolymorphismTest_S_o2_method->addNode(PolymorphismTest_S_o2_method_Message);
				// CallBehaviorAction Call WriteLine
				PolymorphismTest_S_o2_method_Call_WriteLine->setThisExecutableNodePtr(PolymorphismTest_S_o2_method_Call_WriteLine);
				PolymorphismTest_S_o2_method_Call_WriteLine->setName("Call WriteLine");
				PolymorphismTest_S_o2_method_Call_WriteLine->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus->setThisElementPtr(PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus);
					PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus->setName("errorStatus");
					PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus->setLower(0);
				PolymorphismTest_S_o2_method_Call_WriteLine->addResult(PolymorphismTest_S_o2_method_Call_WriteLine_errorStatus);
				PolymorphismTest_S_o2_method_Call_WriteLine->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					PolymorphismTest_S_o2_method_Call_WriteLine_value->setThisElementPtr(PolymorphismTest_S_o2_method_Call_WriteLine_value);
					PolymorphismTest_S_o2_method_Call_WriteLine_value->setName("value");
					PolymorphismTest_S_o2_method_Call_WriteLine_value->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o2_method_Call_WriteLine_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				PolymorphismTest_S_o2_method_Call_WriteLine->addArgument(PolymorphismTest_S_o2_method_Call_WriteLine_value);
			PolymorphismTest_S_o2_method->addNode(PolymorphismTest_S_o2_method_Call_WriteLine);
				// ActivityParameterNode b_node
				PolymorphismTest_S_o2_method_b_node->setThisElementPtr(PolymorphismTest_S_o2_method_b_node);
				PolymorphismTest_S_o2_method_b_node->setName("b_node");
				PolymorphismTest_S_o2_method_b_node->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_o2_method_b_node->setParameter(PolymorphismTest_S_o2_method_b);
			PolymorphismTest_S_o2_method->addNode(PolymorphismTest_S_o2_method_b_node);
				// ObjectFlow ObjectFlow244 from result to value
				PolymorphismTest_S_o2_method_ObjectFlow244->setThisActivityEdgePtr(PolymorphismTest_S_o2_method_ObjectFlow244);
				PolymorphismTest_S_o2_method_ObjectFlow244->setName("ObjectFlow244");
				PolymorphismTest_S_o2_method_ObjectFlow244->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_o2_method_ObjectFlow244->setSource(PolymorphismTest_S_o2_method_Message_result);
				PolymorphismTest_S_o2_method_ObjectFlow244->setTarget(PolymorphismTest_S_o2_method_Call_WriteLine_value);
					// LiteralBoolean LiteralBoolean246
					PolymorphismTest_S_o2_method_ObjectFlow244_LiteralBoolean246->setThisElementPtr(PolymorphismTest_S_o2_method_ObjectFlow244_LiteralBoolean246);
					PolymorphismTest_S_o2_method_ObjectFlow244_LiteralBoolean246->setName("LiteralBoolean246");
					PolymorphismTest_S_o2_method_ObjectFlow244_LiteralBoolean246->setVisibility(VisibilityKind::public_);
					PolymorphismTest_S_o2_method_ObjectFlow244_LiteralBoolean246->setValue(true);
				PolymorphismTest_S_o2_method_ObjectFlow244->setGuard(PolymorphismTest_S_o2_method_ObjectFlow244_LiteralBoolean246);
			PolymorphismTest_S_o2_method->addEdge(PolymorphismTest_S_o2_method_ObjectFlow244);
		PolymorphismTest_S->addOwnedBehavior(PolymorphismTest_S_o2_method);
		
			// Operation A_o1_B
			PolymorphismTest_S_A_o1_B->setThisOperationPtr(PolymorphismTest_S_A_o1_B);
			PolymorphismTest_S_A_o1_B->setName("o1");
			PolymorphismTest_S_A_o1_B->setVisibility(VisibilityKind::public_);
				// Parameter b
				PolymorphismTest_S_A_o1_B_b->setThisElementPtr(PolymorphismTest_S_A_o1_B_b);
				PolymorphismTest_S_A_o1_B_b->setName("b");
				PolymorphismTest_S_A_o1_B_b->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_A_o1_B_b->setType(PolymorphismTest_B);
			PolymorphismTest_S_A_o1_B->addOwnedParameter(PolymorphismTest_S_A_o1_B_b);
				// Parameter a
				PolymorphismTest_S_A_o1_B_a->setThisElementPtr(PolymorphismTest_S_A_o1_B_a);
				PolymorphismTest_S_A_o1_B_a->setName("a");
				PolymorphismTest_S_A_o1_B_a->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_A_o1_B_a->setType(PolymorphismTest_A);
				PolymorphismTest_S_A_o1_B_a->setDirection(ParameterDirectionKind::return_);
			PolymorphismTest_S_A_o1_B->addOwnedParameter(PolymorphismTest_S_A_o1_B_a);
			PolymorphismTest_S_A_o1_B->addMethod(PolymorphismTest_S_o1_method);
			PolymorphismTest_S_A_o1_B->addRedefinedOperation(PolymorphismTest_T_A_o1_B);
		PolymorphismTest_S->addOwnedOperation(PolymorphismTest_S_A_o1_B);
			// Operation B_o2_A
			PolymorphismTest_S_B_o2_A->setThisOperationPtr(PolymorphismTest_S_B_o2_A);
			PolymorphismTest_S_B_o2_A->setName("o2");
			PolymorphismTest_S_B_o2_A->setVisibility(VisibilityKind::public_);
				// Parameter a
				PolymorphismTest_S_B_o2_A_a->setThisElementPtr(PolymorphismTest_S_B_o2_A_a);
				PolymorphismTest_S_B_o2_A_a->setName("a");
				PolymorphismTest_S_B_o2_A_a->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_B_o2_A_a->setType(PolymorphismTest_A);
			PolymorphismTest_S_B_o2_A->addOwnedParameter(PolymorphismTest_S_B_o2_A_a);
				// Parameter b
				PolymorphismTest_S_B_o2_A_b->setThisElementPtr(PolymorphismTest_S_B_o2_A_b);
				PolymorphismTest_S_B_o2_A_b->setName("b");
				PolymorphismTest_S_B_o2_A_b->setVisibility(VisibilityKind::public_);
				
				PolymorphismTest_S_B_o2_A_b->setType(PolymorphismTest_B);
				PolymorphismTest_S_B_o2_A_b->setDirection(ParameterDirectionKind::return_);
			PolymorphismTest_S_B_o2_A->addOwnedParameter(PolymorphismTest_S_B_o2_A_b);
			PolymorphismTest_S_B_o2_A->addMethod(PolymorphismTest_S_o2_method);
			PolymorphismTest_S_B_o2_A->addRedefinedOperation(PolymorphismTest_T_B_o2_B);
		PolymorphismTest_S->addOwnedOperation(PolymorphismTest_S_B_o2_A);
			// Operation o3
			PolymorphismTest_S_o3->setThisOperationPtr(PolymorphismTest_S_o3);
			PolymorphismTest_S_o3->setName("o3");
			PolymorphismTest_S_o3->setVisibility(VisibilityKind::public_);
			PolymorphismTest_S_o3->addMethod(PolymorphismTest_S_o3_method);
			PolymorphismTest_S_o3->addRedefinedOperation(PolymorphismTest_T_o3_Integer);
		PolymorphismTest_S->addOwnedOperation(PolymorphismTest_S_o3);
			// Operation o5
			PolymorphismTest_S_o5->setThisOperationPtr(PolymorphismTest_S_o5);
			PolymorphismTest_S_o5->setName("o5");
			PolymorphismTest_S_o5->setVisibility(VisibilityKind::public_);
			PolymorphismTest_S_o5->addMethod(PolymorphismTest_S_o5_method);
			PolymorphismTest_S_o5->addRedefinedOperation(PolymorphismTest_T_o4);
		PolymorphismTest_S->addOwnedOperation(PolymorphismTest_S_o5);
	PolymorphismTest->addPackagedElement(PolymorphismTest_S);
}
