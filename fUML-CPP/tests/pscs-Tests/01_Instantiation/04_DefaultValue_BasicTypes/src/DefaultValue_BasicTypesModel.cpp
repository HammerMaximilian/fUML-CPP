/*
 * DefaultValue_BasicTypesModel.cpp
 * 
 * Auto-generated file
 */

#include "DefaultValue_BasicTypesModel.h"

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/actions/CallBehaviorAction.h>
#include <uml/actions/ReadStructuralFeatureAction.h>
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
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <uml/activities/ForkNode.h>
#include <uml/simpleclassifiers/EnumerationLiteral.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/packages/Package.h>
#include <uml/classification/InstanceValue.h>
#include <uml/values/LiteralUnlimitedNatural.h>
#include <uml/simpleclassifiers/Enumeration.h>
#include <uml/values/LiteralString.h>
#include <uml/actions/OutputPin.h>
#include <uml/structuredclassifiers/Class_.h>
#include <uml/values/LiteralReal.h>


/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace DefaultValue_BasicTypes;
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

DefaultValue_BasicTypesModel::DefaultValue_BasicTypesModel()
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

DefaultValue_BasicTypesModel::~DefaultValue_BasicTypesModel()
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

const std::shared_ptr<DefaultValue_BasicTypesModel>& DefaultValue_BasicTypesModel::Instance()
{
	static std::shared_ptr<DefaultValue_BasicTypesModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new DefaultValue_BasicTypesModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void DefaultValue_BasicTypesModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model DefaultValue_BasicTypes
	 */
	DefaultValue_BasicTypes.reset(new Package());
	this->addToElementRepository("DefaultValue_BasicTypes", DefaultValue_BasicTypes);
		DefaultValue_BasicTypes_main.reset(new Activity());
		this->addToElementRepository("main", DefaultValue_BasicTypes_main);
			DefaultValue_BasicTypes_main_assert_A.reset(new CallBehaviorAction());
			this->addToElementRepository("assert_A", DefaultValue_BasicTypes_main_assert_A);
				DefaultValue_BasicTypes_main_assert_A_a.reset(new InputPin());
				this->addToElementRepository("a", DefaultValue_BasicTypes_main_assert_A_a);
					DefaultValue_BasicTypes_main_assert_A_a_LiteralInteger0.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger0", DefaultValue_BasicTypes_main_assert_A_a_LiteralInteger0);
					DefaultValue_BasicTypes_main_assert_A_a_LiteralUnlimitedNatural1.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural1", DefaultValue_BasicTypes_main_assert_A_a_LiteralUnlimitedNatural1);
					DefaultValue_BasicTypes_main_assert_A_a_LiteralInteger2.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger2", DefaultValue_BasicTypes_main_assert_A_a_LiteralInteger2);
			DefaultValue_BasicTypes_main_ObjectFlow3.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow3", DefaultValue_BasicTypes_main_ObjectFlow3);
				DefaultValue_BasicTypes_main_ObjectFlow3_LiteralInteger4.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger4", DefaultValue_BasicTypes_main_ObjectFlow3_LiteralInteger4);
				DefaultValue_BasicTypes_main_ObjectFlow3_LiteralBoolean5.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean5", DefaultValue_BasicTypes_main_ObjectFlow3_LiteralBoolean5);
			DefaultValue_BasicTypes_main_instantiate_A.reset(new CallBehaviorAction());
			this->addToElementRepository("instantiate_A", DefaultValue_BasicTypes_main_instantiate_A);
				DefaultValue_BasicTypes_main_instantiate_A_a.reset(new OutputPin());
				this->addToElementRepository("a", DefaultValue_BasicTypes_main_instantiate_A_a);
					DefaultValue_BasicTypes_main_instantiate_A_a_LiteralInteger6.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger6", DefaultValue_BasicTypes_main_instantiate_A_a_LiteralInteger6);
					DefaultValue_BasicTypes_main_instantiate_A_a_LiteralInteger7.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger7", DefaultValue_BasicTypes_main_instantiate_A_a_LiteralInteger7);
					DefaultValue_BasicTypes_main_instantiate_A_a_LiteralUnlimitedNatural8.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural8", DefaultValue_BasicTypes_main_instantiate_A_a_LiteralUnlimitedNatural8);
		DefaultValue_BasicTypes_E.reset(new Enumeration());
		this->addToElementRepository("E", DefaultValue_BasicTypes_E);
			DefaultValue_BasicTypes_E_e1.reset(new EnumerationLiteral());
			this->addToElementRepository("e1", DefaultValue_BasicTypes_E_e1);
			DefaultValue_BasicTypes_E_e2.reset(new EnumerationLiteral());
			this->addToElementRepository("e2", DefaultValue_BasicTypes_E_e2);
		DefaultValue_BasicTypes_A.reset(new Class_());
		this->addToElementRepository("A", DefaultValue_BasicTypes_A);
			DefaultValue_BasicTypes_A_pInteger.reset(new Property());
			this->addToElementRepository("pInteger", DefaultValue_BasicTypes_A_pInteger);
				DefaultValue_BasicTypes_A_pInteger_LiteralInteger9.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger9", DefaultValue_BasicTypes_A_pInteger_LiteralInteger9);
			DefaultValue_BasicTypes_A_pReal.reset(new Property());
			this->addToElementRepository("pReal", DefaultValue_BasicTypes_A_pReal);
				DefaultValue_BasicTypes_A_pReal_LiteralReal10.reset(new LiteralReal());
				this->addToElementRepository("LiteralReal10", DefaultValue_BasicTypes_A_pReal_LiteralReal10);
			DefaultValue_BasicTypes_A_pEnum.reset(new Property());
			this->addToElementRepository("pEnum", DefaultValue_BasicTypes_A_pEnum);
				DefaultValue_BasicTypes_A_pEnum_InstanceValue11.reset(new InstanceValue());
				this->addToElementRepository("InstanceValue11", DefaultValue_BasicTypes_A_pEnum_InstanceValue11);
			DefaultValue_BasicTypes_A_pString.reset(new Property());
			this->addToElementRepository("pString", DefaultValue_BasicTypes_A_pString);
				DefaultValue_BasicTypes_A_pString_LiteralString12.reset(new LiteralString());
				this->addToElementRepository("LiteralString12", DefaultValue_BasicTypes_A_pString_LiteralString12);
			DefaultValue_BasicTypes_A_pUnlimitedNatural.reset(new Property());
			this->addToElementRepository("pUnlimitedNatural", DefaultValue_BasicTypes_A_pUnlimitedNatural);
				DefaultValue_BasicTypes_A_pUnlimitedNatural_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural13", DefaultValue_BasicTypes_A_pUnlimitedNatural_LiteralUnlimitedNatural13);
			DefaultValue_BasicTypes_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", DefaultValue_BasicTypes_A_A_A);
				DefaultValue_BasicTypes_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", DefaultValue_BasicTypes_A_A_A_result);
			DefaultValue_BasicTypes_A_pBoolean.reset(new Property());
			this->addToElementRepository("pBoolean", DefaultValue_BasicTypes_A_pBoolean);
				DefaultValue_BasicTypes_A_pBoolean_LiteralBoolean14.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean14", DefaultValue_BasicTypes_A_pBoolean_LiteralBoolean14);
		DefaultValue_BasicTypes_assert_A.reset(new Activity());
		this->addToElementRepository("assert_A", DefaultValue_BasicTypes_assert_A);
			DefaultValue_BasicTypes_assert_A_ObjectFlow15.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow15", DefaultValue_BasicTypes_assert_A_ObjectFlow15);
				DefaultValue_BasicTypes_assert_A_ObjectFlow15_LiteralInteger16.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger16", DefaultValue_BasicTypes_assert_A_ObjectFlow15_LiteralInteger16);
				DefaultValue_BasicTypes_assert_A_ObjectFlow15_LiteralBoolean17.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean17", DefaultValue_BasicTypes_assert_A_ObjectFlow15_LiteralBoolean17);
			DefaultValue_BasicTypes_assert_A_Test_Default_Values.reset(new CallBehaviorAction());
			this->addToElementRepository("Test Default Values", DefaultValue_BasicTypes_assert_A_Test_Default_Values);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger.reset(new InputPin());
				this->addToElementRepository("pInteger", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger);
					DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger_LiteralUnlimitedNatural18.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural18", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger_LiteralUnlimitedNatural18);
					DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger_LiteralInteger19.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger19", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger_LiteralInteger19);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean.reset(new InputPin());
				this->addToElementRepository("pBoolean", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean);
					DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean_LiteralUnlimitedNatural20.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural20", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean_LiteralUnlimitedNatural20);
					DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean_LiteralInteger21.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger21", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean_LiteralInteger21);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal.reset(new InputPin());
				this->addToElementRepository("pReal", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal);
					DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal_LiteralInteger22.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger22", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal_LiteralInteger22);
					DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal_LiteralUnlimitedNatural23.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural23", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal_LiteralUnlimitedNatural23);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural.reset(new InputPin());
				this->addToElementRepository("pUnlimitedNatural", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural);
					DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural_LiteralInteger24.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger24", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural_LiteralInteger24);
					DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural_LiteralUnlimitedNatural25.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural25", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural_LiteralUnlimitedNatural25);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum.reset(new InputPin());
				this->addToElementRepository("pEnum", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum);
					DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum_LiteralInteger26.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger26", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum_LiteralInteger26);
					DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum_LiteralUnlimitedNatural27.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural27", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum_LiteralUnlimitedNatural27);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString.reset(new InputPin());
				this->addToElementRepository("pString", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString);
					DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString_LiteralUnlimitedNatural28.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural28", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString_LiteralUnlimitedNatural28);
					DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString_LiteralInteger29.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger29", DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString_LiteralInteger29);
			DefaultValue_BasicTypes_assert_A_ObjectFlow30.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow30", DefaultValue_BasicTypes_assert_A_ObjectFlow30);
				DefaultValue_BasicTypes_assert_A_ObjectFlow30_LiteralInteger31.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger31", DefaultValue_BasicTypes_assert_A_ObjectFlow30_LiteralInteger31);
				DefaultValue_BasicTypes_assert_A_ObjectFlow30_LiteralBoolean32.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean32", DefaultValue_BasicTypes_assert_A_ObjectFlow30_LiteralBoolean32);
			DefaultValue_BasicTypes_assert_A_ObjectFlow33.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow33", DefaultValue_BasicTypes_assert_A_ObjectFlow33);
				DefaultValue_BasicTypes_assert_A_ObjectFlow33_LiteralInteger34.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger34", DefaultValue_BasicTypes_assert_A_ObjectFlow33_LiteralInteger34);
				DefaultValue_BasicTypes_assert_A_ObjectFlow33_LiteralBoolean35.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean35", DefaultValue_BasicTypes_assert_A_ObjectFlow33_LiteralBoolean35);
			DefaultValue_BasicTypes_assert_A_ObjectFlow36.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow36", DefaultValue_BasicTypes_assert_A_ObjectFlow36);
				DefaultValue_BasicTypes_assert_A_ObjectFlow36_LiteralInteger37.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger37", DefaultValue_BasicTypes_assert_A_ObjectFlow36_LiteralInteger37);
				DefaultValue_BasicTypes_assert_A_ObjectFlow36_LiteralBoolean38.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean38", DefaultValue_BasicTypes_assert_A_ObjectFlow36_LiteralBoolean38);
			DefaultValue_BasicTypes_assert_A_a.reset(new Parameter());
			this->addToElementRepository("a", DefaultValue_BasicTypes_assert_A_a);
			DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.pUnlimitedNatural", DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural);
				DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result.reset(new OutputPin());
				this->addToElementRepository("result", DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result);
					DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result_LiteralUnlimitedNatural39.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural39", DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result_LiteralUnlimitedNatural39);
					DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result_LiteralInteger40.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger40", DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result_LiteralInteger40);
				DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object.reset(new InputPin());
				this->addToElementRepository("object", DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object);
					DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object_LiteralInteger41.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger41", DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object_LiteralInteger41);
					DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object_LiteralUnlimitedNatural42.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural42", DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object_LiteralUnlimitedNatural42);
			DefaultValue_BasicTypes_assert_A_ObjectFlow43.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow43", DefaultValue_BasicTypes_assert_A_ObjectFlow43);
				DefaultValue_BasicTypes_assert_A_ObjectFlow43_LiteralBoolean44.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean44", DefaultValue_BasicTypes_assert_A_ObjectFlow43_LiteralBoolean44);
				DefaultValue_BasicTypes_assert_A_ObjectFlow43_LiteralInteger45.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger45", DefaultValue_BasicTypes_assert_A_ObjectFlow43_LiteralInteger45);
			DefaultValue_BasicTypes_assert_A_ObjectFlow46.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow46", DefaultValue_BasicTypes_assert_A_ObjectFlow46);
				DefaultValue_BasicTypes_assert_A_ObjectFlow46_LiteralBoolean47.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean47", DefaultValue_BasicTypes_assert_A_ObjectFlow46_LiteralBoolean47);
				DefaultValue_BasicTypes_assert_A_ObjectFlow46_LiteralInteger48.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger48", DefaultValue_BasicTypes_assert_A_ObjectFlow46_LiteralInteger48);
			DefaultValue_BasicTypes_assert_A_ObjectFlow49.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow49", DefaultValue_BasicTypes_assert_A_ObjectFlow49);
				DefaultValue_BasicTypes_assert_A_ObjectFlow49_LiteralBoolean50.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean50", DefaultValue_BasicTypes_assert_A_ObjectFlow49_LiteralBoolean50);
				DefaultValue_BasicTypes_assert_A_ObjectFlow49_LiteralInteger51.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger51", DefaultValue_BasicTypes_assert_A_ObjectFlow49_LiteralInteger51);
			DefaultValue_BasicTypes_assert_A_Fork_a.reset(new ForkNode());
			this->addToElementRepository("Fork_a", DefaultValue_BasicTypes_assert_A_Fork_a);
			DefaultValue_BasicTypes_assert_A_Read_a_pEnum.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.pEnum", DefaultValue_BasicTypes_assert_A_Read_a_pEnum);
				DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result.reset(new OutputPin());
				this->addToElementRepository("result", DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result);
					DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result_LiteralInteger52.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger52", DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result_LiteralInteger52);
					DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result_LiteralUnlimitedNatural53.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural53", DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result_LiteralUnlimitedNatural53);
				DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object.reset(new InputPin());
				this->addToElementRepository("object", DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object);
					DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object_LiteralUnlimitedNatural54.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural54", DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object_LiteralUnlimitedNatural54);
					DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object_LiteralInteger55.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger55", DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object_LiteralInteger55);
			DefaultValue_BasicTypes_assert_A_ObjectFlow56.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow56", DefaultValue_BasicTypes_assert_A_ObjectFlow56);
				DefaultValue_BasicTypes_assert_A_ObjectFlow56_LiteralInteger57.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger57", DefaultValue_BasicTypes_assert_A_ObjectFlow56_LiteralInteger57);
				DefaultValue_BasicTypes_assert_A_ObjectFlow56_LiteralBoolean58.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean58", DefaultValue_BasicTypes_assert_A_ObjectFlow56_LiteralBoolean58);
			DefaultValue_BasicTypes_assert_A_Read_a_pReal.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.pReal", DefaultValue_BasicTypes_assert_A_Read_a_pReal);
				DefaultValue_BasicTypes_assert_A_Read_a_pReal_result.reset(new OutputPin());
				this->addToElementRepository("result", DefaultValue_BasicTypes_assert_A_Read_a_pReal_result);
					DefaultValue_BasicTypes_assert_A_Read_a_pReal_result_LiteralInteger59.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger59", DefaultValue_BasicTypes_assert_A_Read_a_pReal_result_LiteralInteger59);
					DefaultValue_BasicTypes_assert_A_Read_a_pReal_result_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural60", DefaultValue_BasicTypes_assert_A_Read_a_pReal_result_LiteralUnlimitedNatural60);
				DefaultValue_BasicTypes_assert_A_Read_a_pReal_object.reset(new InputPin());
				this->addToElementRepository("object", DefaultValue_BasicTypes_assert_A_Read_a_pReal_object);
					DefaultValue_BasicTypes_assert_A_Read_a_pReal_object_LiteralInteger61.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger61", DefaultValue_BasicTypes_assert_A_Read_a_pReal_object_LiteralInteger61);
					DefaultValue_BasicTypes_assert_A_Read_a_pReal_object_LiteralUnlimitedNatural62.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural62", DefaultValue_BasicTypes_assert_A_Read_a_pReal_object_LiteralUnlimitedNatural62);
			DefaultValue_BasicTypes_assert_A_ObjectFlow63.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow63", DefaultValue_BasicTypes_assert_A_ObjectFlow63);
				DefaultValue_BasicTypes_assert_A_ObjectFlow63_LiteralBoolean64.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean64", DefaultValue_BasicTypes_assert_A_ObjectFlow63_LiteralBoolean64);
				DefaultValue_BasicTypes_assert_A_ObjectFlow63_LiteralInteger65.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger65", DefaultValue_BasicTypes_assert_A_ObjectFlow63_LiteralInteger65);
			DefaultValue_BasicTypes_assert_A_ObjectFlow66.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow66", DefaultValue_BasicTypes_assert_A_ObjectFlow66);
				DefaultValue_BasicTypes_assert_A_ObjectFlow66_LiteralBoolean67.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean67", DefaultValue_BasicTypes_assert_A_ObjectFlow66_LiteralBoolean67);
				DefaultValue_BasicTypes_assert_A_ObjectFlow66_LiteralInteger68.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger68", DefaultValue_BasicTypes_assert_A_ObjectFlow66_LiteralInteger68);
			DefaultValue_BasicTypes_assert_A_Read_a_pInteger.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.pInteger", DefaultValue_BasicTypes_assert_A_Read_a_pInteger);
				DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result.reset(new OutputPin());
				this->addToElementRepository("result", DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result);
					DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result_LiteralInteger69.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger69", DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result_LiteralInteger69);
					DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result_LiteralUnlimitedNatural70.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural70", DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result_LiteralUnlimitedNatural70);
				DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object.reset(new InputPin());
				this->addToElementRepository("object", DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object);
					DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object_LiteralInteger71.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger71", DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object_LiteralInteger71);
					DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object_LiteralUnlimitedNatural72.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural72", DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object_LiteralUnlimitedNatural72);
			DefaultValue_BasicTypes_assert_A_ObjectFlow73.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow73", DefaultValue_BasicTypes_assert_A_ObjectFlow73);
				DefaultValue_BasicTypes_assert_A_ObjectFlow73_LiteralInteger74.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger74", DefaultValue_BasicTypes_assert_A_ObjectFlow73_LiteralInteger74);
				DefaultValue_BasicTypes_assert_A_ObjectFlow73_LiteralBoolean75.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean75", DefaultValue_BasicTypes_assert_A_ObjectFlow73_LiteralBoolean75);
			DefaultValue_BasicTypes_assert_A_testDefaultValues.reset(new OpaqueBehavior());
			this->addToElementRepository("testDefaultValues", DefaultValue_BasicTypes_assert_A_testDefaultValues);
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pString.reset(new Parameter());
				this->addToElementRepository("pString", DefaultValue_BasicTypes_assert_A_testDefaultValues_pString);
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pUnlimitedNatural.reset(new Parameter());
				this->addToElementRepository("pUnlimitedNatural", DefaultValue_BasicTypes_assert_A_testDefaultValues_pUnlimitedNatural);
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pReal.reset(new Parameter());
				this->addToElementRepository("pReal", DefaultValue_BasicTypes_assert_A_testDefaultValues_pReal);
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pBoolean.reset(new Parameter());
				this->addToElementRepository("pBoolean", DefaultValue_BasicTypes_assert_A_testDefaultValues_pBoolean);
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pInteger.reset(new Parameter());
				this->addToElementRepository("pInteger", DefaultValue_BasicTypes_assert_A_testDefaultValues_pInteger);
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pEnum.reset(new Parameter());
				this->addToElementRepository("pEnum", DefaultValue_BasicTypes_assert_A_testDefaultValues_pEnum);
			DefaultValue_BasicTypes_assert_A_Read_a_pString.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.pString", DefaultValue_BasicTypes_assert_A_Read_a_pString);
				DefaultValue_BasicTypes_assert_A_Read_a_pString_object.reset(new InputPin());
				this->addToElementRepository("object", DefaultValue_BasicTypes_assert_A_Read_a_pString_object);
					DefaultValue_BasicTypes_assert_A_Read_a_pString_object_LiteralInteger76.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger76", DefaultValue_BasicTypes_assert_A_Read_a_pString_object_LiteralInteger76);
					DefaultValue_BasicTypes_assert_A_Read_a_pString_object_LiteralUnlimitedNatural77.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural77", DefaultValue_BasicTypes_assert_A_Read_a_pString_object_LiteralUnlimitedNatural77);
				DefaultValue_BasicTypes_assert_A_Read_a_pString_result.reset(new OutputPin());
				this->addToElementRepository("result", DefaultValue_BasicTypes_assert_A_Read_a_pString_result);
					DefaultValue_BasicTypes_assert_A_Read_a_pString_result_LiteralUnlimitedNatural78.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural78", DefaultValue_BasicTypes_assert_A_Read_a_pString_result_LiteralUnlimitedNatural78);
					DefaultValue_BasicTypes_assert_A_Read_a_pString_result_LiteralInteger79.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger79", DefaultValue_BasicTypes_assert_A_Read_a_pString_result_LiteralInteger79);
			DefaultValue_BasicTypes_assert_A_a_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_node", DefaultValue_BasicTypes_assert_A_a_node);
				DefaultValue_BasicTypes_assert_A_a_node_LiteralInteger80.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger80", DefaultValue_BasicTypes_assert_A_a_node_LiteralInteger80);
			DefaultValue_BasicTypes_assert_A_Read_a_pBoolean.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.pBoolean", DefaultValue_BasicTypes_assert_A_Read_a_pBoolean);
				DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object.reset(new InputPin());
				this->addToElementRepository("object", DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object);
					DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object_LiteralUnlimitedNatural81.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural81", DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object_LiteralUnlimitedNatural81);
					DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object_LiteralInteger82.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger82", DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object_LiteralInteger82);
				DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result.reset(new OutputPin());
				this->addToElementRepository("result", DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result);
					DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result_LiteralInteger83.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger83", DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result_LiteralInteger83);
					DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result_LiteralUnlimitedNatural84.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural84", DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result_LiteralUnlimitedNatural84);
			DefaultValue_BasicTypes_assert_A_ObjectFlow85.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow85", DefaultValue_BasicTypes_assert_A_ObjectFlow85);
				DefaultValue_BasicTypes_assert_A_ObjectFlow85_LiteralInteger86.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger86", DefaultValue_BasicTypes_assert_A_ObjectFlow85_LiteralInteger86);
				DefaultValue_BasicTypes_assert_A_ObjectFlow85_LiteralBoolean87.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean87", DefaultValue_BasicTypes_assert_A_ObjectFlow85_LiteralBoolean87);
			DefaultValue_BasicTypes_assert_A_ObjectFlow88.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow88", DefaultValue_BasicTypes_assert_A_ObjectFlow88);
				DefaultValue_BasicTypes_assert_A_ObjectFlow88_LiteralBoolean89.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean89", DefaultValue_BasicTypes_assert_A_ObjectFlow88_LiteralBoolean89);
				DefaultValue_BasicTypes_assert_A_ObjectFlow88_LiteralInteger90.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger90", DefaultValue_BasicTypes_assert_A_ObjectFlow88_LiteralInteger90);
		DefaultValue_BasicTypes_instantiate_A.reset(new Activity());
		this->addToElementRepository("instantiate_A", DefaultValue_BasicTypes_instantiate_A);
			DefaultValue_BasicTypes_instantiate_A_a_node.reset(new ActivityParameterNode());
			this->addToElementRepository("a_node", DefaultValue_BasicTypes_instantiate_A_a_node);
				DefaultValue_BasicTypes_instantiate_A_a_node_LiteralInteger91.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger91", DefaultValue_BasicTypes_instantiate_A_a_node_LiteralInteger91);
			DefaultValue_BasicTypes_instantiate_A_A_.reset(new CallOperationAction());
			this->addToElementRepository("A()", DefaultValue_BasicTypes_instantiate_A_A_);
				DefaultValue_BasicTypes_instantiate_A_A__target.reset(new InputPin());
				this->addToElementRepository("target", DefaultValue_BasicTypes_instantiate_A_A__target);
					DefaultValue_BasicTypes_instantiate_A_A__target_LiteralInteger92.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger92", DefaultValue_BasicTypes_instantiate_A_A__target_LiteralInteger92);
					DefaultValue_BasicTypes_instantiate_A_A__target_LiteralUnlimitedNatural93.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural93", DefaultValue_BasicTypes_instantiate_A_A__target_LiteralUnlimitedNatural93);
				DefaultValue_BasicTypes_instantiate_A_A__result.reset(new OutputPin());
				this->addToElementRepository("result", DefaultValue_BasicTypes_instantiate_A_A__result);
					DefaultValue_BasicTypes_instantiate_A_A__result_LiteralUnlimitedNatural94.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural94", DefaultValue_BasicTypes_instantiate_A_A__result_LiteralUnlimitedNatural94);
					DefaultValue_BasicTypes_instantiate_A_A__result_LiteralInteger95.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger95", DefaultValue_BasicTypes_instantiate_A_A__result_LiteralInteger95);
					DefaultValue_BasicTypes_instantiate_A_A__result_LiteralInteger96.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger96", DefaultValue_BasicTypes_instantiate_A_A__result_LiteralInteger96);
			DefaultValue_BasicTypes_instantiate_A_Create_A.reset(new CreateObjectAction());
			this->addToElementRepository("Create_A", DefaultValue_BasicTypes_instantiate_A_Create_A);
				DefaultValue_BasicTypes_instantiate_A_Create_A_result.reset(new OutputPin());
				this->addToElementRepository("result", DefaultValue_BasicTypes_instantiate_A_Create_A_result);
					DefaultValue_BasicTypes_instantiate_A_Create_A_result_LiteralInteger97.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger97", DefaultValue_BasicTypes_instantiate_A_Create_A_result_LiteralInteger97);
					DefaultValue_BasicTypes_instantiate_A_Create_A_result_LiteralUnlimitedNatural98.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural98", DefaultValue_BasicTypes_instantiate_A_Create_A_result_LiteralUnlimitedNatural98);
			DefaultValue_BasicTypes_instantiate_A_ObjectFlow99.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow99", DefaultValue_BasicTypes_instantiate_A_ObjectFlow99);
				DefaultValue_BasicTypes_instantiate_A_ObjectFlow99_LiteralInteger100.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger100", DefaultValue_BasicTypes_instantiate_A_ObjectFlow99_LiteralInteger100);
				DefaultValue_BasicTypes_instantiate_A_ObjectFlow99_LiteralBoolean101.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean101", DefaultValue_BasicTypes_instantiate_A_ObjectFlow99_LiteralBoolean101);
			DefaultValue_BasicTypes_instantiate_A_a.reset(new Parameter());
			this->addToElementRepository("a", DefaultValue_BasicTypes_instantiate_A_a);
			DefaultValue_BasicTypes_instantiate_A_ObjectFlow102.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow102", DefaultValue_BasicTypes_instantiate_A_ObjectFlow102);
				DefaultValue_BasicTypes_instantiate_A_ObjectFlow102_LiteralBoolean103.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean103", DefaultValue_BasicTypes_instantiate_A_ObjectFlow102_LiteralBoolean103);
				DefaultValue_BasicTypes_instantiate_A_ObjectFlow102_LiteralInteger104.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger104", DefaultValue_BasicTypes_instantiate_A_ObjectFlow102_LiteralInteger104);

	// Initialize public members
	/*
	 * Model DefaultValue_BasicTypes
	 */
	DefaultValue_BasicTypes->setThisPackagePtr(DefaultValue_BasicTypes);
	DefaultValue_BasicTypes->setName("DefaultValue_BasicTypes");
	DefaultValue_BasicTypes->setVisibility(VisibilityKind::public_);
		// Activity main
		DefaultValue_BasicTypes_main->setThisActivityPtr(DefaultValue_BasicTypes_main);
		DefaultValue_BasicTypes_main->setName("main");
		DefaultValue_BasicTypes_main->setVisibility(VisibilityKind::public_);
			// CallBehaviorAction assert_A
			DefaultValue_BasicTypes_main_assert_A->setThisExecutableNodePtr(DefaultValue_BasicTypes_main_assert_A);
			DefaultValue_BasicTypes_main_assert_A->setName("assert_A");
			DefaultValue_BasicTypes_main_assert_A->setVisibility(VisibilityKind::public_);
			DefaultValue_BasicTypes_main_assert_A->setBehavior(DefaultValue_BasicTypes_assert_A);
				// InputPin a
				DefaultValue_BasicTypes_main_assert_A_a->setThisElementPtr(DefaultValue_BasicTypes_main_assert_A_a);
				DefaultValue_BasicTypes_main_assert_A_a->setName("a");
				DefaultValue_BasicTypes_main_assert_A_a->setVisibility(VisibilityKind::public_);
			DefaultValue_BasicTypes_main_assert_A->addArgument(DefaultValue_BasicTypes_main_assert_A_a);
		DefaultValue_BasicTypes_main->addNode(DefaultValue_BasicTypes_main_assert_A);
			// CallBehaviorAction instantiate_A
			DefaultValue_BasicTypes_main_instantiate_A->setThisExecutableNodePtr(DefaultValue_BasicTypes_main_instantiate_A);
			DefaultValue_BasicTypes_main_instantiate_A->setName("instantiate_A");
			DefaultValue_BasicTypes_main_instantiate_A->setVisibility(VisibilityKind::public_);
			
				// OutputPin a
				DefaultValue_BasicTypes_main_instantiate_A_a->setThisElementPtr(DefaultValue_BasicTypes_main_instantiate_A_a);
				DefaultValue_BasicTypes_main_instantiate_A_a->setName("a");
				DefaultValue_BasicTypes_main_instantiate_A_a->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_main_instantiate_A_a->setType(DefaultValue_BasicTypes_A);
			DefaultValue_BasicTypes_main_instantiate_A->addResult(DefaultValue_BasicTypes_main_instantiate_A_a);
			DefaultValue_BasicTypes_main_instantiate_A->setBehavior(DefaultValue_BasicTypes_instantiate_A);
		DefaultValue_BasicTypes_main->addNode(DefaultValue_BasicTypes_main_instantiate_A);
			// ObjectFlow ObjectFlow3 from a to a
			DefaultValue_BasicTypes_main_ObjectFlow3->setThisActivityEdgePtr(DefaultValue_BasicTypes_main_ObjectFlow3);
			DefaultValue_BasicTypes_main_ObjectFlow3->setName("ObjectFlow3");
			DefaultValue_BasicTypes_main_ObjectFlow3->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_main_ObjectFlow3->setSource(DefaultValue_BasicTypes_main_instantiate_A_a);
			DefaultValue_BasicTypes_main_ObjectFlow3->setTarget(DefaultValue_BasicTypes_main_assert_A_a);
				// LiteralBoolean LiteralBoolean5
				DefaultValue_BasicTypes_main_ObjectFlow3_LiteralBoolean5->setThisElementPtr(DefaultValue_BasicTypes_main_ObjectFlow3_LiteralBoolean5);
				DefaultValue_BasicTypes_main_ObjectFlow3_LiteralBoolean5->setName("LiteralBoolean5");
				DefaultValue_BasicTypes_main_ObjectFlow3_LiteralBoolean5->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_main_ObjectFlow3_LiteralBoolean5->setValue(true);
			DefaultValue_BasicTypes_main_ObjectFlow3->setGuard(DefaultValue_BasicTypes_main_ObjectFlow3_LiteralBoolean5);
		DefaultValue_BasicTypes_main->addEdge(DefaultValue_BasicTypes_main_ObjectFlow3);
	DefaultValue_BasicTypes->addPackagedElement(DefaultValue_BasicTypes_main);
		// Enumeration E
		DefaultValue_BasicTypes_E->setThisEnumerationPtr(DefaultValue_BasicTypes_E);
		DefaultValue_BasicTypes_E->setName("E");
		DefaultValue_BasicTypes_E->setVisibility(VisibilityKind::public_);
		
			// EnumerationLiteral e1
			DefaultValue_BasicTypes_E_e1->setThisInstanceSpecificationPtr(DefaultValue_BasicTypes_E_e1);
			DefaultValue_BasicTypes_E_e1->setName("e1");
			DefaultValue_BasicTypes_E_e1->setVisibility(VisibilityKind::public_);
			DefaultValue_BasicTypes_E_e1->addClassifier(DefaultValue_BasicTypes_E);
		DefaultValue_BasicTypes_E->addOwnedLiteral(DefaultValue_BasicTypes_E_e1);
			// EnumerationLiteral e2
		DefaultValue_BasicTypes_E_e2->setThisInstanceSpecificationPtr(DefaultValue_BasicTypes_E_e2);
		DefaultValue_BasicTypes_E_e2->setName("e2");
		DefaultValue_BasicTypes_E_e2->setVisibility(VisibilityKind::public_);
		DefaultValue_BasicTypes_E_e2->addClassifier(DefaultValue_BasicTypes_E);
		DefaultValue_BasicTypes_E->addOwnedLiteral(DefaultValue_BasicTypes_E_e2);
	DefaultValue_BasicTypes->addPackagedElement(DefaultValue_BasicTypes_E);
		// Class A
		DefaultValue_BasicTypes_A->setThisClass_Ptr(DefaultValue_BasicTypes_A);
		DefaultValue_BasicTypes_A->setName("A");
		DefaultValue_BasicTypes_A->setVisibility(VisibilityKind::public_);
		
			// Property pInteger
			DefaultValue_BasicTypes_A_pInteger->setThisElementPtr(DefaultValue_BasicTypes_A_pInteger);
			DefaultValue_BasicTypes_A_pInteger->setName("pInteger");
			DefaultValue_BasicTypes_A_pInteger->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_A_pInteger->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				// LiteralInteger LiteralInteger9
				DefaultValue_BasicTypes_A_pInteger_LiteralInteger9->setThisElementPtr(DefaultValue_BasicTypes_A_pInteger_LiteralInteger9);
				DefaultValue_BasicTypes_A_pInteger_LiteralInteger9->setName("LiteralInteger9");
				DefaultValue_BasicTypes_A_pInteger_LiteralInteger9->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_A_pInteger_LiteralInteger9->setValue(4);
			DefaultValue_BasicTypes_A_pInteger->setDefaultValue(DefaultValue_BasicTypes_A_pInteger_LiteralInteger9);
		DefaultValue_BasicTypes_A->addOwnedAttribute(DefaultValue_BasicTypes_A_pInteger);
			// Property pString
			DefaultValue_BasicTypes_A_pString->setThisElementPtr(DefaultValue_BasicTypes_A_pString);
			DefaultValue_BasicTypes_A_pString->setName("pString");
			DefaultValue_BasicTypes_A_pString->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_A_pString->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				// LiteralString LiteralString12
				DefaultValue_BasicTypes_A_pString_LiteralString12->setThisElementPtr(DefaultValue_BasicTypes_A_pString_LiteralString12);
				DefaultValue_BasicTypes_A_pString_LiteralString12->setName("LiteralString12");
				DefaultValue_BasicTypes_A_pString_LiteralString12->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_A_pString_LiteralString12->setValue("Hello");
			DefaultValue_BasicTypes_A_pString->setDefaultValue(DefaultValue_BasicTypes_A_pString_LiteralString12);
		DefaultValue_BasicTypes_A->addOwnedAttribute(DefaultValue_BasicTypes_A_pString);
			// Property pBoolean
			DefaultValue_BasicTypes_A_pBoolean->setThisElementPtr(DefaultValue_BasicTypes_A_pBoolean);
			DefaultValue_BasicTypes_A_pBoolean->setName("pBoolean");
			DefaultValue_BasicTypes_A_pBoolean->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_A_pBoolean->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
				// LiteralBoolean LiteralBoolean14
				DefaultValue_BasicTypes_A_pBoolean_LiteralBoolean14->setThisElementPtr(DefaultValue_BasicTypes_A_pBoolean_LiteralBoolean14);
				DefaultValue_BasicTypes_A_pBoolean_LiteralBoolean14->setName("LiteralBoolean14");
				DefaultValue_BasicTypes_A_pBoolean_LiteralBoolean14->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_A_pBoolean_LiteralBoolean14->setValue(true);
			DefaultValue_BasicTypes_A_pBoolean->setDefaultValue(DefaultValue_BasicTypes_A_pBoolean_LiteralBoolean14);
		DefaultValue_BasicTypes_A->addOwnedAttribute(DefaultValue_BasicTypes_A_pBoolean);
			// Property pUnlimitedNatural
			DefaultValue_BasicTypes_A_pUnlimitedNatural->setThisElementPtr(DefaultValue_BasicTypes_A_pUnlimitedNatural);
			DefaultValue_BasicTypes_A_pUnlimitedNatural->setName("pUnlimitedNatural");
			DefaultValue_BasicTypes_A_pUnlimitedNatural->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_A_pUnlimitedNatural->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_UnlimitedNatural);
				// LiteralUnlimitedNatural LiteralUnlimitedNatural13
				DefaultValue_BasicTypes_A_pUnlimitedNatural_LiteralUnlimitedNatural13->setThisElementPtr(DefaultValue_BasicTypes_A_pUnlimitedNatural_LiteralUnlimitedNatural13);
				DefaultValue_BasicTypes_A_pUnlimitedNatural_LiteralUnlimitedNatural13->setName("LiteralUnlimitedNatural13");
				DefaultValue_BasicTypes_A_pUnlimitedNatural_LiteralUnlimitedNatural13->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_A_pUnlimitedNatural_LiteralUnlimitedNatural13->setValue(-1);
			DefaultValue_BasicTypes_A_pUnlimitedNatural->setDefaultValue(DefaultValue_BasicTypes_A_pUnlimitedNatural_LiteralUnlimitedNatural13);
		DefaultValue_BasicTypes_A->addOwnedAttribute(DefaultValue_BasicTypes_A_pUnlimitedNatural);
			// Property pReal
			DefaultValue_BasicTypes_A_pReal->setThisElementPtr(DefaultValue_BasicTypes_A_pReal);
			DefaultValue_BasicTypes_A_pReal->setName("pReal");
			DefaultValue_BasicTypes_A_pReal->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_A_pReal->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
				// LiteralReal LiteralReal10
				DefaultValue_BasicTypes_A_pReal_LiteralReal10->setThisElementPtr(DefaultValue_BasicTypes_A_pReal_LiteralReal10);
				DefaultValue_BasicTypes_A_pReal_LiteralReal10->setName("LiteralReal10");
				DefaultValue_BasicTypes_A_pReal_LiteralReal10->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_A_pReal_LiteralReal10->setValue(4.0f);
			DefaultValue_BasicTypes_A_pReal->setDefaultValue(DefaultValue_BasicTypes_A_pReal_LiteralReal10);
		DefaultValue_BasicTypes_A->addOwnedAttribute(DefaultValue_BasicTypes_A_pReal);
			// Property pEnum
			DefaultValue_BasicTypes_A_pEnum->setThisElementPtr(DefaultValue_BasicTypes_A_pEnum);
			DefaultValue_BasicTypes_A_pEnum->setName("pEnum");
			DefaultValue_BasicTypes_A_pEnum->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_A_pEnum->setType(DefaultValue_BasicTypes_E);
				// InstanceValue InstanceValue11
				DefaultValue_BasicTypes_A_pEnum_InstanceValue11->setThisElementPtr(DefaultValue_BasicTypes_A_pEnum_InstanceValue11);
				DefaultValue_BasicTypes_A_pEnum_InstanceValue11->setName("InstanceValue11");
				DefaultValue_BasicTypes_A_pEnum_InstanceValue11->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_A_pEnum_InstanceValue11->setType(DefaultValue_BasicTypes_E);
				DefaultValue_BasicTypes_A_pEnum_InstanceValue11->setInstance(DefaultValue_BasicTypes_E_e2);
			DefaultValue_BasicTypes_A_pEnum->setDefaultValue(DefaultValue_BasicTypes_A_pEnum_InstanceValue11);
		DefaultValue_BasicTypes_A->addOwnedAttribute(DefaultValue_BasicTypes_A_pEnum);
		
		
			// Operation A_A
			DefaultValue_BasicTypes_A_A_A->setThisOperationPtr(DefaultValue_BasicTypes_A_A_A);
			DefaultValue_BasicTypes_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			DefaultValue_BasicTypes_A_A_A->setName("A_A");
			DefaultValue_BasicTypes_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				DefaultValue_BasicTypes_A_A_A_result->setThisElementPtr(DefaultValue_BasicTypes_A_A_A_result);
				DefaultValue_BasicTypes_A_A_A_result->setName("result");
				DefaultValue_BasicTypes_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				DefaultValue_BasicTypes_A_A_A_result->setType(DefaultValue_BasicTypes_A);
				DefaultValue_BasicTypes_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			DefaultValue_BasicTypes_A_A_A->addOwnedParameter(DefaultValue_BasicTypes_A_A_A_result);
		DefaultValue_BasicTypes_A->addOwnedOperation(DefaultValue_BasicTypes_A_A_A);
	DefaultValue_BasicTypes->addPackagedElement(DefaultValue_BasicTypes_A);
		// Activity assert_A
		DefaultValue_BasicTypes_assert_A->setThisActivityPtr(DefaultValue_BasicTypes_assert_A);
		DefaultValue_BasicTypes_assert_A->setName("assert_A");
		DefaultValue_BasicTypes_assert_A->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testDefaultValues
			DefaultValue_BasicTypes_assert_A_testDefaultValues->setThisClass_Ptr(DefaultValue_BasicTypes_assert_A_testDefaultValues);
			DefaultValue_BasicTypes_assert_A_testDefaultValues->setName("testDefaultValues");
			DefaultValue_BasicTypes_assert_A_testDefaultValues->setVisibility(VisibilityKind::public_);
			
				// Parameter pInteger
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pInteger->setThisElementPtr(DefaultValue_BasicTypes_assert_A_testDefaultValues_pInteger);
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pInteger->setName("pInteger");
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pInteger->setVisibility(VisibilityKind::public_);
				
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pInteger->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			DefaultValue_BasicTypes_assert_A_testDefaultValues->addOwnedParameter(DefaultValue_BasicTypes_assert_A_testDefaultValues_pInteger);
				// Parameter pString
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pString->setThisElementPtr(DefaultValue_BasicTypes_assert_A_testDefaultValues_pString);
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pString->setName("pString");
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pString->setVisibility(VisibilityKind::public_);
				
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pString->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DefaultValue_BasicTypes_assert_A_testDefaultValues->addOwnedParameter(DefaultValue_BasicTypes_assert_A_testDefaultValues_pString);
				// Parameter pBoolean
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pBoolean->setThisElementPtr(DefaultValue_BasicTypes_assert_A_testDefaultValues_pBoolean);
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pBoolean->setName("pBoolean");
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pBoolean->setVisibility(VisibilityKind::public_);
				
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pBoolean->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			DefaultValue_BasicTypes_assert_A_testDefaultValues->addOwnedParameter(DefaultValue_BasicTypes_assert_A_testDefaultValues_pBoolean);
				// Parameter pUnlimitedNatural
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pUnlimitedNatural->setThisElementPtr(DefaultValue_BasicTypes_assert_A_testDefaultValues_pUnlimitedNatural);
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pUnlimitedNatural->setName("pUnlimitedNatural");
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pUnlimitedNatural->setVisibility(VisibilityKind::public_);
				
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pUnlimitedNatural->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_UnlimitedNatural);
			DefaultValue_BasicTypes_assert_A_testDefaultValues->addOwnedParameter(DefaultValue_BasicTypes_assert_A_testDefaultValues_pUnlimitedNatural);
				// Parameter pReal
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pReal->setThisElementPtr(DefaultValue_BasicTypes_assert_A_testDefaultValues_pReal);
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pReal->setName("pReal");
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pReal->setVisibility(VisibilityKind::public_);
				
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pReal->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
			DefaultValue_BasicTypes_assert_A_testDefaultValues->addOwnedParameter(DefaultValue_BasicTypes_assert_A_testDefaultValues_pReal);
				// Parameter pEnum
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pEnum->setThisElementPtr(DefaultValue_BasicTypes_assert_A_testDefaultValues_pEnum);
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pEnum->setName("pEnum");
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pEnum->setVisibility(VisibilityKind::public_);
				
				DefaultValue_BasicTypes_assert_A_testDefaultValues_pEnum->setType(DefaultValue_BasicTypes_E);
			DefaultValue_BasicTypes_assert_A_testDefaultValues->addOwnedParameter(DefaultValue_BasicTypes_assert_A_testDefaultValues_pEnum);
			DefaultValue_BasicTypes_assert_A_testDefaultValues->addLanguage("C++");
			DefaultValue_BasicTypes_assert_A_testDefaultValues->addLanguage("Include");
			DefaultValue_BasicTypes_assert_A_testDefaultValues->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	// Test parameter pInteger 	int pInteger = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument \" + inputParameters->at(0)->parameter->name +  \" = \" + std::to_string(pInteger)); 	if(pInteger == 4) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK << \" for a.pInteger\"<<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed\" << ASCII_BLK << \" for a.pInteger. Was: \" << pInteger << \" ; Should: 4\"<<std::endl; 	} 	// Test parameter pString 	std::string pString = AS(StringValue, inputParameters->at(1)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument \" + inputParameters->at(1)->parameter->name +  \" = \" + pString); 	if(pString == \"Hello\") 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK << \" for a.pString\"<<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed\" << ASCII_BLK << \" for a.pString. Was: \" << pString << \" ; Should: Hello\"<<std::endl; 	} 	// Test parameter pBoolean 	bool pBoolean = AS(BooleanValue, inputParameters->at(2)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument \" + inputParameters->at(2)->parameter->name +  \" = \" + std::to_string(pBoolean)); 	if(pBoolean) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK << \" for a.pBoolean\"<<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed\" << ASCII_BLK << \" for a.pBoolean. Was: \" << std::to_string(pBoolean) << \" ; Should: true\"<<std::endl; 	} 	// Test parameter pUnlimitedNatural 	int pUnlimitedNatural = AS(UnlimitedNaturalValue, inputParameters->at(3)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument \" + inputParameters->at(3)->parameter->name +  \" = \" + std::to_string(pUnlimitedNatural)); 	if(pUnlimitedNatural == -1) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK << \" for a.pUnlimitedNatural\"<<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed\" << ASCII_BLK << \" for a.pUnlimitedNatural. Was: \" << std::to_string(pUnlimitedNatural) << \" ; Should: -1\"<<std::endl; 	} 	// Test parameter pReal 	float pReal = AS(RealValue, inputParameters->at(4)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument \" + inputParameters->at(4)->parameter->name +  \" = \" + std::to_string(pReal)); 	if(pReal == 4.0) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK << \" for a.pReal\"<<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed\" << ASCII_BLK << \" for a.pReal. Was: \" << std::to_string(pReal) << \" ; Should: 4.0\"<<std::endl; 	} 	// Test parameter pEnum 	const EnumerationLiteralPtr pEnum = AS(EnumerationValue, inputParameters->at(5)->values->at(0))->literal; 	fuml::Debug::println(\"[doBody] argument \" + inputParameters->at(5)->parameter->name +  \" = \" + pEnum->qualifiedName); 	if(pEnum == DefaultValue_BasicTypesModel::Instance()->DefaultValue_BasicTypes_E_e2) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK << \" for a.pEnum\"<<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed\" << ASCII_BLK << \" for a.pEnum. Was: \" << pEnum->qualifiedName << \" ; Should: DefaultValue_BasicTypes::E::e2\"<<std::endl; 	}");
			DefaultValue_BasicTypes_assert_A_testDefaultValues->addBody("#include <cassert> #include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> #include <fuml/semantics/simpleclassifiers/StringValue.h> #include <fuml/semantics/simpleclassifiers/BooleanValue.h> #include <fuml/semantics/simpleclassifiers/RealValue.h> #include <fuml/semantics/simpleclassifiers/UnlimitedNaturalValue.h> #include <fuml/semantics/simpleclassifiers/EnumerationValue.h> #include <uml/classification/Parameter.h> #include <uml/simpleclassifiers/EnumerationLiteral.h>");
		DefaultValue_BasicTypes_assert_A->addOwnedBehavior(DefaultValue_BasicTypes_assert_A_testDefaultValues);
			// Parameter a
			DefaultValue_BasicTypes_assert_A_a->setThisElementPtr(DefaultValue_BasicTypes_assert_A_a);
			DefaultValue_BasicTypes_assert_A_a->setName("a");
			DefaultValue_BasicTypes_assert_A_a->setVisibility(VisibilityKind::public_);
		DefaultValue_BasicTypes_assert_A->addOwnedParameter(DefaultValue_BasicTypes_assert_A_a);
			// CallBehaviorAction Test Default Values
			DefaultValue_BasicTypes_assert_A_Test_Default_Values->setThisExecutableNodePtr(DefaultValue_BasicTypes_assert_A_Test_Default_Values);
			DefaultValue_BasicTypes_assert_A_Test_Default_Values->setName("Test Default Values");
			DefaultValue_BasicTypes_assert_A_Test_Default_Values->setVisibility(VisibilityKind::public_);
			DefaultValue_BasicTypes_assert_A_Test_Default_Values->setBehavior(DefaultValue_BasicTypes_assert_A_testDefaultValues);
				// InputPin pInteger
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger->setName("pInteger");
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			DefaultValue_BasicTypes_assert_A_Test_Default_Values->addArgument(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger);
				// InputPin pString
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString->setName("pString");
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DefaultValue_BasicTypes_assert_A_Test_Default_Values->addArgument(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString);
				// InputPin pBoolean
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean->setName("pBoolean");
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			DefaultValue_BasicTypes_assert_A_Test_Default_Values->addArgument(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean);
				// InputPin pUnlimitedNatural
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural->setName("pUnlimitedNatural");
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_UnlimitedNatural);
			DefaultValue_BasicTypes_assert_A_Test_Default_Values->addArgument(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural);
				// InputPin pReal
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal->setName("pReal");
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
			DefaultValue_BasicTypes_assert_A_Test_Default_Values->addArgument(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal);
				// InputPin pEnum
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum->setName("pEnum");
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum->setType(DefaultValue_BasicTypes_E);
			DefaultValue_BasicTypes_assert_A_Test_Default_Values->addArgument(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum);
		DefaultValue_BasicTypes_assert_A->addNode(DefaultValue_BasicTypes_assert_A_Test_Default_Values);
			// ReadStructuralFeatureAction Read a.pInteger
			DefaultValue_BasicTypes_assert_A_Read_a_pInteger->setThisExecutableNodePtr(DefaultValue_BasicTypes_assert_A_Read_a_pInteger);
			DefaultValue_BasicTypes_assert_A_Read_a_pInteger->setName("Read a.pInteger");
			DefaultValue_BasicTypes_assert_A_Read_a_pInteger->setVisibility(VisibilityKind::public_);
			DefaultValue_BasicTypes_assert_A_Read_a_pInteger->setStructuralFeature(DefaultValue_BasicTypes_A_pInteger);
				// InputPin object
				DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object);
				DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object->setName("object");
				DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object->setType(DefaultValue_BasicTypes_A);
			DefaultValue_BasicTypes_assert_A_Read_a_pInteger->setObject(DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object);
				// OutputPin result
				DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result);
				DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result->setName("result");
				DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			DefaultValue_BasicTypes_assert_A_Read_a_pInteger->setResult(DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result);
		DefaultValue_BasicTypes_assert_A->addNode(DefaultValue_BasicTypes_assert_A_Read_a_pInteger);
			// ActivityParameterNode a_node
			DefaultValue_BasicTypes_assert_A_a_node->setThisElementPtr(DefaultValue_BasicTypes_assert_A_a_node);
			DefaultValue_BasicTypes_assert_A_a_node->setName("a_node");
			DefaultValue_BasicTypes_assert_A_a_node->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_assert_A_a_node->setParameter(DefaultValue_BasicTypes_assert_A_a);
		DefaultValue_BasicTypes_assert_A->addNode(DefaultValue_BasicTypes_assert_A_a_node);
			// ReadStructuralFeatureAction Read a.pString
			DefaultValue_BasicTypes_assert_A_Read_a_pString->setThisExecutableNodePtr(DefaultValue_BasicTypes_assert_A_Read_a_pString);
			DefaultValue_BasicTypes_assert_A_Read_a_pString->setName("Read a.pString");
			DefaultValue_BasicTypes_assert_A_Read_a_pString->setVisibility(VisibilityKind::public_);
			DefaultValue_BasicTypes_assert_A_Read_a_pString->setStructuralFeature(DefaultValue_BasicTypes_A_pString);
				// InputPin object
				DefaultValue_BasicTypes_assert_A_Read_a_pString_object->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Read_a_pString_object);
				DefaultValue_BasicTypes_assert_A_Read_a_pString_object->setName("object");
				DefaultValue_BasicTypes_assert_A_Read_a_pString_object->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Read_a_pString_object->setType(DefaultValue_BasicTypes_A);
			DefaultValue_BasicTypes_assert_A_Read_a_pString->setObject(DefaultValue_BasicTypes_assert_A_Read_a_pString_object);
				// OutputPin result
				DefaultValue_BasicTypes_assert_A_Read_a_pString_result->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Read_a_pString_result);
				DefaultValue_BasicTypes_assert_A_Read_a_pString_result->setName("result");
				DefaultValue_BasicTypes_assert_A_Read_a_pString_result->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Read_a_pString_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
			DefaultValue_BasicTypes_assert_A_Read_a_pString->setResult(DefaultValue_BasicTypes_assert_A_Read_a_pString_result);
		DefaultValue_BasicTypes_assert_A->addNode(DefaultValue_BasicTypes_assert_A_Read_a_pString);
			// ReadStructuralFeatureAction Read a.pUnlimitedNatural
			DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural->setThisExecutableNodePtr(DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural);
			DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural->setName("Read a.pUnlimitedNatural");
			DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural->setVisibility(VisibilityKind::public_);
			DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural->setStructuralFeature(DefaultValue_BasicTypes_A_pUnlimitedNatural);
				// InputPin object
				DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object);
				DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object->setName("object");
				DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object->setType(DefaultValue_BasicTypes_A);
			DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural->setObject(DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object);
				// OutputPin result
				DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result);
				DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result->setName("result");
				DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_UnlimitedNatural);
			DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural->setResult(DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result);
		DefaultValue_BasicTypes_assert_A->addNode(DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural);
			// ReadStructuralFeatureAction Read a.pBoolean
			DefaultValue_BasicTypes_assert_A_Read_a_pBoolean->setThisExecutableNodePtr(DefaultValue_BasicTypes_assert_A_Read_a_pBoolean);
			DefaultValue_BasicTypes_assert_A_Read_a_pBoolean->setName("Read a.pBoolean");
			DefaultValue_BasicTypes_assert_A_Read_a_pBoolean->setVisibility(VisibilityKind::public_);
			DefaultValue_BasicTypes_assert_A_Read_a_pBoolean->setStructuralFeature(DefaultValue_BasicTypes_A_pBoolean);
				// InputPin object
				DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object);
				DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object->setName("object");
				DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object->setType(DefaultValue_BasicTypes_A);
			DefaultValue_BasicTypes_assert_A_Read_a_pBoolean->setObject(DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object);
				// OutputPin result
				DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result);
				DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result->setName("result");
				DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Boolean);
			DefaultValue_BasicTypes_assert_A_Read_a_pBoolean->setResult(DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result);
		DefaultValue_BasicTypes_assert_A->addNode(DefaultValue_BasicTypes_assert_A_Read_a_pBoolean);
			// ForkNode Fork_a
			DefaultValue_BasicTypes_assert_A_Fork_a->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Fork_a);
			DefaultValue_BasicTypes_assert_A_Fork_a->setName("Fork_a");
			DefaultValue_BasicTypes_assert_A_Fork_a->setVisibility(VisibilityKind::public_);
		DefaultValue_BasicTypes_assert_A->addNode(DefaultValue_BasicTypes_assert_A_Fork_a);
			// ReadStructuralFeatureAction Read a.pReal
			DefaultValue_BasicTypes_assert_A_Read_a_pReal->setThisExecutableNodePtr(DefaultValue_BasicTypes_assert_A_Read_a_pReal);
			DefaultValue_BasicTypes_assert_A_Read_a_pReal->setName("Read a.pReal");
			DefaultValue_BasicTypes_assert_A_Read_a_pReal->setVisibility(VisibilityKind::public_);
			DefaultValue_BasicTypes_assert_A_Read_a_pReal->setStructuralFeature(DefaultValue_BasicTypes_A_pReal);
				// InputPin object
				DefaultValue_BasicTypes_assert_A_Read_a_pReal_object->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Read_a_pReal_object);
				DefaultValue_BasicTypes_assert_A_Read_a_pReal_object->setName("object");
				DefaultValue_BasicTypes_assert_A_Read_a_pReal_object->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Read_a_pReal_object->setType(DefaultValue_BasicTypes_A);
			DefaultValue_BasicTypes_assert_A_Read_a_pReal->setObject(DefaultValue_BasicTypes_assert_A_Read_a_pReal_object);
				// OutputPin result
				DefaultValue_BasicTypes_assert_A_Read_a_pReal_result->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Read_a_pReal_result);
				DefaultValue_BasicTypes_assert_A_Read_a_pReal_result->setName("result");
				DefaultValue_BasicTypes_assert_A_Read_a_pReal_result->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Read_a_pReal_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Real);
			DefaultValue_BasicTypes_assert_A_Read_a_pReal->setResult(DefaultValue_BasicTypes_assert_A_Read_a_pReal_result);
		DefaultValue_BasicTypes_assert_A->addNode(DefaultValue_BasicTypes_assert_A_Read_a_pReal);
			// ReadStructuralFeatureAction Read a.pEnum
			DefaultValue_BasicTypes_assert_A_Read_a_pEnum->setThisExecutableNodePtr(DefaultValue_BasicTypes_assert_A_Read_a_pEnum);
			DefaultValue_BasicTypes_assert_A_Read_a_pEnum->setName("Read a.pEnum");
			DefaultValue_BasicTypes_assert_A_Read_a_pEnum->setVisibility(VisibilityKind::public_);
			DefaultValue_BasicTypes_assert_A_Read_a_pEnum->setStructuralFeature(DefaultValue_BasicTypes_A_pEnum);
				// InputPin object
				DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object);
				DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object->setName("object");
				DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object->setType(DefaultValue_BasicTypes_A);
			DefaultValue_BasicTypes_assert_A_Read_a_pEnum->setObject(DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object);
				// OutputPin result
				DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result->setThisElementPtr(DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result);
				DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result->setName("result");
				DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result->setType(DefaultValue_BasicTypes_E);
			DefaultValue_BasicTypes_assert_A_Read_a_pEnum->setResult(DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result);
		DefaultValue_BasicTypes_assert_A->addNode(DefaultValue_BasicTypes_assert_A_Read_a_pEnum);
			// ObjectFlow ObjectFlow15 from result to pString
			DefaultValue_BasicTypes_assert_A_ObjectFlow15->setThisActivityEdgePtr(DefaultValue_BasicTypes_assert_A_ObjectFlow15);
			DefaultValue_BasicTypes_assert_A_ObjectFlow15->setName("ObjectFlow15");
			DefaultValue_BasicTypes_assert_A_ObjectFlow15->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_assert_A_ObjectFlow15->setSource(DefaultValue_BasicTypes_assert_A_Read_a_pString_result);
			DefaultValue_BasicTypes_assert_A_ObjectFlow15->setTarget(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pString);
				// LiteralBoolean LiteralBoolean17
				DefaultValue_BasicTypes_assert_A_ObjectFlow15_LiteralBoolean17->setThisElementPtr(DefaultValue_BasicTypes_assert_A_ObjectFlow15_LiteralBoolean17);
				DefaultValue_BasicTypes_assert_A_ObjectFlow15_LiteralBoolean17->setName("LiteralBoolean17");
				DefaultValue_BasicTypes_assert_A_ObjectFlow15_LiteralBoolean17->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_ObjectFlow15_LiteralBoolean17->setValue(true);
			DefaultValue_BasicTypes_assert_A_ObjectFlow15->setGuard(DefaultValue_BasicTypes_assert_A_ObjectFlow15_LiteralBoolean17);
		DefaultValue_BasicTypes_assert_A->addEdge(DefaultValue_BasicTypes_assert_A_ObjectFlow15);
			// ObjectFlow ObjectFlow30 from Fork_a to object
			DefaultValue_BasicTypes_assert_A_ObjectFlow30->setThisActivityEdgePtr(DefaultValue_BasicTypes_assert_A_ObjectFlow30);
			DefaultValue_BasicTypes_assert_A_ObjectFlow30->setName("ObjectFlow30");
			DefaultValue_BasicTypes_assert_A_ObjectFlow30->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_assert_A_ObjectFlow30->setSource(DefaultValue_BasicTypes_assert_A_Fork_a);
			DefaultValue_BasicTypes_assert_A_ObjectFlow30->setTarget(DefaultValue_BasicTypes_assert_A_Read_a_pReal_object);
				// LiteralBoolean LiteralBoolean32
				DefaultValue_BasicTypes_assert_A_ObjectFlow30_LiteralBoolean32->setThisElementPtr(DefaultValue_BasicTypes_assert_A_ObjectFlow30_LiteralBoolean32);
				DefaultValue_BasicTypes_assert_A_ObjectFlow30_LiteralBoolean32->setName("LiteralBoolean32");
				DefaultValue_BasicTypes_assert_A_ObjectFlow30_LiteralBoolean32->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_ObjectFlow30_LiteralBoolean32->setValue(true);
			DefaultValue_BasicTypes_assert_A_ObjectFlow30->setGuard(DefaultValue_BasicTypes_assert_A_ObjectFlow30_LiteralBoolean32);
		DefaultValue_BasicTypes_assert_A->addEdge(DefaultValue_BasicTypes_assert_A_ObjectFlow30);
			// ObjectFlow ObjectFlow33 from result to pEnum
			DefaultValue_BasicTypes_assert_A_ObjectFlow33->setThisActivityEdgePtr(DefaultValue_BasicTypes_assert_A_ObjectFlow33);
			DefaultValue_BasicTypes_assert_A_ObjectFlow33->setName("ObjectFlow33");
			DefaultValue_BasicTypes_assert_A_ObjectFlow33->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_assert_A_ObjectFlow33->setSource(DefaultValue_BasicTypes_assert_A_Read_a_pEnum_result);
			DefaultValue_BasicTypes_assert_A_ObjectFlow33->setTarget(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pEnum);
				// LiteralBoolean LiteralBoolean35
				DefaultValue_BasicTypes_assert_A_ObjectFlow33_LiteralBoolean35->setThisElementPtr(DefaultValue_BasicTypes_assert_A_ObjectFlow33_LiteralBoolean35);
				DefaultValue_BasicTypes_assert_A_ObjectFlow33_LiteralBoolean35->setName("LiteralBoolean35");
				DefaultValue_BasicTypes_assert_A_ObjectFlow33_LiteralBoolean35->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_ObjectFlow33_LiteralBoolean35->setValue(true);
			DefaultValue_BasicTypes_assert_A_ObjectFlow33->setGuard(DefaultValue_BasicTypes_assert_A_ObjectFlow33_LiteralBoolean35);
		DefaultValue_BasicTypes_assert_A->addEdge(DefaultValue_BasicTypes_assert_A_ObjectFlow33);
			// ObjectFlow ObjectFlow36 from Fork_a to object
			DefaultValue_BasicTypes_assert_A_ObjectFlow36->setThisActivityEdgePtr(DefaultValue_BasicTypes_assert_A_ObjectFlow36);
			DefaultValue_BasicTypes_assert_A_ObjectFlow36->setName("ObjectFlow36");
			DefaultValue_BasicTypes_assert_A_ObjectFlow36->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_assert_A_ObjectFlow36->setSource(DefaultValue_BasicTypes_assert_A_Fork_a);
			DefaultValue_BasicTypes_assert_A_ObjectFlow36->setTarget(DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_object);
				// LiteralBoolean LiteralBoolean38
				DefaultValue_BasicTypes_assert_A_ObjectFlow36_LiteralBoolean38->setThisElementPtr(DefaultValue_BasicTypes_assert_A_ObjectFlow36_LiteralBoolean38);
				DefaultValue_BasicTypes_assert_A_ObjectFlow36_LiteralBoolean38->setName("LiteralBoolean38");
				DefaultValue_BasicTypes_assert_A_ObjectFlow36_LiteralBoolean38->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_ObjectFlow36_LiteralBoolean38->setValue(true);
			DefaultValue_BasicTypes_assert_A_ObjectFlow36->setGuard(DefaultValue_BasicTypes_assert_A_ObjectFlow36_LiteralBoolean38);
		DefaultValue_BasicTypes_assert_A->addEdge(DefaultValue_BasicTypes_assert_A_ObjectFlow36);
			// ObjectFlow ObjectFlow46 from Fork_a to object
			DefaultValue_BasicTypes_assert_A_ObjectFlow46->setThisActivityEdgePtr(DefaultValue_BasicTypes_assert_A_ObjectFlow46);
			DefaultValue_BasicTypes_assert_A_ObjectFlow46->setName("ObjectFlow46");
			DefaultValue_BasicTypes_assert_A_ObjectFlow46->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_assert_A_ObjectFlow46->setSource(DefaultValue_BasicTypes_assert_A_Fork_a);
			DefaultValue_BasicTypes_assert_A_ObjectFlow46->setTarget(DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_object);
				// LiteralBoolean LiteralBoolean47
				DefaultValue_BasicTypes_assert_A_ObjectFlow46_LiteralBoolean47->setThisElementPtr(DefaultValue_BasicTypes_assert_A_ObjectFlow46_LiteralBoolean47);
				DefaultValue_BasicTypes_assert_A_ObjectFlow46_LiteralBoolean47->setName("LiteralBoolean47");
				DefaultValue_BasicTypes_assert_A_ObjectFlow46_LiteralBoolean47->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_ObjectFlow46_LiteralBoolean47->setValue(true);
			DefaultValue_BasicTypes_assert_A_ObjectFlow46->setGuard(DefaultValue_BasicTypes_assert_A_ObjectFlow46_LiteralBoolean47);
		DefaultValue_BasicTypes_assert_A->addEdge(DefaultValue_BasicTypes_assert_A_ObjectFlow46);
			// ObjectFlow ObjectFlow43 from result to pReal
			DefaultValue_BasicTypes_assert_A_ObjectFlow43->setThisActivityEdgePtr(DefaultValue_BasicTypes_assert_A_ObjectFlow43);
			DefaultValue_BasicTypes_assert_A_ObjectFlow43->setName("ObjectFlow43");
			DefaultValue_BasicTypes_assert_A_ObjectFlow43->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_assert_A_ObjectFlow43->setSource(DefaultValue_BasicTypes_assert_A_Read_a_pReal_result);
			DefaultValue_BasicTypes_assert_A_ObjectFlow43->setTarget(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pReal);
				// LiteralBoolean LiteralBoolean44
				DefaultValue_BasicTypes_assert_A_ObjectFlow43_LiteralBoolean44->setThisElementPtr(DefaultValue_BasicTypes_assert_A_ObjectFlow43_LiteralBoolean44);
				DefaultValue_BasicTypes_assert_A_ObjectFlow43_LiteralBoolean44->setName("LiteralBoolean44");
				DefaultValue_BasicTypes_assert_A_ObjectFlow43_LiteralBoolean44->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_ObjectFlow43_LiteralBoolean44->setValue(true);
			DefaultValue_BasicTypes_assert_A_ObjectFlow43->setGuard(DefaultValue_BasicTypes_assert_A_ObjectFlow43_LiteralBoolean44);
		DefaultValue_BasicTypes_assert_A->addEdge(DefaultValue_BasicTypes_assert_A_ObjectFlow43);
			// ObjectFlow ObjectFlow49 from a_node to Fork_a
			DefaultValue_BasicTypes_assert_A_ObjectFlow49->setThisActivityEdgePtr(DefaultValue_BasicTypes_assert_A_ObjectFlow49);
			DefaultValue_BasicTypes_assert_A_ObjectFlow49->setName("ObjectFlow49");
			DefaultValue_BasicTypes_assert_A_ObjectFlow49->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_assert_A_ObjectFlow49->setSource(DefaultValue_BasicTypes_assert_A_a_node);
			DefaultValue_BasicTypes_assert_A_ObjectFlow49->setTarget(DefaultValue_BasicTypes_assert_A_Fork_a);
				// LiteralBoolean LiteralBoolean50
				DefaultValue_BasicTypes_assert_A_ObjectFlow49_LiteralBoolean50->setThisElementPtr(DefaultValue_BasicTypes_assert_A_ObjectFlow49_LiteralBoolean50);
				DefaultValue_BasicTypes_assert_A_ObjectFlow49_LiteralBoolean50->setName("LiteralBoolean50");
				DefaultValue_BasicTypes_assert_A_ObjectFlow49_LiteralBoolean50->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_ObjectFlow49_LiteralBoolean50->setValue(true);
			DefaultValue_BasicTypes_assert_A_ObjectFlow49->setGuard(DefaultValue_BasicTypes_assert_A_ObjectFlow49_LiteralBoolean50);
		DefaultValue_BasicTypes_assert_A->addEdge(DefaultValue_BasicTypes_assert_A_ObjectFlow49);
			// ObjectFlow ObjectFlow56 from Fork_a to object
			DefaultValue_BasicTypes_assert_A_ObjectFlow56->setThisActivityEdgePtr(DefaultValue_BasicTypes_assert_A_ObjectFlow56);
			DefaultValue_BasicTypes_assert_A_ObjectFlow56->setName("ObjectFlow56");
			DefaultValue_BasicTypes_assert_A_ObjectFlow56->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_assert_A_ObjectFlow56->setSource(DefaultValue_BasicTypes_assert_A_Fork_a);
			DefaultValue_BasicTypes_assert_A_ObjectFlow56->setTarget(DefaultValue_BasicTypes_assert_A_Read_a_pInteger_object);
				// LiteralBoolean LiteralBoolean58
				DefaultValue_BasicTypes_assert_A_ObjectFlow56_LiteralBoolean58->setThisElementPtr(DefaultValue_BasicTypes_assert_A_ObjectFlow56_LiteralBoolean58);
				DefaultValue_BasicTypes_assert_A_ObjectFlow56_LiteralBoolean58->setName("LiteralBoolean58");
				DefaultValue_BasicTypes_assert_A_ObjectFlow56_LiteralBoolean58->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_ObjectFlow56_LiteralBoolean58->setValue(true);
			DefaultValue_BasicTypes_assert_A_ObjectFlow56->setGuard(DefaultValue_BasicTypes_assert_A_ObjectFlow56_LiteralBoolean58);
		DefaultValue_BasicTypes_assert_A->addEdge(DefaultValue_BasicTypes_assert_A_ObjectFlow56);
			// ObjectFlow ObjectFlow63 from result to pBoolean
			DefaultValue_BasicTypes_assert_A_ObjectFlow63->setThisActivityEdgePtr(DefaultValue_BasicTypes_assert_A_ObjectFlow63);
			DefaultValue_BasicTypes_assert_A_ObjectFlow63->setName("ObjectFlow63");
			DefaultValue_BasicTypes_assert_A_ObjectFlow63->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_assert_A_ObjectFlow63->setSource(DefaultValue_BasicTypes_assert_A_Read_a_pBoolean_result);
			DefaultValue_BasicTypes_assert_A_ObjectFlow63->setTarget(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pBoolean);
				// LiteralBoolean LiteralBoolean64
				DefaultValue_BasicTypes_assert_A_ObjectFlow63_LiteralBoolean64->setThisElementPtr(DefaultValue_BasicTypes_assert_A_ObjectFlow63_LiteralBoolean64);
				DefaultValue_BasicTypes_assert_A_ObjectFlow63_LiteralBoolean64->setName("LiteralBoolean64");
				DefaultValue_BasicTypes_assert_A_ObjectFlow63_LiteralBoolean64->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_ObjectFlow63_LiteralBoolean64->setValue(true);
			DefaultValue_BasicTypes_assert_A_ObjectFlow63->setGuard(DefaultValue_BasicTypes_assert_A_ObjectFlow63_LiteralBoolean64);
		DefaultValue_BasicTypes_assert_A->addEdge(DefaultValue_BasicTypes_assert_A_ObjectFlow63);
			// ObjectFlow ObjectFlow66 from result to pInteger
			DefaultValue_BasicTypes_assert_A_ObjectFlow66->setThisActivityEdgePtr(DefaultValue_BasicTypes_assert_A_ObjectFlow66);
			DefaultValue_BasicTypes_assert_A_ObjectFlow66->setName("ObjectFlow66");
			DefaultValue_BasicTypes_assert_A_ObjectFlow66->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_assert_A_ObjectFlow66->setSource(DefaultValue_BasicTypes_assert_A_Read_a_pInteger_result);
			DefaultValue_BasicTypes_assert_A_ObjectFlow66->setTarget(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pInteger);
				// LiteralBoolean LiteralBoolean67
				DefaultValue_BasicTypes_assert_A_ObjectFlow66_LiteralBoolean67->setThisElementPtr(DefaultValue_BasicTypes_assert_A_ObjectFlow66_LiteralBoolean67);
				DefaultValue_BasicTypes_assert_A_ObjectFlow66_LiteralBoolean67->setName("LiteralBoolean67");
				DefaultValue_BasicTypes_assert_A_ObjectFlow66_LiteralBoolean67->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_ObjectFlow66_LiteralBoolean67->setValue(true);
			DefaultValue_BasicTypes_assert_A_ObjectFlow66->setGuard(DefaultValue_BasicTypes_assert_A_ObjectFlow66_LiteralBoolean67);
		DefaultValue_BasicTypes_assert_A->addEdge(DefaultValue_BasicTypes_assert_A_ObjectFlow66);
			// ObjectFlow ObjectFlow73 from result to pUnlimitedNatural
			DefaultValue_BasicTypes_assert_A_ObjectFlow73->setThisActivityEdgePtr(DefaultValue_BasicTypes_assert_A_ObjectFlow73);
			DefaultValue_BasicTypes_assert_A_ObjectFlow73->setName("ObjectFlow73");
			DefaultValue_BasicTypes_assert_A_ObjectFlow73->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_assert_A_ObjectFlow73->setSource(DefaultValue_BasicTypes_assert_A_Read_a_pUnlimitedNatural_result);
			DefaultValue_BasicTypes_assert_A_ObjectFlow73->setTarget(DefaultValue_BasicTypes_assert_A_Test_Default_Values_pUnlimitedNatural);
				// LiteralBoolean LiteralBoolean75
				DefaultValue_BasicTypes_assert_A_ObjectFlow73_LiteralBoolean75->setThisElementPtr(DefaultValue_BasicTypes_assert_A_ObjectFlow73_LiteralBoolean75);
				DefaultValue_BasicTypes_assert_A_ObjectFlow73_LiteralBoolean75->setName("LiteralBoolean75");
				DefaultValue_BasicTypes_assert_A_ObjectFlow73_LiteralBoolean75->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_ObjectFlow73_LiteralBoolean75->setValue(true);
			DefaultValue_BasicTypes_assert_A_ObjectFlow73->setGuard(DefaultValue_BasicTypes_assert_A_ObjectFlow73_LiteralBoolean75);
		DefaultValue_BasicTypes_assert_A->addEdge(DefaultValue_BasicTypes_assert_A_ObjectFlow73);
			// ObjectFlow ObjectFlow85 from Fork_a to object
			DefaultValue_BasicTypes_assert_A_ObjectFlow85->setThisActivityEdgePtr(DefaultValue_BasicTypes_assert_A_ObjectFlow85);
			DefaultValue_BasicTypes_assert_A_ObjectFlow85->setName("ObjectFlow85");
			DefaultValue_BasicTypes_assert_A_ObjectFlow85->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_assert_A_ObjectFlow85->setSource(DefaultValue_BasicTypes_assert_A_Fork_a);
			DefaultValue_BasicTypes_assert_A_ObjectFlow85->setTarget(DefaultValue_BasicTypes_assert_A_Read_a_pEnum_object);
				// LiteralBoolean LiteralBoolean87
				DefaultValue_BasicTypes_assert_A_ObjectFlow85_LiteralBoolean87->setThisElementPtr(DefaultValue_BasicTypes_assert_A_ObjectFlow85_LiteralBoolean87);
				DefaultValue_BasicTypes_assert_A_ObjectFlow85_LiteralBoolean87->setName("LiteralBoolean87");
				DefaultValue_BasicTypes_assert_A_ObjectFlow85_LiteralBoolean87->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_ObjectFlow85_LiteralBoolean87->setValue(true);
			DefaultValue_BasicTypes_assert_A_ObjectFlow85->setGuard(DefaultValue_BasicTypes_assert_A_ObjectFlow85_LiteralBoolean87);
		DefaultValue_BasicTypes_assert_A->addEdge(DefaultValue_BasicTypes_assert_A_ObjectFlow85);
			// ObjectFlow ObjectFlow88 from Fork_a to object
			DefaultValue_BasicTypes_assert_A_ObjectFlow88->setThisActivityEdgePtr(DefaultValue_BasicTypes_assert_A_ObjectFlow88);
			DefaultValue_BasicTypes_assert_A_ObjectFlow88->setName("ObjectFlow88");
			DefaultValue_BasicTypes_assert_A_ObjectFlow88->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_assert_A_ObjectFlow88->setSource(DefaultValue_BasicTypes_assert_A_Fork_a);
			DefaultValue_BasicTypes_assert_A_ObjectFlow88->setTarget(DefaultValue_BasicTypes_assert_A_Read_a_pString_object);
				// LiteralBoolean LiteralBoolean89
				DefaultValue_BasicTypes_assert_A_ObjectFlow88_LiteralBoolean89->setThisElementPtr(DefaultValue_BasicTypes_assert_A_ObjectFlow88_LiteralBoolean89);
				DefaultValue_BasicTypes_assert_A_ObjectFlow88_LiteralBoolean89->setName("LiteralBoolean89");
				DefaultValue_BasicTypes_assert_A_ObjectFlow88_LiteralBoolean89->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_assert_A_ObjectFlow88_LiteralBoolean89->setValue(true);
			DefaultValue_BasicTypes_assert_A_ObjectFlow88->setGuard(DefaultValue_BasicTypes_assert_A_ObjectFlow88_LiteralBoolean89);
		DefaultValue_BasicTypes_assert_A->addEdge(DefaultValue_BasicTypes_assert_A_ObjectFlow88);
	DefaultValue_BasicTypes->addPackagedElement(DefaultValue_BasicTypes_assert_A);
		// Activity instantiate_A
		DefaultValue_BasicTypes_instantiate_A->setThisActivityPtr(DefaultValue_BasicTypes_instantiate_A);
		DefaultValue_BasicTypes_instantiate_A->setName("instantiate_A");
		DefaultValue_BasicTypes_instantiate_A->setVisibility(VisibilityKind::public_);
		
			// Parameter a
			DefaultValue_BasicTypes_instantiate_A_a->setThisElementPtr(DefaultValue_BasicTypes_instantiate_A_a);
			DefaultValue_BasicTypes_instantiate_A_a->setName("a");
			DefaultValue_BasicTypes_instantiate_A_a->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_instantiate_A_a->setType(DefaultValue_BasicTypes_A);
			DefaultValue_BasicTypes_instantiate_A_a->setDirection(ParameterDirectionKind::return_);
		DefaultValue_BasicTypes_instantiate_A->addOwnedParameter(DefaultValue_BasicTypes_instantiate_A_a);
			// ActivityParameterNode a_node
			DefaultValue_BasicTypes_instantiate_A_a_node->setThisElementPtr(DefaultValue_BasicTypes_instantiate_A_a_node);
			DefaultValue_BasicTypes_instantiate_A_a_node->setName("a_node");
			DefaultValue_BasicTypes_instantiate_A_a_node->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_instantiate_A_a_node->setParameter(DefaultValue_BasicTypes_instantiate_A_a);
		DefaultValue_BasicTypes_instantiate_A->addNode(DefaultValue_BasicTypes_instantiate_A_a_node);
			// CallOperationAction A()
			DefaultValue_BasicTypes_instantiate_A_A_->setThisExecutableNodePtr(DefaultValue_BasicTypes_instantiate_A_A_);
			DefaultValue_BasicTypes_instantiate_A_A_->setName("A()");
			DefaultValue_BasicTypes_instantiate_A_A_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				DefaultValue_BasicTypes_instantiate_A_A__result->setThisElementPtr(DefaultValue_BasicTypes_instantiate_A_A__result);
				DefaultValue_BasicTypes_instantiate_A_A__result->setName("result");
				DefaultValue_BasicTypes_instantiate_A_A__result->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_instantiate_A_A__result->setType(DefaultValue_BasicTypes_A);
			DefaultValue_BasicTypes_instantiate_A_A_->addResult(DefaultValue_BasicTypes_instantiate_A_A__result);
			DefaultValue_BasicTypes_instantiate_A_A_->setOperation(DefaultValue_BasicTypes_A_A_A);
				// InputPin target
				DefaultValue_BasicTypes_instantiate_A_A__target->setThisElementPtr(DefaultValue_BasicTypes_instantiate_A_A__target);
				DefaultValue_BasicTypes_instantiate_A_A__target->setName("target");
				DefaultValue_BasicTypes_instantiate_A_A__target->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_instantiate_A_A__target->setType(DefaultValue_BasicTypes_A);
			DefaultValue_BasicTypes_instantiate_A_A_->setTarget(DefaultValue_BasicTypes_instantiate_A_A__target);
		DefaultValue_BasicTypes_instantiate_A->addNode(DefaultValue_BasicTypes_instantiate_A_A_);
			// CreateObjectAction Create_A
			DefaultValue_BasicTypes_instantiate_A_Create_A->setThisExecutableNodePtr(DefaultValue_BasicTypes_instantiate_A_Create_A);
			DefaultValue_BasicTypes_instantiate_A_Create_A->setName("Create_A");
			DefaultValue_BasicTypes_instantiate_A_Create_A->setVisibility(VisibilityKind::public_);
			DefaultValue_BasicTypes_instantiate_A_Create_A->setClassifier(DefaultValue_BasicTypes_A);
				// OutputPin result
				DefaultValue_BasicTypes_instantiate_A_Create_A_result->setThisElementPtr(DefaultValue_BasicTypes_instantiate_A_Create_A_result);
				DefaultValue_BasicTypes_instantiate_A_Create_A_result->setName("result");
				DefaultValue_BasicTypes_instantiate_A_Create_A_result->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_instantiate_A_Create_A_result->setType(DefaultValue_BasicTypes_A);
			DefaultValue_BasicTypes_instantiate_A_Create_A->setResult(DefaultValue_BasicTypes_instantiate_A_Create_A_result);
		DefaultValue_BasicTypes_instantiate_A->addNode(DefaultValue_BasicTypes_instantiate_A_Create_A);
			// ObjectFlow ObjectFlow99 from result to a_node
			DefaultValue_BasicTypes_instantiate_A_ObjectFlow99->setThisActivityEdgePtr(DefaultValue_BasicTypes_instantiate_A_ObjectFlow99);
			DefaultValue_BasicTypes_instantiate_A_ObjectFlow99->setName("ObjectFlow99");
			DefaultValue_BasicTypes_instantiate_A_ObjectFlow99->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_instantiate_A_ObjectFlow99->setSource(DefaultValue_BasicTypes_instantiate_A_A__result);
			DefaultValue_BasicTypes_instantiate_A_ObjectFlow99->setTarget(DefaultValue_BasicTypes_instantiate_A_a_node);
				// LiteralBoolean LiteralBoolean101
				DefaultValue_BasicTypes_instantiate_A_ObjectFlow99_LiteralBoolean101->setThisElementPtr(DefaultValue_BasicTypes_instantiate_A_ObjectFlow99_LiteralBoolean101);
				DefaultValue_BasicTypes_instantiate_A_ObjectFlow99_LiteralBoolean101->setName("LiteralBoolean101");
				DefaultValue_BasicTypes_instantiate_A_ObjectFlow99_LiteralBoolean101->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_instantiate_A_ObjectFlow99_LiteralBoolean101->setValue(true);
			DefaultValue_BasicTypes_instantiate_A_ObjectFlow99->setGuard(DefaultValue_BasicTypes_instantiate_A_ObjectFlow99_LiteralBoolean101);
		DefaultValue_BasicTypes_instantiate_A->addEdge(DefaultValue_BasicTypes_instantiate_A_ObjectFlow99);
			// ObjectFlow ObjectFlow102 from result to target
			DefaultValue_BasicTypes_instantiate_A_ObjectFlow102->setThisActivityEdgePtr(DefaultValue_BasicTypes_instantiate_A_ObjectFlow102);
			DefaultValue_BasicTypes_instantiate_A_ObjectFlow102->setName("ObjectFlow102");
			DefaultValue_BasicTypes_instantiate_A_ObjectFlow102->setVisibility(VisibilityKind::public_);
			
			DefaultValue_BasicTypes_instantiate_A_ObjectFlow102->setSource(DefaultValue_BasicTypes_instantiate_A_Create_A_result);
			DefaultValue_BasicTypes_instantiate_A_ObjectFlow102->setTarget(DefaultValue_BasicTypes_instantiate_A_A__target);
				// LiteralBoolean LiteralBoolean103
				DefaultValue_BasicTypes_instantiate_A_ObjectFlow102_LiteralBoolean103->setThisElementPtr(DefaultValue_BasicTypes_instantiate_A_ObjectFlow102_LiteralBoolean103);
				DefaultValue_BasicTypes_instantiate_A_ObjectFlow102_LiteralBoolean103->setName("LiteralBoolean103");
				DefaultValue_BasicTypes_instantiate_A_ObjectFlow102_LiteralBoolean103->setVisibility(VisibilityKind::public_);
				DefaultValue_BasicTypes_instantiate_A_ObjectFlow102_LiteralBoolean103->setValue(true);
			DefaultValue_BasicTypes_instantiate_A_ObjectFlow102->setGuard(DefaultValue_BasicTypes_instantiate_A_ObjectFlow102_LiteralBoolean103);
		DefaultValue_BasicTypes_instantiate_A->addEdge(DefaultValue_BasicTypes_instantiate_A_ObjectFlow102);
	DefaultValue_BasicTypes->addPackagedElement(DefaultValue_BasicTypes_instantiate_A);
}
