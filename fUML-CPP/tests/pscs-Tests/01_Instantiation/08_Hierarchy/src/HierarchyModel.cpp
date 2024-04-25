/*
 * HierarchyModel.cpp
 * 
 * Auto-generated file
 */

#include "HierarchyModel.h"

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/actions/CallBehaviorAction.h>
#include <uml/actions/ReadStructuralFeatureAction.h>
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
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <uml/activities/ControlFlow.h>
#include <uml/activities/ForkNode.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <utils/library/FoundationalModelLibraryModel.h>
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

using namespace Hierarchy;
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

HierarchyModel::HierarchyModel()
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

HierarchyModel::~HierarchyModel()
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

const std::shared_ptr<HierarchyModel>& HierarchyModel::Instance()
{
	static std::shared_ptr<HierarchyModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new HierarchyModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void HierarchyModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model Hierarchy
	 */
	Hierarchy.reset(new Package());
	this->addToElementRepository("Hierarchy", Hierarchy);
		Hierarchy_instantiate_A.reset(new Activity());
		this->addToElementRepository("instantiate_A", Hierarchy_instantiate_A);
			Hierarchy_instantiate_A_A_.reset(new CallOperationAction());
			this->addToElementRepository("A()", Hierarchy_instantiate_A_A_);
				Hierarchy_instantiate_A_A__result.reset(new OutputPin());
				this->addToElementRepository("result", Hierarchy_instantiate_A_A__result);
					Hierarchy_instantiate_A_A__result_LiteralUnlimitedNatural0.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural0", Hierarchy_instantiate_A_A__result_LiteralUnlimitedNatural0);
					Hierarchy_instantiate_A_A__result_LiteralInteger1.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger1", Hierarchy_instantiate_A_A__result_LiteralInteger1);
					Hierarchy_instantiate_A_A__result_LiteralInteger2.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger2", Hierarchy_instantiate_A_A__result_LiteralInteger2);
				Hierarchy_instantiate_A_A__target.reset(new InputPin());
				this->addToElementRepository("target", Hierarchy_instantiate_A_A__target);
					Hierarchy_instantiate_A_A__target_LiteralUnlimitedNatural3.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural3", Hierarchy_instantiate_A_A__target_LiteralUnlimitedNatural3);
					Hierarchy_instantiate_A_A__target_LiteralInteger4.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger4", Hierarchy_instantiate_A_A__target_LiteralInteger4);
			Hierarchy_instantiate_A_ObjectFlow5.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow5", Hierarchy_instantiate_A_ObjectFlow5);
				Hierarchy_instantiate_A_ObjectFlow5_LiteralInteger6.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger6", Hierarchy_instantiate_A_ObjectFlow5_LiteralInteger6);
				Hierarchy_instantiate_A_ObjectFlow5_LiteralBoolean7.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean7", Hierarchy_instantiate_A_ObjectFlow5_LiteralBoolean7);
			Hierarchy_instantiate_A_a_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_node", Hierarchy_instantiate_A_a_node);
				Hierarchy_instantiate_A_a_node_LiteralInteger8.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger8", Hierarchy_instantiate_A_a_node_LiteralInteger8);
			Hierarchy_instantiate_A_Create_A.reset(new CreateObjectAction());
			this->addToElementRepository("Create_A", Hierarchy_instantiate_A_Create_A);
				Hierarchy_instantiate_A_Create_A_result.reset(new OutputPin());
				this->addToElementRepository("result", Hierarchy_instantiate_A_Create_A_result);
					Hierarchy_instantiate_A_Create_A_result_LiteralUnlimitedNatural9.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural9", Hierarchy_instantiate_A_Create_A_result_LiteralUnlimitedNatural9);
					Hierarchy_instantiate_A_Create_A_result_LiteralInteger10.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger10", Hierarchy_instantiate_A_Create_A_result_LiteralInteger10);
			Hierarchy_instantiate_A_a.reset(new Parameter());
			this->addToElementRepository("a", Hierarchy_instantiate_A_a);
			Hierarchy_instantiate_A_ObjectFlow11.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow11", Hierarchy_instantiate_A_ObjectFlow11);
				Hierarchy_instantiate_A_ObjectFlow11_LiteralInteger12.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger12", Hierarchy_instantiate_A_ObjectFlow11_LiteralInteger12);
				Hierarchy_instantiate_A_ObjectFlow11_LiteralBoolean13.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean13", Hierarchy_instantiate_A_ObjectFlow11_LiteralBoolean13);
		Hierarchy_assert_A.reset(new Activity());
		this->addToElementRepository("assert_A", Hierarchy_assert_A);
			Hierarchy_assert_A_testNonEmptyList.reset(new OpaqueBehavior());
			this->addToElementRepository("testNonEmptyList", Hierarchy_assert_A_testNonEmptyList);
				Hierarchy_assert_A_testNonEmptyList_listSize.reset(new Parameter());
				this->addToElementRepository("listSize", Hierarchy_assert_A_testNonEmptyList_listSize);
			Hierarchy_assert_A_Test_a_b_c_d_e_size.reset(new CallBehaviorAction());
			this->addToElementRepository("Test a.b.c.d.e.size", Hierarchy_assert_A_Test_a_b_c_d_e_size);
				Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize.reset(new InputPin());
				this->addToElementRepository("listSize", Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize);
					Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize_LiteralUnlimitedNatural14.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural14", Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize_LiteralUnlimitedNatural14);
					Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize_LiteralInteger15.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger15", Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize_LiteralInteger15);
					Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize_LiteralInteger16.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger16", Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize_LiteralInteger16);
			Hierarchy_assert_A_ObjectFlow17.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow17", Hierarchy_assert_A_ObjectFlow17);
				Hierarchy_assert_A_ObjectFlow17_LiteralBoolean18.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean18", Hierarchy_assert_A_ObjectFlow17_LiteralBoolean18);
				Hierarchy_assert_A_ObjectFlow17_LiteralInteger19.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger19", Hierarchy_assert_A_ObjectFlow17_LiteralInteger19);
			Hierarchy_assert_A_Read_a_b_c_d.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.b.c.d", Hierarchy_assert_A_Read_a_b_c_d);
				Hierarchy_assert_A_Read_a_b_c_d_object.reset(new InputPin());
				this->addToElementRepository("object", Hierarchy_assert_A_Read_a_b_c_d_object);
					Hierarchy_assert_A_Read_a_b_c_d_object_LiteralInteger20.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger20", Hierarchy_assert_A_Read_a_b_c_d_object_LiteralInteger20);
					Hierarchy_assert_A_Read_a_b_c_d_object_LiteralUnlimitedNatural21.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural21", Hierarchy_assert_A_Read_a_b_c_d_object_LiteralUnlimitedNatural21);
				Hierarchy_assert_A_Read_a_b_c_d_result.reset(new OutputPin());
				this->addToElementRepository("result", Hierarchy_assert_A_Read_a_b_c_d_result);
					Hierarchy_assert_A_Read_a_b_c_d_result_LiteralUnlimitedNatural22.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural22", Hierarchy_assert_A_Read_a_b_c_d_result_LiteralUnlimitedNatural22);
					Hierarchy_assert_A_Read_a_b_c_d_result_LiteralInteger23.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger23", Hierarchy_assert_A_Read_a_b_c_d_result_LiteralInteger23);
			Hierarchy_assert_A_Fork_a_b_c_d.reset(new ForkNode());
			this->addToElementRepository("Fork a.b.c.d", Hierarchy_assert_A_Fork_a_b_c_d);
			Hierarchy_assert_A_String_a_b_c_d_e_size.reset(new ValueSpecificationAction());
			this->addToElementRepository("String(a.b.c.d.e.size)", Hierarchy_assert_A_String_a_b_c_d_e_size);
				Hierarchy_assert_A_String_a_b_c_d_e_size_LiteralString24.reset(new LiteralString());
				this->addToElementRepository("LiteralString24", Hierarchy_assert_A_String_a_b_c_d_e_size_LiteralString24);
				Hierarchy_assert_A_String_a_b_c_d_e_size_result.reset(new OutputPin());
				this->addToElementRepository("result", Hierarchy_assert_A_String_a_b_c_d_e_size_result);
					Hierarchy_assert_A_String_a_b_c_d_e_size_result_LiteralInteger25.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger25", Hierarchy_assert_A_String_a_b_c_d_e_size_result_LiteralInteger25);
					Hierarchy_assert_A_String_a_b_c_d_e_size_result_LiteralUnlimitedNatural26.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural26", Hierarchy_assert_A_String_a_b_c_d_e_size_result_LiteralUnlimitedNatural26);
			Hierarchy_assert_A_a_b_c_d_e_size_.reset(new CallBehaviorAction());
			this->addToElementRepository("a.b.c.d.e.size()", Hierarchy_assert_A_a_b_c_d_e_size_);
				Hierarchy_assert_A_a_b_c_d_e_size__list.reset(new InputPin());
				this->addToElementRepository("list", Hierarchy_assert_A_a_b_c_d_e_size__list);
					Hierarchy_assert_A_a_b_c_d_e_size__list_LiteralUnlimitedNatural27.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural27", Hierarchy_assert_A_a_b_c_d_e_size__list_LiteralUnlimitedNatural27);
					Hierarchy_assert_A_a_b_c_d_e_size__list_LiteralInteger28.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger28", Hierarchy_assert_A_a_b_c_d_e_size__list_LiteralInteger28);
					Hierarchy_assert_A_a_b_c_d_e_size__list_LiteralInteger29.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger29", Hierarchy_assert_A_a_b_c_d_e_size__list_LiteralInteger29);
				Hierarchy_assert_A_a_b_c_d_e_size__result.reset(new OutputPin());
				this->addToElementRepository("result", Hierarchy_assert_A_a_b_c_d_e_size__result);
					Hierarchy_assert_A_a_b_c_d_e_size__result_LiteralUnlimitedNatural30.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural30", Hierarchy_assert_A_a_b_c_d_e_size__result_LiteralUnlimitedNatural30);
					Hierarchy_assert_A_a_b_c_d_e_size__result_LiteralInteger31.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger31", Hierarchy_assert_A_a_b_c_d_e_size__result_LiteralInteger31);
					Hierarchy_assert_A_a_b_c_d_e_size__result_LiteralInteger32.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger32", Hierarchy_assert_A_a_b_c_d_e_size__result_LiteralInteger32);
			Hierarchy_assert_A_ObjectFlow33.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow33", Hierarchy_assert_A_ObjectFlow33);
				Hierarchy_assert_A_ObjectFlow33_LiteralBoolean34.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean34", Hierarchy_assert_A_ObjectFlow33_LiteralBoolean34);
				Hierarchy_assert_A_ObjectFlow33_LiteralInteger35.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger35", Hierarchy_assert_A_ObjectFlow33_LiteralInteger35);
			Hierarchy_assert_A_WriteLine_a_b_c.reset(new CallBehaviorAction());
			this->addToElementRepository("WriteLine_a.b.c", Hierarchy_assert_A_WriteLine_a_b_c);
				Hierarchy_assert_A_WriteLine_a_b_c_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", Hierarchy_assert_A_WriteLine_a_b_c_errorStatus);
					Hierarchy_assert_A_WriteLine_a_b_c_errorStatus_LiteralInteger36.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger36", Hierarchy_assert_A_WriteLine_a_b_c_errorStatus_LiteralInteger36);
					Hierarchy_assert_A_WriteLine_a_b_c_errorStatus_LiteralInteger37.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger37", Hierarchy_assert_A_WriteLine_a_b_c_errorStatus_LiteralInteger37);
					Hierarchy_assert_A_WriteLine_a_b_c_errorStatus_LiteralUnlimitedNatural38.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural38", Hierarchy_assert_A_WriteLine_a_b_c_errorStatus_LiteralUnlimitedNatural38);
				Hierarchy_assert_A_WriteLine_a_b_c_value.reset(new InputPin());
				this->addToElementRepository("value", Hierarchy_assert_A_WriteLine_a_b_c_value);
					Hierarchy_assert_A_WriteLine_a_b_c_value_LiteralUnlimitedNatural39.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural39", Hierarchy_assert_A_WriteLine_a_b_c_value_LiteralUnlimitedNatural39);
					Hierarchy_assert_A_WriteLine_a_b_c_value_LiteralInteger40.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger40", Hierarchy_assert_A_WriteLine_a_b_c_value_LiteralInteger40);
					Hierarchy_assert_A_WriteLine_a_b_c_value_LiteralInteger41.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger41", Hierarchy_assert_A_WriteLine_a_b_c_value_LiteralInteger41);
			Hierarchy_assert_A_ControlFlow42.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow42", Hierarchy_assert_A_ControlFlow42);
			Hierarchy_assert_A_Fork_a_b_c.reset(new ForkNode());
			this->addToElementRepository("Fork a.b.c", Hierarchy_assert_A_Fork_a_b_c);
			Hierarchy_assert_A_WriteLine_a_b_c_d_e.reset(new CallBehaviorAction());
			this->addToElementRepository("WriteLine_a.b.c.d.e", Hierarchy_assert_A_WriteLine_a_b_c_d_e);
				Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus);
					Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus_LiteralUnlimitedNatural43.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural43", Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus_LiteralUnlimitedNatural43);
					Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus_LiteralInteger44.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger44", Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus_LiteralInteger44);
					Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus_LiteralInteger45.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger45", Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus_LiteralInteger45);
				Hierarchy_assert_A_WriteLine_a_b_c_d_e_value.reset(new InputPin());
				this->addToElementRepository("value", Hierarchy_assert_A_WriteLine_a_b_c_d_e_value);
					Hierarchy_assert_A_WriteLine_a_b_c_d_e_value_LiteralUnlimitedNatural46.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural46", Hierarchy_assert_A_WriteLine_a_b_c_d_e_value_LiteralUnlimitedNatural46);
					Hierarchy_assert_A_WriteLine_a_b_c_d_e_value_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", Hierarchy_assert_A_WriteLine_a_b_c_d_e_value_LiteralInteger47);
					Hierarchy_assert_A_WriteLine_a_b_c_d_e_value_LiteralInteger48.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger48", Hierarchy_assert_A_WriteLine_a_b_c_d_e_value_LiteralInteger48);
			Hierarchy_assert_A_a_b_c_d_size_.reset(new CallBehaviorAction());
			this->addToElementRepository("a.b.c.d.size()", Hierarchy_assert_A_a_b_c_d_size_);
				Hierarchy_assert_A_a_b_c_d_size__list.reset(new InputPin());
				this->addToElementRepository("list", Hierarchy_assert_A_a_b_c_d_size__list);
					Hierarchy_assert_A_a_b_c_d_size__list_LiteralInteger49.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger49", Hierarchy_assert_A_a_b_c_d_size__list_LiteralInteger49);
					Hierarchy_assert_A_a_b_c_d_size__list_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural50", Hierarchy_assert_A_a_b_c_d_size__list_LiteralUnlimitedNatural50);
					Hierarchy_assert_A_a_b_c_d_size__list_LiteralInteger51.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger51", Hierarchy_assert_A_a_b_c_d_size__list_LiteralInteger51);
				Hierarchy_assert_A_a_b_c_d_size__result.reset(new OutputPin());
				this->addToElementRepository("result", Hierarchy_assert_A_a_b_c_d_size__result);
					Hierarchy_assert_A_a_b_c_d_size__result_LiteralUnlimitedNatural52.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural52", Hierarchy_assert_A_a_b_c_d_size__result_LiteralUnlimitedNatural52);
					Hierarchy_assert_A_a_b_c_d_size__result_LiteralInteger53.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger53", Hierarchy_assert_A_a_b_c_d_size__result_LiteralInteger53);
					Hierarchy_assert_A_a_b_c_d_size__result_LiteralInteger54.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger54", Hierarchy_assert_A_a_b_c_d_size__result_LiteralInteger54);
			Hierarchy_assert_A_Test_a_b_c_d_size.reset(new CallBehaviorAction());
			this->addToElementRepository("Test a.b.c.d.size", Hierarchy_assert_A_Test_a_b_c_d_size);
				Hierarchy_assert_A_Test_a_b_c_d_size_listSize.reset(new InputPin());
				this->addToElementRepository("listSize", Hierarchy_assert_A_Test_a_b_c_d_size_listSize);
					Hierarchy_assert_A_Test_a_b_c_d_size_listSize_LiteralUnlimitedNatural55.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural55", Hierarchy_assert_A_Test_a_b_c_d_size_listSize_LiteralUnlimitedNatural55);
					Hierarchy_assert_A_Test_a_b_c_d_size_listSize_LiteralInteger56.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger56", Hierarchy_assert_A_Test_a_b_c_d_size_listSize_LiteralInteger56);
					Hierarchy_assert_A_Test_a_b_c_d_size_listSize_LiteralInteger57.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger57", Hierarchy_assert_A_Test_a_b_c_d_size_listSize_LiteralInteger57);
			Hierarchy_assert_A_a.reset(new Parameter());
			this->addToElementRepository("a", Hierarchy_assert_A_a);
			Hierarchy_assert_A_ControlFlow58.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow58", Hierarchy_assert_A_ControlFlow58);
			Hierarchy_assert_A_a_b_size_.reset(new CallBehaviorAction());
			this->addToElementRepository("a.b.size()", Hierarchy_assert_A_a_b_size_);
				Hierarchy_assert_A_a_b_size__result.reset(new OutputPin());
				this->addToElementRepository("result", Hierarchy_assert_A_a_b_size__result);
					Hierarchy_assert_A_a_b_size__result_LiteralInteger59.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger59", Hierarchy_assert_A_a_b_size__result_LiteralInteger59);
					Hierarchy_assert_A_a_b_size__result_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural60", Hierarchy_assert_A_a_b_size__result_LiteralUnlimitedNatural60);
					Hierarchy_assert_A_a_b_size__result_LiteralInteger61.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger61", Hierarchy_assert_A_a_b_size__result_LiteralInteger61);
				Hierarchy_assert_A_a_b_size__list.reset(new InputPin());
				this->addToElementRepository("list", Hierarchy_assert_A_a_b_size__list);
					Hierarchy_assert_A_a_b_size__list_LiteralInteger62.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger62", Hierarchy_assert_A_a_b_size__list_LiteralInteger62);
					Hierarchy_assert_A_a_b_size__list_LiteralInteger63.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger63", Hierarchy_assert_A_a_b_size__list_LiteralInteger63);
					Hierarchy_assert_A_a_b_size__list_LiteralUnlimitedNatural64.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural64", Hierarchy_assert_A_a_b_size__list_LiteralUnlimitedNatural64);
			Hierarchy_assert_A_ObjectFlow65.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow65", Hierarchy_assert_A_ObjectFlow65);
				Hierarchy_assert_A_ObjectFlow65_LiteralInteger66.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger66", Hierarchy_assert_A_ObjectFlow65_LiteralInteger66);
				Hierarchy_assert_A_ObjectFlow65_LiteralBoolean67.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean67", Hierarchy_assert_A_ObjectFlow65_LiteralBoolean67);
			Hierarchy_assert_A_a_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_node", Hierarchy_assert_A_a_node);
				Hierarchy_assert_A_a_node_LiteralInteger68.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger68", Hierarchy_assert_A_a_node_LiteralInteger68);
			Hierarchy_assert_A_ObjectFlow69.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow69", Hierarchy_assert_A_ObjectFlow69);
				Hierarchy_assert_A_ObjectFlow69_LiteralInteger70.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger70", Hierarchy_assert_A_ObjectFlow69_LiteralInteger70);
				Hierarchy_assert_A_ObjectFlow69_LiteralBoolean71.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean71", Hierarchy_assert_A_ObjectFlow69_LiteralBoolean71);
			Hierarchy_assert_A_testEmptyList.reset(new OpaqueBehavior());
			this->addToElementRepository("testEmptyList", Hierarchy_assert_A_testEmptyList);
				Hierarchy_assert_A_testEmptyList_listSize.reset(new Parameter());
				this->addToElementRepository("listSize", Hierarchy_assert_A_testEmptyList_listSize);
			Hierarchy_assert_A_ControlFlow72.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow72", Hierarchy_assert_A_ControlFlow72);
			Hierarchy_assert_A_String_a_b_c_d_size.reset(new ValueSpecificationAction());
			this->addToElementRepository("String(a.b.c.d.size)", Hierarchy_assert_A_String_a_b_c_d_size);
				Hierarchy_assert_A_String_a_b_c_d_size_result.reset(new OutputPin());
				this->addToElementRepository("result", Hierarchy_assert_A_String_a_b_c_d_size_result);
					Hierarchy_assert_A_String_a_b_c_d_size_result_LiteralUnlimitedNatural73.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural73", Hierarchy_assert_A_String_a_b_c_d_size_result_LiteralUnlimitedNatural73);
					Hierarchy_assert_A_String_a_b_c_d_size_result_LiteralInteger74.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger74", Hierarchy_assert_A_String_a_b_c_d_size_result_LiteralInteger74);
				Hierarchy_assert_A_String_a_b_c_d_size_LiteralString75.reset(new LiteralString());
				this->addToElementRepository("LiteralString75", Hierarchy_assert_A_String_a_b_c_d_size_LiteralString75);
			Hierarchy_assert_A_ObjectFlow76.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow76", Hierarchy_assert_A_ObjectFlow76);
				Hierarchy_assert_A_ObjectFlow76_LiteralInteger77.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger77", Hierarchy_assert_A_ObjectFlow76_LiteralInteger77);
				Hierarchy_assert_A_ObjectFlow76_LiteralBoolean78.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean78", Hierarchy_assert_A_ObjectFlow76_LiteralBoolean78);
			Hierarchy_assert_A_ControlFlow79.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow79", Hierarchy_assert_A_ControlFlow79);
			Hierarchy_assert_A_ControlFlow80.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow80", Hierarchy_assert_A_ControlFlow80);
			Hierarchy_assert_A_ControlFlow81.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow81", Hierarchy_assert_A_ControlFlow81);
			Hierarchy_assert_A_WriteLine_a_b.reset(new CallBehaviorAction());
			this->addToElementRepository("WriteLine_a.b", Hierarchy_assert_A_WriteLine_a_b);
				Hierarchy_assert_A_WriteLine_a_b_value.reset(new InputPin());
				this->addToElementRepository("value", Hierarchy_assert_A_WriteLine_a_b_value);
					Hierarchy_assert_A_WriteLine_a_b_value_LiteralInteger82.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger82", Hierarchy_assert_A_WriteLine_a_b_value_LiteralInteger82);
					Hierarchy_assert_A_WriteLine_a_b_value_LiteralUnlimitedNatural83.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural83", Hierarchy_assert_A_WriteLine_a_b_value_LiteralUnlimitedNatural83);
					Hierarchy_assert_A_WriteLine_a_b_value_LiteralInteger84.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger84", Hierarchy_assert_A_WriteLine_a_b_value_LiteralInteger84);
				Hierarchy_assert_A_WriteLine_a_b_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", Hierarchy_assert_A_WriteLine_a_b_errorStatus);
					Hierarchy_assert_A_WriteLine_a_b_errorStatus_LiteralInteger85.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger85", Hierarchy_assert_A_WriteLine_a_b_errorStatus_LiteralInteger85);
					Hierarchy_assert_A_WriteLine_a_b_errorStatus_LiteralInteger86.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger86", Hierarchy_assert_A_WriteLine_a_b_errorStatus_LiteralInteger86);
					Hierarchy_assert_A_WriteLine_a_b_errorStatus_LiteralUnlimitedNatural87.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural87", Hierarchy_assert_A_WriteLine_a_b_errorStatus_LiteralUnlimitedNatural87);
			Hierarchy_assert_A_ControlFlow88.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow88", Hierarchy_assert_A_ControlFlow88);
			Hierarchy_assert_A_ObjectFlow89.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow89", Hierarchy_assert_A_ObjectFlow89);
				Hierarchy_assert_A_ObjectFlow89_LiteralInteger90.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger90", Hierarchy_assert_A_ObjectFlow89_LiteralInteger90);
				Hierarchy_assert_A_ObjectFlow89_LiteralBoolean91.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean91", Hierarchy_assert_A_ObjectFlow89_LiteralBoolean91);
			Hierarchy_assert_A_ObjectFlow92.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow92", Hierarchy_assert_A_ObjectFlow92);
				Hierarchy_assert_A_ObjectFlow92_LiteralInteger93.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger93", Hierarchy_assert_A_ObjectFlow92_LiteralInteger93);
				Hierarchy_assert_A_ObjectFlow92_LiteralBoolean94.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean94", Hierarchy_assert_A_ObjectFlow92_LiteralBoolean94);
			Hierarchy_assert_A_a_b_c_size_.reset(new CallBehaviorAction());
			this->addToElementRepository("a.b.c.size()", Hierarchy_assert_A_a_b_c_size_);
				Hierarchy_assert_A_a_b_c_size__result.reset(new OutputPin());
				this->addToElementRepository("result", Hierarchy_assert_A_a_b_c_size__result);
					Hierarchy_assert_A_a_b_c_size__result_LiteralInteger95.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger95", Hierarchy_assert_A_a_b_c_size__result_LiteralInteger95);
					Hierarchy_assert_A_a_b_c_size__result_LiteralInteger96.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger96", Hierarchy_assert_A_a_b_c_size__result_LiteralInteger96);
					Hierarchy_assert_A_a_b_c_size__result_LiteralUnlimitedNatural97.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural97", Hierarchy_assert_A_a_b_c_size__result_LiteralUnlimitedNatural97);
				Hierarchy_assert_A_a_b_c_size__list.reset(new InputPin());
				this->addToElementRepository("list", Hierarchy_assert_A_a_b_c_size__list);
					Hierarchy_assert_A_a_b_c_size__list_LiteralInteger98.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger98", Hierarchy_assert_A_a_b_c_size__list_LiteralInteger98);
					Hierarchy_assert_A_a_b_c_size__list_LiteralInteger99.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger99", Hierarchy_assert_A_a_b_c_size__list_LiteralInteger99);
					Hierarchy_assert_A_a_b_c_size__list_LiteralUnlimitedNatural100.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural100", Hierarchy_assert_A_a_b_c_size__list_LiteralUnlimitedNatural100);
			Hierarchy_assert_A_ControlFlow101.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow101", Hierarchy_assert_A_ControlFlow101);
			Hierarchy_assert_A_ControlFlow102.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow102", Hierarchy_assert_A_ControlFlow102);
			Hierarchy_assert_A_ControlFlow103.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow103", Hierarchy_assert_A_ControlFlow103);
			Hierarchy_assert_A_ObjectFlow104.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow104", Hierarchy_assert_A_ObjectFlow104);
				Hierarchy_assert_A_ObjectFlow104_LiteralBoolean105.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean105", Hierarchy_assert_A_ObjectFlow104_LiteralBoolean105);
				Hierarchy_assert_A_ObjectFlow104_LiteralInteger106.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger106", Hierarchy_assert_A_ObjectFlow104_LiteralInteger106);
			Hierarchy_assert_A_ObjectFlow107.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow107", Hierarchy_assert_A_ObjectFlow107);
				Hierarchy_assert_A_ObjectFlow107_LiteralBoolean108.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean108", Hierarchy_assert_A_ObjectFlow107_LiteralBoolean108);
				Hierarchy_assert_A_ObjectFlow107_LiteralInteger109.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger109", Hierarchy_assert_A_ObjectFlow107_LiteralInteger109);
			Hierarchy_assert_A_Read_a_b.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.b", Hierarchy_assert_A_Read_a_b);
				Hierarchy_assert_A_Read_a_b_result.reset(new OutputPin());
				this->addToElementRepository("result", Hierarchy_assert_A_Read_a_b_result);
					Hierarchy_assert_A_Read_a_b_result_LiteralInteger110.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger110", Hierarchy_assert_A_Read_a_b_result_LiteralInteger110);
					Hierarchy_assert_A_Read_a_b_result_LiteralUnlimitedNatural111.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural111", Hierarchy_assert_A_Read_a_b_result_LiteralUnlimitedNatural111);
				Hierarchy_assert_A_Read_a_b_object.reset(new InputPin());
				this->addToElementRepository("object", Hierarchy_assert_A_Read_a_b_object);
					Hierarchy_assert_A_Read_a_b_object_LiteralInteger112.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger112", Hierarchy_assert_A_Read_a_b_object_LiteralInteger112);
					Hierarchy_assert_A_Read_a_b_object_LiteralUnlimitedNatural113.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural113", Hierarchy_assert_A_Read_a_b_object_LiteralUnlimitedNatural113);
			Hierarchy_assert_A_WriteLine_a_b_c_d.reset(new CallBehaviorAction());
			this->addToElementRepository("WriteLine_a.b.c.d", Hierarchy_assert_A_WriteLine_a_b_c_d);
				Hierarchy_assert_A_WriteLine_a_b_c_d_value.reset(new InputPin());
				this->addToElementRepository("value", Hierarchy_assert_A_WriteLine_a_b_c_d_value);
					Hierarchy_assert_A_WriteLine_a_b_c_d_value_LiteralInteger114.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger114", Hierarchy_assert_A_WriteLine_a_b_c_d_value_LiteralInteger114);
					Hierarchy_assert_A_WriteLine_a_b_c_d_value_LiteralInteger115.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger115", Hierarchy_assert_A_WriteLine_a_b_c_d_value_LiteralInteger115);
					Hierarchy_assert_A_WriteLine_a_b_c_d_value_LiteralUnlimitedNatural116.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural116", Hierarchy_assert_A_WriteLine_a_b_c_d_value_LiteralUnlimitedNatural116);
				Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus.reset(new OutputPin());
				this->addToElementRepository("errorStatus", Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus);
					Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus_LiteralInteger117.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger117", Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus_LiteralInteger117);
					Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus_LiteralUnlimitedNatural118.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural118", Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus_LiteralUnlimitedNatural118);
					Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus_LiteralInteger119.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger119", Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus_LiteralInteger119);
			Hierarchy_assert_A_ObjectFlow120.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow120", Hierarchy_assert_A_ObjectFlow120);
				Hierarchy_assert_A_ObjectFlow120_LiteralBoolean121.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean121", Hierarchy_assert_A_ObjectFlow120_LiteralBoolean121);
				Hierarchy_assert_A_ObjectFlow120_LiteralInteger122.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger122", Hierarchy_assert_A_ObjectFlow120_LiteralInteger122);
			Hierarchy_assert_A_ObjectFlow123.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow123", Hierarchy_assert_A_ObjectFlow123);
				Hierarchy_assert_A_ObjectFlow123_LiteralBoolean124.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean124", Hierarchy_assert_A_ObjectFlow123_LiteralBoolean124);
				Hierarchy_assert_A_ObjectFlow123_LiteralInteger125.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger125", Hierarchy_assert_A_ObjectFlow123_LiteralInteger125);
			Hierarchy_assert_A_ObjectFlow126.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow126", Hierarchy_assert_A_ObjectFlow126);
				Hierarchy_assert_A_ObjectFlow126_LiteralBoolean127.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean127", Hierarchy_assert_A_ObjectFlow126_LiteralBoolean127);
				Hierarchy_assert_A_ObjectFlow126_LiteralInteger128.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger128", Hierarchy_assert_A_ObjectFlow126_LiteralInteger128);
			Hierarchy_assert_A_Test_a_b_size.reset(new CallBehaviorAction());
			this->addToElementRepository("Test a.b.size", Hierarchy_assert_A_Test_a_b_size);
				Hierarchy_assert_A_Test_a_b_size_listSize.reset(new InputPin());
				this->addToElementRepository("listSize", Hierarchy_assert_A_Test_a_b_size_listSize);
					Hierarchy_assert_A_Test_a_b_size_listSize_LiteralUnlimitedNatural129.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural129", Hierarchy_assert_A_Test_a_b_size_listSize_LiteralUnlimitedNatural129);
					Hierarchy_assert_A_Test_a_b_size_listSize_LiteralInteger130.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger130", Hierarchy_assert_A_Test_a_b_size_listSize_LiteralInteger130);
					Hierarchy_assert_A_Test_a_b_size_listSize_LiteralInteger131.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger131", Hierarchy_assert_A_Test_a_b_size_listSize_LiteralInteger131);
			Hierarchy_assert_A_String_a_b_size.reset(new ValueSpecificationAction());
			this->addToElementRepository("String(a.b.size)", Hierarchy_assert_A_String_a_b_size);
				Hierarchy_assert_A_String_a_b_size_LiteralString132.reset(new LiteralString());
				this->addToElementRepository("LiteralString132", Hierarchy_assert_A_String_a_b_size_LiteralString132);
				Hierarchy_assert_A_String_a_b_size_result.reset(new OutputPin());
				this->addToElementRepository("result", Hierarchy_assert_A_String_a_b_size_result);
					Hierarchy_assert_A_String_a_b_size_result_LiteralInteger133.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger133", Hierarchy_assert_A_String_a_b_size_result_LiteralInteger133);
					Hierarchy_assert_A_String_a_b_size_result_LiteralUnlimitedNatural134.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural134", Hierarchy_assert_A_String_a_b_size_result_LiteralUnlimitedNatural134);
			Hierarchy_assert_A_ControlFlow135.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow135", Hierarchy_assert_A_ControlFlow135);
			Hierarchy_assert_A_String_a_b_c_size.reset(new ValueSpecificationAction());
			this->addToElementRepository("String(a.b.c.size)", Hierarchy_assert_A_String_a_b_c_size);
				Hierarchy_assert_A_String_a_b_c_size_LiteralString136.reset(new LiteralString());
				this->addToElementRepository("LiteralString136", Hierarchy_assert_A_String_a_b_c_size_LiteralString136);
				Hierarchy_assert_A_String_a_b_c_size_result.reset(new OutputPin());
				this->addToElementRepository("result", Hierarchy_assert_A_String_a_b_c_size_result);
					Hierarchy_assert_A_String_a_b_c_size_result_LiteralInteger137.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger137", Hierarchy_assert_A_String_a_b_c_size_result_LiteralInteger137);
					Hierarchy_assert_A_String_a_b_c_size_result_LiteralUnlimitedNatural138.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural138", Hierarchy_assert_A_String_a_b_c_size_result_LiteralUnlimitedNatural138);
			Hierarchy_assert_A_ObjectFlow139.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow139", Hierarchy_assert_A_ObjectFlow139);
				Hierarchy_assert_A_ObjectFlow139_LiteralInteger140.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger140", Hierarchy_assert_A_ObjectFlow139_LiteralInteger140);
				Hierarchy_assert_A_ObjectFlow139_LiteralBoolean141.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean141", Hierarchy_assert_A_ObjectFlow139_LiteralBoolean141);
			Hierarchy_assert_A_ObjectFlow142.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow142", Hierarchy_assert_A_ObjectFlow142);
				Hierarchy_assert_A_ObjectFlow142_LiteralInteger143.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger143", Hierarchy_assert_A_ObjectFlow142_LiteralInteger143);
				Hierarchy_assert_A_ObjectFlow142_LiteralBoolean144.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean144", Hierarchy_assert_A_ObjectFlow142_LiteralBoolean144);
			Hierarchy_assert_A_Read_a_b_c.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.b.c", Hierarchy_assert_A_Read_a_b_c);
				Hierarchy_assert_A_Read_a_b_c_result.reset(new OutputPin());
				this->addToElementRepository("result", Hierarchy_assert_A_Read_a_b_c_result);
					Hierarchy_assert_A_Read_a_b_c_result_LiteralUnlimitedNatural145.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural145", Hierarchy_assert_A_Read_a_b_c_result_LiteralUnlimitedNatural145);
					Hierarchy_assert_A_Read_a_b_c_result_LiteralInteger146.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger146", Hierarchy_assert_A_Read_a_b_c_result_LiteralInteger146);
				Hierarchy_assert_A_Read_a_b_c_object.reset(new InputPin());
				this->addToElementRepository("object", Hierarchy_assert_A_Read_a_b_c_object);
					Hierarchy_assert_A_Read_a_b_c_object_LiteralInteger147.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger147", Hierarchy_assert_A_Read_a_b_c_object_LiteralInteger147);
					Hierarchy_assert_A_Read_a_b_c_object_LiteralUnlimitedNatural148.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural148", Hierarchy_assert_A_Read_a_b_c_object_LiteralUnlimitedNatural148);
			Hierarchy_assert_A_ObjectFlow149.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow149", Hierarchy_assert_A_ObjectFlow149);
				Hierarchy_assert_A_ObjectFlow149_LiteralBoolean150.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean150", Hierarchy_assert_A_ObjectFlow149_LiteralBoolean150);
				Hierarchy_assert_A_ObjectFlow149_LiteralInteger151.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger151", Hierarchy_assert_A_ObjectFlow149_LiteralInteger151);
			Hierarchy_assert_A_ObjectFlow152.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow152", Hierarchy_assert_A_ObjectFlow152);
				Hierarchy_assert_A_ObjectFlow152_LiteralBoolean153.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean153", Hierarchy_assert_A_ObjectFlow152_LiteralBoolean153);
				Hierarchy_assert_A_ObjectFlow152_LiteralInteger154.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger154", Hierarchy_assert_A_ObjectFlow152_LiteralInteger154);
			Hierarchy_assert_A_Read_a_b_c_d_e.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.b.c.d.e", Hierarchy_assert_A_Read_a_b_c_d_e);
				Hierarchy_assert_A_Read_a_b_c_d_e_result.reset(new OutputPin());
				this->addToElementRepository("result", Hierarchy_assert_A_Read_a_b_c_d_e_result);
					Hierarchy_assert_A_Read_a_b_c_d_e_result_LiteralUnlimitedNatural155.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural155", Hierarchy_assert_A_Read_a_b_c_d_e_result_LiteralUnlimitedNatural155);
					Hierarchy_assert_A_Read_a_b_c_d_e_result_LiteralInteger156.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger156", Hierarchy_assert_A_Read_a_b_c_d_e_result_LiteralInteger156);
				Hierarchy_assert_A_Read_a_b_c_d_e_object.reset(new InputPin());
				this->addToElementRepository("object", Hierarchy_assert_A_Read_a_b_c_d_e_object);
					Hierarchy_assert_A_Read_a_b_c_d_e_object_LiteralUnlimitedNatural157.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural157", Hierarchy_assert_A_Read_a_b_c_d_e_object_LiteralUnlimitedNatural157);
					Hierarchy_assert_A_Read_a_b_c_d_e_object_LiteralInteger158.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger158", Hierarchy_assert_A_Read_a_b_c_d_e_object_LiteralInteger158);
			Hierarchy_assert_A_ObjectFlow159.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow159", Hierarchy_assert_A_ObjectFlow159);
				Hierarchy_assert_A_ObjectFlow159_LiteralInteger160.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger160", Hierarchy_assert_A_ObjectFlow159_LiteralInteger160);
				Hierarchy_assert_A_ObjectFlow159_LiteralBoolean161.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean161", Hierarchy_assert_A_ObjectFlow159_LiteralBoolean161);
			Hierarchy_assert_A_ObjectFlow162.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow162", Hierarchy_assert_A_ObjectFlow162);
				Hierarchy_assert_A_ObjectFlow162_LiteralBoolean163.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean163", Hierarchy_assert_A_ObjectFlow162_LiteralBoolean163);
				Hierarchy_assert_A_ObjectFlow162_LiteralInteger164.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger164", Hierarchy_assert_A_ObjectFlow162_LiteralInteger164);
			Hierarchy_assert_A_Test_a_b_c_size.reset(new CallBehaviorAction());
			this->addToElementRepository("Test a.b.c.size", Hierarchy_assert_A_Test_a_b_c_size);
				Hierarchy_assert_A_Test_a_b_c_size_listSize.reset(new InputPin());
				this->addToElementRepository("listSize", Hierarchy_assert_A_Test_a_b_c_size_listSize);
					Hierarchy_assert_A_Test_a_b_c_size_listSize_LiteralUnlimitedNatural165.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural165", Hierarchy_assert_A_Test_a_b_c_size_listSize_LiteralUnlimitedNatural165);
					Hierarchy_assert_A_Test_a_b_c_size_listSize_LiteralInteger166.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger166", Hierarchy_assert_A_Test_a_b_c_size_listSize_LiteralInteger166);
					Hierarchy_assert_A_Test_a_b_c_size_listSize_LiteralInteger167.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger167", Hierarchy_assert_A_Test_a_b_c_size_listSize_LiteralInteger167);
			Hierarchy_assert_A_Fork_a_b.reset(new ForkNode());
			this->addToElementRepository("Fork a.b", Hierarchy_assert_A_Fork_a_b);
			Hierarchy_assert_A_ObjectFlow168.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow168", Hierarchy_assert_A_ObjectFlow168);
				Hierarchy_assert_A_ObjectFlow168_LiteralInteger169.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger169", Hierarchy_assert_A_ObjectFlow168_LiteralInteger169);
				Hierarchy_assert_A_ObjectFlow168_LiteralBoolean170.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean170", Hierarchy_assert_A_ObjectFlow168_LiteralBoolean170);
		Hierarchy_B.reset(new Class_());
		this->addToElementRepository("B", Hierarchy_B);
			Hierarchy_B_c.reset(new Property());
			this->addToElementRepository("c", Hierarchy_B_c);
		Hierarchy_D.reset(new Class_());
		this->addToElementRepository("D", Hierarchy_D);
			Hierarchy_D_e.reset(new Property());
			this->addToElementRepository("e", Hierarchy_D_e);
		Hierarchy_E.reset(new Class_());
		this->addToElementRepository("E", Hierarchy_E);
		Hierarchy_A.reset(new Class_());
		this->addToElementRepository("A", Hierarchy_A);
			Hierarchy_A_b.reset(new Property());
			this->addToElementRepository("b", Hierarchy_A_b);
			Hierarchy_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", Hierarchy_A_A_A);
				Hierarchy_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", Hierarchy_A_A_A_result);
		Hierarchy_main.reset(new Activity());
		this->addToElementRepository("main", Hierarchy_main);
			Hierarchy_main_ObjectFlow171.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow171", Hierarchy_main_ObjectFlow171);
				Hierarchy_main_ObjectFlow171_LiteralBoolean172.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean172", Hierarchy_main_ObjectFlow171_LiteralBoolean172);
				Hierarchy_main_ObjectFlow171_LiteralInteger173.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger173", Hierarchy_main_ObjectFlow171_LiteralInteger173);
			Hierarchy_main_instantiate_A.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A", Hierarchy_main_instantiate_A);
				Hierarchy_main_instantiate_A_a.reset(new OutputPin());
				this->addToElementRepository("a", Hierarchy_main_instantiate_A_a);
					Hierarchy_main_instantiate_A_a_LiteralUnlimitedNatural174.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural174", Hierarchy_main_instantiate_A_a_LiteralUnlimitedNatural174);
					Hierarchy_main_instantiate_A_a_LiteralInteger175.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger175", Hierarchy_main_instantiate_A_a_LiteralInteger175);
					Hierarchy_main_instantiate_A_a_LiteralInteger176.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger176", Hierarchy_main_instantiate_A_a_LiteralInteger176);
			Hierarchy_main_assert_A.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A", Hierarchy_main_assert_A);
				Hierarchy_main_assert_A_a.reset(new InputPin());
				this->addToElementRepository("a", Hierarchy_main_assert_A_a);
					Hierarchy_main_assert_A_a_LiteralInteger177.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger177", Hierarchy_main_assert_A_a_LiteralInteger177);
					Hierarchy_main_assert_A_a_LiteralInteger178.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger178", Hierarchy_main_assert_A_a_LiteralInteger178);
					Hierarchy_main_assert_A_a_LiteralUnlimitedNatural179.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural179", Hierarchy_main_assert_A_a_LiteralUnlimitedNatural179);
		Hierarchy_C.reset(new Class_());
		this->addToElementRepository("C", Hierarchy_C);
			Hierarchy_C_d.reset(new Property());
			this->addToElementRepository("d", Hierarchy_C_d);

	// Initialize public members
	/*
	 * Model Hierarchy
	 */
	Hierarchy->setThisPackagePtr(Hierarchy);
	Hierarchy->setName("Hierarchy");
	Hierarchy->setVisibility(VisibilityKind::public_);
		// Activity instantiate_A
		Hierarchy_instantiate_A->setThisActivityPtr(Hierarchy_instantiate_A);
		Hierarchy_instantiate_A->setName("instantiate_A");
		Hierarchy_instantiate_A->setVisibility(VisibilityKind::public_);
		
			// Parameter a
			Hierarchy_instantiate_A_a->setThisElementPtr(Hierarchy_instantiate_A_a);
			Hierarchy_instantiate_A_a->setName("a");
			Hierarchy_instantiate_A_a->setVisibility(VisibilityKind::public_);
			
			Hierarchy_instantiate_A_a->setType(Hierarchy_A);
			Hierarchy_instantiate_A_a->setDirection(ParameterDirectionKind::return_);
		Hierarchy_instantiate_A->addOwnedParameter(Hierarchy_instantiate_A_a);
			// CallOperationAction A()
			Hierarchy_instantiate_A_A_->setThisExecutableNodePtr(Hierarchy_instantiate_A_A_);
			Hierarchy_instantiate_A_A_->setName("A()");
			Hierarchy_instantiate_A_A_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				Hierarchy_instantiate_A_A__result->setThisElementPtr(Hierarchy_instantiate_A_A__result);
				Hierarchy_instantiate_A_A__result->setName("result");
				Hierarchy_instantiate_A_A__result->setVisibility(VisibilityKind::public_);
				Hierarchy_instantiate_A_A__result->setType(Hierarchy_A);
			Hierarchy_instantiate_A_A_->addResult(Hierarchy_instantiate_A_A__result);
			Hierarchy_instantiate_A_A_->setOperation(Hierarchy_A_A_A);
				// InputPin target
				Hierarchy_instantiate_A_A__target->setThisElementPtr(Hierarchy_instantiate_A_A__target);
				Hierarchy_instantiate_A_A__target->setName("target");
				Hierarchy_instantiate_A_A__target->setVisibility(VisibilityKind::public_);
				Hierarchy_instantiate_A_A__target->setType(Hierarchy_A);
			Hierarchy_instantiate_A_A_->setTarget(Hierarchy_instantiate_A_A__target);
		Hierarchy_instantiate_A->addNode(Hierarchy_instantiate_A_A_);
			// ActivityParameterNode a_node
			Hierarchy_instantiate_A_a_node->setThisElementPtr(Hierarchy_instantiate_A_a_node);
			Hierarchy_instantiate_A_a_node->setName("a_node");
			Hierarchy_instantiate_A_a_node->setVisibility(VisibilityKind::public_);
			
			Hierarchy_instantiate_A_a_node->setParameter(Hierarchy_instantiate_A_a);
		Hierarchy_instantiate_A->addNode(Hierarchy_instantiate_A_a_node);
			// CreateObjectAction Create_A
			Hierarchy_instantiate_A_Create_A->setThisExecutableNodePtr(Hierarchy_instantiate_A_Create_A);
			Hierarchy_instantiate_A_Create_A->setName("Create_A");
			Hierarchy_instantiate_A_Create_A->setVisibility(VisibilityKind::public_);
			Hierarchy_instantiate_A_Create_A->setClassifier(Hierarchy_A);
				// OutputPin result
				Hierarchy_instantiate_A_Create_A_result->setThisElementPtr(Hierarchy_instantiate_A_Create_A_result);
				Hierarchy_instantiate_A_Create_A_result->setName("result");
				Hierarchy_instantiate_A_Create_A_result->setVisibility(VisibilityKind::public_);
				Hierarchy_instantiate_A_Create_A_result->setType(Hierarchy_A);
			Hierarchy_instantiate_A_Create_A->setResult(Hierarchy_instantiate_A_Create_A_result);
		Hierarchy_instantiate_A->addNode(Hierarchy_instantiate_A_Create_A);
			// ObjectFlow ObjectFlow5 from result to target
			Hierarchy_instantiate_A_ObjectFlow5->setThisActivityEdgePtr(Hierarchy_instantiate_A_ObjectFlow5);
			Hierarchy_instantiate_A_ObjectFlow5->setName("ObjectFlow5");
			Hierarchy_instantiate_A_ObjectFlow5->setVisibility(VisibilityKind::public_);
			
			Hierarchy_instantiate_A_ObjectFlow5->setSource(Hierarchy_instantiate_A_Create_A_result);
			Hierarchy_instantiate_A_ObjectFlow5->setTarget(Hierarchy_instantiate_A_A__target);
				// LiteralBoolean LiteralBoolean7
				Hierarchy_instantiate_A_ObjectFlow5_LiteralBoolean7->setThisElementPtr(Hierarchy_instantiate_A_ObjectFlow5_LiteralBoolean7);
				Hierarchy_instantiate_A_ObjectFlow5_LiteralBoolean7->setName("LiteralBoolean7");
				Hierarchy_instantiate_A_ObjectFlow5_LiteralBoolean7->setVisibility(VisibilityKind::public_);
				Hierarchy_instantiate_A_ObjectFlow5_LiteralBoolean7->setValue(true);
			Hierarchy_instantiate_A_ObjectFlow5->setGuard(Hierarchy_instantiate_A_ObjectFlow5_LiteralBoolean7);
		Hierarchy_instantiate_A->addEdge(Hierarchy_instantiate_A_ObjectFlow5);
			// ObjectFlow ObjectFlow11 from result to a_node
			Hierarchy_instantiate_A_ObjectFlow11->setThisActivityEdgePtr(Hierarchy_instantiate_A_ObjectFlow11);
			Hierarchy_instantiate_A_ObjectFlow11->setName("ObjectFlow11");
			Hierarchy_instantiate_A_ObjectFlow11->setVisibility(VisibilityKind::public_);
			
			Hierarchy_instantiate_A_ObjectFlow11->setSource(Hierarchy_instantiate_A_A__result);
			Hierarchy_instantiate_A_ObjectFlow11->setTarget(Hierarchy_instantiate_A_a_node);
				// LiteralBoolean LiteralBoolean13
				Hierarchy_instantiate_A_ObjectFlow11_LiteralBoolean13->setThisElementPtr(Hierarchy_instantiate_A_ObjectFlow11_LiteralBoolean13);
				Hierarchy_instantiate_A_ObjectFlow11_LiteralBoolean13->setName("LiteralBoolean13");
				Hierarchy_instantiate_A_ObjectFlow11_LiteralBoolean13->setVisibility(VisibilityKind::public_);
				Hierarchy_instantiate_A_ObjectFlow11_LiteralBoolean13->setValue(true);
			Hierarchy_instantiate_A_ObjectFlow11->setGuard(Hierarchy_instantiate_A_ObjectFlow11_LiteralBoolean13);
		Hierarchy_instantiate_A->addEdge(Hierarchy_instantiate_A_ObjectFlow11);
	Hierarchy->addPackagedElement(Hierarchy_instantiate_A);
		// Activity assert_A
		Hierarchy_assert_A->setThisActivityPtr(Hierarchy_assert_A);
		Hierarchy_assert_A->setName("assert_A");
		Hierarchy_assert_A->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testNonEmptyList
			Hierarchy_assert_A_testNonEmptyList->setThisClass_Ptr(Hierarchy_assert_A_testNonEmptyList);
			Hierarchy_assert_A_testNonEmptyList->setName("testNonEmptyList");
			Hierarchy_assert_A_testNonEmptyList->setVisibility(VisibilityKind::public_);
			
				// Parameter listSize
				Hierarchy_assert_A_testNonEmptyList_listSize->setThisElementPtr(Hierarchy_assert_A_testNonEmptyList_listSize);
				Hierarchy_assert_A_testNonEmptyList_listSize->setName("listSize");
				Hierarchy_assert_A_testNonEmptyList_listSize->setVisibility(VisibilityKind::public_);
				
				Hierarchy_assert_A_testNonEmptyList_listSize->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Hierarchy_assert_A_testNonEmptyList->addOwnedParameter(Hierarchy_assert_A_testNonEmptyList_listSize);
			Hierarchy_assert_A_testNonEmptyList->addLanguage("C++");
			Hierarchy_assert_A_testNonEmptyList->addLanguage("Include");
			Hierarchy_assert_A_testNonEmptyList->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	// Test parameter listSize 	int listSize = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument \" + inputParameters->at(0)->parameter->name +  \" = \" + std::to_string(listSize)); 	if(listSize > 0) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK << \" for \" << inputParameters->at(0)->parameter->name <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed\" << ASCII_BLK << \" for \"<< inputParameters->at(0)->parameter->name << \". Was: \" << listSize << \" ; Should: 1\"<<std::endl; 	}");
			Hierarchy_assert_A_testNonEmptyList->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> #include <uml/classification/Parameter.h>");
		Hierarchy_assert_A->addOwnedBehavior(Hierarchy_assert_A_testNonEmptyList);
			// FunctionBehavior testEmptyList
			Hierarchy_assert_A_testEmptyList->setThisClass_Ptr(Hierarchy_assert_A_testEmptyList);
			Hierarchy_assert_A_testEmptyList->setName("testEmptyList");
			Hierarchy_assert_A_testEmptyList->setVisibility(VisibilityKind::public_);
			
				// Parameter listSize
				Hierarchy_assert_A_testEmptyList_listSize->setThisElementPtr(Hierarchy_assert_A_testEmptyList_listSize);
				Hierarchy_assert_A_testEmptyList_listSize->setName("listSize");
				Hierarchy_assert_A_testEmptyList_listSize->setVisibility(VisibilityKind::public_);
				
				Hierarchy_assert_A_testEmptyList_listSize->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Hierarchy_assert_A_testEmptyList->addOwnedParameter(Hierarchy_assert_A_testEmptyList_listSize);
			Hierarchy_assert_A_testEmptyList->addLanguage("C++");
			Hierarchy_assert_A_testEmptyList->addLanguage("Include");
			Hierarchy_assert_A_testEmptyList->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	// Test parameter listSize 	int listSize = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument \" + inputParameters->at(0)->parameter->name +  \" = \" + std::to_string(listSize)); 	if(listSize == 0) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK << \" for \" << inputParameters->at(0)->parameter->name <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed\" << ASCII_BLK << \" for \"<< inputParameters->at(0)->parameter->name << \". Was: \" << listSize << \" ; Should: 0\"<<std::endl; 	}");
			Hierarchy_assert_A_testEmptyList->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> #include <uml/classification/Parameter.h>");
		Hierarchy_assert_A->addOwnedBehavior(Hierarchy_assert_A_testEmptyList);
			// Parameter a
			Hierarchy_assert_A_a->setThisElementPtr(Hierarchy_assert_A_a);
			Hierarchy_assert_A_a->setName("a");
			Hierarchy_assert_A_a->setVisibility(VisibilityKind::public_);
		Hierarchy_assert_A->addOwnedParameter(Hierarchy_assert_A_a);
			// CallBehaviorAction Test a.b.c.d.e.size
			Hierarchy_assert_A_Test_a_b_c_d_e_size->setThisExecutableNodePtr(Hierarchy_assert_A_Test_a_b_c_d_e_size);
			Hierarchy_assert_A_Test_a_b_c_d_e_size->setName("Test a.b.c.d.e.size");
			Hierarchy_assert_A_Test_a_b_c_d_e_size->setVisibility(VisibilityKind::public_);
			Hierarchy_assert_A_Test_a_b_c_d_e_size->setBehavior(Hierarchy_assert_A_testEmptyList);
				// InputPin listSize
				Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize->setThisElementPtr(Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize);
				Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize->setName("listSize");
				Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Hierarchy_assert_A_Test_a_b_c_d_e_size->addArgument(Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_Test_a_b_c_d_e_size);
			// ReadStructuralFeatureAction Read a.b.c.d
			Hierarchy_assert_A_Read_a_b_c_d->setThisExecutableNodePtr(Hierarchy_assert_A_Read_a_b_c_d);
			Hierarchy_assert_A_Read_a_b_c_d->setName("Read a.b.c.d");
			Hierarchy_assert_A_Read_a_b_c_d->setVisibility(VisibilityKind::public_);
			Hierarchy_assert_A_Read_a_b_c_d->setStructuralFeature(Hierarchy_C_d);
				// InputPin object
				Hierarchy_assert_A_Read_a_b_c_d_object->setThisElementPtr(Hierarchy_assert_A_Read_a_b_c_d_object);
				Hierarchy_assert_A_Read_a_b_c_d_object->setName("object");
				Hierarchy_assert_A_Read_a_b_c_d_object->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_Read_a_b_c_d_object->setType(Hierarchy_C);
			Hierarchy_assert_A_Read_a_b_c_d->setObject(Hierarchy_assert_A_Read_a_b_c_d_object);
				// OutputPin result
				Hierarchy_assert_A_Read_a_b_c_d_result->setThisElementPtr(Hierarchy_assert_A_Read_a_b_c_d_result);
				Hierarchy_assert_A_Read_a_b_c_d_result->setName("result");
				Hierarchy_assert_A_Read_a_b_c_d_result->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_Read_a_b_c_d_result->setType(Hierarchy_D);
			Hierarchy_assert_A_Read_a_b_c_d->setResult(Hierarchy_assert_A_Read_a_b_c_d_result);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_Read_a_b_c_d);
			// ForkNode Fork a.b.c.d
			Hierarchy_assert_A_Fork_a_b_c_d->setThisElementPtr(Hierarchy_assert_A_Fork_a_b_c_d);
			Hierarchy_assert_A_Fork_a_b_c_d->setName("Fork a.b.c.d");
			Hierarchy_assert_A_Fork_a_b_c_d->setVisibility(VisibilityKind::public_);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_Fork_a_b_c_d);
			// ValueSpecificationAction String(a.b.c.d.e.size)
			Hierarchy_assert_A_String_a_b_c_d_e_size->setThisExecutableNodePtr(Hierarchy_assert_A_String_a_b_c_d_e_size);
			Hierarchy_assert_A_String_a_b_c_d_e_size->setName("String(a.b.c.d.e.size)");
			Hierarchy_assert_A_String_a_b_c_d_e_size->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString24
				Hierarchy_assert_A_String_a_b_c_d_e_size_LiteralString24->setThisElementPtr(Hierarchy_assert_A_String_a_b_c_d_e_size_LiteralString24);
				Hierarchy_assert_A_String_a_b_c_d_e_size_LiteralString24->setName("LiteralString24");
				Hierarchy_assert_A_String_a_b_c_d_e_size_LiteralString24->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_String_a_b_c_d_e_size_LiteralString24->setValue("Asserting a.b.c.d.e.size == 0");
			Hierarchy_assert_A_String_a_b_c_d_e_size->setValue(Hierarchy_assert_A_String_a_b_c_d_e_size_LiteralString24);
				// OutputPin result
				Hierarchy_assert_A_String_a_b_c_d_e_size_result->setThisElementPtr(Hierarchy_assert_A_String_a_b_c_d_e_size_result);
				Hierarchy_assert_A_String_a_b_c_d_e_size_result->setName("result");
				Hierarchy_assert_A_String_a_b_c_d_e_size_result->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_String_a_b_c_d_e_size_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			Hierarchy_assert_A_String_a_b_c_d_e_size->setResult(Hierarchy_assert_A_String_a_b_c_d_e_size_result);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_String_a_b_c_d_e_size);
			// CallBehaviorAction a.b.c.d.e.size()
			Hierarchy_assert_A_a_b_c_d_e_size_->setThisExecutableNodePtr(Hierarchy_assert_A_a_b_c_d_e_size_);
			Hierarchy_assert_A_a_b_c_d_e_size_->setName("a.b.c.d.e.size()");
			Hierarchy_assert_A_a_b_c_d_e_size_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				Hierarchy_assert_A_a_b_c_d_e_size__result->setThisElementPtr(Hierarchy_assert_A_a_b_c_d_e_size__result);
				Hierarchy_assert_A_a_b_c_d_e_size__result->setName("result");
				Hierarchy_assert_A_a_b_c_d_e_size__result->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_a_b_c_d_e_size__result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Hierarchy_assert_A_a_b_c_d_e_size_->addResult(Hierarchy_assert_A_a_b_c_d_e_size__result);
			Hierarchy_assert_A_a_b_c_d_e_size_->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListSize);
				// InputPin list
				Hierarchy_assert_A_a_b_c_d_e_size__list->setThisElementPtr(Hierarchy_assert_A_a_b_c_d_e_size__list);
				Hierarchy_assert_A_a_b_c_d_e_size__list->setName("list");
				Hierarchy_assert_A_a_b_c_d_e_size__list->setVisibility(VisibilityKind::public_);
				
				Hierarchy_assert_A_a_b_c_d_e_size__list->setUpper(-1);
				Hierarchy_assert_A_a_b_c_d_e_size__list->setLower(0);
			Hierarchy_assert_A_a_b_c_d_e_size_->addArgument(Hierarchy_assert_A_a_b_c_d_e_size__list);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_a_b_c_d_e_size_);
			// CallBehaviorAction a.b.c.size()
			Hierarchy_assert_A_a_b_c_size_->setThisExecutableNodePtr(Hierarchy_assert_A_a_b_c_size_);
			Hierarchy_assert_A_a_b_c_size_->setName("a.b.c.size()");
			Hierarchy_assert_A_a_b_c_size_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				Hierarchy_assert_A_a_b_c_size__result->setThisElementPtr(Hierarchy_assert_A_a_b_c_size__result);
				Hierarchy_assert_A_a_b_c_size__result->setName("result");
				Hierarchy_assert_A_a_b_c_size__result->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_a_b_c_size__result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Hierarchy_assert_A_a_b_c_size_->addResult(Hierarchy_assert_A_a_b_c_size__result);
			Hierarchy_assert_A_a_b_c_size_->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListSize);
				// InputPin list
				Hierarchy_assert_A_a_b_c_size__list->setThisElementPtr(Hierarchy_assert_A_a_b_c_size__list);
				Hierarchy_assert_A_a_b_c_size__list->setName("list");
				Hierarchy_assert_A_a_b_c_size__list->setVisibility(VisibilityKind::public_);
				
				Hierarchy_assert_A_a_b_c_size__list->setUpper(-1);
				Hierarchy_assert_A_a_b_c_size__list->setLower(0);
			Hierarchy_assert_A_a_b_c_size_->addArgument(Hierarchy_assert_A_a_b_c_size__list);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_a_b_c_size_);
			// CallBehaviorAction WriteLine_a.b.c
			Hierarchy_assert_A_WriteLine_a_b_c->setThisExecutableNodePtr(Hierarchy_assert_A_WriteLine_a_b_c);
			Hierarchy_assert_A_WriteLine_a_b_c->setName("WriteLine_a.b.c");
			Hierarchy_assert_A_WriteLine_a_b_c->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				Hierarchy_assert_A_WriteLine_a_b_c_errorStatus->setThisElementPtr(Hierarchy_assert_A_WriteLine_a_b_c_errorStatus);
				Hierarchy_assert_A_WriteLine_a_b_c_errorStatus->setName("errorStatus");
				Hierarchy_assert_A_WriteLine_a_b_c_errorStatus->setVisibility(VisibilityKind::public_);
				
				Hierarchy_assert_A_WriteLine_a_b_c_errorStatus->setLower(0);
			Hierarchy_assert_A_WriteLine_a_b_c->addResult(Hierarchy_assert_A_WriteLine_a_b_c_errorStatus);
			Hierarchy_assert_A_WriteLine_a_b_c->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				Hierarchy_assert_A_WriteLine_a_b_c_value->setThisElementPtr(Hierarchy_assert_A_WriteLine_a_b_c_value);
				Hierarchy_assert_A_WriteLine_a_b_c_value->setName("value");
				Hierarchy_assert_A_WriteLine_a_b_c_value->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_WriteLine_a_b_c_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			Hierarchy_assert_A_WriteLine_a_b_c->addArgument(Hierarchy_assert_A_WriteLine_a_b_c_value);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_WriteLine_a_b_c);
			// ForkNode Fork a.b.c
			Hierarchy_assert_A_Fork_a_b_c->setThisElementPtr(Hierarchy_assert_A_Fork_a_b_c);
			Hierarchy_assert_A_Fork_a_b_c->setName("Fork a.b.c");
			Hierarchy_assert_A_Fork_a_b_c->setVisibility(VisibilityKind::public_);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_Fork_a_b_c);
			// CallBehaviorAction WriteLine_a.b.c.d.e
			Hierarchy_assert_A_WriteLine_a_b_c_d_e->setThisExecutableNodePtr(Hierarchy_assert_A_WriteLine_a_b_c_d_e);
			Hierarchy_assert_A_WriteLine_a_b_c_d_e->setName("WriteLine_a.b.c.d.e");
			Hierarchy_assert_A_WriteLine_a_b_c_d_e->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus->setThisElementPtr(Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus);
				Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus->setName("errorStatus");
				Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus->setVisibility(VisibilityKind::public_);
				
				Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus->setLower(0);
			Hierarchy_assert_A_WriteLine_a_b_c_d_e->addResult(Hierarchy_assert_A_WriteLine_a_b_c_d_e_errorStatus);
			Hierarchy_assert_A_WriteLine_a_b_c_d_e->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				Hierarchy_assert_A_WriteLine_a_b_c_d_e_value->setThisElementPtr(Hierarchy_assert_A_WriteLine_a_b_c_d_e_value);
				Hierarchy_assert_A_WriteLine_a_b_c_d_e_value->setName("value");
				Hierarchy_assert_A_WriteLine_a_b_c_d_e_value->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_WriteLine_a_b_c_d_e_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			Hierarchy_assert_A_WriteLine_a_b_c_d_e->addArgument(Hierarchy_assert_A_WriteLine_a_b_c_d_e_value);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_WriteLine_a_b_c_d_e);
			// CallBehaviorAction a.b.c.d.size()
			Hierarchy_assert_A_a_b_c_d_size_->setThisExecutableNodePtr(Hierarchy_assert_A_a_b_c_d_size_);
			Hierarchy_assert_A_a_b_c_d_size_->setName("a.b.c.d.size()");
			Hierarchy_assert_A_a_b_c_d_size_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				Hierarchy_assert_A_a_b_c_d_size__result->setThisElementPtr(Hierarchy_assert_A_a_b_c_d_size__result);
				Hierarchy_assert_A_a_b_c_d_size__result->setName("result");
				Hierarchy_assert_A_a_b_c_d_size__result->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_a_b_c_d_size__result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Hierarchy_assert_A_a_b_c_d_size_->addResult(Hierarchy_assert_A_a_b_c_d_size__result);
			Hierarchy_assert_A_a_b_c_d_size_->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListSize);
				// InputPin list
				Hierarchy_assert_A_a_b_c_d_size__list->setThisElementPtr(Hierarchy_assert_A_a_b_c_d_size__list);
				Hierarchy_assert_A_a_b_c_d_size__list->setName("list");
				Hierarchy_assert_A_a_b_c_d_size__list->setVisibility(VisibilityKind::public_);
				
				Hierarchy_assert_A_a_b_c_d_size__list->setUpper(-1);
				Hierarchy_assert_A_a_b_c_d_size__list->setLower(0);
			Hierarchy_assert_A_a_b_c_d_size_->addArgument(Hierarchy_assert_A_a_b_c_d_size__list);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_a_b_c_d_size_);
			// ReadStructuralFeatureAction Read a.b
			Hierarchy_assert_A_Read_a_b->setThisExecutableNodePtr(Hierarchy_assert_A_Read_a_b);
			Hierarchy_assert_A_Read_a_b->setName("Read a.b");
			Hierarchy_assert_A_Read_a_b->setVisibility(VisibilityKind::public_);
			Hierarchy_assert_A_Read_a_b->setStructuralFeature(Hierarchy_A_b);
				// InputPin object
				Hierarchy_assert_A_Read_a_b_object->setThisElementPtr(Hierarchy_assert_A_Read_a_b_object);
				Hierarchy_assert_A_Read_a_b_object->setName("object");
				Hierarchy_assert_A_Read_a_b_object->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_Read_a_b_object->setType(Hierarchy_A);
			Hierarchy_assert_A_Read_a_b->setObject(Hierarchy_assert_A_Read_a_b_object);
				// OutputPin result
				Hierarchy_assert_A_Read_a_b_result->setThisElementPtr(Hierarchy_assert_A_Read_a_b_result);
				Hierarchy_assert_A_Read_a_b_result->setName("result");
				Hierarchy_assert_A_Read_a_b_result->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_Read_a_b_result->setType(Hierarchy_B);
			Hierarchy_assert_A_Read_a_b->setResult(Hierarchy_assert_A_Read_a_b_result);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_Read_a_b);
			// CallBehaviorAction Test a.b.c.d.size
			Hierarchy_assert_A_Test_a_b_c_d_size->setThisExecutableNodePtr(Hierarchy_assert_A_Test_a_b_c_d_size);
			Hierarchy_assert_A_Test_a_b_c_d_size->setName("Test a.b.c.d.size");
			Hierarchy_assert_A_Test_a_b_c_d_size->setVisibility(VisibilityKind::public_);
			Hierarchy_assert_A_Test_a_b_c_d_size->setBehavior(Hierarchy_assert_A_testNonEmptyList);
				// InputPin listSize
				Hierarchy_assert_A_Test_a_b_c_d_size_listSize->setThisElementPtr(Hierarchy_assert_A_Test_a_b_c_d_size_listSize);
				Hierarchy_assert_A_Test_a_b_c_d_size_listSize->setName("listSize");
				Hierarchy_assert_A_Test_a_b_c_d_size_listSize->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_Test_a_b_c_d_size_listSize->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Hierarchy_assert_A_Test_a_b_c_d_size->addArgument(Hierarchy_assert_A_Test_a_b_c_d_size_listSize);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_Test_a_b_c_d_size);
			// CallBehaviorAction WriteLine_a.b.c.d
			Hierarchy_assert_A_WriteLine_a_b_c_d->setThisExecutableNodePtr(Hierarchy_assert_A_WriteLine_a_b_c_d);
			Hierarchy_assert_A_WriteLine_a_b_c_d->setName("WriteLine_a.b.c.d");
			Hierarchy_assert_A_WriteLine_a_b_c_d->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus->setThisElementPtr(Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus);
				Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus->setName("errorStatus");
				Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus->setVisibility(VisibilityKind::public_);
				
				Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus->setLower(0);
			Hierarchy_assert_A_WriteLine_a_b_c_d->addResult(Hierarchy_assert_A_WriteLine_a_b_c_d_errorStatus);
			Hierarchy_assert_A_WriteLine_a_b_c_d->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				Hierarchy_assert_A_WriteLine_a_b_c_d_value->setThisElementPtr(Hierarchy_assert_A_WriteLine_a_b_c_d_value);
				Hierarchy_assert_A_WriteLine_a_b_c_d_value->setName("value");
				Hierarchy_assert_A_WriteLine_a_b_c_d_value->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_WriteLine_a_b_c_d_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			Hierarchy_assert_A_WriteLine_a_b_c_d->addArgument(Hierarchy_assert_A_WriteLine_a_b_c_d_value);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_WriteLine_a_b_c_d);
			// CallBehaviorAction a.b.size()
			Hierarchy_assert_A_a_b_size_->setThisExecutableNodePtr(Hierarchy_assert_A_a_b_size_);
			Hierarchy_assert_A_a_b_size_->setName("a.b.size()");
			Hierarchy_assert_A_a_b_size_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				Hierarchy_assert_A_a_b_size__result->setThisElementPtr(Hierarchy_assert_A_a_b_size__result);
				Hierarchy_assert_A_a_b_size__result->setName("result");
				Hierarchy_assert_A_a_b_size__result->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_a_b_size__result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Hierarchy_assert_A_a_b_size_->addResult(Hierarchy_assert_A_a_b_size__result);
			Hierarchy_assert_A_a_b_size_->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_PrimitiveBehaviors_ListFunctions_ListSize);
				// InputPin list
				Hierarchy_assert_A_a_b_size__list->setThisElementPtr(Hierarchy_assert_A_a_b_size__list);
				Hierarchy_assert_A_a_b_size__list->setName("list");
				Hierarchy_assert_A_a_b_size__list->setVisibility(VisibilityKind::public_);
				
				Hierarchy_assert_A_a_b_size__list->setUpper(-1);
				Hierarchy_assert_A_a_b_size__list->setLower(0);
			Hierarchy_assert_A_a_b_size_->addArgument(Hierarchy_assert_A_a_b_size__list);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_a_b_size_);
			// CallBehaviorAction Test a.b.size
			Hierarchy_assert_A_Test_a_b_size->setThisExecutableNodePtr(Hierarchy_assert_A_Test_a_b_size);
			Hierarchy_assert_A_Test_a_b_size->setName("Test a.b.size");
			Hierarchy_assert_A_Test_a_b_size->setVisibility(VisibilityKind::public_);
			Hierarchy_assert_A_Test_a_b_size->setBehavior(Hierarchy_assert_A_testNonEmptyList);
				// InputPin listSize
				Hierarchy_assert_A_Test_a_b_size_listSize->setThisElementPtr(Hierarchy_assert_A_Test_a_b_size_listSize);
				Hierarchy_assert_A_Test_a_b_size_listSize->setName("listSize");
				Hierarchy_assert_A_Test_a_b_size_listSize->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_Test_a_b_size_listSize->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Hierarchy_assert_A_Test_a_b_size->addArgument(Hierarchy_assert_A_Test_a_b_size_listSize);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_Test_a_b_size);
			// ActivityParameterNode a_node
			Hierarchy_assert_A_a_node->setThisElementPtr(Hierarchy_assert_A_a_node);
			Hierarchy_assert_A_a_node->setName("a_node");
			Hierarchy_assert_A_a_node->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_a_node->setParameter(Hierarchy_assert_A_a);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_a_node);
			// ValueSpecificationAction String(a.b.size)
			Hierarchy_assert_A_String_a_b_size->setThisExecutableNodePtr(Hierarchy_assert_A_String_a_b_size);
			Hierarchy_assert_A_String_a_b_size->setName("String(a.b.size)");
			Hierarchy_assert_A_String_a_b_size->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString132
				Hierarchy_assert_A_String_a_b_size_LiteralString132->setThisElementPtr(Hierarchy_assert_A_String_a_b_size_LiteralString132);
				Hierarchy_assert_A_String_a_b_size_LiteralString132->setName("LiteralString132");
				Hierarchy_assert_A_String_a_b_size_LiteralString132->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_String_a_b_size_LiteralString132->setValue("Asserting a.b.size > 0");
			Hierarchy_assert_A_String_a_b_size->setValue(Hierarchy_assert_A_String_a_b_size_LiteralString132);
				// OutputPin result
				Hierarchy_assert_A_String_a_b_size_result->setThisElementPtr(Hierarchy_assert_A_String_a_b_size_result);
				Hierarchy_assert_A_String_a_b_size_result->setName("result");
				Hierarchy_assert_A_String_a_b_size_result->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_String_a_b_size_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			Hierarchy_assert_A_String_a_b_size->setResult(Hierarchy_assert_A_String_a_b_size_result);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_String_a_b_size);
			// ValueSpecificationAction String(a.b.c.size)
			Hierarchy_assert_A_String_a_b_c_size->setThisExecutableNodePtr(Hierarchy_assert_A_String_a_b_c_size);
			Hierarchy_assert_A_String_a_b_c_size->setName("String(a.b.c.size)");
			Hierarchy_assert_A_String_a_b_c_size->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString136
				Hierarchy_assert_A_String_a_b_c_size_LiteralString136->setThisElementPtr(Hierarchy_assert_A_String_a_b_c_size_LiteralString136);
				Hierarchy_assert_A_String_a_b_c_size_LiteralString136->setName("LiteralString136");
				Hierarchy_assert_A_String_a_b_c_size_LiteralString136->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_String_a_b_c_size_LiteralString136->setValue("Asserting a.b.c.size > 0");
			Hierarchy_assert_A_String_a_b_c_size->setValue(Hierarchy_assert_A_String_a_b_c_size_LiteralString136);
				// OutputPin result
				Hierarchy_assert_A_String_a_b_c_size_result->setThisElementPtr(Hierarchy_assert_A_String_a_b_c_size_result);
				Hierarchy_assert_A_String_a_b_c_size_result->setName("result");
				Hierarchy_assert_A_String_a_b_c_size_result->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_String_a_b_c_size_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			Hierarchy_assert_A_String_a_b_c_size->setResult(Hierarchy_assert_A_String_a_b_c_size_result);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_String_a_b_c_size);
			// ReadStructuralFeatureAction Read a.b.c
			Hierarchy_assert_A_Read_a_b_c->setThisExecutableNodePtr(Hierarchy_assert_A_Read_a_b_c);
			Hierarchy_assert_A_Read_a_b_c->setName("Read a.b.c");
			Hierarchy_assert_A_Read_a_b_c->setVisibility(VisibilityKind::public_);
			Hierarchy_assert_A_Read_a_b_c->setStructuralFeature(Hierarchy_B_c);
				// InputPin object
				Hierarchy_assert_A_Read_a_b_c_object->setThisElementPtr(Hierarchy_assert_A_Read_a_b_c_object);
				Hierarchy_assert_A_Read_a_b_c_object->setName("object");
				Hierarchy_assert_A_Read_a_b_c_object->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_Read_a_b_c_object->setType(Hierarchy_B);
			Hierarchy_assert_A_Read_a_b_c->setObject(Hierarchy_assert_A_Read_a_b_c_object);
				// OutputPin result
				Hierarchy_assert_A_Read_a_b_c_result->setThisElementPtr(Hierarchy_assert_A_Read_a_b_c_result);
				Hierarchy_assert_A_Read_a_b_c_result->setName("result");
				Hierarchy_assert_A_Read_a_b_c_result->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_Read_a_b_c_result->setType(Hierarchy_C);
			Hierarchy_assert_A_Read_a_b_c->setResult(Hierarchy_assert_A_Read_a_b_c_result);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_Read_a_b_c);
			// ValueSpecificationAction String(a.b.c.d.size)
			Hierarchy_assert_A_String_a_b_c_d_size->setThisExecutableNodePtr(Hierarchy_assert_A_String_a_b_c_d_size);
			Hierarchy_assert_A_String_a_b_c_d_size->setName("String(a.b.c.d.size)");
			Hierarchy_assert_A_String_a_b_c_d_size->setVisibility(VisibilityKind::public_);
				// LiteralString LiteralString75
				Hierarchy_assert_A_String_a_b_c_d_size_LiteralString75->setThisElementPtr(Hierarchy_assert_A_String_a_b_c_d_size_LiteralString75);
				Hierarchy_assert_A_String_a_b_c_d_size_LiteralString75->setName("LiteralString75");
				Hierarchy_assert_A_String_a_b_c_d_size_LiteralString75->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_String_a_b_c_d_size_LiteralString75->setValue("Asserting a.b.c.d.size > 0");
			Hierarchy_assert_A_String_a_b_c_d_size->setValue(Hierarchy_assert_A_String_a_b_c_d_size_LiteralString75);
				// OutputPin result
				Hierarchy_assert_A_String_a_b_c_d_size_result->setThisElementPtr(Hierarchy_assert_A_String_a_b_c_d_size_result);
				Hierarchy_assert_A_String_a_b_c_d_size_result->setName("result");
				Hierarchy_assert_A_String_a_b_c_d_size_result->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_String_a_b_c_d_size_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			Hierarchy_assert_A_String_a_b_c_d_size->setResult(Hierarchy_assert_A_String_a_b_c_d_size_result);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_String_a_b_c_d_size);
			// ReadStructuralFeatureAction Read a.b.c.d.e
			Hierarchy_assert_A_Read_a_b_c_d_e->setThisExecutableNodePtr(Hierarchy_assert_A_Read_a_b_c_d_e);
			Hierarchy_assert_A_Read_a_b_c_d_e->setName("Read a.b.c.d.e");
			Hierarchy_assert_A_Read_a_b_c_d_e->setVisibility(VisibilityKind::public_);
			Hierarchy_assert_A_Read_a_b_c_d_e->setStructuralFeature(Hierarchy_D_e);
				// InputPin object
				Hierarchy_assert_A_Read_a_b_c_d_e_object->setThisElementPtr(Hierarchy_assert_A_Read_a_b_c_d_e_object);
				Hierarchy_assert_A_Read_a_b_c_d_e_object->setName("object");
				Hierarchy_assert_A_Read_a_b_c_d_e_object->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_Read_a_b_c_d_e_object->setType(Hierarchy_D);
			Hierarchy_assert_A_Read_a_b_c_d_e->setObject(Hierarchy_assert_A_Read_a_b_c_d_e_object);
				// OutputPin result
				Hierarchy_assert_A_Read_a_b_c_d_e_result->setThisElementPtr(Hierarchy_assert_A_Read_a_b_c_d_e_result);
				Hierarchy_assert_A_Read_a_b_c_d_e_result->setName("result");
				Hierarchy_assert_A_Read_a_b_c_d_e_result->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_Read_a_b_c_d_e_result->setType(Hierarchy_E);
			Hierarchy_assert_A_Read_a_b_c_d_e->setResult(Hierarchy_assert_A_Read_a_b_c_d_e_result);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_Read_a_b_c_d_e);
			// CallBehaviorAction Test a.b.c.size
			Hierarchy_assert_A_Test_a_b_c_size->setThisExecutableNodePtr(Hierarchy_assert_A_Test_a_b_c_size);
			Hierarchy_assert_A_Test_a_b_c_size->setName("Test a.b.c.size");
			Hierarchy_assert_A_Test_a_b_c_size->setVisibility(VisibilityKind::public_);
			Hierarchy_assert_A_Test_a_b_c_size->setBehavior(Hierarchy_assert_A_testNonEmptyList);
				// InputPin listSize
				Hierarchy_assert_A_Test_a_b_c_size_listSize->setThisElementPtr(Hierarchy_assert_A_Test_a_b_c_size_listSize);
				Hierarchy_assert_A_Test_a_b_c_size_listSize->setName("listSize");
				Hierarchy_assert_A_Test_a_b_c_size_listSize->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_Test_a_b_c_size_listSize->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Hierarchy_assert_A_Test_a_b_c_size->addArgument(Hierarchy_assert_A_Test_a_b_c_size_listSize);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_Test_a_b_c_size);
			// CallBehaviorAction WriteLine_a.b
			Hierarchy_assert_A_WriteLine_a_b->setThisExecutableNodePtr(Hierarchy_assert_A_WriteLine_a_b);
			Hierarchy_assert_A_WriteLine_a_b->setName("WriteLine_a.b");
			Hierarchy_assert_A_WriteLine_a_b->setVisibility(VisibilityKind::public_);
			
				// OutputPin errorStatus
				Hierarchy_assert_A_WriteLine_a_b_errorStatus->setThisElementPtr(Hierarchy_assert_A_WriteLine_a_b_errorStatus);
				Hierarchy_assert_A_WriteLine_a_b_errorStatus->setName("errorStatus");
				Hierarchy_assert_A_WriteLine_a_b_errorStatus->setVisibility(VisibilityKind::public_);
				
				Hierarchy_assert_A_WriteLine_a_b_errorStatus->setLower(0);
			Hierarchy_assert_A_WriteLine_a_b->addResult(Hierarchy_assert_A_WriteLine_a_b_errorStatus);
			Hierarchy_assert_A_WriteLine_a_b->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
				// InputPin value
				Hierarchy_assert_A_WriteLine_a_b_value->setThisElementPtr(Hierarchy_assert_A_WriteLine_a_b_value);
				Hierarchy_assert_A_WriteLine_a_b_value->setName("value");
				Hierarchy_assert_A_WriteLine_a_b_value->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_WriteLine_a_b_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			Hierarchy_assert_A_WriteLine_a_b->addArgument(Hierarchy_assert_A_WriteLine_a_b_value);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_WriteLine_a_b);
			// ForkNode Fork a.b
			Hierarchy_assert_A_Fork_a_b->setThisElementPtr(Hierarchy_assert_A_Fork_a_b);
			Hierarchy_assert_A_Fork_a_b->setName("Fork a.b");
			Hierarchy_assert_A_Fork_a_b->setVisibility(VisibilityKind::public_);
		Hierarchy_assert_A->addNode(Hierarchy_assert_A_Fork_a_b);
			// ControlFlow ControlFlow88 from a.b.c.size() to String(a.b.c.size)
			Hierarchy_assert_A_ControlFlow88->setThisActivityEdgePtr(Hierarchy_assert_A_ControlFlow88);
			Hierarchy_assert_A_ControlFlow88->setName("ControlFlow88");
			Hierarchy_assert_A_ControlFlow88->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ControlFlow88->setSource(Hierarchy_assert_A_a_b_c_size_);
			Hierarchy_assert_A_ControlFlow88->setTarget(Hierarchy_assert_A_String_a_b_c_size);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ControlFlow88);
			// ObjectFlow ObjectFlow17 from result to Fork a.b.c
			Hierarchy_assert_A_ObjectFlow17->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow17);
			Hierarchy_assert_A_ObjectFlow17->setName("ObjectFlow17");
			Hierarchy_assert_A_ObjectFlow17->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow17->setSource(Hierarchy_assert_A_Read_a_b_c_result);
			Hierarchy_assert_A_ObjectFlow17->setTarget(Hierarchy_assert_A_Fork_a_b_c);
				// LiteralBoolean LiteralBoolean18
				Hierarchy_assert_A_ObjectFlow17_LiteralBoolean18->setThisElementPtr(Hierarchy_assert_A_ObjectFlow17_LiteralBoolean18);
				Hierarchy_assert_A_ObjectFlow17_LiteralBoolean18->setName("LiteralBoolean18");
				Hierarchy_assert_A_ObjectFlow17_LiteralBoolean18->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow17_LiteralBoolean18->setValue(true);
			Hierarchy_assert_A_ObjectFlow17->setGuard(Hierarchy_assert_A_ObjectFlow17_LiteralBoolean18);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow17);
			// ObjectFlow ObjectFlow89 from result to Fork a.b.c.d
			Hierarchy_assert_A_ObjectFlow89->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow89);
			Hierarchy_assert_A_ObjectFlow89->setName("ObjectFlow89");
			Hierarchy_assert_A_ObjectFlow89->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow89->setSource(Hierarchy_assert_A_Read_a_b_c_d_result);
			Hierarchy_assert_A_ObjectFlow89->setTarget(Hierarchy_assert_A_Fork_a_b_c_d);
				// LiteralBoolean LiteralBoolean91
				Hierarchy_assert_A_ObjectFlow89_LiteralBoolean91->setThisElementPtr(Hierarchy_assert_A_ObjectFlow89_LiteralBoolean91);
				Hierarchy_assert_A_ObjectFlow89_LiteralBoolean91->setName("LiteralBoolean91");
				Hierarchy_assert_A_ObjectFlow89_LiteralBoolean91->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow89_LiteralBoolean91->setValue(true);
			Hierarchy_assert_A_ObjectFlow89->setGuard(Hierarchy_assert_A_ObjectFlow89_LiteralBoolean91);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow89);
			// ObjectFlow ObjectFlow92 from result to Fork a.b
			Hierarchy_assert_A_ObjectFlow92->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow92);
			Hierarchy_assert_A_ObjectFlow92->setName("ObjectFlow92");
			Hierarchy_assert_A_ObjectFlow92->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow92->setSource(Hierarchy_assert_A_Read_a_b_result);
			Hierarchy_assert_A_ObjectFlow92->setTarget(Hierarchy_assert_A_Fork_a_b);
				// LiteralBoolean LiteralBoolean94
				Hierarchy_assert_A_ObjectFlow92_LiteralBoolean94->setThisElementPtr(Hierarchy_assert_A_ObjectFlow92_LiteralBoolean94);
				Hierarchy_assert_A_ObjectFlow92_LiteralBoolean94->setName("LiteralBoolean94");
				Hierarchy_assert_A_ObjectFlow92_LiteralBoolean94->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow92_LiteralBoolean94->setValue(true);
			Hierarchy_assert_A_ObjectFlow92->setGuard(Hierarchy_assert_A_ObjectFlow92_LiteralBoolean94);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow92);
			// ObjectFlow ObjectFlow33 from result to listSize
			Hierarchy_assert_A_ObjectFlow33->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow33);
			Hierarchy_assert_A_ObjectFlow33->setName("ObjectFlow33");
			Hierarchy_assert_A_ObjectFlow33->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow33->setSource(Hierarchy_assert_A_a_b_c_size__result);
			Hierarchy_assert_A_ObjectFlow33->setTarget(Hierarchy_assert_A_Test_a_b_c_size_listSize);
				// LiteralBoolean LiteralBoolean34
				Hierarchy_assert_A_ObjectFlow33_LiteralBoolean34->setThisElementPtr(Hierarchy_assert_A_ObjectFlow33_LiteralBoolean34);
				Hierarchy_assert_A_ObjectFlow33_LiteralBoolean34->setName("LiteralBoolean34");
				Hierarchy_assert_A_ObjectFlow33_LiteralBoolean34->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow33_LiteralBoolean34->setValue(true);
			Hierarchy_assert_A_ObjectFlow33->setGuard(Hierarchy_assert_A_ObjectFlow33_LiteralBoolean34);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow33);
			// ControlFlow ControlFlow101 from a.b.c.d.size() to String(a.b.c.d.size)
			Hierarchy_assert_A_ControlFlow101->setThisActivityEdgePtr(Hierarchy_assert_A_ControlFlow101);
			Hierarchy_assert_A_ControlFlow101->setName("ControlFlow101");
			Hierarchy_assert_A_ControlFlow101->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ControlFlow101->setSource(Hierarchy_assert_A_a_b_c_d_size_);
			Hierarchy_assert_A_ControlFlow101->setTarget(Hierarchy_assert_A_String_a_b_c_d_size);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ControlFlow101);
			// ControlFlow ControlFlow102 from WriteLine_a.b to Test a.b.size
			Hierarchy_assert_A_ControlFlow102->setThisActivityEdgePtr(Hierarchy_assert_A_ControlFlow102);
			Hierarchy_assert_A_ControlFlow102->setName("ControlFlow102");
			Hierarchy_assert_A_ControlFlow102->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ControlFlow102->setSource(Hierarchy_assert_A_WriteLine_a_b);
			Hierarchy_assert_A_ControlFlow102->setTarget(Hierarchy_assert_A_Test_a_b_size);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ControlFlow102);
			// ControlFlow ControlFlow103 from WriteLine_a.b.c.d.e to Test a.b.c.d.e.size
			Hierarchy_assert_A_ControlFlow103->setThisActivityEdgePtr(Hierarchy_assert_A_ControlFlow103);
			Hierarchy_assert_A_ControlFlow103->setName("ControlFlow103");
			Hierarchy_assert_A_ControlFlow103->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ControlFlow103->setSource(Hierarchy_assert_A_WriteLine_a_b_c_d_e);
			Hierarchy_assert_A_ControlFlow103->setTarget(Hierarchy_assert_A_Test_a_b_c_d_e_size);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ControlFlow103);
			// ControlFlow ControlFlow42 from a.b.size() to String(a.b.size)
			Hierarchy_assert_A_ControlFlow42->setThisActivityEdgePtr(Hierarchy_assert_A_ControlFlow42);
			Hierarchy_assert_A_ControlFlow42->setName("ControlFlow42");
			Hierarchy_assert_A_ControlFlow42->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ControlFlow42->setSource(Hierarchy_assert_A_a_b_size_);
			Hierarchy_assert_A_ControlFlow42->setTarget(Hierarchy_assert_A_String_a_b_size);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ControlFlow42);
			// ObjectFlow ObjectFlow104 from result to listSize
			Hierarchy_assert_A_ObjectFlow104->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow104);
			Hierarchy_assert_A_ObjectFlow104->setName("ObjectFlow104");
			Hierarchy_assert_A_ObjectFlow104->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow104->setSource(Hierarchy_assert_A_a_b_size__result);
			Hierarchy_assert_A_ObjectFlow104->setTarget(Hierarchy_assert_A_Test_a_b_size_listSize);
				// LiteralBoolean LiteralBoolean105
				Hierarchy_assert_A_ObjectFlow104_LiteralBoolean105->setThisElementPtr(Hierarchy_assert_A_ObjectFlow104_LiteralBoolean105);
				Hierarchy_assert_A_ObjectFlow104_LiteralBoolean105->setName("LiteralBoolean105");
				Hierarchy_assert_A_ObjectFlow104_LiteralBoolean105->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow104_LiteralBoolean105->setValue(true);
			Hierarchy_assert_A_ObjectFlow104->setGuard(Hierarchy_assert_A_ObjectFlow104_LiteralBoolean105);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow104);
			// ObjectFlow ObjectFlow107 from result to value
			Hierarchy_assert_A_ObjectFlow107->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow107);
			Hierarchy_assert_A_ObjectFlow107->setName("ObjectFlow107");
			Hierarchy_assert_A_ObjectFlow107->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow107->setSource(Hierarchy_assert_A_String_a_b_c_size_result);
			Hierarchy_assert_A_ObjectFlow107->setTarget(Hierarchy_assert_A_WriteLine_a_b_c_value);
				// LiteralBoolean LiteralBoolean108
				Hierarchy_assert_A_ObjectFlow107_LiteralBoolean108->setThisElementPtr(Hierarchy_assert_A_ObjectFlow107_LiteralBoolean108);
				Hierarchy_assert_A_ObjectFlow107_LiteralBoolean108->setName("LiteralBoolean108");
				Hierarchy_assert_A_ObjectFlow107_LiteralBoolean108->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow107_LiteralBoolean108->setValue(true);
			Hierarchy_assert_A_ObjectFlow107->setGuard(Hierarchy_assert_A_ObjectFlow107_LiteralBoolean108);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow107);
			// ObjectFlow ObjectFlow120 from Fork a.b.c to object
			Hierarchy_assert_A_ObjectFlow120->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow120);
			Hierarchy_assert_A_ObjectFlow120->setName("ObjectFlow120");
			Hierarchy_assert_A_ObjectFlow120->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow120->setSource(Hierarchy_assert_A_Fork_a_b_c);
			Hierarchy_assert_A_ObjectFlow120->setTarget(Hierarchy_assert_A_Read_a_b_c_d_object);
				// LiteralBoolean LiteralBoolean121
				Hierarchy_assert_A_ObjectFlow120_LiteralBoolean121->setThisElementPtr(Hierarchy_assert_A_ObjectFlow120_LiteralBoolean121);
				Hierarchy_assert_A_ObjectFlow120_LiteralBoolean121->setName("LiteralBoolean121");
				Hierarchy_assert_A_ObjectFlow120_LiteralBoolean121->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow120_LiteralBoolean121->setValue(true);
			Hierarchy_assert_A_ObjectFlow120->setGuard(Hierarchy_assert_A_ObjectFlow120_LiteralBoolean121);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow120);
			// ControlFlow ControlFlow58 from WriteLine_a.b.c.d to Test a.b.c.d.size
			Hierarchy_assert_A_ControlFlow58->setThisActivityEdgePtr(Hierarchy_assert_A_ControlFlow58);
			Hierarchy_assert_A_ControlFlow58->setName("ControlFlow58");
			Hierarchy_assert_A_ControlFlow58->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ControlFlow58->setSource(Hierarchy_assert_A_WriteLine_a_b_c_d);
			Hierarchy_assert_A_ControlFlow58->setTarget(Hierarchy_assert_A_Test_a_b_c_d_size);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ControlFlow58);
			// ObjectFlow ObjectFlow123 from result to listSize
			Hierarchy_assert_A_ObjectFlow123->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow123);
			Hierarchy_assert_A_ObjectFlow123->setName("ObjectFlow123");
			Hierarchy_assert_A_ObjectFlow123->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow123->setSource(Hierarchy_assert_A_a_b_c_d_e_size__result);
			Hierarchy_assert_A_ObjectFlow123->setTarget(Hierarchy_assert_A_Test_a_b_c_d_e_size_listSize);
				// LiteralBoolean LiteralBoolean124
				Hierarchy_assert_A_ObjectFlow123_LiteralBoolean124->setThisElementPtr(Hierarchy_assert_A_ObjectFlow123_LiteralBoolean124);
				Hierarchy_assert_A_ObjectFlow123_LiteralBoolean124->setName("LiteralBoolean124");
				Hierarchy_assert_A_ObjectFlow123_LiteralBoolean124->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow123_LiteralBoolean124->setValue(true);
			Hierarchy_assert_A_ObjectFlow123->setGuard(Hierarchy_assert_A_ObjectFlow123_LiteralBoolean124);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow123);
			// ObjectFlow ObjectFlow65 from result to value
			Hierarchy_assert_A_ObjectFlow65->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow65);
			Hierarchy_assert_A_ObjectFlow65->setName("ObjectFlow65");
			Hierarchy_assert_A_ObjectFlow65->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow65->setSource(Hierarchy_assert_A_String_a_b_size_result);
			Hierarchy_assert_A_ObjectFlow65->setTarget(Hierarchy_assert_A_WriteLine_a_b_value);
				// LiteralBoolean LiteralBoolean67
				Hierarchy_assert_A_ObjectFlow65_LiteralBoolean67->setThisElementPtr(Hierarchy_assert_A_ObjectFlow65_LiteralBoolean67);
				Hierarchy_assert_A_ObjectFlow65_LiteralBoolean67->setName("LiteralBoolean67");
				Hierarchy_assert_A_ObjectFlow65_LiteralBoolean67->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow65_LiteralBoolean67->setValue(true);
			Hierarchy_assert_A_ObjectFlow65->setGuard(Hierarchy_assert_A_ObjectFlow65_LiteralBoolean67);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow65);
			// ObjectFlow ObjectFlow126 from Fork a.b.c to list
			Hierarchy_assert_A_ObjectFlow126->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow126);
			Hierarchy_assert_A_ObjectFlow126->setName("ObjectFlow126");
			Hierarchy_assert_A_ObjectFlow126->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow126->setSource(Hierarchy_assert_A_Fork_a_b_c);
			Hierarchy_assert_A_ObjectFlow126->setTarget(Hierarchy_assert_A_a_b_c_size__list);
				// LiteralBoolean LiteralBoolean127
				Hierarchy_assert_A_ObjectFlow126_LiteralBoolean127->setThisElementPtr(Hierarchy_assert_A_ObjectFlow126_LiteralBoolean127);
				Hierarchy_assert_A_ObjectFlow126_LiteralBoolean127->setName("LiteralBoolean127");
				Hierarchy_assert_A_ObjectFlow126_LiteralBoolean127->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow126_LiteralBoolean127->setValue(true);
			Hierarchy_assert_A_ObjectFlow126->setGuard(Hierarchy_assert_A_ObjectFlow126_LiteralBoolean127);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow126);
			// ControlFlow ControlFlow135 from a.b.c.d.e.size() to String(a.b.c.d.e.size)
			Hierarchy_assert_A_ControlFlow135->setThisActivityEdgePtr(Hierarchy_assert_A_ControlFlow135);
			Hierarchy_assert_A_ControlFlow135->setName("ControlFlow135");
			Hierarchy_assert_A_ControlFlow135->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ControlFlow135->setSource(Hierarchy_assert_A_a_b_c_d_e_size_);
			Hierarchy_assert_A_ControlFlow135->setTarget(Hierarchy_assert_A_String_a_b_c_d_e_size);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ControlFlow135);
			// ObjectFlow ObjectFlow69 from result to value
			Hierarchy_assert_A_ObjectFlow69->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow69);
			Hierarchy_assert_A_ObjectFlow69->setName("ObjectFlow69");
			Hierarchy_assert_A_ObjectFlow69->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow69->setSource(Hierarchy_assert_A_String_a_b_c_d_size_result);
			Hierarchy_assert_A_ObjectFlow69->setTarget(Hierarchy_assert_A_WriteLine_a_b_c_d_value);
				// LiteralBoolean LiteralBoolean71
				Hierarchy_assert_A_ObjectFlow69_LiteralBoolean71->setThisElementPtr(Hierarchy_assert_A_ObjectFlow69_LiteralBoolean71);
				Hierarchy_assert_A_ObjectFlow69_LiteralBoolean71->setName("LiteralBoolean71");
				Hierarchy_assert_A_ObjectFlow69_LiteralBoolean71->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow69_LiteralBoolean71->setValue(true);
			Hierarchy_assert_A_ObjectFlow69->setGuard(Hierarchy_assert_A_ObjectFlow69_LiteralBoolean71);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow69);
			// ObjectFlow ObjectFlow139 from Fork a.b.c.d to object
			Hierarchy_assert_A_ObjectFlow139->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow139);
			Hierarchy_assert_A_ObjectFlow139->setName("ObjectFlow139");
			Hierarchy_assert_A_ObjectFlow139->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow139->setSource(Hierarchy_assert_A_Fork_a_b_c_d);
			Hierarchy_assert_A_ObjectFlow139->setTarget(Hierarchy_assert_A_Read_a_b_c_d_e_object);
				// LiteralBoolean LiteralBoolean141
				Hierarchy_assert_A_ObjectFlow139_LiteralBoolean141->setThisElementPtr(Hierarchy_assert_A_ObjectFlow139_LiteralBoolean141);
				Hierarchy_assert_A_ObjectFlow139_LiteralBoolean141->setName("LiteralBoolean141");
				Hierarchy_assert_A_ObjectFlow139_LiteralBoolean141->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow139_LiteralBoolean141->setValue(true);
			Hierarchy_assert_A_ObjectFlow139->setGuard(Hierarchy_assert_A_ObjectFlow139_LiteralBoolean141);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow139);
			// ObjectFlow ObjectFlow142 from result to value
			Hierarchy_assert_A_ObjectFlow142->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow142);
			Hierarchy_assert_A_ObjectFlow142->setName("ObjectFlow142");
			Hierarchy_assert_A_ObjectFlow142->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow142->setSource(Hierarchy_assert_A_String_a_b_c_d_e_size_result);
			Hierarchy_assert_A_ObjectFlow142->setTarget(Hierarchy_assert_A_WriteLine_a_b_c_d_e_value);
				// LiteralBoolean LiteralBoolean144
				Hierarchy_assert_A_ObjectFlow142_LiteralBoolean144->setThisElementPtr(Hierarchy_assert_A_ObjectFlow142_LiteralBoolean144);
				Hierarchy_assert_A_ObjectFlow142_LiteralBoolean144->setName("LiteralBoolean144");
				Hierarchy_assert_A_ObjectFlow142_LiteralBoolean144->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow142_LiteralBoolean144->setValue(true);
			Hierarchy_assert_A_ObjectFlow142->setGuard(Hierarchy_assert_A_ObjectFlow142_LiteralBoolean144);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow142);
			// ObjectFlow ObjectFlow149 from a_node to object
			Hierarchy_assert_A_ObjectFlow149->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow149);
			Hierarchy_assert_A_ObjectFlow149->setName("ObjectFlow149");
			Hierarchy_assert_A_ObjectFlow149->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow149->setSource(Hierarchy_assert_A_a_node);
			Hierarchy_assert_A_ObjectFlow149->setTarget(Hierarchy_assert_A_Read_a_b_object);
				// LiteralBoolean LiteralBoolean150
				Hierarchy_assert_A_ObjectFlow149_LiteralBoolean150->setThisElementPtr(Hierarchy_assert_A_ObjectFlow149_LiteralBoolean150);
				Hierarchy_assert_A_ObjectFlow149_LiteralBoolean150->setName("LiteralBoolean150");
				Hierarchy_assert_A_ObjectFlow149_LiteralBoolean150->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow149_LiteralBoolean150->setValue(true);
			Hierarchy_assert_A_ObjectFlow149->setGuard(Hierarchy_assert_A_ObjectFlow149_LiteralBoolean150);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow149);
			// ControlFlow ControlFlow72 from WriteLine_a.b.c to Test a.b.c.size
			Hierarchy_assert_A_ControlFlow72->setThisActivityEdgePtr(Hierarchy_assert_A_ControlFlow72);
			Hierarchy_assert_A_ControlFlow72->setName("ControlFlow72");
			Hierarchy_assert_A_ControlFlow72->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ControlFlow72->setSource(Hierarchy_assert_A_WriteLine_a_b_c);
			Hierarchy_assert_A_ControlFlow72->setTarget(Hierarchy_assert_A_Test_a_b_c_size);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ControlFlow72);
			// ObjectFlow ObjectFlow152 from Fork a.b to list
			Hierarchy_assert_A_ObjectFlow152->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow152);
			Hierarchy_assert_A_ObjectFlow152->setName("ObjectFlow152");
			Hierarchy_assert_A_ObjectFlow152->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow152->setSource(Hierarchy_assert_A_Fork_a_b);
			Hierarchy_assert_A_ObjectFlow152->setTarget(Hierarchy_assert_A_a_b_size__list);
				// LiteralBoolean LiteralBoolean153
				Hierarchy_assert_A_ObjectFlow152_LiteralBoolean153->setThisElementPtr(Hierarchy_assert_A_ObjectFlow152_LiteralBoolean153);
				Hierarchy_assert_A_ObjectFlow152_LiteralBoolean153->setName("LiteralBoolean153");
				Hierarchy_assert_A_ObjectFlow152_LiteralBoolean153->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow152_LiteralBoolean153->setValue(true);
			Hierarchy_assert_A_ObjectFlow152->setGuard(Hierarchy_assert_A_ObjectFlow152_LiteralBoolean153);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow152);
			// ObjectFlow ObjectFlow76 from result to list
			Hierarchy_assert_A_ObjectFlow76->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow76);
			Hierarchy_assert_A_ObjectFlow76->setName("ObjectFlow76");
			Hierarchy_assert_A_ObjectFlow76->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow76->setSource(Hierarchy_assert_A_Read_a_b_c_d_e_result);
			Hierarchy_assert_A_ObjectFlow76->setTarget(Hierarchy_assert_A_a_b_c_d_e_size__list);
				// LiteralBoolean LiteralBoolean78
				Hierarchy_assert_A_ObjectFlow76_LiteralBoolean78->setThisElementPtr(Hierarchy_assert_A_ObjectFlow76_LiteralBoolean78);
				Hierarchy_assert_A_ObjectFlow76_LiteralBoolean78->setName("LiteralBoolean78");
				Hierarchy_assert_A_ObjectFlow76_LiteralBoolean78->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow76_LiteralBoolean78->setValue(true);
			Hierarchy_assert_A_ObjectFlow76->setGuard(Hierarchy_assert_A_ObjectFlow76_LiteralBoolean78);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow76);
			// ControlFlow ControlFlow79 from Test a.b.c.d.size to Read a.b.c.d.e
			Hierarchy_assert_A_ControlFlow79->setThisActivityEdgePtr(Hierarchy_assert_A_ControlFlow79);
			Hierarchy_assert_A_ControlFlow79->setName("ControlFlow79");
			Hierarchy_assert_A_ControlFlow79->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ControlFlow79->setSource(Hierarchy_assert_A_Test_a_b_c_d_size);
			Hierarchy_assert_A_ControlFlow79->setTarget(Hierarchy_assert_A_Read_a_b_c_d_e);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ControlFlow79);
			// ObjectFlow ObjectFlow159 from result to listSize
			Hierarchy_assert_A_ObjectFlow159->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow159);
			Hierarchy_assert_A_ObjectFlow159->setName("ObjectFlow159");
			Hierarchy_assert_A_ObjectFlow159->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow159->setSource(Hierarchy_assert_A_a_b_c_d_size__result);
			Hierarchy_assert_A_ObjectFlow159->setTarget(Hierarchy_assert_A_Test_a_b_c_d_size_listSize);
				// LiteralBoolean LiteralBoolean161
				Hierarchy_assert_A_ObjectFlow159_LiteralBoolean161->setThisElementPtr(Hierarchy_assert_A_ObjectFlow159_LiteralBoolean161);
				Hierarchy_assert_A_ObjectFlow159_LiteralBoolean161->setName("LiteralBoolean161");
				Hierarchy_assert_A_ObjectFlow159_LiteralBoolean161->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow159_LiteralBoolean161->setValue(true);
			Hierarchy_assert_A_ObjectFlow159->setGuard(Hierarchy_assert_A_ObjectFlow159_LiteralBoolean161);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow159);
			// ControlFlow ControlFlow80 from Test a.b.c.size to Read a.b.c.d
			Hierarchy_assert_A_ControlFlow80->setThisActivityEdgePtr(Hierarchy_assert_A_ControlFlow80);
			Hierarchy_assert_A_ControlFlow80->setName("ControlFlow80");
			Hierarchy_assert_A_ControlFlow80->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ControlFlow80->setSource(Hierarchy_assert_A_Test_a_b_c_size);
			Hierarchy_assert_A_ControlFlow80->setTarget(Hierarchy_assert_A_Read_a_b_c_d);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ControlFlow80);
			// ControlFlow ControlFlow81 from Test a.b.size to Read a.b.c
			Hierarchy_assert_A_ControlFlow81->setThisActivityEdgePtr(Hierarchy_assert_A_ControlFlow81);
			Hierarchy_assert_A_ControlFlow81->setName("ControlFlow81");
			Hierarchy_assert_A_ControlFlow81->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ControlFlow81->setSource(Hierarchy_assert_A_Test_a_b_size);
			Hierarchy_assert_A_ControlFlow81->setTarget(Hierarchy_assert_A_Read_a_b_c);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ControlFlow81);
			// ObjectFlow ObjectFlow162 from Fork a.b.c.d to list
			Hierarchy_assert_A_ObjectFlow162->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow162);
			Hierarchy_assert_A_ObjectFlow162->setName("ObjectFlow162");
			Hierarchy_assert_A_ObjectFlow162->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow162->setSource(Hierarchy_assert_A_Fork_a_b_c_d);
			Hierarchy_assert_A_ObjectFlow162->setTarget(Hierarchy_assert_A_a_b_c_d_size__list);
				// LiteralBoolean LiteralBoolean163
				Hierarchy_assert_A_ObjectFlow162_LiteralBoolean163->setThisElementPtr(Hierarchy_assert_A_ObjectFlow162_LiteralBoolean163);
				Hierarchy_assert_A_ObjectFlow162_LiteralBoolean163->setName("LiteralBoolean163");
				Hierarchy_assert_A_ObjectFlow162_LiteralBoolean163->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow162_LiteralBoolean163->setValue(true);
			Hierarchy_assert_A_ObjectFlow162->setGuard(Hierarchy_assert_A_ObjectFlow162_LiteralBoolean163);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow162);
			// ObjectFlow ObjectFlow168 from Fork a.b to object
			Hierarchy_assert_A_ObjectFlow168->setThisActivityEdgePtr(Hierarchy_assert_A_ObjectFlow168);
			Hierarchy_assert_A_ObjectFlow168->setName("ObjectFlow168");
			Hierarchy_assert_A_ObjectFlow168->setVisibility(VisibilityKind::public_);
			
			Hierarchy_assert_A_ObjectFlow168->setSource(Hierarchy_assert_A_Fork_a_b);
			Hierarchy_assert_A_ObjectFlow168->setTarget(Hierarchy_assert_A_Read_a_b_c_object);
				// LiteralBoolean LiteralBoolean170
				Hierarchy_assert_A_ObjectFlow168_LiteralBoolean170->setThisElementPtr(Hierarchy_assert_A_ObjectFlow168_LiteralBoolean170);
				Hierarchy_assert_A_ObjectFlow168_LiteralBoolean170->setName("LiteralBoolean170");
				Hierarchy_assert_A_ObjectFlow168_LiteralBoolean170->setVisibility(VisibilityKind::public_);
				Hierarchy_assert_A_ObjectFlow168_LiteralBoolean170->setValue(true);
			Hierarchy_assert_A_ObjectFlow168->setGuard(Hierarchy_assert_A_ObjectFlow168_LiteralBoolean170);
		Hierarchy_assert_A->addEdge(Hierarchy_assert_A_ObjectFlow168);
	Hierarchy->addPackagedElement(Hierarchy_assert_A);
		// Class B
		Hierarchy_B->setThisClass_Ptr(Hierarchy_B);
		Hierarchy_B->setName("B");
		Hierarchy_B->setVisibility(VisibilityKind::public_);
		
			// Property c
			Hierarchy_B_c->setThisElementPtr(Hierarchy_B_c);
			Hierarchy_B_c->setName("c");
			Hierarchy_B_c->setVisibility(VisibilityKind::public_);
			
			Hierarchy_B_c->setType(Hierarchy_C);
			Hierarchy_B_c->setAggregation(AggregationKind::composite);
		Hierarchy_B->addOwnedAttribute(Hierarchy_B_c);
	Hierarchy->addPackagedElement(Hierarchy_B);
		// Class D
		Hierarchy_D->setThisClass_Ptr(Hierarchy_D);
		Hierarchy_D->setName("D");
		Hierarchy_D->setVisibility(VisibilityKind::public_);
		
			// Property e
			Hierarchy_D_e->setThisElementPtr(Hierarchy_D_e);
			Hierarchy_D_e->setName("e");
			Hierarchy_D_e->setVisibility(VisibilityKind::public_);
			
			Hierarchy_D_e->setType(Hierarchy_E);
			Hierarchy_D_e->setAggregation(AggregationKind::shared);
		Hierarchy_D->addOwnedAttribute(Hierarchy_D_e);
	Hierarchy->addPackagedElement(Hierarchy_D);
		// Class E
		Hierarchy_E->setThisClass_Ptr(Hierarchy_E);
		Hierarchy_E->setName("E");
		Hierarchy_E->setVisibility(VisibilityKind::public_);
	Hierarchy->addPackagedElement(Hierarchy_E);
		// Class A
		Hierarchy_A->setThisClass_Ptr(Hierarchy_A);
		Hierarchy_A->setName("A");
		Hierarchy_A->setVisibility(VisibilityKind::public_);
		
			// Property b
			Hierarchy_A_b->setThisElementPtr(Hierarchy_A_b);
			Hierarchy_A_b->setName("b");
			Hierarchy_A_b->setVisibility(VisibilityKind::public_);
			
			Hierarchy_A_b->setType(Hierarchy_B);
			Hierarchy_A_b->setAggregation(AggregationKind::composite);
		Hierarchy_A->addOwnedAttribute(Hierarchy_A_b);
		
		
			// Operation A_A
			Hierarchy_A_A_A->setThisOperationPtr(Hierarchy_A_A_A);
			Hierarchy_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			Hierarchy_A_A_A->setName("A_A");
			Hierarchy_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				Hierarchy_A_A_A_result->setThisElementPtr(Hierarchy_A_A_A_result);
				Hierarchy_A_A_A_result->setName("result");
				Hierarchy_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				Hierarchy_A_A_A_result->setType(Hierarchy_A);
				Hierarchy_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			Hierarchy_A_A_A->addOwnedParameter(Hierarchy_A_A_A_result);
		Hierarchy_A->addOwnedOperation(Hierarchy_A_A_A);
	Hierarchy->addPackagedElement(Hierarchy_A);
		// Activity main
		Hierarchy_main->setThisActivityPtr(Hierarchy_main);
		Hierarchy_main->setName("main");
		Hierarchy_main->setVisibility(VisibilityKind::public_);
			// CallBehaviorAction instantiate_A
			Hierarchy_main_instantiate_A->setThisExecutableNodePtr(Hierarchy_main_instantiate_A);
			Hierarchy_main_instantiate_A->setName("instantiate_A");
			Hierarchy_main_instantiate_A->setVisibility(VisibilityKind::public_);
			
				// OutputPin a
				Hierarchy_main_instantiate_A_a->setThisElementPtr(Hierarchy_main_instantiate_A_a);
				Hierarchy_main_instantiate_A_a->setName("a");
				Hierarchy_main_instantiate_A_a->setVisibility(VisibilityKind::public_);
				Hierarchy_main_instantiate_A_a->setType(Hierarchy_A);
			Hierarchy_main_instantiate_A->addResult(Hierarchy_main_instantiate_A_a);
			Hierarchy_main_instantiate_A->setBehavior(Hierarchy_instantiate_A);
		Hierarchy_main->addNode(Hierarchy_main_instantiate_A);
			// CallBehaviorAction assert_A
			Hierarchy_main_assert_A->setThisExecutableNodePtr(Hierarchy_main_assert_A);
			Hierarchy_main_assert_A->setName("assert_A");
			Hierarchy_main_assert_A->setVisibility(VisibilityKind::public_);
			Hierarchy_main_assert_A->setBehavior(Hierarchy_assert_A);
				// InputPin a
				Hierarchy_main_assert_A_a->setThisElementPtr(Hierarchy_main_assert_A_a);
				Hierarchy_main_assert_A_a->setName("a");
				Hierarchy_main_assert_A_a->setVisibility(VisibilityKind::public_);
			Hierarchy_main_assert_A->addArgument(Hierarchy_main_assert_A_a);
		Hierarchy_main->addNode(Hierarchy_main_assert_A);
			// ObjectFlow ObjectFlow171 from a to a
			Hierarchy_main_ObjectFlow171->setThisActivityEdgePtr(Hierarchy_main_ObjectFlow171);
			Hierarchy_main_ObjectFlow171->setName("ObjectFlow171");
			Hierarchy_main_ObjectFlow171->setVisibility(VisibilityKind::public_);
			
			Hierarchy_main_ObjectFlow171->setSource(Hierarchy_main_instantiate_A_a);
			Hierarchy_main_ObjectFlow171->setTarget(Hierarchy_main_assert_A_a);
				// LiteralBoolean LiteralBoolean172
				Hierarchy_main_ObjectFlow171_LiteralBoolean172->setThisElementPtr(Hierarchy_main_ObjectFlow171_LiteralBoolean172);
				Hierarchy_main_ObjectFlow171_LiteralBoolean172->setName("LiteralBoolean172");
				Hierarchy_main_ObjectFlow171_LiteralBoolean172->setVisibility(VisibilityKind::public_);
				Hierarchy_main_ObjectFlow171_LiteralBoolean172->setValue(true);
			Hierarchy_main_ObjectFlow171->setGuard(Hierarchy_main_ObjectFlow171_LiteralBoolean172);
		Hierarchy_main->addEdge(Hierarchy_main_ObjectFlow171);
	Hierarchy->addPackagedElement(Hierarchy_main);
		// Class C
		Hierarchy_C->setThisClass_Ptr(Hierarchy_C);
		Hierarchy_C->setName("C");
		Hierarchy_C->setVisibility(VisibilityKind::public_);
		
			// Property d
			Hierarchy_C_d->setThisElementPtr(Hierarchy_C_d);
			Hierarchy_C_d->setName("d");
			Hierarchy_C_d->setVisibility(VisibilityKind::public_);
			
			Hierarchy_C_d->setType(Hierarchy_D);
			Hierarchy_C_d->setAggregation(AggregationKind::composite);
		Hierarchy_C->addOwnedAttribute(Hierarchy_C_d);
	Hierarchy->addPackagedElement(Hierarchy_C);
}
