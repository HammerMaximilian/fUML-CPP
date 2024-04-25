/*
 * DefaultValue_StructuresModel.cpp
 * 
 * Auto-generated file
 */

#include "DefaultValue_StructuresModel.h"

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
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/classification/Parameter.h>
#include <uml/commonstructure/Comment.h>
#include <uml/activities/ActivityParameterNode.h>
#include <uml/classification/Operation.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/commonstructure/PackageImport.h>
#include <utils/standardprofile/StandardProfileModel.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <uml/activities/ControlFlow.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/values/OpaqueExpression.h>
#include <uml/packages/Package.h>
#include <uml/values/LiteralUnlimitedNatural.h>
#include <uml/actions/OutputPin.h>
#include <uml/structuredclassifiers/Class_.h>


/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace DefaultValue_Structures;
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

DefaultValue_StructuresModel::DefaultValue_StructuresModel()
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

DefaultValue_StructuresModel::~DefaultValue_StructuresModel()
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

const std::shared_ptr<DefaultValue_StructuresModel>& DefaultValue_StructuresModel::Instance()
{
	static std::shared_ptr<DefaultValue_StructuresModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new DefaultValue_StructuresModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void DefaultValue_StructuresModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model DefaultValue_Structures
	 */
	DefaultValue_Structures.reset(new Package());
	this->addToElementRepository("DefaultValue_Structures", DefaultValue_Structures);
		DefaultValue_Structures_instantiate_A.reset(new Activity());
		this->addToElementRepository("instantiate_A", DefaultValue_Structures_instantiate_A);
			DefaultValue_Structures_instantiate_A_Create_A.reset(new CreateObjectAction());
			this->addToElementRepository("Create_A", DefaultValue_Structures_instantiate_A_Create_A);
				DefaultValue_Structures_instantiate_A_Create_A_result.reset(new OutputPin());
				this->addToElementRepository("result", DefaultValue_Structures_instantiate_A_Create_A_result);
					DefaultValue_Structures_instantiate_A_Create_A_result_LiteralInteger0.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger0", DefaultValue_Structures_instantiate_A_Create_A_result_LiteralInteger0);
					DefaultValue_Structures_instantiate_A_Create_A_result_LiteralUnlimitedNatural1.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural1", DefaultValue_Structures_instantiate_A_Create_A_result_LiteralUnlimitedNatural1);
			DefaultValue_Structures_instantiate_A_a_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_node", DefaultValue_Structures_instantiate_A_a_node);
				DefaultValue_Structures_instantiate_A_a_node_LiteralInteger2.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger2", DefaultValue_Structures_instantiate_A_a_node_LiteralInteger2);
			DefaultValue_Structures_instantiate_A_ObjectFlow3.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow3", DefaultValue_Structures_instantiate_A_ObjectFlow3);
				DefaultValue_Structures_instantiate_A_ObjectFlow3_LiteralBoolean4.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean4", DefaultValue_Structures_instantiate_A_ObjectFlow3_LiteralBoolean4);
				DefaultValue_Structures_instantiate_A_ObjectFlow3_LiteralInteger5.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger5", DefaultValue_Structures_instantiate_A_ObjectFlow3_LiteralInteger5);
			DefaultValue_Structures_instantiate_A_A_.reset(new CallOperationAction());
			this->addToElementRepository("A()", DefaultValue_Structures_instantiate_A_A_);
				DefaultValue_Structures_instantiate_A_A__target.reset(new InputPin());
				this->addToElementRepository("target", DefaultValue_Structures_instantiate_A_A__target);
					DefaultValue_Structures_instantiate_A_A__target_LiteralUnlimitedNatural6.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural6", DefaultValue_Structures_instantiate_A_A__target_LiteralUnlimitedNatural6);
					DefaultValue_Structures_instantiate_A_A__target_LiteralInteger7.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger7", DefaultValue_Structures_instantiate_A_A__target_LiteralInteger7);
				DefaultValue_Structures_instantiate_A_A__result.reset(new OutputPin());
				this->addToElementRepository("result", DefaultValue_Structures_instantiate_A_A__result);
					DefaultValue_Structures_instantiate_A_A__result_LiteralInteger8.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger8", DefaultValue_Structures_instantiate_A_A__result_LiteralInteger8);
					DefaultValue_Structures_instantiate_A_A__result_LiteralUnlimitedNatural9.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural9", DefaultValue_Structures_instantiate_A_A__result_LiteralUnlimitedNatural9);
					DefaultValue_Structures_instantiate_A_A__result_LiteralInteger10.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger10", DefaultValue_Structures_instantiate_A_A__result_LiteralInteger10);
			DefaultValue_Structures_instantiate_A_ObjectFlow11.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow11", DefaultValue_Structures_instantiate_A_ObjectFlow11);
				DefaultValue_Structures_instantiate_A_ObjectFlow11_LiteralInteger12.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger12", DefaultValue_Structures_instantiate_A_ObjectFlow11_LiteralInteger12);
				DefaultValue_Structures_instantiate_A_ObjectFlow11_LiteralBoolean13.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean13", DefaultValue_Structures_instantiate_A_ObjectFlow11_LiteralBoolean13);
			DefaultValue_Structures_instantiate_A_a.reset(new Parameter());
			this->addToElementRepository("a", DefaultValue_Structures_instantiate_A_a);
		DefaultValue_Structures_assert_A.reset(new Activity());
		this->addToElementRepository("assert_A", DefaultValue_Structures_assert_A);
			DefaultValue_Structures_assert_A_a.reset(new Parameter());
			this->addToElementRepository("a", DefaultValue_Structures_assert_A_a);
			DefaultValue_Structures_assert_A_Read_a_b.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.b", DefaultValue_Structures_assert_A_Read_a_b);
				DefaultValue_Structures_assert_A_Read_a_b_object.reset(new InputPin());
				this->addToElementRepository("object", DefaultValue_Structures_assert_A_Read_a_b_object);
					DefaultValue_Structures_assert_A_Read_a_b_object_LiteralUnlimitedNatural14.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural14", DefaultValue_Structures_assert_A_Read_a_b_object_LiteralUnlimitedNatural14);
					DefaultValue_Structures_assert_A_Read_a_b_object_LiteralInteger15.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger15", DefaultValue_Structures_assert_A_Read_a_b_object_LiteralInteger15);
				DefaultValue_Structures_assert_A_Read_a_b_result.reset(new OutputPin());
				this->addToElementRepository("result", DefaultValue_Structures_assert_A_Read_a_b_result);
					DefaultValue_Structures_assert_A_Read_a_b_result_LiteralUnlimitedNatural16.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural16", DefaultValue_Structures_assert_A_Read_a_b_result_LiteralUnlimitedNatural16);
					DefaultValue_Structures_assert_A_Read_a_b_result_LiteralInteger17.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger17", DefaultValue_Structures_assert_A_Read_a_b_result_LiteralInteger17);
			DefaultValue_Structures_assert_A_testDefaultValues.reset(new OpaqueBehavior());
			this->addToElementRepository("testDefaultValues", DefaultValue_Structures_assert_A_testDefaultValues);
				DefaultValue_Structures_assert_A_testDefaultValues_pList.reset(new Parameter());
				this->addToElementRepository("pList", DefaultValue_Structures_assert_A_testDefaultValues_pList);
					DefaultValue_Structures_assert_A_testDefaultValues_pList_LiteralInteger18.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger18", DefaultValue_Structures_assert_A_testDefaultValues_pList_LiteralInteger18);
					DefaultValue_Structures_assert_A_testDefaultValues_pList_LiteralUnlimitedNatural19.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural19", DefaultValue_Structures_assert_A_testDefaultValues_pList_LiteralUnlimitedNatural19);
			DefaultValue_Structures_assert_A_ObjectFlow20.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow20", DefaultValue_Structures_assert_A_ObjectFlow20);
				DefaultValue_Structures_assert_A_ObjectFlow20_LiteralInteger21.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger21", DefaultValue_Structures_assert_A_ObjectFlow20_LiteralInteger21);
				DefaultValue_Structures_assert_A_ObjectFlow20_LiteralBoolean22.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean22", DefaultValue_Structures_assert_A_ObjectFlow20_LiteralBoolean22);
			DefaultValue_Structures_assert_A_ObjectFlow23.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow23", DefaultValue_Structures_assert_A_ObjectFlow23);
				DefaultValue_Structures_assert_A_ObjectFlow23_LiteralBoolean24.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean24", DefaultValue_Structures_assert_A_ObjectFlow23_LiteralBoolean24);
				DefaultValue_Structures_assert_A_ObjectFlow23_LiteralInteger25.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger25", DefaultValue_Structures_assert_A_ObjectFlow23_LiteralInteger25);
			DefaultValue_Structures_assert_A_Test_Default_Values.reset(new CallBehaviorAction());
			this->addToElementRepository("Test Default Values", DefaultValue_Structures_assert_A_Test_Default_Values);
				DefaultValue_Structures_assert_A_Test_Default_Values_pList.reset(new InputPin());
				this->addToElementRepository("pList", DefaultValue_Structures_assert_A_Test_Default_Values_pList);
					DefaultValue_Structures_assert_A_Test_Default_Values_pList_LiteralInteger26.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger26", DefaultValue_Structures_assert_A_Test_Default_Values_pList_LiteralInteger26);
					DefaultValue_Structures_assert_A_Test_Default_Values_pList_LiteralInteger27.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger27", DefaultValue_Structures_assert_A_Test_Default_Values_pList_LiteralInteger27);
					DefaultValue_Structures_assert_A_Test_Default_Values_pList_LiteralUnlimitedNatural28.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural28", DefaultValue_Structures_assert_A_Test_Default_Values_pList_LiteralUnlimitedNatural28);
			DefaultValue_Structures_assert_A_ObjectFlow29.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow29", DefaultValue_Structures_assert_A_ObjectFlow29);
				DefaultValue_Structures_assert_A_ObjectFlow29_LiteralBoolean30.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean30", DefaultValue_Structures_assert_A_ObjectFlow29_LiteralBoolean30);
				DefaultValue_Structures_assert_A_ObjectFlow29_LiteralInteger31.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger31", DefaultValue_Structures_assert_A_ObjectFlow29_LiteralInteger31);
			DefaultValue_Structures_assert_A_Read_b_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read b.p", DefaultValue_Structures_assert_A_Read_b_p);
				DefaultValue_Structures_assert_A_Read_b_p_result.reset(new OutputPin());
				this->addToElementRepository("result", DefaultValue_Structures_assert_A_Read_b_p_result);
					DefaultValue_Structures_assert_A_Read_b_p_result_LiteralUnlimitedNatural32.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural32", DefaultValue_Structures_assert_A_Read_b_p_result_LiteralUnlimitedNatural32);
					DefaultValue_Structures_assert_A_Read_b_p_result_LiteralInteger33.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger33", DefaultValue_Structures_assert_A_Read_b_p_result_LiteralInteger33);
				DefaultValue_Structures_assert_A_Read_b_p_object.reset(new InputPin());
				this->addToElementRepository("object", DefaultValue_Structures_assert_A_Read_b_p_object);
					DefaultValue_Structures_assert_A_Read_b_p_object_LiteralUnlimitedNatural34.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural34", DefaultValue_Structures_assert_A_Read_b_p_object_LiteralUnlimitedNatural34);
					DefaultValue_Structures_assert_A_Read_b_p_object_LiteralInteger35.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger35", DefaultValue_Structures_assert_A_Read_b_p_object_LiteralInteger35);
			DefaultValue_Structures_assert_A_a_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_node", DefaultValue_Structures_assert_A_a_node);
				DefaultValue_Structures_assert_A_a_node_LiteralInteger36.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger36", DefaultValue_Structures_assert_A_a_node_LiteralInteger36);
		DefaultValue_Structures_A.reset(new Class_());
		this->addToElementRepository("A", DefaultValue_Structures_A);
			DefaultValue_Structures_A_b.reset(new Property());
			this->addToElementRepository("b", DefaultValue_Structures_A_b);
				DefaultValue_Structures_A_b_LiteralInteger37.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger37", DefaultValue_Structures_A_b_LiteralInteger37);
				DefaultValue_Structures_A_b_LiteralUnlimitedNatural38.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural38", DefaultValue_Structures_A_b_LiteralUnlimitedNatural38);
				DefaultValue_Structures_A_b_OpaqueExpression39.reset(new OpaqueExpression());
				this->addToElementRepository("OpaqueExpression39", DefaultValue_Structures_A_b_OpaqueExpression39);
			DefaultValue_Structures_A_bDefaultValues.reset(new Activity());
			this->addToElementRepository("bDefaultValues", DefaultValue_Structures_A_bDefaultValues);
				DefaultValue_Structures_A_bDefaultValues_bList.reset(new Parameter());
				this->addToElementRepository("bList", DefaultValue_Structures_A_bDefaultValues_bList);
					DefaultValue_Structures_A_bDefaultValues_bList_LiteralInteger40.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger40", DefaultValue_Structures_A_bDefaultValues_bList_LiteralInteger40);
					DefaultValue_Structures_A_bDefaultValues_bList_LiteralUnlimitedNatural41.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural41", DefaultValue_Structures_A_bDefaultValues_bList_LiteralUnlimitedNatural41);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow42.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow42", DefaultValue_Structures_A_bDefaultValues_ObjectFlow42);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow42_LiteralBoolean43.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean43", DefaultValue_Structures_A_bDefaultValues_ObjectFlow42_LiteralBoolean43);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow42_LiteralInteger44.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger44", DefaultValue_Structures_A_bDefaultValues_ObjectFlow42_LiteralInteger44);
				DefaultValue_Structures_A_bDefaultValues_Integer_4.reset(new ValueSpecificationAction());
				this->addToElementRepository("Integer(4)", DefaultValue_Structures_A_bDefaultValues_Integer_4);
					DefaultValue_Structures_A_bDefaultValues_Integer_4_LiteralInteger45.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger45", DefaultValue_Structures_A_bDefaultValues_Integer_4_LiteralInteger45);
					DefaultValue_Structures_A_bDefaultValues_Integer_4_result.reset(new OutputPin());
					this->addToElementRepository("result", DefaultValue_Structures_A_bDefaultValues_Integer_4_result);
						DefaultValue_Structures_A_bDefaultValues_Integer_4_result_LiteralUnlimitedNatural46.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural46", DefaultValue_Structures_A_bDefaultValues_Integer_4_result_LiteralUnlimitedNatural46);
						DefaultValue_Structures_A_bDefaultValues_Integer_4_result_LiteralInteger47.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger47", DefaultValue_Structures_A_bDefaultValues_Integer_4_result_LiteralInteger47);
				DefaultValue_Structures_A_bDefaultValues_B_2_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("B_2.p", DefaultValue_Structures_A_bDefaultValues_B_2_p);
					DefaultValue_Structures_A_bDefaultValues_B_2_p_object.reset(new InputPin());
					this->addToElementRepository("object", DefaultValue_Structures_A_bDefaultValues_B_2_p_object);
						DefaultValue_Structures_A_bDefaultValues_B_2_p_object_LiteralUnlimitedNatural48.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural48", DefaultValue_Structures_A_bDefaultValues_B_2_p_object_LiteralUnlimitedNatural48);
						DefaultValue_Structures_A_bDefaultValues_B_2_p_object_LiteralInteger49.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger49", DefaultValue_Structures_A_bDefaultValues_B_2_p_object_LiteralInteger49);
					DefaultValue_Structures_A_bDefaultValues_B_2_p_result.reset(new OutputPin());
					this->addToElementRepository("result", DefaultValue_Structures_A_bDefaultValues_B_2_p_result);
						DefaultValue_Structures_A_bDefaultValues_B_2_p_result_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural50", DefaultValue_Structures_A_bDefaultValues_B_2_p_result_LiteralUnlimitedNatural50);
						DefaultValue_Structures_A_bDefaultValues_B_2_p_result_LiteralInteger51.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger51", DefaultValue_Structures_A_bDefaultValues_B_2_p_result_LiteralInteger51);
					DefaultValue_Structures_A_bDefaultValues_B_2_p_value.reset(new InputPin());
					this->addToElementRepository("value", DefaultValue_Structures_A_bDefaultValues_B_2_p_value);
						DefaultValue_Structures_A_bDefaultValues_B_2_p_value_LiteralUnlimitedNatural52.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural52", DefaultValue_Structures_A_bDefaultValues_B_2_p_value_LiteralUnlimitedNatural52);
						DefaultValue_Structures_A_bDefaultValues_B_2_p_value_LiteralInteger53.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger53", DefaultValue_Structures_A_bDefaultValues_B_2_p_value_LiteralInteger53);
				DefaultValue_Structures_A_bDefaultValues_Create_B_1.reset(new CreateObjectAction());
				this->addToElementRepository("Create B_1", DefaultValue_Structures_A_bDefaultValues_Create_B_1);
					DefaultValue_Structures_A_bDefaultValues_Create_B_1_result.reset(new OutputPin());
					this->addToElementRepository("result", DefaultValue_Structures_A_bDefaultValues_Create_B_1_result);
						DefaultValue_Structures_A_bDefaultValues_Create_B_1_result_LiteralInteger54.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger54", DefaultValue_Structures_A_bDefaultValues_Create_B_1_result_LiteralInteger54);
						DefaultValue_Structures_A_bDefaultValues_Create_B_1_result_LiteralUnlimitedNatural55.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural55", DefaultValue_Structures_A_bDefaultValues_Create_B_1_result_LiteralUnlimitedNatural55);
				DefaultValue_Structures_A_bDefaultValues_ControlFlow56.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow56", DefaultValue_Structures_A_bDefaultValues_ControlFlow56);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow57.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow57", DefaultValue_Structures_A_bDefaultValues_ObjectFlow57);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow57_LiteralBoolean58.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean58", DefaultValue_Structures_A_bDefaultValues_ObjectFlow57_LiteralBoolean58);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow57_LiteralInteger59.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger59", DefaultValue_Structures_A_bDefaultValues_ObjectFlow57_LiteralInteger59);
				DefaultValue_Structures_A_bDefaultValues_bList_node.reset(new ActivityParameterNode());
				this->addToElementRepository("bList_node", DefaultValue_Structures_A_bDefaultValues_bList_node);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow60.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow60", DefaultValue_Structures_A_bDefaultValues_ObjectFlow60);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow60_LiteralBoolean61.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean61", DefaultValue_Structures_A_bDefaultValues_ObjectFlow60_LiteralBoolean61);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow60_LiteralInteger62.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger62", DefaultValue_Structures_A_bDefaultValues_ObjectFlow60_LiteralInteger62);
				DefaultValue_Structures_A_bDefaultValues_Create_B_2.reset(new CreateObjectAction());
				this->addToElementRepository("Create B_2", DefaultValue_Structures_A_bDefaultValues_Create_B_2);
					DefaultValue_Structures_A_bDefaultValues_Create_B_2_result.reset(new OutputPin());
					this->addToElementRepository("result", DefaultValue_Structures_A_bDefaultValues_Create_B_2_result);
						DefaultValue_Structures_A_bDefaultValues_Create_B_2_result_LiteralUnlimitedNatural63.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural63", DefaultValue_Structures_A_bDefaultValues_Create_B_2_result_LiteralUnlimitedNatural63);
						DefaultValue_Structures_A_bDefaultValues_Create_B_2_result_LiteralInteger64.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger64", DefaultValue_Structures_A_bDefaultValues_Create_B_2_result_LiteralInteger64);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow65.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow65", DefaultValue_Structures_A_bDefaultValues_ObjectFlow65);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow65_LiteralBoolean66.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean66", DefaultValue_Structures_A_bDefaultValues_ObjectFlow65_LiteralBoolean66);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow65_LiteralInteger67.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger67", DefaultValue_Structures_A_bDefaultValues_ObjectFlow65_LiteralInteger67);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow68.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow68", DefaultValue_Structures_A_bDefaultValues_ObjectFlow68);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow68_LiteralInteger69.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger69", DefaultValue_Structures_A_bDefaultValues_ObjectFlow68_LiteralInteger69);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow68_LiteralBoolean70.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean70", DefaultValue_Structures_A_bDefaultValues_ObjectFlow68_LiteralBoolean70);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow71.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow71", DefaultValue_Structures_A_bDefaultValues_ObjectFlow71);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow71_LiteralInteger72.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger72", DefaultValue_Structures_A_bDefaultValues_ObjectFlow71_LiteralInteger72);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow71_LiteralBoolean73.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean73", DefaultValue_Structures_A_bDefaultValues_ObjectFlow71_LiteralBoolean73);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow74.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow74", DefaultValue_Structures_A_bDefaultValues_ObjectFlow74);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow74_LiteralBoolean75.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean75", DefaultValue_Structures_A_bDefaultValues_ObjectFlow74_LiteralBoolean75);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow74_LiteralInteger76.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger76", DefaultValue_Structures_A_bDefaultValues_ObjectFlow74_LiteralInteger76);
				DefaultValue_Structures_A_bDefaultValues_ControlFlow77.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow77", DefaultValue_Structures_A_bDefaultValues_ControlFlow77);
				DefaultValue_Structures_A_bDefaultValues_B_4_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("B_4.p", DefaultValue_Structures_A_bDefaultValues_B_4_p);
					DefaultValue_Structures_A_bDefaultValues_B_4_p_value.reset(new InputPin());
					this->addToElementRepository("value", DefaultValue_Structures_A_bDefaultValues_B_4_p_value);
						DefaultValue_Structures_A_bDefaultValues_B_4_p_value_LiteralUnlimitedNatural78.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural78", DefaultValue_Structures_A_bDefaultValues_B_4_p_value_LiteralUnlimitedNatural78);
						DefaultValue_Structures_A_bDefaultValues_B_4_p_value_LiteralInteger79.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger79", DefaultValue_Structures_A_bDefaultValues_B_4_p_value_LiteralInteger79);
					DefaultValue_Structures_A_bDefaultValues_B_4_p_object.reset(new InputPin());
					this->addToElementRepository("object", DefaultValue_Structures_A_bDefaultValues_B_4_p_object);
						DefaultValue_Structures_A_bDefaultValues_B_4_p_object_LiteralInteger80.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger80", DefaultValue_Structures_A_bDefaultValues_B_4_p_object_LiteralInteger80);
						DefaultValue_Structures_A_bDefaultValues_B_4_p_object_LiteralUnlimitedNatural81.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural81", DefaultValue_Structures_A_bDefaultValues_B_4_p_object_LiteralUnlimitedNatural81);
					DefaultValue_Structures_A_bDefaultValues_B_4_p_result.reset(new OutputPin());
					this->addToElementRepository("result", DefaultValue_Structures_A_bDefaultValues_B_4_p_result);
						DefaultValue_Structures_A_bDefaultValues_B_4_p_result_LiteralUnlimitedNatural82.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural82", DefaultValue_Structures_A_bDefaultValues_B_4_p_result_LiteralUnlimitedNatural82);
						DefaultValue_Structures_A_bDefaultValues_B_4_p_result_LiteralInteger83.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger83", DefaultValue_Structures_A_bDefaultValues_B_4_p_result_LiteralInteger83);
				DefaultValue_Structures_A_bDefaultValues_Integer_2.reset(new ValueSpecificationAction());
				this->addToElementRepository("Integer(2)", DefaultValue_Structures_A_bDefaultValues_Integer_2);
					DefaultValue_Structures_A_bDefaultValues_Integer_2_LiteralInteger84.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger84", DefaultValue_Structures_A_bDefaultValues_Integer_2_LiteralInteger84);
					DefaultValue_Structures_A_bDefaultValues_Integer_2_result.reset(new OutputPin());
					this->addToElementRepository("result", DefaultValue_Structures_A_bDefaultValues_Integer_2_result);
						DefaultValue_Structures_A_bDefaultValues_Integer_2_result_LiteralUnlimitedNatural85.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural85", DefaultValue_Structures_A_bDefaultValues_Integer_2_result_LiteralUnlimitedNatural85);
						DefaultValue_Structures_A_bDefaultValues_Integer_2_result_LiteralInteger86.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger86", DefaultValue_Structures_A_bDefaultValues_Integer_2_result_LiteralInteger86);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow87.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow87", DefaultValue_Structures_A_bDefaultValues_ObjectFlow87);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow87_LiteralInteger88.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger88", DefaultValue_Structures_A_bDefaultValues_ObjectFlow87_LiteralInteger88);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow87_LiteralBoolean89.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean89", DefaultValue_Structures_A_bDefaultValues_ObjectFlow87_LiteralBoolean89);
				DefaultValue_Structures_A_bDefaultValues_B_1_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("B_1.p", DefaultValue_Structures_A_bDefaultValues_B_1_p);
					DefaultValue_Structures_A_bDefaultValues_B_1_p_object.reset(new InputPin());
					this->addToElementRepository("object", DefaultValue_Structures_A_bDefaultValues_B_1_p_object);
						DefaultValue_Structures_A_bDefaultValues_B_1_p_object_LiteralUnlimitedNatural90.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural90", DefaultValue_Structures_A_bDefaultValues_B_1_p_object_LiteralUnlimitedNatural90);
						DefaultValue_Structures_A_bDefaultValues_B_1_p_object_LiteralInteger91.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger91", DefaultValue_Structures_A_bDefaultValues_B_1_p_object_LiteralInteger91);
					DefaultValue_Structures_A_bDefaultValues_B_1_p_result.reset(new OutputPin());
					this->addToElementRepository("result", DefaultValue_Structures_A_bDefaultValues_B_1_p_result);
						DefaultValue_Structures_A_bDefaultValues_B_1_p_result_LiteralInteger92.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger92", DefaultValue_Structures_A_bDefaultValues_B_1_p_result_LiteralInteger92);
						DefaultValue_Structures_A_bDefaultValues_B_1_p_result_LiteralUnlimitedNatural93.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural93", DefaultValue_Structures_A_bDefaultValues_B_1_p_result_LiteralUnlimitedNatural93);
					DefaultValue_Structures_A_bDefaultValues_B_1_p_value.reset(new InputPin());
					this->addToElementRepository("value", DefaultValue_Structures_A_bDefaultValues_B_1_p_value);
						DefaultValue_Structures_A_bDefaultValues_B_1_p_value_LiteralUnlimitedNatural94.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural94", DefaultValue_Structures_A_bDefaultValues_B_1_p_value_LiteralUnlimitedNatural94);
						DefaultValue_Structures_A_bDefaultValues_B_1_p_value_LiteralInteger95.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger95", DefaultValue_Structures_A_bDefaultValues_B_1_p_value_LiteralInteger95);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow96.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow96", DefaultValue_Structures_A_bDefaultValues_ObjectFlow96);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow96_LiteralBoolean97.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean97", DefaultValue_Structures_A_bDefaultValues_ObjectFlow96_LiteralBoolean97);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow96_LiteralInteger98.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger98", DefaultValue_Structures_A_bDefaultValues_ObjectFlow96_LiteralInteger98);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow99.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow99", DefaultValue_Structures_A_bDefaultValues_ObjectFlow99);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow99_LiteralBoolean100.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean100", DefaultValue_Structures_A_bDefaultValues_ObjectFlow99_LiteralBoolean100);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow99_LiteralInteger101.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger101", DefaultValue_Structures_A_bDefaultValues_ObjectFlow99_LiteralInteger101);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow102.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow102", DefaultValue_Structures_A_bDefaultValues_ObjectFlow102);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow102_LiteralInteger103.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger103", DefaultValue_Structures_A_bDefaultValues_ObjectFlow102_LiteralInteger103);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow102_LiteralBoolean104.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean104", DefaultValue_Structures_A_bDefaultValues_ObjectFlow102_LiteralBoolean104);
				DefaultValue_Structures_A_bDefaultValues_ControlFlow105.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow105", DefaultValue_Structures_A_bDefaultValues_ControlFlow105);
				DefaultValue_Structures_A_bDefaultValues_B_3_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("B_3.p", DefaultValue_Structures_A_bDefaultValues_B_3_p);
					DefaultValue_Structures_A_bDefaultValues_B_3_p_result.reset(new OutputPin());
					this->addToElementRepository("result", DefaultValue_Structures_A_bDefaultValues_B_3_p_result);
						DefaultValue_Structures_A_bDefaultValues_B_3_p_result_LiteralUnlimitedNatural106.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural106", DefaultValue_Structures_A_bDefaultValues_B_3_p_result_LiteralUnlimitedNatural106);
						DefaultValue_Structures_A_bDefaultValues_B_3_p_result_LiteralInteger107.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger107", DefaultValue_Structures_A_bDefaultValues_B_3_p_result_LiteralInteger107);
					DefaultValue_Structures_A_bDefaultValues_B_3_p_value.reset(new InputPin());
					this->addToElementRepository("value", DefaultValue_Structures_A_bDefaultValues_B_3_p_value);
						DefaultValue_Structures_A_bDefaultValues_B_3_p_value_LiteralInteger108.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger108", DefaultValue_Structures_A_bDefaultValues_B_3_p_value_LiteralInteger108);
						DefaultValue_Structures_A_bDefaultValues_B_3_p_value_LiteralUnlimitedNatural109.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural109", DefaultValue_Structures_A_bDefaultValues_B_3_p_value_LiteralUnlimitedNatural109);
					DefaultValue_Structures_A_bDefaultValues_B_3_p_object.reset(new InputPin());
					this->addToElementRepository("object", DefaultValue_Structures_A_bDefaultValues_B_3_p_object);
						DefaultValue_Structures_A_bDefaultValues_B_3_p_object_LiteralInteger110.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger110", DefaultValue_Structures_A_bDefaultValues_B_3_p_object_LiteralInteger110);
						DefaultValue_Structures_A_bDefaultValues_B_3_p_object_LiteralUnlimitedNatural111.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural111", DefaultValue_Structures_A_bDefaultValues_B_3_p_object_LiteralUnlimitedNatural111);
				DefaultValue_Structures_A_bDefaultValues_Create_B_3.reset(new CreateObjectAction());
				this->addToElementRepository("Create B_3", DefaultValue_Structures_A_bDefaultValues_Create_B_3);
					DefaultValue_Structures_A_bDefaultValues_Create_B_3_result.reset(new OutputPin());
					this->addToElementRepository("result", DefaultValue_Structures_A_bDefaultValues_Create_B_3_result);
						DefaultValue_Structures_A_bDefaultValues_Create_B_3_result_LiteralInteger112.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger112", DefaultValue_Structures_A_bDefaultValues_Create_B_3_result_LiteralInteger112);
						DefaultValue_Structures_A_bDefaultValues_Create_B_3_result_LiteralUnlimitedNatural113.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural113", DefaultValue_Structures_A_bDefaultValues_Create_B_3_result_LiteralUnlimitedNatural113);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow114.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow114", DefaultValue_Structures_A_bDefaultValues_ObjectFlow114);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow114_LiteralBoolean115.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean115", DefaultValue_Structures_A_bDefaultValues_ObjectFlow114_LiteralBoolean115);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow114_LiteralInteger116.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger116", DefaultValue_Structures_A_bDefaultValues_ObjectFlow114_LiteralInteger116);
				DefaultValue_Structures_A_bDefaultValues_Create_B_4.reset(new CreateObjectAction());
				this->addToElementRepository("Create B_4", DefaultValue_Structures_A_bDefaultValues_Create_B_4);
					DefaultValue_Structures_A_bDefaultValues_Create_B_4_result.reset(new OutputPin());
					this->addToElementRepository("result", DefaultValue_Structures_A_bDefaultValues_Create_B_4_result);
						DefaultValue_Structures_A_bDefaultValues_Create_B_4_result_LiteralUnlimitedNatural117.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural117", DefaultValue_Structures_A_bDefaultValues_Create_B_4_result_LiteralUnlimitedNatural117);
						DefaultValue_Structures_A_bDefaultValues_Create_B_4_result_LiteralInteger118.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger118", DefaultValue_Structures_A_bDefaultValues_Create_B_4_result_LiteralInteger118);
				DefaultValue_Structures_A_bDefaultValues_Integer_3.reset(new ValueSpecificationAction());
				this->addToElementRepository("Integer(3)", DefaultValue_Structures_A_bDefaultValues_Integer_3);
					DefaultValue_Structures_A_bDefaultValues_Integer_3_result.reset(new OutputPin());
					this->addToElementRepository("result", DefaultValue_Structures_A_bDefaultValues_Integer_3_result);
						DefaultValue_Structures_A_bDefaultValues_Integer_3_result_LiteralUnlimitedNatural119.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural119", DefaultValue_Structures_A_bDefaultValues_Integer_3_result_LiteralUnlimitedNatural119);
						DefaultValue_Structures_A_bDefaultValues_Integer_3_result_LiteralInteger120.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger120", DefaultValue_Structures_A_bDefaultValues_Integer_3_result_LiteralInteger120);
					DefaultValue_Structures_A_bDefaultValues_Integer_3_LiteralInteger121.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger121", DefaultValue_Structures_A_bDefaultValues_Integer_3_LiteralInteger121);
				DefaultValue_Structures_A_bDefaultValues_Integer_1.reset(new ValueSpecificationAction());
				this->addToElementRepository("Integer(1)", DefaultValue_Structures_A_bDefaultValues_Integer_1);
					DefaultValue_Structures_A_bDefaultValues_Integer_1_result.reset(new OutputPin());
					this->addToElementRepository("result", DefaultValue_Structures_A_bDefaultValues_Integer_1_result);
						DefaultValue_Structures_A_bDefaultValues_Integer_1_result_LiteralUnlimitedNatural122.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural122", DefaultValue_Structures_A_bDefaultValues_Integer_1_result_LiteralUnlimitedNatural122);
						DefaultValue_Structures_A_bDefaultValues_Integer_1_result_LiteralInteger123.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger123", DefaultValue_Structures_A_bDefaultValues_Integer_1_result_LiteralInteger123);
					DefaultValue_Structures_A_bDefaultValues_Integer_1_LiteralInteger124.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger124", DefaultValue_Structures_A_bDefaultValues_Integer_1_LiteralInteger124);
			DefaultValue_Structures_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", DefaultValue_Structures_A_A_A);
				DefaultValue_Structures_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", DefaultValue_Structures_A_A_A_result);
		DefaultValue_Structures_B.reset(new Class_());
		this->addToElementRepository("B", DefaultValue_Structures_B);
			DefaultValue_Structures_B_p.reset(new Property());
			this->addToElementRepository("p", DefaultValue_Structures_B_p);
			DefaultValue_Structures_B_B_B.reset(new Operation());
			this->addToElementRepository("B_B", DefaultValue_Structures_B_B_B);
				DefaultValue_Structures_B_B_B_result.reset(new Parameter());
				this->addToElementRepository("result", DefaultValue_Structures_B_B_B_result);
		DefaultValue_Structures_main.reset(new Activity());
		this->addToElementRepository("main", DefaultValue_Structures_main);
			DefaultValue_Structures_main_instantiate_A.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A", DefaultValue_Structures_main_instantiate_A);
				DefaultValue_Structures_main_instantiate_A_a.reset(new OutputPin());
				this->addToElementRepository("a", DefaultValue_Structures_main_instantiate_A_a);
					DefaultValue_Structures_main_instantiate_A_a_LiteralUnlimitedNatural125.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural125", DefaultValue_Structures_main_instantiate_A_a_LiteralUnlimitedNatural125);
					DefaultValue_Structures_main_instantiate_A_a_LiteralInteger126.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger126", DefaultValue_Structures_main_instantiate_A_a_LiteralInteger126);
					DefaultValue_Structures_main_instantiate_A_a_LiteralInteger127.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger127", DefaultValue_Structures_main_instantiate_A_a_LiteralInteger127);
			DefaultValue_Structures_main_assert_A.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A", DefaultValue_Structures_main_assert_A);
				DefaultValue_Structures_main_assert_A_a.reset(new InputPin());
				this->addToElementRepository("a", DefaultValue_Structures_main_assert_A_a);
					DefaultValue_Structures_main_assert_A_a_LiteralUnlimitedNatural128.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural128", DefaultValue_Structures_main_assert_A_a_LiteralUnlimitedNatural128);
					DefaultValue_Structures_main_assert_A_a_LiteralInteger129.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger129", DefaultValue_Structures_main_assert_A_a_LiteralInteger129);
					DefaultValue_Structures_main_assert_A_a_LiteralInteger130.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger130", DefaultValue_Structures_main_assert_A_a_LiteralInteger130);
			DefaultValue_Structures_main_ObjectFlow131.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow131", DefaultValue_Structures_main_ObjectFlow131);
				DefaultValue_Structures_main_ObjectFlow131_LiteralInteger132.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger132", DefaultValue_Structures_main_ObjectFlow131_LiteralInteger132);
				DefaultValue_Structures_main_ObjectFlow131_LiteralBoolean133.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean133", DefaultValue_Structures_main_ObjectFlow131_LiteralBoolean133);

	// Initialize public members
	/*
	 * Model DefaultValue_Structures
	 */
	DefaultValue_Structures->setThisPackagePtr(DefaultValue_Structures);
	DefaultValue_Structures->setName("DefaultValue_Structures");
	DefaultValue_Structures->setVisibility(VisibilityKind::public_);
		// Activity instantiate_A
		DefaultValue_Structures_instantiate_A->setThisActivityPtr(DefaultValue_Structures_instantiate_A);
		DefaultValue_Structures_instantiate_A->setName("instantiate_A");
		DefaultValue_Structures_instantiate_A->setVisibility(VisibilityKind::public_);
		
			// Parameter a
			DefaultValue_Structures_instantiate_A_a->setThisElementPtr(DefaultValue_Structures_instantiate_A_a);
			DefaultValue_Structures_instantiate_A_a->setName("a");
			DefaultValue_Structures_instantiate_A_a->setVisibility(VisibilityKind::public_);
			
			DefaultValue_Structures_instantiate_A_a->setType(DefaultValue_Structures_A);
			DefaultValue_Structures_instantiate_A_a->setDirection(ParameterDirectionKind::return_);
		DefaultValue_Structures_instantiate_A->addOwnedParameter(DefaultValue_Structures_instantiate_A_a);
			// CreateObjectAction Create_A
			DefaultValue_Structures_instantiate_A_Create_A->setThisExecutableNodePtr(DefaultValue_Structures_instantiate_A_Create_A);
			DefaultValue_Structures_instantiate_A_Create_A->setName("Create_A");
			DefaultValue_Structures_instantiate_A_Create_A->setVisibility(VisibilityKind::public_);
			DefaultValue_Structures_instantiate_A_Create_A->setClassifier(DefaultValue_Structures_A);
				// OutputPin result
				DefaultValue_Structures_instantiate_A_Create_A_result->setThisElementPtr(DefaultValue_Structures_instantiate_A_Create_A_result);
				DefaultValue_Structures_instantiate_A_Create_A_result->setName("result");
				DefaultValue_Structures_instantiate_A_Create_A_result->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_instantiate_A_Create_A_result->setType(DefaultValue_Structures_A);
			DefaultValue_Structures_instantiate_A_Create_A->setResult(DefaultValue_Structures_instantiate_A_Create_A_result);
		DefaultValue_Structures_instantiate_A->addNode(DefaultValue_Structures_instantiate_A_Create_A);
			// ActivityParameterNode a_node
			DefaultValue_Structures_instantiate_A_a_node->setThisElementPtr(DefaultValue_Structures_instantiate_A_a_node);
			DefaultValue_Structures_instantiate_A_a_node->setName("a_node");
			DefaultValue_Structures_instantiate_A_a_node->setVisibility(VisibilityKind::public_);
			
			DefaultValue_Structures_instantiate_A_a_node->setParameter(DefaultValue_Structures_instantiate_A_a);
		DefaultValue_Structures_instantiate_A->addNode(DefaultValue_Structures_instantiate_A_a_node);
			// CallOperationAction A()
			DefaultValue_Structures_instantiate_A_A_->setThisExecutableNodePtr(DefaultValue_Structures_instantiate_A_A_);
			DefaultValue_Structures_instantiate_A_A_->setName("A()");
			DefaultValue_Structures_instantiate_A_A_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				DefaultValue_Structures_instantiate_A_A__result->setThisElementPtr(DefaultValue_Structures_instantiate_A_A__result);
				DefaultValue_Structures_instantiate_A_A__result->setName("result");
				DefaultValue_Structures_instantiate_A_A__result->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_instantiate_A_A__result->setType(DefaultValue_Structures_A);
			DefaultValue_Structures_instantiate_A_A_->addResult(DefaultValue_Structures_instantiate_A_A__result);
			DefaultValue_Structures_instantiate_A_A_->setOperation(DefaultValue_Structures_A_A_A);
				// InputPin target
				DefaultValue_Structures_instantiate_A_A__target->setThisElementPtr(DefaultValue_Structures_instantiate_A_A__target);
				DefaultValue_Structures_instantiate_A_A__target->setName("target");
				DefaultValue_Structures_instantiate_A_A__target->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_instantiate_A_A__target->setType(DefaultValue_Structures_A);
			DefaultValue_Structures_instantiate_A_A_->setTarget(DefaultValue_Structures_instantiate_A_A__target);
		DefaultValue_Structures_instantiate_A->addNode(DefaultValue_Structures_instantiate_A_A_);
			// ObjectFlow ObjectFlow3 from result to target
			DefaultValue_Structures_instantiate_A_ObjectFlow3->setThisActivityEdgePtr(DefaultValue_Structures_instantiate_A_ObjectFlow3);
			DefaultValue_Structures_instantiate_A_ObjectFlow3->setName("ObjectFlow3");
			DefaultValue_Structures_instantiate_A_ObjectFlow3->setVisibility(VisibilityKind::public_);
			
			DefaultValue_Structures_instantiate_A_ObjectFlow3->setSource(DefaultValue_Structures_instantiate_A_Create_A_result);
			DefaultValue_Structures_instantiate_A_ObjectFlow3->setTarget(DefaultValue_Structures_instantiate_A_A__target);
				// LiteralBoolean LiteralBoolean4
				DefaultValue_Structures_instantiate_A_ObjectFlow3_LiteralBoolean4->setThisElementPtr(DefaultValue_Structures_instantiate_A_ObjectFlow3_LiteralBoolean4);
				DefaultValue_Structures_instantiate_A_ObjectFlow3_LiteralBoolean4->setName("LiteralBoolean4");
				DefaultValue_Structures_instantiate_A_ObjectFlow3_LiteralBoolean4->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_instantiate_A_ObjectFlow3_LiteralBoolean4->setValue(true);
			DefaultValue_Structures_instantiate_A_ObjectFlow3->setGuard(DefaultValue_Structures_instantiate_A_ObjectFlow3_LiteralBoolean4);
		DefaultValue_Structures_instantiate_A->addEdge(DefaultValue_Structures_instantiate_A_ObjectFlow3);
			// ObjectFlow ObjectFlow11 from result to a_node
			DefaultValue_Structures_instantiate_A_ObjectFlow11->setThisActivityEdgePtr(DefaultValue_Structures_instantiate_A_ObjectFlow11);
			DefaultValue_Structures_instantiate_A_ObjectFlow11->setName("ObjectFlow11");
			DefaultValue_Structures_instantiate_A_ObjectFlow11->setVisibility(VisibilityKind::public_);
			
			DefaultValue_Structures_instantiate_A_ObjectFlow11->setSource(DefaultValue_Structures_instantiate_A_A__result);
			DefaultValue_Structures_instantiate_A_ObjectFlow11->setTarget(DefaultValue_Structures_instantiate_A_a_node);
				// LiteralBoolean LiteralBoolean13
				DefaultValue_Structures_instantiate_A_ObjectFlow11_LiteralBoolean13->setThisElementPtr(DefaultValue_Structures_instantiate_A_ObjectFlow11_LiteralBoolean13);
				DefaultValue_Structures_instantiate_A_ObjectFlow11_LiteralBoolean13->setName("LiteralBoolean13");
				DefaultValue_Structures_instantiate_A_ObjectFlow11_LiteralBoolean13->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_instantiate_A_ObjectFlow11_LiteralBoolean13->setValue(true);
			DefaultValue_Structures_instantiate_A_ObjectFlow11->setGuard(DefaultValue_Structures_instantiate_A_ObjectFlow11_LiteralBoolean13);
		DefaultValue_Structures_instantiate_A->addEdge(DefaultValue_Structures_instantiate_A_ObjectFlow11);
	DefaultValue_Structures->addPackagedElement(DefaultValue_Structures_instantiate_A);
		// Activity assert_A
		DefaultValue_Structures_assert_A->setThisActivityPtr(DefaultValue_Structures_assert_A);
		DefaultValue_Structures_assert_A->setName("assert_A");
		DefaultValue_Structures_assert_A->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testDefaultValues
			DefaultValue_Structures_assert_A_testDefaultValues->setThisClass_Ptr(DefaultValue_Structures_assert_A_testDefaultValues);
			DefaultValue_Structures_assert_A_testDefaultValues->setName("testDefaultValues");
			DefaultValue_Structures_assert_A_testDefaultValues->setVisibility(VisibilityKind::public_);
			
				// Parameter pList
				DefaultValue_Structures_assert_A_testDefaultValues_pList->setThisElementPtr(DefaultValue_Structures_assert_A_testDefaultValues_pList);
				DefaultValue_Structures_assert_A_testDefaultValues_pList->setName("pList");
				DefaultValue_Structures_assert_A_testDefaultValues_pList->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_assert_A_testDefaultValues_pList->setUpper(-1);
				DefaultValue_Structures_assert_A_testDefaultValues_pList->setLower(4);
				DefaultValue_Structures_assert_A_testDefaultValues_pList->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			DefaultValue_Structures_assert_A_testDefaultValues->addOwnedParameter(DefaultValue_Structures_assert_A_testDefaultValues_pList);
			DefaultValue_Structures_assert_A_testDefaultValues->addLanguage("C++");
			DefaultValue_Structures_assert_A_testDefaultValues->addLanguage("Include");
			DefaultValue_Structures_assert_A_testDefaultValues->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	const ValueListPtr& values = inputParameters->at(0)->values; 	int index = 1;  	for(const ValuePtr& value : *values) 	{ 		// Test parameter p[i] 		int p = AS(IntegerValue, value)->value; 		fuml::Debug::println(\"[doBody] argument p[\" + std::to_string(index) + \"] = \" + std::to_string(p)); 		if(p == index) 		{ 			std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK << \" for a.b[\" << index << \"].p\"<<std::endl; 		} 		else 		{ 			std::cout<<ASCII_RED << \"Assertion failed\" << ASCII_BLK << \" for a.b[\" << index << \"].p. Was: \" << p << \" ; Should: \" << index <<std::endl; 		}  		index++; 	}");
			DefaultValue_Structures_assert_A_testDefaultValues->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> #include <uml/classification/Parameter.h>");
		DefaultValue_Structures_assert_A->addOwnedBehavior(DefaultValue_Structures_assert_A_testDefaultValues);
			// Parameter a
			DefaultValue_Structures_assert_A_a->setThisElementPtr(DefaultValue_Structures_assert_A_a);
			DefaultValue_Structures_assert_A_a->setName("a");
			DefaultValue_Structures_assert_A_a->setVisibility(VisibilityKind::public_);
		DefaultValue_Structures_assert_A->addOwnedParameter(DefaultValue_Structures_assert_A_a);
			// ReadStructuralFeatureAction Read a.b
			DefaultValue_Structures_assert_A_Read_a_b->setThisExecutableNodePtr(DefaultValue_Structures_assert_A_Read_a_b);
			DefaultValue_Structures_assert_A_Read_a_b->setName("Read a.b");
			DefaultValue_Structures_assert_A_Read_a_b->setVisibility(VisibilityKind::public_);
			DefaultValue_Structures_assert_A_Read_a_b->setStructuralFeature(DefaultValue_Structures_A_b);
				// InputPin object
				DefaultValue_Structures_assert_A_Read_a_b_object->setThisElementPtr(DefaultValue_Structures_assert_A_Read_a_b_object);
				DefaultValue_Structures_assert_A_Read_a_b_object->setName("object");
				DefaultValue_Structures_assert_A_Read_a_b_object->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_assert_A_Read_a_b_object->setType(DefaultValue_Structures_A);
			DefaultValue_Structures_assert_A_Read_a_b->setObject(DefaultValue_Structures_assert_A_Read_a_b_object);
				// OutputPin result
				DefaultValue_Structures_assert_A_Read_a_b_result->setThisElementPtr(DefaultValue_Structures_assert_A_Read_a_b_result);
				DefaultValue_Structures_assert_A_Read_a_b_result->setName("result");
				DefaultValue_Structures_assert_A_Read_a_b_result->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_assert_A_Read_a_b_result->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_assert_A_Read_a_b_result->setUpper(-1);
				DefaultValue_Structures_assert_A_Read_a_b_result->setLower(4);
			DefaultValue_Structures_assert_A_Read_a_b->setResult(DefaultValue_Structures_assert_A_Read_a_b_result);
		DefaultValue_Structures_assert_A->addNode(DefaultValue_Structures_assert_A_Read_a_b);
			// CallBehaviorAction Test Default Values
			DefaultValue_Structures_assert_A_Test_Default_Values->setThisExecutableNodePtr(DefaultValue_Structures_assert_A_Test_Default_Values);
			DefaultValue_Structures_assert_A_Test_Default_Values->setName("Test Default Values");
			DefaultValue_Structures_assert_A_Test_Default_Values->setVisibility(VisibilityKind::public_);
			DefaultValue_Structures_assert_A_Test_Default_Values->setBehavior(DefaultValue_Structures_assert_A_testDefaultValues);
				// InputPin pList
				DefaultValue_Structures_assert_A_Test_Default_Values_pList->setThisElementPtr(DefaultValue_Structures_assert_A_Test_Default_Values_pList);
				DefaultValue_Structures_assert_A_Test_Default_Values_pList->setName("pList");
				DefaultValue_Structures_assert_A_Test_Default_Values_pList->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_assert_A_Test_Default_Values_pList->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				DefaultValue_Structures_assert_A_Test_Default_Values_pList->setUpper(-1);
				DefaultValue_Structures_assert_A_Test_Default_Values_pList->setLower(4);
			DefaultValue_Structures_assert_A_Test_Default_Values->addArgument(DefaultValue_Structures_assert_A_Test_Default_Values_pList);
		DefaultValue_Structures_assert_A->addNode(DefaultValue_Structures_assert_A_Test_Default_Values);
			// ReadStructuralFeatureAction Read b.p
			DefaultValue_Structures_assert_A_Read_b_p->setThisExecutableNodePtr(DefaultValue_Structures_assert_A_Read_b_p);
			DefaultValue_Structures_assert_A_Read_b_p->setName("Read b.p");
			DefaultValue_Structures_assert_A_Read_b_p->setVisibility(VisibilityKind::public_);
			DefaultValue_Structures_assert_A_Read_b_p->setStructuralFeature(DefaultValue_Structures_B_p);
				// InputPin object
				DefaultValue_Structures_assert_A_Read_b_p_object->setThisElementPtr(DefaultValue_Structures_assert_A_Read_b_p_object);
				DefaultValue_Structures_assert_A_Read_b_p_object->setName("object");
				DefaultValue_Structures_assert_A_Read_b_p_object->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_assert_A_Read_b_p_object->setType(DefaultValue_Structures_B);
			DefaultValue_Structures_assert_A_Read_b_p->setObject(DefaultValue_Structures_assert_A_Read_b_p_object);
				// OutputPin result
				DefaultValue_Structures_assert_A_Read_b_p_result->setThisElementPtr(DefaultValue_Structures_assert_A_Read_b_p_result);
				DefaultValue_Structures_assert_A_Read_b_p_result->setName("result");
				DefaultValue_Structures_assert_A_Read_b_p_result->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_assert_A_Read_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			DefaultValue_Structures_assert_A_Read_b_p->setResult(DefaultValue_Structures_assert_A_Read_b_p_result);
		DefaultValue_Structures_assert_A->addNode(DefaultValue_Structures_assert_A_Read_b_p);
			// ActivityParameterNode a_node
			DefaultValue_Structures_assert_A_a_node->setThisElementPtr(DefaultValue_Structures_assert_A_a_node);
			DefaultValue_Structures_assert_A_a_node->setName("a_node");
			DefaultValue_Structures_assert_A_a_node->setVisibility(VisibilityKind::public_);
			
			DefaultValue_Structures_assert_A_a_node->setParameter(DefaultValue_Structures_assert_A_a);
		DefaultValue_Structures_assert_A->addNode(DefaultValue_Structures_assert_A_a_node);
			// ObjectFlow ObjectFlow20 from a_node to object
			DefaultValue_Structures_assert_A_ObjectFlow20->setThisActivityEdgePtr(DefaultValue_Structures_assert_A_ObjectFlow20);
			DefaultValue_Structures_assert_A_ObjectFlow20->setName("ObjectFlow20");
			DefaultValue_Structures_assert_A_ObjectFlow20->setVisibility(VisibilityKind::public_);
			
			DefaultValue_Structures_assert_A_ObjectFlow20->setSource(DefaultValue_Structures_assert_A_a_node);
			DefaultValue_Structures_assert_A_ObjectFlow20->setTarget(DefaultValue_Structures_assert_A_Read_a_b_object);
				// LiteralBoolean LiteralBoolean22
				DefaultValue_Structures_assert_A_ObjectFlow20_LiteralBoolean22->setThisElementPtr(DefaultValue_Structures_assert_A_ObjectFlow20_LiteralBoolean22);
				DefaultValue_Structures_assert_A_ObjectFlow20_LiteralBoolean22->setName("LiteralBoolean22");
				DefaultValue_Structures_assert_A_ObjectFlow20_LiteralBoolean22->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_assert_A_ObjectFlow20_LiteralBoolean22->setValue(true);
			DefaultValue_Structures_assert_A_ObjectFlow20->setGuard(DefaultValue_Structures_assert_A_ObjectFlow20_LiteralBoolean22);
		DefaultValue_Structures_assert_A->addEdge(DefaultValue_Structures_assert_A_ObjectFlow20);
			// ObjectFlow ObjectFlow23 from result to pList
			DefaultValue_Structures_assert_A_ObjectFlow23->setThisActivityEdgePtr(DefaultValue_Structures_assert_A_ObjectFlow23);
			DefaultValue_Structures_assert_A_ObjectFlow23->setName("ObjectFlow23");
			DefaultValue_Structures_assert_A_ObjectFlow23->setVisibility(VisibilityKind::public_);
			
			DefaultValue_Structures_assert_A_ObjectFlow23->setSource(DefaultValue_Structures_assert_A_Read_b_p_result);
			DefaultValue_Structures_assert_A_ObjectFlow23->setTarget(DefaultValue_Structures_assert_A_Test_Default_Values_pList);
				// LiteralBoolean LiteralBoolean24
				DefaultValue_Structures_assert_A_ObjectFlow23_LiteralBoolean24->setThisElementPtr(DefaultValue_Structures_assert_A_ObjectFlow23_LiteralBoolean24);
				DefaultValue_Structures_assert_A_ObjectFlow23_LiteralBoolean24->setName("LiteralBoolean24");
				DefaultValue_Structures_assert_A_ObjectFlow23_LiteralBoolean24->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_assert_A_ObjectFlow23_LiteralBoolean24->setValue(true);
			DefaultValue_Structures_assert_A_ObjectFlow23->setGuard(DefaultValue_Structures_assert_A_ObjectFlow23_LiteralBoolean24);
		DefaultValue_Structures_assert_A->addEdge(DefaultValue_Structures_assert_A_ObjectFlow23);
			// ObjectFlow ObjectFlow29 from result to object
			DefaultValue_Structures_assert_A_ObjectFlow29->setThisActivityEdgePtr(DefaultValue_Structures_assert_A_ObjectFlow29);
			DefaultValue_Structures_assert_A_ObjectFlow29->setName("ObjectFlow29");
			DefaultValue_Structures_assert_A_ObjectFlow29->setVisibility(VisibilityKind::public_);
			
			DefaultValue_Structures_assert_A_ObjectFlow29->setSource(DefaultValue_Structures_assert_A_Read_a_b_result);
			DefaultValue_Structures_assert_A_ObjectFlow29->setTarget(DefaultValue_Structures_assert_A_Read_b_p_object);
				// LiteralBoolean LiteralBoolean30
				DefaultValue_Structures_assert_A_ObjectFlow29_LiteralBoolean30->setThisElementPtr(DefaultValue_Structures_assert_A_ObjectFlow29_LiteralBoolean30);
				DefaultValue_Structures_assert_A_ObjectFlow29_LiteralBoolean30->setName("LiteralBoolean30");
				DefaultValue_Structures_assert_A_ObjectFlow29_LiteralBoolean30->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_assert_A_ObjectFlow29_LiteralBoolean30->setValue(true);
			DefaultValue_Structures_assert_A_ObjectFlow29->setGuard(DefaultValue_Structures_assert_A_ObjectFlow29_LiteralBoolean30);
		DefaultValue_Structures_assert_A->addEdge(DefaultValue_Structures_assert_A_ObjectFlow29);
	DefaultValue_Structures->addPackagedElement(DefaultValue_Structures_assert_A);
		// Class A
		DefaultValue_Structures_A->setThisClass_Ptr(DefaultValue_Structures_A);
		DefaultValue_Structures_A->setName("A");
		DefaultValue_Structures_A->setVisibility(VisibilityKind::public_);
		
			// Property b
			DefaultValue_Structures_A_b->setThisElementPtr(DefaultValue_Structures_A_b);
			DefaultValue_Structures_A_b->setName("b");
			DefaultValue_Structures_A_b->setVisibility(VisibilityKind::public_);
			DefaultValue_Structures_A_b->setUpper(-1);
			DefaultValue_Structures_A_b->setLower(4);
			DefaultValue_Structures_A_b->setType(DefaultValue_Structures_B);
				// OpaqueExpression OpaqueExpression39
				DefaultValue_Structures_A_b_OpaqueExpression39->setThisElementPtr(DefaultValue_Structures_A_b_OpaqueExpression39);
				DefaultValue_Structures_A_b_OpaqueExpression39->setName("OpaqueExpression39");
				DefaultValue_Structures_A_b_OpaqueExpression39->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_A_b_OpaqueExpression39->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_A_b_OpaqueExpression39->setBehavior(DefaultValue_Structures_A_bDefaultValues);
			DefaultValue_Structures_A_b->setDefaultValue(DefaultValue_Structures_A_b_OpaqueExpression39);
		DefaultValue_Structures_A->addOwnedAttribute(DefaultValue_Structures_A_b);
		// Activity bDefaultValues
			DefaultValue_Structures_A_bDefaultValues->setThisActivityPtr(DefaultValue_Structures_A_bDefaultValues);
			DefaultValue_Structures_A_bDefaultValues->setName("bDefaultValues");
			DefaultValue_Structures_A_bDefaultValues->setVisibility(VisibilityKind::public_);
			
				// Parameter bList
				DefaultValue_Structures_A_bDefaultValues_bList->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_bList);
				DefaultValue_Structures_A_bDefaultValues_bList->setName("bList");
				DefaultValue_Structures_A_bDefaultValues_bList->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_A_bDefaultValues_bList->setUpper(-1);
				DefaultValue_Structures_A_bDefaultValues_bList->setLower(0);
				DefaultValue_Structures_A_bDefaultValues_bList->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_A_bDefaultValues_bList->setDirection(ParameterDirectionKind::return_);
			DefaultValue_Structures_A_bDefaultValues->addOwnedParameter(DefaultValue_Structures_A_bDefaultValues_bList);
				// AddStructuralFeatureValueAction B_4.p
				DefaultValue_Structures_A_bDefaultValues_B_4_p->setThisExecutableNodePtr(DefaultValue_Structures_A_bDefaultValues_B_4_p);
				DefaultValue_Structures_A_bDefaultValues_B_4_p->setName("B_4.p");
				DefaultValue_Structures_A_bDefaultValues_B_4_p->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_A_bDefaultValues_B_4_p->setStructuralFeature(DefaultValue_Structures_B_p);
					// InputPin object
					DefaultValue_Structures_A_bDefaultValues_B_4_p_object->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_B_4_p_object);
					DefaultValue_Structures_A_bDefaultValues_B_4_p_object->setName("object");
					DefaultValue_Structures_A_bDefaultValues_B_4_p_object->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_B_4_p_object->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_A_bDefaultValues_B_4_p->setObject(DefaultValue_Structures_A_bDefaultValues_B_4_p_object);
					// InputPin value
					DefaultValue_Structures_A_bDefaultValues_B_4_p_value->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_B_4_p_value);
					DefaultValue_Structures_A_bDefaultValues_B_4_p_value->setName("value");
					DefaultValue_Structures_A_bDefaultValues_B_4_p_value->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_B_4_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				DefaultValue_Structures_A_bDefaultValues_B_4_p->setValue(DefaultValue_Structures_A_bDefaultValues_B_4_p_value);
					// OutputPin result
					DefaultValue_Structures_A_bDefaultValues_B_4_p_result->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_B_4_p_result);
					DefaultValue_Structures_A_bDefaultValues_B_4_p_result->setName("result");
					DefaultValue_Structures_A_bDefaultValues_B_4_p_result->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_B_4_p_result->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_A_bDefaultValues_B_4_p->setResult(DefaultValue_Structures_A_bDefaultValues_B_4_p_result);
			DefaultValue_Structures_A_bDefaultValues->addNode(DefaultValue_Structures_A_bDefaultValues_B_4_p);
				// ValueSpecificationAction Integer(2)
				DefaultValue_Structures_A_bDefaultValues_Integer_2->setThisExecutableNodePtr(DefaultValue_Structures_A_bDefaultValues_Integer_2);
				DefaultValue_Structures_A_bDefaultValues_Integer_2->setName("Integer(2)");
				DefaultValue_Structures_A_bDefaultValues_Integer_2->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger84
					DefaultValue_Structures_A_bDefaultValues_Integer_2_LiteralInteger84->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_Integer_2_LiteralInteger84);
					DefaultValue_Structures_A_bDefaultValues_Integer_2_LiteralInteger84->setName("LiteralInteger84");
					DefaultValue_Structures_A_bDefaultValues_Integer_2_LiteralInteger84->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_Integer_2_LiteralInteger84->setValue(2);
				DefaultValue_Structures_A_bDefaultValues_Integer_2->setValue(DefaultValue_Structures_A_bDefaultValues_Integer_2_LiteralInteger84);
					// OutputPin result
					DefaultValue_Structures_A_bDefaultValues_Integer_2_result->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_Integer_2_result);
					DefaultValue_Structures_A_bDefaultValues_Integer_2_result->setName("result");
					DefaultValue_Structures_A_bDefaultValues_Integer_2_result->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_Integer_2_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				DefaultValue_Structures_A_bDefaultValues_Integer_2->setResult(DefaultValue_Structures_A_bDefaultValues_Integer_2_result);
			DefaultValue_Structures_A_bDefaultValues->addNode(DefaultValue_Structures_A_bDefaultValues_Integer_2);
				// ValueSpecificationAction Integer(4)
				DefaultValue_Structures_A_bDefaultValues_Integer_4->setThisExecutableNodePtr(DefaultValue_Structures_A_bDefaultValues_Integer_4);
				DefaultValue_Structures_A_bDefaultValues_Integer_4->setName("Integer(4)");
				DefaultValue_Structures_A_bDefaultValues_Integer_4->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger45
					DefaultValue_Structures_A_bDefaultValues_Integer_4_LiteralInteger45->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_Integer_4_LiteralInteger45);
					DefaultValue_Structures_A_bDefaultValues_Integer_4_LiteralInteger45->setName("LiteralInteger45");
					DefaultValue_Structures_A_bDefaultValues_Integer_4_LiteralInteger45->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_Integer_4_LiteralInteger45->setValue(4);
				DefaultValue_Structures_A_bDefaultValues_Integer_4->setValue(DefaultValue_Structures_A_bDefaultValues_Integer_4_LiteralInteger45);
					// OutputPin result
					DefaultValue_Structures_A_bDefaultValues_Integer_4_result->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_Integer_4_result);
					DefaultValue_Structures_A_bDefaultValues_Integer_4_result->setName("result");
					DefaultValue_Structures_A_bDefaultValues_Integer_4_result->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_Integer_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				DefaultValue_Structures_A_bDefaultValues_Integer_4->setResult(DefaultValue_Structures_A_bDefaultValues_Integer_4_result);
			DefaultValue_Structures_A_bDefaultValues->addNode(DefaultValue_Structures_A_bDefaultValues_Integer_4);
				// AddStructuralFeatureValueAction B_2.p
				DefaultValue_Structures_A_bDefaultValues_B_2_p->setThisExecutableNodePtr(DefaultValue_Structures_A_bDefaultValues_B_2_p);
				DefaultValue_Structures_A_bDefaultValues_B_2_p->setName("B_2.p");
				DefaultValue_Structures_A_bDefaultValues_B_2_p->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_A_bDefaultValues_B_2_p->setStructuralFeature(DefaultValue_Structures_B_p);
					// InputPin object
					DefaultValue_Structures_A_bDefaultValues_B_2_p_object->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_B_2_p_object);
					DefaultValue_Structures_A_bDefaultValues_B_2_p_object->setName("object");
					DefaultValue_Structures_A_bDefaultValues_B_2_p_object->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_B_2_p_object->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_A_bDefaultValues_B_2_p->setObject(DefaultValue_Structures_A_bDefaultValues_B_2_p_object);
					// InputPin value
					DefaultValue_Structures_A_bDefaultValues_B_2_p_value->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_B_2_p_value);
					DefaultValue_Structures_A_bDefaultValues_B_2_p_value->setName("value");
					DefaultValue_Structures_A_bDefaultValues_B_2_p_value->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_B_2_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				DefaultValue_Structures_A_bDefaultValues_B_2_p->setValue(DefaultValue_Structures_A_bDefaultValues_B_2_p_value);
					// OutputPin result
					DefaultValue_Structures_A_bDefaultValues_B_2_p_result->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_B_2_p_result);
					DefaultValue_Structures_A_bDefaultValues_B_2_p_result->setName("result");
					DefaultValue_Structures_A_bDefaultValues_B_2_p_result->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_B_2_p_result->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_A_bDefaultValues_B_2_p->setResult(DefaultValue_Structures_A_bDefaultValues_B_2_p_result);
			DefaultValue_Structures_A_bDefaultValues->addNode(DefaultValue_Structures_A_bDefaultValues_B_2_p);
				// CreateObjectAction Create B_1
				DefaultValue_Structures_A_bDefaultValues_Create_B_1->setThisExecutableNodePtr(DefaultValue_Structures_A_bDefaultValues_Create_B_1);
				DefaultValue_Structures_A_bDefaultValues_Create_B_1->setName("Create B_1");
				DefaultValue_Structures_A_bDefaultValues_Create_B_1->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_A_bDefaultValues_Create_B_1->setClassifier(DefaultValue_Structures_B);
					// OutputPin result
					DefaultValue_Structures_A_bDefaultValues_Create_B_1_result->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_Create_B_1_result);
					DefaultValue_Structures_A_bDefaultValues_Create_B_1_result->setName("result");
					DefaultValue_Structures_A_bDefaultValues_Create_B_1_result->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_Create_B_1_result->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_A_bDefaultValues_Create_B_1->setResult(DefaultValue_Structures_A_bDefaultValues_Create_B_1_result);
			DefaultValue_Structures_A_bDefaultValues->addNode(DefaultValue_Structures_A_bDefaultValues_Create_B_1);
				// AddStructuralFeatureValueAction B_1.p
				DefaultValue_Structures_A_bDefaultValues_B_1_p->setThisExecutableNodePtr(DefaultValue_Structures_A_bDefaultValues_B_1_p);
				DefaultValue_Structures_A_bDefaultValues_B_1_p->setName("B_1.p");
				DefaultValue_Structures_A_bDefaultValues_B_1_p->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_A_bDefaultValues_B_1_p->setStructuralFeature(DefaultValue_Structures_B_p);
					// InputPin object
					DefaultValue_Structures_A_bDefaultValues_B_1_p_object->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_B_1_p_object);
					DefaultValue_Structures_A_bDefaultValues_B_1_p_object->setName("object");
					DefaultValue_Structures_A_bDefaultValues_B_1_p_object->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_B_1_p_object->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_A_bDefaultValues_B_1_p->setObject(DefaultValue_Structures_A_bDefaultValues_B_1_p_object);
					// InputPin value
					DefaultValue_Structures_A_bDefaultValues_B_1_p_value->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_B_1_p_value);
					DefaultValue_Structures_A_bDefaultValues_B_1_p_value->setName("value");
					DefaultValue_Structures_A_bDefaultValues_B_1_p_value->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_B_1_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				DefaultValue_Structures_A_bDefaultValues_B_1_p->setValue(DefaultValue_Structures_A_bDefaultValues_B_1_p_value);
					// OutputPin result
					DefaultValue_Structures_A_bDefaultValues_B_1_p_result->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_B_1_p_result);
					DefaultValue_Structures_A_bDefaultValues_B_1_p_result->setName("result");
					DefaultValue_Structures_A_bDefaultValues_B_1_p_result->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_B_1_p_result->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_A_bDefaultValues_B_1_p->setResult(DefaultValue_Structures_A_bDefaultValues_B_1_p_result);
			DefaultValue_Structures_A_bDefaultValues->addNode(DefaultValue_Structures_A_bDefaultValues_B_1_p);
				// ActivityParameterNode bList_node
				DefaultValue_Structures_A_bDefaultValues_bList_node->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_bList_node);
				DefaultValue_Structures_A_bDefaultValues_bList_node->setName("bList_node");
				DefaultValue_Structures_A_bDefaultValues_bList_node->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_bList_node->setParameter(DefaultValue_Structures_A_bDefaultValues_bList);
			DefaultValue_Structures_A_bDefaultValues->addNode(DefaultValue_Structures_A_bDefaultValues_bList_node);
				// CreateObjectAction Create B_2
				DefaultValue_Structures_A_bDefaultValues_Create_B_2->setThisExecutableNodePtr(DefaultValue_Structures_A_bDefaultValues_Create_B_2);
				DefaultValue_Structures_A_bDefaultValues_Create_B_2->setName("Create B_2");
				DefaultValue_Structures_A_bDefaultValues_Create_B_2->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_A_bDefaultValues_Create_B_2->setClassifier(DefaultValue_Structures_B);
					// OutputPin result
					DefaultValue_Structures_A_bDefaultValues_Create_B_2_result->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_Create_B_2_result);
					DefaultValue_Structures_A_bDefaultValues_Create_B_2_result->setName("result");
					DefaultValue_Structures_A_bDefaultValues_Create_B_2_result->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_Create_B_2_result->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_A_bDefaultValues_Create_B_2->setResult(DefaultValue_Structures_A_bDefaultValues_Create_B_2_result);
			DefaultValue_Structures_A_bDefaultValues->addNode(DefaultValue_Structures_A_bDefaultValues_Create_B_2);
				// AddStructuralFeatureValueAction B_3.p
				DefaultValue_Structures_A_bDefaultValues_B_3_p->setThisExecutableNodePtr(DefaultValue_Structures_A_bDefaultValues_B_3_p);
				DefaultValue_Structures_A_bDefaultValues_B_3_p->setName("B_3.p");
				DefaultValue_Structures_A_bDefaultValues_B_3_p->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_A_bDefaultValues_B_3_p->setStructuralFeature(DefaultValue_Structures_B_p);
					// InputPin object
					DefaultValue_Structures_A_bDefaultValues_B_3_p_object->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_B_3_p_object);
					DefaultValue_Structures_A_bDefaultValues_B_3_p_object->setName("object");
					DefaultValue_Structures_A_bDefaultValues_B_3_p_object->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_B_3_p_object->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_A_bDefaultValues_B_3_p->setObject(DefaultValue_Structures_A_bDefaultValues_B_3_p_object);
					// InputPin value
					DefaultValue_Structures_A_bDefaultValues_B_3_p_value->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_B_3_p_value);
					DefaultValue_Structures_A_bDefaultValues_B_3_p_value->setName("value");
					DefaultValue_Structures_A_bDefaultValues_B_3_p_value->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_B_3_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				DefaultValue_Structures_A_bDefaultValues_B_3_p->setValue(DefaultValue_Structures_A_bDefaultValues_B_3_p_value);
					// OutputPin result
					DefaultValue_Structures_A_bDefaultValues_B_3_p_result->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_B_3_p_result);
					DefaultValue_Structures_A_bDefaultValues_B_3_p_result->setName("result");
					DefaultValue_Structures_A_bDefaultValues_B_3_p_result->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_B_3_p_result->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_A_bDefaultValues_B_3_p->setResult(DefaultValue_Structures_A_bDefaultValues_B_3_p_result);
			DefaultValue_Structures_A_bDefaultValues->addNode(DefaultValue_Structures_A_bDefaultValues_B_3_p);
				// CreateObjectAction Create B_3
				DefaultValue_Structures_A_bDefaultValues_Create_B_3->setThisExecutableNodePtr(DefaultValue_Structures_A_bDefaultValues_Create_B_3);
				DefaultValue_Structures_A_bDefaultValues_Create_B_3->setName("Create B_3");
				DefaultValue_Structures_A_bDefaultValues_Create_B_3->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_A_bDefaultValues_Create_B_3->setClassifier(DefaultValue_Structures_B);
					// OutputPin result
					DefaultValue_Structures_A_bDefaultValues_Create_B_3_result->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_Create_B_3_result);
					DefaultValue_Structures_A_bDefaultValues_Create_B_3_result->setName("result");
					DefaultValue_Structures_A_bDefaultValues_Create_B_3_result->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_Create_B_3_result->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_A_bDefaultValues_Create_B_3->setResult(DefaultValue_Structures_A_bDefaultValues_Create_B_3_result);
			DefaultValue_Structures_A_bDefaultValues->addNode(DefaultValue_Structures_A_bDefaultValues_Create_B_3);
				// CreateObjectAction Create B_4
				DefaultValue_Structures_A_bDefaultValues_Create_B_4->setThisExecutableNodePtr(DefaultValue_Structures_A_bDefaultValues_Create_B_4);
				DefaultValue_Structures_A_bDefaultValues_Create_B_4->setName("Create B_4");
				DefaultValue_Structures_A_bDefaultValues_Create_B_4->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_A_bDefaultValues_Create_B_4->setClassifier(DefaultValue_Structures_B);
					// OutputPin result
					DefaultValue_Structures_A_bDefaultValues_Create_B_4_result->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_Create_B_4_result);
					DefaultValue_Structures_A_bDefaultValues_Create_B_4_result->setName("result");
					DefaultValue_Structures_A_bDefaultValues_Create_B_4_result->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_Create_B_4_result->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_A_bDefaultValues_Create_B_4->setResult(DefaultValue_Structures_A_bDefaultValues_Create_B_4_result);
			DefaultValue_Structures_A_bDefaultValues->addNode(DefaultValue_Structures_A_bDefaultValues_Create_B_4);
				// ValueSpecificationAction Integer(3)
				DefaultValue_Structures_A_bDefaultValues_Integer_3->setThisExecutableNodePtr(DefaultValue_Structures_A_bDefaultValues_Integer_3);
				DefaultValue_Structures_A_bDefaultValues_Integer_3->setName("Integer(3)");
				DefaultValue_Structures_A_bDefaultValues_Integer_3->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger121
					DefaultValue_Structures_A_bDefaultValues_Integer_3_LiteralInteger121->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_Integer_3_LiteralInteger121);
					DefaultValue_Structures_A_bDefaultValues_Integer_3_LiteralInteger121->setName("LiteralInteger121");
					DefaultValue_Structures_A_bDefaultValues_Integer_3_LiteralInteger121->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_Integer_3_LiteralInteger121->setValue(3);
				DefaultValue_Structures_A_bDefaultValues_Integer_3->setValue(DefaultValue_Structures_A_bDefaultValues_Integer_3_LiteralInteger121);
					// OutputPin result
					DefaultValue_Structures_A_bDefaultValues_Integer_3_result->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_Integer_3_result);
					DefaultValue_Structures_A_bDefaultValues_Integer_3_result->setName("result");
					DefaultValue_Structures_A_bDefaultValues_Integer_3_result->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_Integer_3_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				DefaultValue_Structures_A_bDefaultValues_Integer_3->setResult(DefaultValue_Structures_A_bDefaultValues_Integer_3_result);
			DefaultValue_Structures_A_bDefaultValues->addNode(DefaultValue_Structures_A_bDefaultValues_Integer_3);
				// ValueSpecificationAction Integer(1)
				DefaultValue_Structures_A_bDefaultValues_Integer_1->setThisExecutableNodePtr(DefaultValue_Structures_A_bDefaultValues_Integer_1);
				DefaultValue_Structures_A_bDefaultValues_Integer_1->setName("Integer(1)");
				DefaultValue_Structures_A_bDefaultValues_Integer_1->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger124
					DefaultValue_Structures_A_bDefaultValues_Integer_1_LiteralInteger124->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_Integer_1_LiteralInteger124);
					DefaultValue_Structures_A_bDefaultValues_Integer_1_LiteralInteger124->setName("LiteralInteger124");
					DefaultValue_Structures_A_bDefaultValues_Integer_1_LiteralInteger124->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_Integer_1_LiteralInteger124->setValue(1);
				DefaultValue_Structures_A_bDefaultValues_Integer_1->setValue(DefaultValue_Structures_A_bDefaultValues_Integer_1_LiteralInteger124);
					// OutputPin result
					DefaultValue_Structures_A_bDefaultValues_Integer_1_result->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_Integer_1_result);
					DefaultValue_Structures_A_bDefaultValues_Integer_1_result->setName("result");
					DefaultValue_Structures_A_bDefaultValues_Integer_1_result->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_Integer_1_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				DefaultValue_Structures_A_bDefaultValues_Integer_1->setResult(DefaultValue_Structures_A_bDefaultValues_Integer_1_result);
			DefaultValue_Structures_A_bDefaultValues->addNode(DefaultValue_Structures_A_bDefaultValues_Integer_1);
				// ControlFlow ControlFlow77 from B_2.p to Create B_3
				DefaultValue_Structures_A_bDefaultValues_ControlFlow77->setThisActivityEdgePtr(DefaultValue_Structures_A_bDefaultValues_ControlFlow77);
				DefaultValue_Structures_A_bDefaultValues_ControlFlow77->setName("ControlFlow77");
				DefaultValue_Structures_A_bDefaultValues_ControlFlow77->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_ControlFlow77->setSource(DefaultValue_Structures_A_bDefaultValues_B_2_p);
				DefaultValue_Structures_A_bDefaultValues_ControlFlow77->setTarget(DefaultValue_Structures_A_bDefaultValues_Create_B_3);
			DefaultValue_Structures_A_bDefaultValues->addEdge(DefaultValue_Structures_A_bDefaultValues_ControlFlow77);
				// ObjectFlow ObjectFlow42 from result to bList_node
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow42->setThisActivityEdgePtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow42);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow42->setName("ObjectFlow42");
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow42->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow42->setSource(DefaultValue_Structures_A_bDefaultValues_B_4_p_result);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow42->setTarget(DefaultValue_Structures_A_bDefaultValues_bList_node);
					// LiteralBoolean LiteralBoolean43
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow42_LiteralBoolean43->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow42_LiteralBoolean43);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow42_LiteralBoolean43->setName("LiteralBoolean43");
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow42_LiteralBoolean43->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow42_LiteralBoolean43->setValue(true);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow42->setGuard(DefaultValue_Structures_A_bDefaultValues_ObjectFlow42_LiteralBoolean43);
			DefaultValue_Structures_A_bDefaultValues->addEdge(DefaultValue_Structures_A_bDefaultValues_ObjectFlow42);
				// ObjectFlow ObjectFlow87 from result to bList_node
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow87->setThisActivityEdgePtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow87);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow87->setName("ObjectFlow87");
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow87->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow87->setSource(DefaultValue_Structures_A_bDefaultValues_B_2_p_result);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow87->setTarget(DefaultValue_Structures_A_bDefaultValues_bList_node);
					// LiteralBoolean LiteralBoolean89
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow87_LiteralBoolean89->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow87_LiteralBoolean89);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow87_LiteralBoolean89->setName("LiteralBoolean89");
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow87_LiteralBoolean89->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow87_LiteralBoolean89->setValue(true);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow87->setGuard(DefaultValue_Structures_A_bDefaultValues_ObjectFlow87_LiteralBoolean89);
			DefaultValue_Structures_A_bDefaultValues->addEdge(DefaultValue_Structures_A_bDefaultValues_ObjectFlow87);
				// ControlFlow ControlFlow56 from B_1.p to Create B_2
				DefaultValue_Structures_A_bDefaultValues_ControlFlow56->setThisActivityEdgePtr(DefaultValue_Structures_A_bDefaultValues_ControlFlow56);
				DefaultValue_Structures_A_bDefaultValues_ControlFlow56->setName("ControlFlow56");
				DefaultValue_Structures_A_bDefaultValues_ControlFlow56->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_ControlFlow56->setSource(DefaultValue_Structures_A_bDefaultValues_B_1_p);
				DefaultValue_Structures_A_bDefaultValues_ControlFlow56->setTarget(DefaultValue_Structures_A_bDefaultValues_Create_B_2);
			DefaultValue_Structures_A_bDefaultValues->addEdge(DefaultValue_Structures_A_bDefaultValues_ControlFlow56);
				// ObjectFlow ObjectFlow57 from result to value
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow57->setThisActivityEdgePtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow57);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow57->setName("ObjectFlow57");
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow57->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow57->setSource(DefaultValue_Structures_A_bDefaultValues_Integer_2_result);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow57->setTarget(DefaultValue_Structures_A_bDefaultValues_B_2_p_value);
					// LiteralBoolean LiteralBoolean58
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow57_LiteralBoolean58->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow57_LiteralBoolean58);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow57_LiteralBoolean58->setName("LiteralBoolean58");
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow57_LiteralBoolean58->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow57_LiteralBoolean58->setValue(true);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow57->setGuard(DefaultValue_Structures_A_bDefaultValues_ObjectFlow57_LiteralBoolean58);
			DefaultValue_Structures_A_bDefaultValues->addEdge(DefaultValue_Structures_A_bDefaultValues_ObjectFlow57);
				// ObjectFlow ObjectFlow96 from result to object
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow96->setThisActivityEdgePtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow96);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow96->setName("ObjectFlow96");
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow96->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow96->setSource(DefaultValue_Structures_A_bDefaultValues_Create_B_1_result);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow96->setTarget(DefaultValue_Structures_A_bDefaultValues_B_1_p_object);
					// LiteralBoolean LiteralBoolean97
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow96_LiteralBoolean97->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow96_LiteralBoolean97);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow96_LiteralBoolean97->setName("LiteralBoolean97");
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow96_LiteralBoolean97->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow96_LiteralBoolean97->setValue(true);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow96->setGuard(DefaultValue_Structures_A_bDefaultValues_ObjectFlow96_LiteralBoolean97);
			DefaultValue_Structures_A_bDefaultValues->addEdge(DefaultValue_Structures_A_bDefaultValues_ObjectFlow96);
				// ObjectFlow ObjectFlow99 from result to value
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow99->setThisActivityEdgePtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow99);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow99->setName("ObjectFlow99");
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow99->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow99->setSource(DefaultValue_Structures_A_bDefaultValues_Integer_1_result);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow99->setTarget(DefaultValue_Structures_A_bDefaultValues_B_1_p_value);
					// LiteralBoolean LiteralBoolean100
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow99_LiteralBoolean100->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow99_LiteralBoolean100);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow99_LiteralBoolean100->setName("LiteralBoolean100");
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow99_LiteralBoolean100->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow99_LiteralBoolean100->setValue(true);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow99->setGuard(DefaultValue_Structures_A_bDefaultValues_ObjectFlow99_LiteralBoolean100);
			DefaultValue_Structures_A_bDefaultValues->addEdge(DefaultValue_Structures_A_bDefaultValues_ObjectFlow99);
				// ObjectFlow ObjectFlow60 from result to bList_node
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow60->setThisActivityEdgePtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow60);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow60->setName("ObjectFlow60");
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow60->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow60->setSource(DefaultValue_Structures_A_bDefaultValues_B_3_p_result);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow60->setTarget(DefaultValue_Structures_A_bDefaultValues_bList_node);
					// LiteralBoolean LiteralBoolean61
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow60_LiteralBoolean61->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow60_LiteralBoolean61);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow60_LiteralBoolean61->setName("LiteralBoolean61");
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow60_LiteralBoolean61->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow60_LiteralBoolean61->setValue(true);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow60->setGuard(DefaultValue_Structures_A_bDefaultValues_ObjectFlow60_LiteralBoolean61);
			DefaultValue_Structures_A_bDefaultValues->addEdge(DefaultValue_Structures_A_bDefaultValues_ObjectFlow60);
				// ObjectFlow ObjectFlow102 from result to object
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow102->setThisActivityEdgePtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow102);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow102->setName("ObjectFlow102");
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow102->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow102->setSource(DefaultValue_Structures_A_bDefaultValues_Create_B_3_result);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow102->setTarget(DefaultValue_Structures_A_bDefaultValues_B_3_p_object);
					// LiteralBoolean LiteralBoolean104
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow102_LiteralBoolean104->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow102_LiteralBoolean104);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow102_LiteralBoolean104->setName("LiteralBoolean104");
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow102_LiteralBoolean104->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow102_LiteralBoolean104->setValue(true);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow102->setGuard(DefaultValue_Structures_A_bDefaultValues_ObjectFlow102_LiteralBoolean104);
			DefaultValue_Structures_A_bDefaultValues->addEdge(DefaultValue_Structures_A_bDefaultValues_ObjectFlow102);
				// ControlFlow ControlFlow105 from B_3.p to Create B_4
				DefaultValue_Structures_A_bDefaultValues_ControlFlow105->setThisActivityEdgePtr(DefaultValue_Structures_A_bDefaultValues_ControlFlow105);
				DefaultValue_Structures_A_bDefaultValues_ControlFlow105->setName("ControlFlow105");
				DefaultValue_Structures_A_bDefaultValues_ControlFlow105->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_ControlFlow105->setSource(DefaultValue_Structures_A_bDefaultValues_B_3_p);
				DefaultValue_Structures_A_bDefaultValues_ControlFlow105->setTarget(DefaultValue_Structures_A_bDefaultValues_Create_B_4);
			DefaultValue_Structures_A_bDefaultValues->addEdge(DefaultValue_Structures_A_bDefaultValues_ControlFlow105);
				// ObjectFlow ObjectFlow65 from result to object
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow65->setThisActivityEdgePtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow65);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow65->setName("ObjectFlow65");
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow65->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow65->setSource(DefaultValue_Structures_A_bDefaultValues_Create_B_2_result);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow65->setTarget(DefaultValue_Structures_A_bDefaultValues_B_2_p_object);
					// LiteralBoolean LiteralBoolean66
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow65_LiteralBoolean66->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow65_LiteralBoolean66);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow65_LiteralBoolean66->setName("LiteralBoolean66");
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow65_LiteralBoolean66->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow65_LiteralBoolean66->setValue(true);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow65->setGuard(DefaultValue_Structures_A_bDefaultValues_ObjectFlow65_LiteralBoolean66);
			DefaultValue_Structures_A_bDefaultValues->addEdge(DefaultValue_Structures_A_bDefaultValues_ObjectFlow65);
				// ObjectFlow ObjectFlow68 from result to value
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow68->setThisActivityEdgePtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow68);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow68->setName("ObjectFlow68");
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow68->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow68->setSource(DefaultValue_Structures_A_bDefaultValues_Integer_4_result);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow68->setTarget(DefaultValue_Structures_A_bDefaultValues_B_4_p_value);
					// LiteralBoolean LiteralBoolean70
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow68_LiteralBoolean70->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow68_LiteralBoolean70);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow68_LiteralBoolean70->setName("LiteralBoolean70");
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow68_LiteralBoolean70->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow68_LiteralBoolean70->setValue(true);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow68->setGuard(DefaultValue_Structures_A_bDefaultValues_ObjectFlow68_LiteralBoolean70);
			DefaultValue_Structures_A_bDefaultValues->addEdge(DefaultValue_Structures_A_bDefaultValues_ObjectFlow68);
				// ObjectFlow ObjectFlow71 from result to object
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow71->setThisActivityEdgePtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow71);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow71->setName("ObjectFlow71");
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow71->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow71->setSource(DefaultValue_Structures_A_bDefaultValues_Create_B_4_result);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow71->setTarget(DefaultValue_Structures_A_bDefaultValues_B_4_p_object);
					// LiteralBoolean LiteralBoolean73
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow71_LiteralBoolean73->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow71_LiteralBoolean73);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow71_LiteralBoolean73->setName("LiteralBoolean73");
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow71_LiteralBoolean73->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow71_LiteralBoolean73->setValue(true);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow71->setGuard(DefaultValue_Structures_A_bDefaultValues_ObjectFlow71_LiteralBoolean73);
			DefaultValue_Structures_A_bDefaultValues->addEdge(DefaultValue_Structures_A_bDefaultValues_ObjectFlow71);
				// ObjectFlow ObjectFlow114 from result to bList_node
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow114->setThisActivityEdgePtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow114);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow114->setName("ObjectFlow114");
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow114->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow114->setSource(DefaultValue_Structures_A_bDefaultValues_B_1_p_result);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow114->setTarget(DefaultValue_Structures_A_bDefaultValues_bList_node);
					// LiteralBoolean LiteralBoolean115
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow114_LiteralBoolean115->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow114_LiteralBoolean115);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow114_LiteralBoolean115->setName("LiteralBoolean115");
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow114_LiteralBoolean115->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow114_LiteralBoolean115->setValue(true);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow114->setGuard(DefaultValue_Structures_A_bDefaultValues_ObjectFlow114_LiteralBoolean115);
			DefaultValue_Structures_A_bDefaultValues->addEdge(DefaultValue_Structures_A_bDefaultValues_ObjectFlow114);
				// ObjectFlow ObjectFlow74 from result to value
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow74->setThisActivityEdgePtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow74);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow74->setName("ObjectFlow74");
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow74->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow74->setSource(DefaultValue_Structures_A_bDefaultValues_Integer_3_result);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow74->setTarget(DefaultValue_Structures_A_bDefaultValues_B_3_p_value);
					// LiteralBoolean LiteralBoolean75
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow74_LiteralBoolean75->setThisElementPtr(DefaultValue_Structures_A_bDefaultValues_ObjectFlow74_LiteralBoolean75);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow74_LiteralBoolean75->setName("LiteralBoolean75");
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow74_LiteralBoolean75->setVisibility(VisibilityKind::public_);
					DefaultValue_Structures_A_bDefaultValues_ObjectFlow74_LiteralBoolean75->setValue(true);
				DefaultValue_Structures_A_bDefaultValues_ObjectFlow74->setGuard(DefaultValue_Structures_A_bDefaultValues_ObjectFlow74_LiteralBoolean75);
			DefaultValue_Structures_A_bDefaultValues->addEdge(DefaultValue_Structures_A_bDefaultValues_ObjectFlow74);
		DefaultValue_Structures_A->addOwnedBehavior(DefaultValue_Structures_A_bDefaultValues);
		
			// Operation A_A
			DefaultValue_Structures_A_A_A->setThisOperationPtr(DefaultValue_Structures_A_A_A);
			DefaultValue_Structures_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			DefaultValue_Structures_A_A_A->setName("A_A");
			DefaultValue_Structures_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				DefaultValue_Structures_A_A_A_result->setThisElementPtr(DefaultValue_Structures_A_A_A_result);
				DefaultValue_Structures_A_A_A_result->setName("result");
				DefaultValue_Structures_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_A_A_A_result->setType(DefaultValue_Structures_A);
				DefaultValue_Structures_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			DefaultValue_Structures_A_A_A->addOwnedParameter(DefaultValue_Structures_A_A_A_result);
		DefaultValue_Structures_A->addOwnedOperation(DefaultValue_Structures_A_A_A);
	DefaultValue_Structures->addPackagedElement(DefaultValue_Structures_A);
		// Class B
		DefaultValue_Structures_B->setThisClass_Ptr(DefaultValue_Structures_B);
		DefaultValue_Structures_B->setName("B");
		DefaultValue_Structures_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			DefaultValue_Structures_B_p->setThisElementPtr(DefaultValue_Structures_B_p);
			DefaultValue_Structures_B_p->setName("p");
			DefaultValue_Structures_B_p->setVisibility(VisibilityKind::public_);
			
			DefaultValue_Structures_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		DefaultValue_Structures_B->addOwnedAttribute(DefaultValue_Structures_B_p);
		
		
			// Operation B_B
			DefaultValue_Structures_B_B_B->setThisOperationPtr(DefaultValue_Structures_B_B_B);
			DefaultValue_Structures_B_B_B->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			DefaultValue_Structures_B_B_B->setName("B_B");
			DefaultValue_Structures_B_B_B->setVisibility(VisibilityKind::public_);
				// Parameter result
				DefaultValue_Structures_B_B_B_result->setThisElementPtr(DefaultValue_Structures_B_B_B_result);
				DefaultValue_Structures_B_B_B_result->setName("result");
				DefaultValue_Structures_B_B_B_result->setVisibility(VisibilityKind::public_);
				
				DefaultValue_Structures_B_B_B_result->setType(DefaultValue_Structures_B);
				DefaultValue_Structures_B_B_B_result->setDirection(ParameterDirectionKind::return_);
			DefaultValue_Structures_B_B_B->addOwnedParameter(DefaultValue_Structures_B_B_B_result);
		DefaultValue_Structures_B->addOwnedOperation(DefaultValue_Structures_B_B_B);
	DefaultValue_Structures->addPackagedElement(DefaultValue_Structures_B);
		// Activity main
		DefaultValue_Structures_main->setThisActivityPtr(DefaultValue_Structures_main);
		DefaultValue_Structures_main->setName("main");
		DefaultValue_Structures_main->setVisibility(VisibilityKind::public_);
			// CallBehaviorAction instantiate_A
			DefaultValue_Structures_main_instantiate_A->setThisExecutableNodePtr(DefaultValue_Structures_main_instantiate_A);
			DefaultValue_Structures_main_instantiate_A->setName("instantiate_A");
			DefaultValue_Structures_main_instantiate_A->setVisibility(VisibilityKind::public_);
			
				// OutputPin a
				DefaultValue_Structures_main_instantiate_A_a->setThisElementPtr(DefaultValue_Structures_main_instantiate_A_a);
				DefaultValue_Structures_main_instantiate_A_a->setName("a");
				DefaultValue_Structures_main_instantiate_A_a->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_main_instantiate_A_a->setType(DefaultValue_Structures_A);
			DefaultValue_Structures_main_instantiate_A->addResult(DefaultValue_Structures_main_instantiate_A_a);
			DefaultValue_Structures_main_instantiate_A->setBehavior(DefaultValue_Structures_instantiate_A);
		DefaultValue_Structures_main->addNode(DefaultValue_Structures_main_instantiate_A);
			// CallBehaviorAction assert_A
			DefaultValue_Structures_main_assert_A->setThisExecutableNodePtr(DefaultValue_Structures_main_assert_A);
			DefaultValue_Structures_main_assert_A->setName("assert_A");
			DefaultValue_Structures_main_assert_A->setVisibility(VisibilityKind::public_);
			DefaultValue_Structures_main_assert_A->setBehavior(DefaultValue_Structures_assert_A);
				// InputPin a
				DefaultValue_Structures_main_assert_A_a->setThisElementPtr(DefaultValue_Structures_main_assert_A_a);
				DefaultValue_Structures_main_assert_A_a->setName("a");
				DefaultValue_Structures_main_assert_A_a->setVisibility(VisibilityKind::public_);
			DefaultValue_Structures_main_assert_A->addArgument(DefaultValue_Structures_main_assert_A_a);
		DefaultValue_Structures_main->addNode(DefaultValue_Structures_main_assert_A);
			// ObjectFlow ObjectFlow131 from a to a
			DefaultValue_Structures_main_ObjectFlow131->setThisActivityEdgePtr(DefaultValue_Structures_main_ObjectFlow131);
			DefaultValue_Structures_main_ObjectFlow131->setName("ObjectFlow131");
			DefaultValue_Structures_main_ObjectFlow131->setVisibility(VisibilityKind::public_);
			
			DefaultValue_Structures_main_ObjectFlow131->setSource(DefaultValue_Structures_main_instantiate_A_a);
			DefaultValue_Structures_main_ObjectFlow131->setTarget(DefaultValue_Structures_main_assert_A_a);
				// LiteralBoolean LiteralBoolean133
				DefaultValue_Structures_main_ObjectFlow131_LiteralBoolean133->setThisElementPtr(DefaultValue_Structures_main_ObjectFlow131_LiteralBoolean133);
				DefaultValue_Structures_main_ObjectFlow131_LiteralBoolean133->setName("LiteralBoolean133");
				DefaultValue_Structures_main_ObjectFlow131_LiteralBoolean133->setVisibility(VisibilityKind::public_);
				DefaultValue_Structures_main_ObjectFlow131_LiteralBoolean133->setValue(true);
			DefaultValue_Structures_main_ObjectFlow131->setGuard(DefaultValue_Structures_main_ObjectFlow131_LiteralBoolean133);
		DefaultValue_Structures_main->addEdge(DefaultValue_Structures_main_ObjectFlow131);
	DefaultValue_Structures->addPackagedElement(DefaultValue_Structures_main);
}
