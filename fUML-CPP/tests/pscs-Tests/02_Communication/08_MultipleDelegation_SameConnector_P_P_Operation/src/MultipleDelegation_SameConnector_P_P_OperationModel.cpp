/*
 * MultipleDelegation_SameConnector_P_P_OperationModel.cpp
 * 
 * Auto-generated file
 */

#include "MultipleDelegation_SameConnector_P_P_OperationModel.h"

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
#include <uml/actions/ReadSelfAction.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/commonstructure/PackageImport.h>
#include <utils/standardprofile/StandardProfileModel.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <uml/activities/ControlFlow.h>
#include <uml/simpleclassifiers/Interface.h>
#include <uml/activities/ForkNode.h>
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
#include <uml/actions/OutputPin.h>
#include <uml/structuredclassifiers/Class_.h>


/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace MultipleDelegation_SameConnector_P_P_Operation;
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

MultipleDelegation_SameConnector_P_P_OperationModel::MultipleDelegation_SameConnector_P_P_OperationModel()
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

MultipleDelegation_SameConnector_P_P_OperationModel::~MultipleDelegation_SameConnector_P_P_OperationModel()
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

const std::shared_ptr<MultipleDelegation_SameConnector_P_P_OperationModel>& MultipleDelegation_SameConnector_P_P_OperationModel::Instance()
{
	static std::shared_ptr<MultipleDelegation_SameConnector_P_P_OperationModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new MultipleDelegation_SameConnector_P_P_OperationModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void MultipleDelegation_SameConnector_P_P_OperationModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model MultipleDelegation_SameConnector_P_P_Operation
	 */
	MultipleDelegation_SameConnector_P_P_Operation.reset(new Package());
	this->addToElementRepository("MultipleDelegation_SameConnector_P_P_Operation", MultipleDelegation_SameConnector_P_P_Operation);
		MultipleDelegation_SameConnector_P_P_Operation_main.reset(new Activity());
		this->addToElementRepository("main", MultipleDelegation_SameConnector_P_P_Operation_main);
			MultipleDelegation_SameConnector_P_P_Operation_main_testP.reset(new OpaqueBehavior());
			this->addToElementRepository("testP", MultipleDelegation_SameConnector_P_P_Operation_main_testP);
				MultipleDelegation_SameConnector_P_P_Operation_main_testP_p.reset(new Parameter());
				this->addToElementRepository("p", MultipleDelegation_SameConnector_P_P_Operation_main_testP_p);
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read b.p", MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_result);
					MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_result_LiteralInteger0.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger0", MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_result_LiteralInteger0);
					MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_result_LiteralUnlimitedNatural1.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural1", MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_result_LiteralUnlimitedNatural1);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_object);
					MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_object_LiteralInteger2.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger2", MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_object_LiteralInteger2);
					MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_object_LiteralUnlimitedNatural3.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural3", MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_object_LiteralUnlimitedNatural3);
			MultipleDelegation_SameConnector_P_P_Operation_main_ControlFlow4.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow4", MultipleDelegation_SameConnector_P_P_Operation_main_ControlFlow4);
			MultipleDelegation_SameConnector_P_P_Operation_main_Create_C.reset(new CreateObjectAction());
			this->addToElementRepository("Create C", MultipleDelegation_SameConnector_P_P_Operation_main_Create_C);
				MultipleDelegation_SameConnector_P_P_Operation_main_Create_C_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Operation_main_Create_C_result);
					MultipleDelegation_SameConnector_P_P_Operation_main_Create_C_result_LiteralInteger5.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger5", MultipleDelegation_SameConnector_P_P_Operation_main_Create_C_result_LiteralInteger5);
					MultipleDelegation_SameConnector_P_P_Operation_main_Create_C_result_LiteralUnlimitedNatural6.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural6", MultipleDelegation_SameConnector_P_P_Operation_main_Create_C_result_LiteralUnlimitedNatural6);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow7", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7_LiteralInteger8.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger8", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7_LiteralInteger8);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7_LiteralBoolean9.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean9", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7_LiteralBoolean9);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow10", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10_LiteralInteger11.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger11", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10_LiteralInteger11);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10_LiteralBoolean12.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean12", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10_LiteralBoolean12);
			MultipleDelegation_SameConnector_P_P_Operation_main_Fork_C.reset(new ForkNode());
			this->addToElementRepository("Fork C", MultipleDelegation_SameConnector_P_P_Operation_main_Fork_C);
			MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP.reset(new CallBehaviorAction());
			this->addToElementRepository("Call testP", MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP);
				MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP_p.reset(new InputPin());
				this->addToElementRepository("p", MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP_p);
					MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP_p_LiteralInteger13.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger13", MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP_p_LiteralInteger13);
					MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP_p_LiteralInteger14.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger14", MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP_p_LiteralInteger14);
					MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP_p_LiteralUnlimitedNatural15.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural15", MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP_p_LiteralUnlimitedNatural15);
			MultipleDelegation_SameConnector_P_P_Operation_main_Value_4.reset(new ValueSpecificationAction());
			this->addToElementRepository("Value(4)", MultipleDelegation_SameConnector_P_P_Operation_main_Value_4);
				MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_result);
					MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_result_LiteralInteger16.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger16", MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_result_LiteralInteger16);
					MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_result_LiteralUnlimitedNatural17.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural17", MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_result_LiteralUnlimitedNatural17);
				MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_LiteralInteger18.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger18", MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_LiteralInteger18);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow19", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19_LiteralBoolean20.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean20", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19_LiteralBoolean20);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19_LiteralInteger21.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger21", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19_LiteralInteger21);
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.p", MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_result);
					MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_result_LiteralUnlimitedNatural22.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural22", MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_result_LiteralUnlimitedNatural22);
					MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_result_LiteralInteger23.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger23", MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_result_LiteralInteger23);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_object);
					MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_object_LiteralInteger24.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger24", MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_object_LiteralInteger24);
					MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_object_LiteralUnlimitedNatural25.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural25", MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_object_LiteralUnlimitedNatural25);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow26", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26_LiteralInteger27.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger27", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26_LiteralInteger27);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26_LiteralBoolean28.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean28", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26_LiteralBoolean28);
			MultipleDelegation_SameConnector_P_P_Operation_main_C_.reset(new CallOperationAction());
			this->addToElementRepository("C()", MultipleDelegation_SameConnector_P_P_Operation_main_C_);
				MultipleDelegation_SameConnector_P_P_Operation_main_C__result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Operation_main_C__result);
					MultipleDelegation_SameConnector_P_P_Operation_main_C__result_LiteralUnlimitedNatural29.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural29", MultipleDelegation_SameConnector_P_P_Operation_main_C__result_LiteralUnlimitedNatural29);
					MultipleDelegation_SameConnector_P_P_Operation_main_C__result_LiteralInteger30.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger30", MultipleDelegation_SameConnector_P_P_Operation_main_C__result_LiteralInteger30);
					MultipleDelegation_SameConnector_P_P_Operation_main_C__result_LiteralInteger31.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger31", MultipleDelegation_SameConnector_P_P_Operation_main_C__result_LiteralInteger31);
				MultipleDelegation_SameConnector_P_P_Operation_main_C__target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_SameConnector_P_P_Operation_main_C__target);
					MultipleDelegation_SameConnector_P_P_Operation_main_C__target_LiteralInteger32.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger32", MultipleDelegation_SameConnector_P_P_Operation_main_C__target_LiteralInteger32);
					MultipleDelegation_SameConnector_P_P_Operation_main_C__target_LiteralUnlimitedNatural33.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural33", MultipleDelegation_SameConnector_P_P_Operation_main_C__target_LiteralUnlimitedNatural33);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow34", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34_LiteralBoolean35.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean35", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34_LiteralBoolean35);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34_LiteralInteger36.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger36", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34_LiteralInteger36);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow37", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37_LiteralBoolean38.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean38", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37_LiteralBoolean38);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37_LiteralInteger39.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger39", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37_LiteralInteger39);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow40", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40_LiteralBoolean41.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean41", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40_LiteralBoolean41);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40_LiteralInteger42.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger42", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40_LiteralInteger42);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow43", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43_LiteralInteger44.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger44", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43_LiteralInteger44);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43_LiteralBoolean45.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean45", MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43_LiteralBoolean45);
			MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP_.reset(new CallOperationAction());
			this->addToElementRepository("Call p.setP()", MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP_);
				MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__target);
					MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__target_LiteralUnlimitedNatural46.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural46", MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__target_LiteralUnlimitedNatural46);
					MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__target_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__target_LiteralInteger47);
				MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__v.reset(new InputPin());
				this->addToElementRepository("v", MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__v);
					MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__v_LiteralInteger48.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger48", MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__v_LiteralInteger48);
					MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__v_LiteralInteger49.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger49", MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__v_LiteralInteger49);
					MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__v_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural50", MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__v_LiteralUnlimitedNatural50);
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b_.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read c.b[]", MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b_);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__result);
					MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__result_LiteralUnlimitedNatural51.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural51", MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__result_LiteralUnlimitedNatural51);
					MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__result_LiteralInteger52.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger52", MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__result_LiteralInteger52);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__object);
					MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__object_LiteralInteger53.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger53", MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__object_LiteralInteger53);
					MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__object_LiteralUnlimitedNatural54.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural54", MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__object_LiteralUnlimitedNatural54);
		MultipleDelegation_SameConnector_P_P_Operation_C.reset(new Class_());
		this->addToElementRepository("C", MultipleDelegation_SameConnector_P_P_Operation_C);
			MultipleDelegation_SameConnector_P_P_Operation_C_q.reset(new Port());
			this->addToElementRepository("q", MultipleDelegation_SameConnector_P_P_Operation_C_q);
			MultipleDelegation_SameConnector_P_P_Operation_C_r.reset(new Connector());
			this->addToElementRepository("r", MultipleDelegation_SameConnector_P_P_Operation_C_r);
				MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd55.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd55", MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd55);
					MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd55_LiteralInteger56.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger56", MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd55_LiteralInteger56);
					MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd55_LiteralUnlimitedNatural57.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural57", MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd55_LiteralUnlimitedNatural57);
				MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd58.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd58", MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd58);
					MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd58_LiteralUnlimitedNatural59.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural59", MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd58_LiteralUnlimitedNatural59);
					MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd58_LiteralInteger60.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger60", MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd58_LiteralInteger60);
			MultipleDelegation_SameConnector_P_P_Operation_C_b.reset(new Property());
			this->addToElementRepository("b", MultipleDelegation_SameConnector_P_P_Operation_C_b);
				MultipleDelegation_SameConnector_P_P_Operation_C_b_LiteralUnlimitedNatural61.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural61", MultipleDelegation_SameConnector_P_P_Operation_C_b_LiteralUnlimitedNatural61);
				MultipleDelegation_SameConnector_P_P_Operation_C_b_LiteralInteger62.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger62", MultipleDelegation_SameConnector_P_P_Operation_C_b_LiteralInteger62);
			MultipleDelegation_SameConnector_P_P_Operation_C_C_C.reset(new Operation());
			this->addToElementRepository("C_C", MultipleDelegation_SameConnector_P_P_Operation_C_C_C);
				MultipleDelegation_SameConnector_P_P_Operation_C_C_C_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Operation_C_C_C_result);
		MultipleDelegation_SameConnector_P_P_Operation_I.reset(new Interface());
		this->addToElementRepository("I", MultipleDelegation_SameConnector_P_P_Operation_I);
			MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer);
				MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer_v);
		MultipleDelegation_SameConnector_P_P_Operation_R.reset(new Association());
		this->addToElementRepository("R", MultipleDelegation_SameConnector_P_P_Operation_R);
			MultipleDelegation_SameConnector_P_P_Operation_R_x.reset(new Property());
			this->addToElementRepository("x", MultipleDelegation_SameConnector_P_P_Operation_R_x);
			MultipleDelegation_SameConnector_P_P_Operation_R_y.reset(new Property());
			this->addToElementRepository("y", MultipleDelegation_SameConnector_P_P_Operation_R_y);
		MultipleDelegation_SameConnector_P_P_Operation_B.reset(new Class_());
		this->addToElementRepository("B", MultipleDelegation_SameConnector_P_P_Operation_B);
			MultipleDelegation_SameConnector_P_P_Operation_B_p.reset(new Property());
			this->addToElementRepository("p", MultipleDelegation_SameConnector_P_P_Operation_B_p);
				MultipleDelegation_SameConnector_P_P_Operation_B_p_LiteralInteger63.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger63", MultipleDelegation_SameConnector_P_P_Operation_B_p_LiteralInteger63);
			MultipleDelegation_SameConnector_P_P_Operation_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_SameConnector_P_P_Operation_B_IRealization);
			MultipleDelegation_SameConnector_P_P_Operation_B_B_B.reset(new Operation());
			this->addToElementRepository("B_B", MultipleDelegation_SameConnector_P_P_Operation_B_B_B);
				MultipleDelegation_SameConnector_P_P_Operation_B_B_B_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Operation_B_B_B_result);
			MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer);
				MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer_v);
			MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_v);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_result);
						MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_result_LiteralInteger64.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger64", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_result_LiteralInteger64);
						MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural65.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural65", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural65);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_value);
						MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_value_LiteralInteger66.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger66", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_value_LiteralInteger66);
						MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural67.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural67", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural67);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_object);
						MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural68.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural68", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural68);
						MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_object_LiteralInteger69.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger69", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_object_LiteralInteger69);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_vParameterNode);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_vParameterNode_LiteralInteger70.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger70", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_vParameterNode_LiteralInteger70);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow71", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71_LiteralBoolean72.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean72", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71_LiteralBoolean72);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71_LiteralInteger73.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger73", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71_LiteralInteger73);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow74", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74_LiteralInteger75.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger75", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74_LiteralInteger75);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74_LiteralBoolean76.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean76", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74_LiteralBoolean76);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this_result);
						MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this_result_LiteralUnlimitedNatural77.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural77", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this_result_LiteralUnlimitedNatural77);
						MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this_result_LiteralInteger78.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger78", MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this_result_LiteralInteger78);
		MultipleDelegation_SameConnector_P_P_Operation_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", MultipleDelegation_SameConnector_P_P_Operation_IImpl);
			MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer);
				MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer_v);
			MultipleDelegation_SameConnector_P_P_Operation_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_SameConnector_P_P_Operation_IImpl_IRealization);

	// Initialize public members
	/*
	 * Model MultipleDelegation_SameConnector_P_P_Operation
	 */
	MultipleDelegation_SameConnector_P_P_Operation->setThisPackagePtr(MultipleDelegation_SameConnector_P_P_Operation);
	MultipleDelegation_SameConnector_P_P_Operation->setName("MultipleDelegation_SameConnector_P_P_Operation");
	MultipleDelegation_SameConnector_P_P_Operation->setVisibility(VisibilityKind::public_);
		// Activity main
		MultipleDelegation_SameConnector_P_P_Operation_main->setThisActivityPtr(MultipleDelegation_SameConnector_P_P_Operation_main);
		MultipleDelegation_SameConnector_P_P_Operation_main->setName("main");
		MultipleDelegation_SameConnector_P_P_Operation_main->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testP
			MultipleDelegation_SameConnector_P_P_Operation_main_testP->setThisClass_Ptr(MultipleDelegation_SameConnector_P_P_Operation_main_testP);
			MultipleDelegation_SameConnector_P_P_Operation_main_testP->setName("testP");
			MultipleDelegation_SameConnector_P_P_Operation_main_testP->setVisibility(VisibilityKind::public_);
			
				// Parameter p
				MultipleDelegation_SameConnector_P_P_Operation_main_testP_p->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_testP_p);
				MultipleDelegation_SameConnector_P_P_Operation_main_testP_p->setName("p");
				MultipleDelegation_SameConnector_P_P_Operation_main_testP_p->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Operation_main_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_P_Operation_main_testP->addOwnedParameter(MultipleDelegation_SameConnector_P_P_Operation_main_testP_p);
			MultipleDelegation_SameConnector_P_P_Operation_main_testP->addLanguage("C++");
			MultipleDelegation_SameConnector_P_P_Operation_main_testP->addLanguage("Include");
			MultipleDelegation_SameConnector_P_P_Operation_main_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	static unsigned int index = 1; 	static const unsigned int MAX_INDEX = 4; 	static bool success = false;  	if(index == 1) 	{ 		std::cout<<\"Asserting c.b[1] == 4 || c.b[2] == 4 || c.b[3] == 4 || c.b[4] == 4\"<<std::endl; 	}  	// For some reason, during the first execution of the expansion region, its body is actually executed twice. 	// Because of that, the body is actually executaed 5 times in total. This if-statement covers that up until solved. 	if(index <= MAX_INDEX) 	{ 		// Test parameter p 		int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 		fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 		std::cout << \"c.b[\" << index << \"] == \" << std::to_string(p) <<std::endl; 		success = success || (p == 4);  		if(index == MAX_INDEX) 		{ 			std::cout<<\"Operation call delegated: \";  			if(success) 			{ 				std::cout<<ASCII_GRN << \"Assertion successful.\" << ASCII_BLK << std::endl; 			} 			else 			{ 				std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 			} 		} 	}  	index++;");
			MultipleDelegation_SameConnector_P_P_Operation_main_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
		MultipleDelegation_SameConnector_P_P_Operation_main->addOwnedBehavior(MultipleDelegation_SameConnector_P_P_Operation_main_testP);
			// ReadStructuralFeatureAction Read b.p
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p);
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p->setName("Read b.p");
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p->setStructuralFeature(MultipleDelegation_SameConnector_P_P_Operation_B_p);
				// InputPin object
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_object->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_object);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_object->setName("object");
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_object->setType(MultipleDelegation_SameConnector_P_P_Operation_B);
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p->setObject(MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_object);
				// OutputPin result
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_result);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_result->setName("result");
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p->setResult(MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_result);
		MultipleDelegation_SameConnector_P_P_Operation_main->addNode(MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p);
			// CreateObjectAction Create C
			MultipleDelegation_SameConnector_P_P_Operation_main_Create_C->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Operation_main_Create_C);
			MultipleDelegation_SameConnector_P_P_Operation_main_Create_C->setName("Create C");
			MultipleDelegation_SameConnector_P_P_Operation_main_Create_C->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Operation_main_Create_C->setClassifier(MultipleDelegation_SameConnector_P_P_Operation_C);
				// OutputPin result
				MultipleDelegation_SameConnector_P_P_Operation_main_Create_C_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_Create_C_result);
				MultipleDelegation_SameConnector_P_P_Operation_main_Create_C_result->setName("result");
				MultipleDelegation_SameConnector_P_P_Operation_main_Create_C_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_Create_C_result->setType(MultipleDelegation_SameConnector_P_P_Operation_C);
			MultipleDelegation_SameConnector_P_P_Operation_main_Create_C->setResult(MultipleDelegation_SameConnector_P_P_Operation_main_Create_C_result);
		MultipleDelegation_SameConnector_P_P_Operation_main->addNode(MultipleDelegation_SameConnector_P_P_Operation_main_Create_C);
			// ReadStructuralFeatureAction Read c.p
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p);
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p->setName("Read c.p");
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p->setStructuralFeature(MultipleDelegation_SameConnector_P_P_Operation_C_q);
				// InputPin object
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_object->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_object);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_object->setName("object");
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_object->setType(MultipleDelegation_SameConnector_P_P_Operation_C);
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p->setObject(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_object);
				// OutputPin result
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_result);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_result->setName("result");
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_result->setType(MultipleDelegation_SameConnector_P_P_Operation_IImpl);
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p->setResult(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_result);
		MultipleDelegation_SameConnector_P_P_Operation_main->addNode(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p);
			// CallOperationAction C()
			MultipleDelegation_SameConnector_P_P_Operation_main_C_->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Operation_main_C_);
			MultipleDelegation_SameConnector_P_P_Operation_main_C_->setName("C()");
			MultipleDelegation_SameConnector_P_P_Operation_main_C_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				MultipleDelegation_SameConnector_P_P_Operation_main_C__result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_C__result);
				MultipleDelegation_SameConnector_P_P_Operation_main_C__result->setName("result");
				MultipleDelegation_SameConnector_P_P_Operation_main_C__result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_C__result->setType(MultipleDelegation_SameConnector_P_P_Operation_C);
			MultipleDelegation_SameConnector_P_P_Operation_main_C_->addResult(MultipleDelegation_SameConnector_P_P_Operation_main_C__result);
			MultipleDelegation_SameConnector_P_P_Operation_main_C_->setOperation(MultipleDelegation_SameConnector_P_P_Operation_C_C_C);
				// InputPin target
				MultipleDelegation_SameConnector_P_P_Operation_main_C__target->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_C__target);
				MultipleDelegation_SameConnector_P_P_Operation_main_C__target->setName("target");
				MultipleDelegation_SameConnector_P_P_Operation_main_C__target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_C__target->setType(MultipleDelegation_SameConnector_P_P_Operation_C);
			MultipleDelegation_SameConnector_P_P_Operation_main_C_->setTarget(MultipleDelegation_SameConnector_P_P_Operation_main_C__target);
		MultipleDelegation_SameConnector_P_P_Operation_main->addNode(MultipleDelegation_SameConnector_P_P_Operation_main_C_);
			// ForkNode Fork C
			MultipleDelegation_SameConnector_P_P_Operation_main_Fork_C->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_Fork_C);
			MultipleDelegation_SameConnector_P_P_Operation_main_Fork_C->setName("Fork C");
			MultipleDelegation_SameConnector_P_P_Operation_main_Fork_C->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_P_Operation_main->addNode(MultipleDelegation_SameConnector_P_P_Operation_main_Fork_C);
			// CallBehaviorAction Call testP
			MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP);
			MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP->setName("Call testP");
			MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP->setBehavior(MultipleDelegation_SameConnector_P_P_Operation_main_testP);
				// InputPin p
				MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP_p->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP_p);
				MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP_p->setName("p");
				MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP->addArgument(MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP_p);
		MultipleDelegation_SameConnector_P_P_Operation_main->addNode(MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP);
			// CallOperationAction Call p.setP()
			MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP_->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP_);
			MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP_->setName("Call p.setP()");
			MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP_->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP_->setOperation(MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer);
				// InputPin target
				MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__target->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__target);
				MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__target->setName("target");
				MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__target->setType(MultipleDelegation_SameConnector_P_P_Operation_I);
			MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP_->setTarget(MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__target);
				// InputPin v
				MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__v->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__v);
				MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__v->setName("v");
				MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__v->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP_->addArgument(MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__v);
		MultipleDelegation_SameConnector_P_P_Operation_main->addNode(MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP_);
			// ValueSpecificationAction Value(4)
			MultipleDelegation_SameConnector_P_P_Operation_main_Value_4->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Operation_main_Value_4);
			MultipleDelegation_SameConnector_P_P_Operation_main_Value_4->setName("Value(4)");
			MultipleDelegation_SameConnector_P_P_Operation_main_Value_4->setVisibility(VisibilityKind::public_);
				// LiteralInteger LiteralInteger18
				MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_LiteralInteger18->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_LiteralInteger18);
				MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_LiteralInteger18->setName("LiteralInteger18");
				MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_LiteralInteger18->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_LiteralInteger18->setValue(4);
			MultipleDelegation_SameConnector_P_P_Operation_main_Value_4->setValue(MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_LiteralInteger18);
				// OutputPin result
				MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_result);
				MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_result->setName("result");
				MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_P_Operation_main_Value_4->setResult(MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_result);
		MultipleDelegation_SameConnector_P_P_Operation_main->addNode(MultipleDelegation_SameConnector_P_P_Operation_main_Value_4);
			// ReadStructuralFeatureAction Read c.b[]
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b_->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b_);
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b_->setName("Read c.b[]");
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b_->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b_->setStructuralFeature(MultipleDelegation_SameConnector_P_P_Operation_C_b);
				// InputPin object
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__object->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__object);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__object->setName("object");
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__object->setType(MultipleDelegation_SameConnector_P_P_Operation_C);
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b_->setObject(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__object);
				// OutputPin result
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__result);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__result->setName("result");
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__result->setType(MultipleDelegation_SameConnector_P_P_Operation_B);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__result->setUpper(4);
				MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__result->setLower(4);
			MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b_->setResult(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__result);
		MultipleDelegation_SameConnector_P_P_Operation_main->addNode(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b_);
			// ObjectFlow ObjectFlow19 from result to p
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19->setName("ObjectFlow19");
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19->setSource(MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_result);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19->setTarget(MultipleDelegation_SameConnector_P_P_Operation_main_Call_testP_p);
				// LiteralBoolean LiteralBoolean20
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19_LiteralBoolean20->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19_LiteralBoolean20);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19_LiteralBoolean20->setName("LiteralBoolean20");
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19_LiteralBoolean20->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19_LiteralBoolean20->setValue(true);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19->setGuard(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19_LiteralBoolean20);
		MultipleDelegation_SameConnector_P_P_Operation_main->addEdge(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow19);
			// ControlFlow ControlFlow4 from Call p.setP() to Read c.b[]
			MultipleDelegation_SameConnector_P_P_Operation_main_ControlFlow4->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Operation_main_ControlFlow4);
			MultipleDelegation_SameConnector_P_P_Operation_main_ControlFlow4->setName("ControlFlow4");
			MultipleDelegation_SameConnector_P_P_Operation_main_ControlFlow4->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Operation_main_ControlFlow4->setSource(MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP_);
			MultipleDelegation_SameConnector_P_P_Operation_main_ControlFlow4->setTarget(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b_);
		MultipleDelegation_SameConnector_P_P_Operation_main->addEdge(MultipleDelegation_SameConnector_P_P_Operation_main_ControlFlow4);
			// ObjectFlow ObjectFlow7 from result to Fork C
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7->setName("ObjectFlow7");
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7->setSource(MultipleDelegation_SameConnector_P_P_Operation_main_C__result);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7->setTarget(MultipleDelegation_SameConnector_P_P_Operation_main_Fork_C);
				// LiteralBoolean LiteralBoolean9
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7_LiteralBoolean9->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7_LiteralBoolean9);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7_LiteralBoolean9->setName("LiteralBoolean9");
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7_LiteralBoolean9->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7_LiteralBoolean9->setValue(true);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7->setGuard(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7_LiteralBoolean9);
		MultipleDelegation_SameConnector_P_P_Operation_main->addEdge(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow7);
			// ObjectFlow ObjectFlow10 from result to target
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10->setName("ObjectFlow10");
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10->setSource(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_result);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10->setTarget(MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__target);
				// LiteralBoolean LiteralBoolean12
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10_LiteralBoolean12->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10_LiteralBoolean12);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10_LiteralBoolean12->setName("LiteralBoolean12");
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10_LiteralBoolean12->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10_LiteralBoolean12->setValue(true);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10->setGuard(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10_LiteralBoolean12);
		MultipleDelegation_SameConnector_P_P_Operation_main->addEdge(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow10);
			// ObjectFlow ObjectFlow26 from result to object
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26->setName("ObjectFlow26");
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26->setSource(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__result);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26->setTarget(MultipleDelegation_SameConnector_P_P_Operation_main_Read_b_p_object);
				// LiteralBoolean LiteralBoolean28
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26_LiteralBoolean28->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26_LiteralBoolean28);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26_LiteralBoolean28->setName("LiteralBoolean28");
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26_LiteralBoolean28->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26_LiteralBoolean28->setValue(true);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26->setGuard(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26_LiteralBoolean28);
		MultipleDelegation_SameConnector_P_P_Operation_main->addEdge(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow26);
			// ObjectFlow ObjectFlow34 from Fork C to object
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34->setName("ObjectFlow34");
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34->setSource(MultipleDelegation_SameConnector_P_P_Operation_main_Fork_C);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34->setTarget(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_p_object);
				// LiteralBoolean LiteralBoolean35
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34_LiteralBoolean35->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34_LiteralBoolean35);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34_LiteralBoolean35->setName("LiteralBoolean35");
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34_LiteralBoolean35->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34_LiteralBoolean35->setValue(true);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34->setGuard(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34_LiteralBoolean35);
		MultipleDelegation_SameConnector_P_P_Operation_main->addEdge(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow34);
			// ObjectFlow ObjectFlow37 from result to target
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37->setName("ObjectFlow37");
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37->setSource(MultipleDelegation_SameConnector_P_P_Operation_main_Create_C_result);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37->setTarget(MultipleDelegation_SameConnector_P_P_Operation_main_C__target);
				// LiteralBoolean LiteralBoolean38
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37_LiteralBoolean38->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37_LiteralBoolean38);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37_LiteralBoolean38->setName("LiteralBoolean38");
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37_LiteralBoolean38->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37_LiteralBoolean38->setValue(true);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37->setGuard(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37_LiteralBoolean38);
		MultipleDelegation_SameConnector_P_P_Operation_main->addEdge(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow37);
			// ObjectFlow ObjectFlow40 from result to v
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40->setName("ObjectFlow40");
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40->setSource(MultipleDelegation_SameConnector_P_P_Operation_main_Value_4_result);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40->setTarget(MultipleDelegation_SameConnector_P_P_Operation_main_Call_p_setP__v);
				// LiteralBoolean LiteralBoolean41
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40_LiteralBoolean41->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40_LiteralBoolean41);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40_LiteralBoolean41->setName("LiteralBoolean41");
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40_LiteralBoolean41->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40_LiteralBoolean41->setValue(true);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40->setGuard(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40_LiteralBoolean41);
		MultipleDelegation_SameConnector_P_P_Operation_main->addEdge(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow40);
			// ObjectFlow ObjectFlow43 from Fork C to object
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43->setName("ObjectFlow43");
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43->setSource(MultipleDelegation_SameConnector_P_P_Operation_main_Fork_C);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43->setTarget(MultipleDelegation_SameConnector_P_P_Operation_main_Read_c_b__object);
				// LiteralBoolean LiteralBoolean45
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43_LiteralBoolean45->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43_LiteralBoolean45);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43_LiteralBoolean45->setName("LiteralBoolean45");
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43_LiteralBoolean45->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43_LiteralBoolean45->setValue(true);
			MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43->setGuard(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43_LiteralBoolean45);
		MultipleDelegation_SameConnector_P_P_Operation_main->addEdge(MultipleDelegation_SameConnector_P_P_Operation_main_ObjectFlow43);
	MultipleDelegation_SameConnector_P_P_Operation->addPackagedElement(MultipleDelegation_SameConnector_P_P_Operation_main);
		// Class C
		MultipleDelegation_SameConnector_P_P_Operation_C->setThisClass_Ptr(MultipleDelegation_SameConnector_P_P_Operation_C);
		MultipleDelegation_SameConnector_P_P_Operation_C->setName("C");
		MultipleDelegation_SameConnector_P_P_Operation_C->setVisibility(VisibilityKind::public_);
		
			// Port q
			MultipleDelegation_SameConnector_P_P_Operation_C_q->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_C_q);
			MultipleDelegation_SameConnector_P_P_Operation_C_q->setName("q");
			MultipleDelegation_SameConnector_P_P_Operation_C_q->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Operation_C_q->setType(MultipleDelegation_SameConnector_P_P_Operation_IImpl);
			MultipleDelegation_SameConnector_P_P_Operation_C_q->setAggregation(AggregationKind::composite);
			MultipleDelegation_SameConnector_P_P_Operation_C_q->isService = true;
			MultipleDelegation_SameConnector_P_P_Operation_C_q->addProvided(MultipleDelegation_SameConnector_P_P_Operation_I);
		MultipleDelegation_SameConnector_P_P_Operation_C->addOwnedAttribute(MultipleDelegation_SameConnector_P_P_Operation_C_q);
			// Property b
			MultipleDelegation_SameConnector_P_P_Operation_C_b->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_C_b);
			MultipleDelegation_SameConnector_P_P_Operation_C_b->setName("b");
			MultipleDelegation_SameConnector_P_P_Operation_C_b->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Operation_C_b->setUpper(4);
			MultipleDelegation_SameConnector_P_P_Operation_C_b->setLower(4);
			MultipleDelegation_SameConnector_P_P_Operation_C_b->setType(MultipleDelegation_SameConnector_P_P_Operation_B);
			MultipleDelegation_SameConnector_P_P_Operation_C_b->setAggregation(AggregationKind::composite);
		MultipleDelegation_SameConnector_P_P_Operation_C->addOwnedAttribute(MultipleDelegation_SameConnector_P_P_Operation_C_b);
		
		MultipleDelegation_SameConnector_P_P_Operation_C_r->setName("r");
			MultipleDelegation_SameConnector_P_P_Operation_C_r->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd55->setUpper(-1);
				MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd55->setRole(MultipleDelegation_SameConnector_P_P_Operation_C_q);
				
			MultipleDelegation_SameConnector_P_P_Operation_C_r->addEnd(MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd55);
				MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd58->setUpper(-1);
				MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd58->setLower(4);
				MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd58->setRole(MultipleDelegation_SameConnector_P_P_Operation_C_b);
				
			MultipleDelegation_SameConnector_P_P_Operation_C_r->addEnd(MultipleDelegation_SameConnector_P_P_Operation_C_r_ConnectorEnd58);
			MultipleDelegation_SameConnector_P_P_Operation_C_r->setType(MultipleDelegation_SameConnector_P_P_Operation_R);
		MultipleDelegation_SameConnector_P_P_Operation_C->addOwnedConnector(MultipleDelegation_SameConnector_P_P_Operation_C_r);
			// Operation C_C
			MultipleDelegation_SameConnector_P_P_Operation_C_C_C->setThisOperationPtr(MultipleDelegation_SameConnector_P_P_Operation_C_C_C);
			MultipleDelegation_SameConnector_P_P_Operation_C_C_C->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_SameConnector_P_P_Operation_C_C_C->setName("C_C");
			MultipleDelegation_SameConnector_P_P_Operation_C_C_C->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_SameConnector_P_P_Operation_C_C_C_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_C_C_C_result);
				MultipleDelegation_SameConnector_P_P_Operation_C_C_C_result->setName("result");
				MultipleDelegation_SameConnector_P_P_Operation_C_C_C_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Operation_C_C_C_result->setType(MultipleDelegation_SameConnector_P_P_Operation_C);
				MultipleDelegation_SameConnector_P_P_Operation_C_C_C_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_SameConnector_P_P_Operation_C_C_C->addOwnedParameter(MultipleDelegation_SameConnector_P_P_Operation_C_C_C_result);
		MultipleDelegation_SameConnector_P_P_Operation_C->addOwnedOperation(MultipleDelegation_SameConnector_P_P_Operation_C_C_C);
	MultipleDelegation_SameConnector_P_P_Operation->addPackagedElement(MultipleDelegation_SameConnector_P_P_Operation_C);
		// Interface I
		MultipleDelegation_SameConnector_P_P_Operation_I->setThisInterfacePtr(MultipleDelegation_SameConnector_P_P_Operation_I);
		MultipleDelegation_SameConnector_P_P_Operation_I->setName("I");
		MultipleDelegation_SameConnector_P_P_Operation_I->setVisibility(VisibilityKind::public_);
			// Operation setP_Integer
			MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer->setThisOperationPtr(MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer);
			MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer->setName("setP_Integer");
			MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer_v->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer_v);
				MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer_v->setName("v");
				MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer->addOwnedParameter(MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer_v);
		MultipleDelegation_SameConnector_P_P_Operation_I->addOwnedOperation(MultipleDelegation_SameConnector_P_P_Operation_I_setP_Integer);
	MultipleDelegation_SameConnector_P_P_Operation->addPackagedElement(MultipleDelegation_SameConnector_P_P_Operation_I);
		// Association R
		MultipleDelegation_SameConnector_P_P_Operation_R->setThisAssociationPtr(MultipleDelegation_SameConnector_P_P_Operation_R);
		MultipleDelegation_SameConnector_P_P_Operation_R->setName("R");
		MultipleDelegation_SameConnector_P_P_Operation_R->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_P_Operation_R->addOwnedEnd(MultipleDelegation_SameConnector_P_P_Operation_R_x);
		MultipleDelegation_SameConnector_P_P_Operation_R->addOwnedEnd(MultipleDelegation_SameConnector_P_P_Operation_R_y);
	MultipleDelegation_SameConnector_P_P_Operation->addPackagedElement(MultipleDelegation_SameConnector_P_P_Operation_R);
		// Class B
		MultipleDelegation_SameConnector_P_P_Operation_B->setThisClass_Ptr(MultipleDelegation_SameConnector_P_P_Operation_B);
		MultipleDelegation_SameConnector_P_P_Operation_B->setName("B");
		MultipleDelegation_SameConnector_P_P_Operation_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			MultipleDelegation_SameConnector_P_P_Operation_B_p->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_B_p);
			MultipleDelegation_SameConnector_P_P_Operation_B_p->setName("p");
			MultipleDelegation_SameConnector_P_P_Operation_B_p->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_P_Operation_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				// LiteralInteger LiteralInteger63
				MultipleDelegation_SameConnector_P_P_Operation_B_p_LiteralInteger63->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_B_p_LiteralInteger63);
				MultipleDelegation_SameConnector_P_P_Operation_B_p_LiteralInteger63->setName("LiteralInteger63");
				MultipleDelegation_SameConnector_P_P_Operation_B_p_LiteralInteger63->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_B_p_LiteralInteger63->setValue(0);
			MultipleDelegation_SameConnector_P_P_Operation_B_p->setDefaultValue(MultipleDelegation_SameConnector_P_P_Operation_B_p_LiteralInteger63);
		MultipleDelegation_SameConnector_P_P_Operation_B->addOwnedAttribute(MultipleDelegation_SameConnector_P_P_Operation_B_p);
		// Activity setPActivity
			MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity->setThisActivityPtr(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity);
			MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity->setName("setPActivity");
			MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_v->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_v);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_v->setName("v");
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity->addOwnedParameter(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_v);
				// AddStructuralFeatureValueAction Set this.p
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p->setName("Set this.p");
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p->setStructuralFeature(MultipleDelegation_SameConnector_P_P_Operation_B_p);
					// InputPin object
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_object->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_object);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_object->setName("object");
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_object->setType(MultipleDelegation_SameConnector_P_P_Operation_B);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p->setObject(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_object);
					// InputPin value
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_value->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_value);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_value->setName("value");
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_value->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p->setValue(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_value);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_result);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_result->setType(MultipleDelegation_SameConnector_P_P_Operation_B);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p->setResult(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_result);
			MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity->addNode(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p);
				// ActivityParameterNode vParameterNode
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_vParameterNode->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_vParameterNode);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_vParameterNode->setName("vParameterNode");
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_vParameterNode->setParameter(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_v);
			MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity->addNode(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_vParameterNode);
				// ReadSelfAction this
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this->setName("this");
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this_result);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this_result->setName("result");
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this_result->setType(MultipleDelegation_SameConnector_P_P_Operation_B);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this->setResult(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this_result);
			MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity->addNode(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this);
				// ObjectFlow ObjectFlow71 from result to object
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71->setName("ObjectFlow71");
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71->setSource(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_this_result);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71->setTarget(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_object);
					// LiteralBoolean LiteralBoolean72
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71_LiteralBoolean72->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71_LiteralBoolean72);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71_LiteralBoolean72->setName("LiteralBoolean72");
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71_LiteralBoolean72->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71_LiteralBoolean72->setValue(true);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71->setGuard(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71_LiteralBoolean72);
			MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity->addEdge(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow71);
				// ObjectFlow ObjectFlow74 from vParameterNode to value
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74->setName("ObjectFlow74");
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74->setSource(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_vParameterNode);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74->setTarget(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_Set_this_p_value);
					// LiteralBoolean LiteralBoolean76
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74_LiteralBoolean76->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74_LiteralBoolean76);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74_LiteralBoolean76->setName("LiteralBoolean76");
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74_LiteralBoolean76->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74_LiteralBoolean76->setValue(true);
				MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74->setGuard(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74_LiteralBoolean76);
			MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity->addEdge(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity_ObjectFlow74);
		MultipleDelegation_SameConnector_P_P_Operation_B->addOwnedBehavior(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity);
			MultipleDelegation_SameConnector_P_P_Operation_B_IRealization->setName("IRealization");
			MultipleDelegation_SameConnector_P_P_Operation_B_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Operation_B_IRealization->setContract(MultipleDelegation_SameConnector_P_P_Operation_I);
			
		MultipleDelegation_SameConnector_P_P_Operation_B->addInterfaceRealization(MultipleDelegation_SameConnector_P_P_Operation_B_IRealization);
		
			// Operation B_B
			MultipleDelegation_SameConnector_P_P_Operation_B_B_B->setThisOperationPtr(MultipleDelegation_SameConnector_P_P_Operation_B_B_B);
			MultipleDelegation_SameConnector_P_P_Operation_B_B_B->setName("B_B");
			MultipleDelegation_SameConnector_P_P_Operation_B_B_B->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_SameConnector_P_P_Operation_B_B_B_result->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_B_B_B_result);
				MultipleDelegation_SameConnector_P_P_Operation_B_B_B_result->setName("result");
				MultipleDelegation_SameConnector_P_P_Operation_B_B_B_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Operation_B_B_B_result->setType(MultipleDelegation_SameConnector_P_P_Operation_B);
				MultipleDelegation_SameConnector_P_P_Operation_B_B_B_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_SameConnector_P_P_Operation_B_B_B->addOwnedParameter(MultipleDelegation_SameConnector_P_P_Operation_B_B_B_result);
		MultipleDelegation_SameConnector_P_P_Operation_B->addOwnedOperation(MultipleDelegation_SameConnector_P_P_Operation_B_B_B);
			// Operation setP_Integer
			MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer->setThisOperationPtr(MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer);
			MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer->setName("setP_Integer");
			MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer_v->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer_v);
				MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer_v->setName("v");
				MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer->addOwnedParameter(MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer_v);
			MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer->addMethod(MultipleDelegation_SameConnector_P_P_Operation_B_setPActivity);
		MultipleDelegation_SameConnector_P_P_Operation_B->addOwnedOperation(MultipleDelegation_SameConnector_P_P_Operation_B_setP_Integer);
	MultipleDelegation_SameConnector_P_P_Operation->addPackagedElement(MultipleDelegation_SameConnector_P_P_Operation_B);
		// Class IImpl
		MultipleDelegation_SameConnector_P_P_Operation_IImpl->setThisClass_Ptr(MultipleDelegation_SameConnector_P_P_Operation_IImpl);
		MultipleDelegation_SameConnector_P_P_Operation_IImpl->setName("IImpl");
		MultipleDelegation_SameConnector_P_P_Operation_IImpl->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_P_Operation_IImpl_IRealization->setName("IRealization");
			MultipleDelegation_SameConnector_P_P_Operation_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_P_Operation_IImpl_IRealization->setContract(MultipleDelegation_SameConnector_P_P_Operation_I);
			
		MultipleDelegation_SameConnector_P_P_Operation_IImpl->addInterfaceRealization(MultipleDelegation_SameConnector_P_P_Operation_IImpl_IRealization);
		
			// Operation setP_Integer
			MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer->setThisOperationPtr(MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer);
			MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer->setName("setP_Integer");
			MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer_v->setThisElementPtr(MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer_v);
				MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer_v->setName("v");
				MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer->addOwnedParameter(MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer_v);
		MultipleDelegation_SameConnector_P_P_Operation_IImpl->addOwnedOperation(MultipleDelegation_SameConnector_P_P_Operation_IImpl_setP_Integer);
	MultipleDelegation_SameConnector_P_P_Operation->addPackagedElement(MultipleDelegation_SameConnector_P_P_Operation_IImpl);
}
