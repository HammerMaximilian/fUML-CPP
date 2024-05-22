/*
 * MultipleDelegation_MultipleConnector_P_P_SignalModel.cpp
 * 
 * Auto-generated file
 */

#include "MultipleDelegation_MultipleConnector_P_P_SignalModel.h"

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
#include <uml/commonbehavior/Trigger.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/classification/Parameter.h>
#include <uml/commonstructure/Comment.h>
#include <uml/actions/AcceptEventAction.h>
#include <uml/classification/Operation.h>
#include <uml/actions/ReadSelfAction.h>
#include <uml/actions/StartObjectBehaviorAction.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/commonstructure/PackageImport.h>
#include <utils/standardprofile/StandardProfileModel.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <uml/activities/ControlFlow.h>
#include <uml/simpleclassifiers/Interface.h>
#include <uml/activities/ForkNode.h>
#include <uml/structuredclassifiers/ConnectorEnd.h>
#include <uml/classification/Generalization.h>
#include <uml/actions/ValueSpecificationAction.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/structuredclassifiers/Connector.h>
#include <uml/structuredclassifiers/Association.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/simpleclassifiers/Reception.h>
#include <uml/structuredclassifiers/Port.h>
#include <uml/simpleclassifiers/InterfaceRealization.h>
#include <uml/commonbehavior/SignalEvent.h>
#include <uml/packages/Package.h>
#include <uml/values/LiteralUnlimitedNatural.h>
#include <uml/actions/OutputPin.h>
#include <uml/actions/SendSignalAction.h>
#include <uml/simpleclassifiers/Signal.h>
#include <uml/structuredclassifiers/Class_.h>


/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace MultipleDelegation_MultipleConnector_P_P_Signal;
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

MultipleDelegation_MultipleConnector_P_P_SignalModel::MultipleDelegation_MultipleConnector_P_P_SignalModel()
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

MultipleDelegation_MultipleConnector_P_P_SignalModel::~MultipleDelegation_MultipleConnector_P_P_SignalModel()
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

const std::shared_ptr<MultipleDelegation_MultipleConnector_P_P_SignalModel>& MultipleDelegation_MultipleConnector_P_P_SignalModel::Instance()
{
	static std::shared_ptr<MultipleDelegation_MultipleConnector_P_P_SignalModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new MultipleDelegation_MultipleConnector_P_P_SignalModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void MultipleDelegation_MultipleConnector_P_P_SignalModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model MultipleDelegation_MultipleConnector_P_P_Signal
	 */
	MultipleDelegation_MultipleConnector_P_P_Signal.reset(new Package());
	this->addToElementRepository("MultipleDelegation_MultipleConnector_P_P_Signal", MultipleDelegation_MultipleConnector_P_P_Signal);
		MultipleDelegation_MultipleConnector_P_P_Signal_StartEvent.reset(new SignalEvent());
		this->addToElementRepository("StartEvent", MultipleDelegation_MultipleConnector_P_P_Signal_StartEvent);
		MultipleDelegation_MultipleConnector_P_P_Signal_ContinueEvent.reset(new SignalEvent());
		this->addToElementRepository("ContinueEvent", MultipleDelegation_MultipleConnector_P_P_Signal_ContinueEvent);
		MultipleDelegation_MultipleConnector_P_P_Signal_SEvent.reset(new SignalEvent());
		this->addToElementRepository("SEvent", MultipleDelegation_MultipleConnector_P_P_Signal_SEvent);
		MultipleDelegation_MultipleConnector_P_P_Signal_Tester.reset(new Class_());
		this->addToElementRepository("Tester", MultipleDelegation_MultipleConnector_P_P_Signal_Tester);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Generalization0.reset(new Generalization());
			this->addToElementRepository("Generalization0", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Generalization0);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity.reset(new Activity());
			this->addToElementRepository("testActivity", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow1", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean2", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1_LiteralInteger3.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger3", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1_LiteralInteger3);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP.reset(new OpaqueBehavior());
				this->addToElementRepository("testP", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP_p.reset(new Parameter());
					this->addToElementRepository("p", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP_p);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read a.b2", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_object);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_object_LiteralUnlimitedNatural4.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural4", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_object_LiteralUnlimitedNatural4);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_object_LiteralInteger5.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger5", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_object_LiteralInteger5);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_result_LiteralUnlimitedNatural6.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural6", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_result_LiteralUnlimitedNatural6);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_result_LiteralInteger7.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger7", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_result_LiteralInteger7);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow8", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8_LiteralBoolean9.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean9", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8_LiteralBoolean9);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8_LiteralInteger10.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger10", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8_LiteralInteger10);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read b.p", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object_LiteralInteger11.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger11", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object_LiteralInteger11);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object_LiteralUnlimitedNatural12.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural12", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object_LiteralUnlimitedNatural12);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_result_LiteralInteger13.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger13", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_result_LiteralInteger13);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_result_LiteralUnlimitedNatural14.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural14", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_result_LiteralUnlimitedNatural14);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow15.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow15", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow15);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow16.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow16", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow16);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP.reset(new CallBehaviorAction());
				this->addToElementRepository("Call testP", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP_p.reset(new InputPin());
					this->addToElementRepository("p", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP_p);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralUnlimitedNatural17.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural17", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralUnlimitedNatural17);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralInteger18.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger18", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralInteger18);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralInteger19.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger19", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralInteger19);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow20", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20_LiteralInteger21.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger21", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20_LiteralInteger21);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20_LiteralBoolean22.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean22", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20_LiteralBoolean22);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow23", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean24", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23_LiteralInteger25.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger25", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23_LiteralInteger25);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow26", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean27", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26_LiteralInteger28.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger28", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26_LiteralInteger28);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow29.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow29", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow29);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read a.b1", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_object);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_object_LiteralUnlimitedNatural30.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural30", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_object_LiteralUnlimitedNatural30);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_object_LiteralInteger31.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger31", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_object_LiteralInteger31);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow32", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32_LiteralBoolean33.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean33", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32_LiteralBoolean33);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32_LiteralInteger34.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger34", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32_LiteralInteger34);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read this.a", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_object);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_object_LiteralUnlimitedNatural35.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural35", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_object_LiteralUnlimitedNatural35);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_object_LiteralInteger36.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger36", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_object_LiteralInteger36);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_result_LiteralUnlimitedNatural37.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural37", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_result_LiteralUnlimitedNatural37);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_result_LiteralInteger38.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger38", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_result_LiteralInteger38);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow39", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39_LiteralBoolean40.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean40", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39_LiteralBoolean40);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39_LiteralInteger41.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger41", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39_LiteralInteger41);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow42", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42_LiteralBoolean43.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean43", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42_LiteralBoolean43);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42_LiteralInteger44.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger44", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42_LiteralInteger44);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this_result_LiteralInteger45.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger45", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this_result_LiteralInteger45);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this_result_LiteralUnlimitedNatural46.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural46", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this_result_LiteralUnlimitedNatural46);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read a.b4", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_object);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_object_LiteralUnlimitedNatural47.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural47", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_object_LiteralUnlimitedNatural47);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_object_LiteralInteger48.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger48", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_object_LiteralInteger48);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_result_LiteralInteger49.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger49", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_result_LiteralInteger49);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_result_LiteralUnlimitedNatural50.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural50", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_result_LiteralUnlimitedNatural50);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow51", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51_LiteralBoolean52.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean52", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51_LiteralBoolean52);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51_LiteralInteger53.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger53", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51_LiteralInteger53);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow54", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54_LiteralBoolean55.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean55", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54_LiteralBoolean55);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54_LiteralInteger56.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger56", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54_LiteralInteger56);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Fork_a.reset(new ForkNode());
				this->addToElementRepository("Fork a", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Fork_a);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow57", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57_LiteralInteger58.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger58", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57_LiteralInteger58);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57_LiteralBoolean59.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean59", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57_LiteralBoolean59);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read a.b3", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_object);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_object_LiteralInteger60.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger60", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_object_LiteralInteger60);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_object_LiteralUnlimitedNatural61.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural61", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_object_LiteralUnlimitedNatural61);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_result_LiteralInteger62.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger62", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_result_LiteralInteger62);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_result_LiteralUnlimitedNatural63.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural63", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_result_LiteralUnlimitedNatural63);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior.reset(new Activity());
			this->addToElementRepository("TesterClassifierBehavior", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read a.q", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object_LiteralInteger64.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger64", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object_LiteralInteger64);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object_LiteralUnlimitedNatural65.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural65", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object_LiteralUnlimitedNatural65);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result_LiteralUnlimitedNatural66.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural66", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result_LiteralUnlimitedNatural66);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result_LiteralInteger67.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger67", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result_LiteralInteger67);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_3", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger68.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger68", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger68);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralUnlimitedNatural69.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural69", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralUnlimitedNatural69);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger70.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger70", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger70);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger71.reset(new Trigger());
					this->addToElementRepository("Trigger71", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger71);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow72", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72_LiteralBoolean73.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean73", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72_LiteralBoolean73);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72_LiteralInteger74.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger74", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72_LiteralInteger74);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow75.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow75", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow75);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Start", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger76.reset(new Trigger());
					this->addToElementRepository("Trigger76", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger76);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger77.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger77", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger77);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural78.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural78", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural78);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger79.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger79", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger79);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow80", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80_LiteralInteger81.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger81", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80_LiteralInteger81);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80_LiteralBoolean82.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean82", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80_LiteralBoolean82);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_4", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralUnlimitedNatural83.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural83", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralUnlimitedNatural83);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger84.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger84", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger84);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger85.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger85", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger85);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger86.reset(new Trigger());
					this->addToElementRepository("Trigger86", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger86);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4.reset(new ValueSpecificationAction());
				this->addToElementRepository("Value(4)", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger87.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger87", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger87);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural88.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural88", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural88);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger89.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger89", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger89);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow90.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow90", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow90);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_.reset(new CallOperationAction());
				this->addToElementRepository("Call test()", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target.reset(new InputPin());
					this->addToElementRepository("target", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger91.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger91", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger91);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural92.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural92", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural92);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow93.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow93", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow93);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow94", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94_LiteralInteger95.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger95", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94_LiteralInteger95);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94_LiteralBoolean96.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean96", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94_LiteralBoolean96);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow97.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow97", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow97);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_1", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger98.reset(new Trigger());
					this->addToElementRepository("Trigger98", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger98);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralUnlimitedNatural99.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural99", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralUnlimitedNatural99);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger100.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger100", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger100);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger101.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger101", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger101);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this.reset(new ForkNode());
				this->addToElementRepository("Fork this", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow102.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow102", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow102);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read this.a", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralUnlimitedNatural103.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural103", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralUnlimitedNatural103);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralInteger104.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger104", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralInteger104);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralUnlimitedNatural105.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural105", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralUnlimitedNatural105);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralInteger106.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger106", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralInteger106);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S.reset(new SendSignalAction());
				this->addToElementRepository("Send S", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t.reset(new InputPin());
					this->addToElementRepository("t", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralInteger107.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger107", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralInteger107);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralUnlimitedNatural108.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural108", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralUnlimitedNatural108);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target.reset(new InputPin());
					this->addToElementRepository("target", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural109.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural109", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural109);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger110.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger110", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger110);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v.reset(new InputPin());
					this->addToElementRepository("v", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralInteger111.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger111", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralInteger111);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralUnlimitedNatural112.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural112", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralUnlimitedNatural112);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow113", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113_LiteralInteger114.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger114", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113_LiteralInteger114);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113_LiteralBoolean115.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean115", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113_LiteralBoolean115);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow116", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean117.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean117", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean117);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralInteger118.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger118", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralInteger118);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_2", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger119.reset(new Trigger());
					this->addToElementRepository("Trigger119", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger119);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralUnlimitedNatural120.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural120", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralUnlimitedNatural120);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger121.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger121", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger121);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger122.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger122", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger122);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result_LiteralInteger123.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger123", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result_LiteralInteger123);
						MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural124.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural124", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural124);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow125.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow125", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow125);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow126", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126_LiteralBoolean127.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean127", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126_LiteralBoolean127);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126_LiteralInteger128.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger128", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126_LiteralInteger128);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow129", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean130", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralInteger131.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger131", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralInteger131);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester.reset(new Operation());
			this->addToElementRepository("Tester_Tester", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_a.reset(new Property());
			this->addToElementRepository("a", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_a);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_test.reset(new Operation());
			this->addToElementRepository("test", MultipleDelegation_MultipleConnector_P_P_Signal_Tester_test);
		MultipleDelegation_MultipleConnector_P_P_Signal_Continue.reset(new Signal());
		this->addToElementRepository("Continue", MultipleDelegation_MultipleConnector_P_P_Signal_Continue);
		MultipleDelegation_MultipleConnector_P_P_Signal_main.reset(new Activity());
		this->addToElementRepository("main", MultipleDelegation_MultipleConnector_P_P_Signal_main);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester.reset(new CreateObjectAction());
			this->addToElementRepository("Create Tester", MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester_result_LiteralInteger132.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger132", MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester_result_LiteralInteger132);
					MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester_result_LiteralUnlimitedNatural133.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural133", MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester_result_LiteralUnlimitedNatural133);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ControlFlow134.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow134", MultipleDelegation_MultipleConnector_P_P_Signal_main_ControlFlow134);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester.reset(new StartObjectBehaviorAction());
			this->addToElementRepository("Start Tester", MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester_object);
					MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester_object_LiteralUnlimitedNatural135.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural135", MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester_object_LiteralUnlimitedNatural135);
					MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester_object_LiteralInteger136.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger136", MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester_object_LiteralInteger136);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester_.reset(new CallOperationAction());
			this->addToElementRepository("Tester()", MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester_);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__result);
					MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__result_LiteralUnlimitedNatural137.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural137", MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__result_LiteralUnlimitedNatural137);
					MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__result_LiteralInteger138.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger138", MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__result_LiteralInteger138);
					MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__result_LiteralInteger139.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger139", MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__result_LiteralInteger139);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__target);
					MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__target_LiteralUnlimitedNatural140.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural140", MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__target_LiteralUnlimitedNatural140);
					MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__target_LiteralInteger141.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger141", MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__target_LiteralInteger141);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow142", MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142_LiteralBoolean143.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean143", MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142_LiteralBoolean143);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142_LiteralInteger144.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger144", MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142_LiteralInteger144);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Fork_Tester.reset(new ForkNode());
			this->addToElementRepository("Fork Tester", MultipleDelegation_MultipleConnector_P_P_Signal_main_Fork_Tester);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start.reset(new SendSignalAction());
			this->addToElementRepository("Send Start", MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start_target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start_target);
					MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start_target_LiteralUnlimitedNatural145.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural145", MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start_target_LiteralUnlimitedNatural145);
					MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start_target_LiteralInteger146.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger146", MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start_target_LiteralInteger146);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow147", MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147_LiteralInteger148.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger148", MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147_LiteralInteger148);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147_LiteralBoolean149.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean149", MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147_LiteralBoolean149);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow150", MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150_LiteralBoolean151.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean151", MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150_LiteralBoolean151);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150_LiteralInteger152.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger152", MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150_LiteralInteger152);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow153", MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153_LiteralInteger154.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger154", MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153_LiteralInteger154);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153_LiteralBoolean155.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean155", MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153_LiteralBoolean155);
		MultipleDelegation_MultipleConnector_P_P_Signal_A.reset(new Class_());
		this->addToElementRepository("A", MultipleDelegation_MultipleConnector_P_P_Signal_A);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_q.reset(new Port());
			this->addToElementRepository("q", MultipleDelegation_MultipleConnector_P_P_Signal_A_q);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b1.reset(new Property());
			this->addToElementRepository("b1", MultipleDelegation_MultipleConnector_P_P_Signal_A_b1);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_b1_LiteralUnlimitedNatural156.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural156", MultipleDelegation_MultipleConnector_P_P_Signal_A_b1_LiteralUnlimitedNatural156);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_b1_LiteralInteger157.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger157", MultipleDelegation_MultipleConnector_P_P_Signal_A_b1_LiteralInteger157);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b3.reset(new Property());
			this->addToElementRepository("b3", MultipleDelegation_MultipleConnector_P_P_Signal_A_b3);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_b3_LiteralUnlimitedNatural158.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural158", MultipleDelegation_MultipleConnector_P_P_Signal_A_b3_LiteralUnlimitedNatural158);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_b3_LiteralInteger159.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger159", MultipleDelegation_MultipleConnector_P_P_Signal_A_b3_LiteralInteger159);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r2.reset(new Connector());
			this->addToElementRepository("r2", MultipleDelegation_MultipleConnector_P_P_Signal_A_r2);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r2_ConnectorEnd160.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd160", MultipleDelegation_MultipleConnector_P_P_Signal_A_r2_ConnectorEnd160);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r2_ConnectorEnd161.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd161", MultipleDelegation_MultipleConnector_P_P_Signal_A_r2_ConnectorEnd161);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b2.reset(new Property());
			this->addToElementRepository("b2", MultipleDelegation_MultipleConnector_P_P_Signal_A_b2);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_b2_LiteralInteger162.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger162", MultipleDelegation_MultipleConnector_P_P_Signal_A_b2_LiteralInteger162);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_b2_LiteralUnlimitedNatural163.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural163", MultipleDelegation_MultipleConnector_P_P_Signal_A_b2_LiteralUnlimitedNatural163);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r1.reset(new Connector());
			this->addToElementRepository("r1", MultipleDelegation_MultipleConnector_P_P_Signal_A_r1);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r1_ConnectorEnd164.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd164", MultipleDelegation_MultipleConnector_P_P_Signal_A_r1_ConnectorEnd164);
					MultipleDelegation_MultipleConnector_P_P_Signal_A_r1_ConnectorEnd164_LiteralUnlimitedNatural165.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural165", MultipleDelegation_MultipleConnector_P_P_Signal_A_r1_ConnectorEnd164_LiteralUnlimitedNatural165);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r1_ConnectorEnd166.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd166", MultipleDelegation_MultipleConnector_P_P_Signal_A_r1_ConnectorEnd166);
					MultipleDelegation_MultipleConnector_P_P_Signal_A_r1_ConnectorEnd166_LiteralUnlimitedNatural167.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural167", MultipleDelegation_MultipleConnector_P_P_Signal_A_r1_ConnectorEnd166_LiteralUnlimitedNatural167);
					MultipleDelegation_MultipleConnector_P_P_Signal_A_r1_ConnectorEnd166_LiteralInteger168.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger168", MultipleDelegation_MultipleConnector_P_P_Signal_A_r1_ConnectorEnd166_LiteralInteger168);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r3.reset(new Connector());
			this->addToElementRepository("r3", MultipleDelegation_MultipleConnector_P_P_Signal_A_r3);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r3_ConnectorEnd169.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd169", MultipleDelegation_MultipleConnector_P_P_Signal_A_r3_ConnectorEnd169);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r3_ConnectorEnd170.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd170", MultipleDelegation_MultipleConnector_P_P_Signal_A_r3_ConnectorEnd170);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r4.reset(new Connector());
			this->addToElementRepository("r4", MultipleDelegation_MultipleConnector_P_P_Signal_A_r4);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r4_ConnectorEnd171.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd171", MultipleDelegation_MultipleConnector_P_P_Signal_A_r4_ConnectorEnd171);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r4_ConnectorEnd172.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd172", MultipleDelegation_MultipleConnector_P_P_Signal_A_r4_ConnectorEnd172);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b4.reset(new Property());
			this->addToElementRepository("b4", MultipleDelegation_MultipleConnector_P_P_Signal_A_b4);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_b4_LiteralInteger173.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger173", MultipleDelegation_MultipleConnector_P_P_Signal_A_b4_LiteralInteger173);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_b4_LiteralUnlimitedNatural174.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural174", MultipleDelegation_MultipleConnector_P_P_Signal_A_b4_LiteralUnlimitedNatural174);
		MultipleDelegation_MultipleConnector_P_P_Signal_S.reset(new Signal());
		this->addToElementRepository("S", MultipleDelegation_MultipleConnector_P_P_Signal_S);
			MultipleDelegation_MultipleConnector_P_P_Signal_S_t.reset(new Property());
			this->addToElementRepository("t", MultipleDelegation_MultipleConnector_P_P_Signal_S_t);
			MultipleDelegation_MultipleConnector_P_P_Signal_S_v.reset(new Property());
			this->addToElementRepository("v", MultipleDelegation_MultipleConnector_P_P_Signal_S_v);
		MultipleDelegation_MultipleConnector_P_P_Signal_I.reset(new Interface());
		this->addToElementRepository("I", MultipleDelegation_MultipleConnector_P_P_Signal_I);
			MultipleDelegation_MultipleConnector_P_P_Signal_I_S.reset(new Reception());
			this->addToElementRepository("S", MultipleDelegation_MultipleConnector_P_P_Signal_I_S);
		MultipleDelegation_MultipleConnector_P_P_Signal_B.reset(new Class_());
		this->addToElementRepository("B", MultipleDelegation_MultipleConnector_P_P_Signal_B);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior.reset(new Activity());
			this->addToElementRepository("BClassifierBehavior", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow175", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175_LiteralBoolean176.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean176", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175_LiteralBoolean176);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175_LiteralInteger177.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger177", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175_LiteralInteger177);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow178", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178_LiteralBoolean179.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean179", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178_LiteralBoolean179);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178_LiteralInteger180.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger180", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178_LiteralInteger180);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow181.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow181", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow181);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow182", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182_LiteralInteger183.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger183", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182_LiteralInteger183);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182_LiteralBoolean184.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean184", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182_LiteralBoolean184);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S.reset(new AcceptEventAction());
				this->addToElementRepository("Accept S", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger185.reset(new Trigger());
					this->addToElementRepository("Trigger185", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger185);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s.reset(new OutputPin());
					this->addToElementRepository("s", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s_LiteralUnlimitedNatural186.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural186", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s_LiteralUnlimitedNatural186);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger187.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger187", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger187);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger188.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger188", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger188);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural189.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural189", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural189);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralInteger190.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger190", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralInteger190);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralInteger191.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger191", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralInteger191);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural192.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural192", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural192);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralInteger193.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger193", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralInteger193);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural194.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural194", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural194);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue.reset(new SendSignalAction());
				this->addToElementRepository("Send Continue", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target.reset(new InputPin());
					this->addToElementRepository("target", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural195.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural195", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural195);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralInteger196.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger196", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralInteger196);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow197", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197_LiteralBoolean198.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean198", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197_LiteralBoolean198);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197_LiteralInteger199.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger199", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197_LiteralInteger199);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow200", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200_LiteralBoolean201.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean201", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200_LiteralBoolean201);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200_LiteralInteger202.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger202", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200_LiteralInteger202);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read s.v", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralInteger203.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger203", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralInteger203);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralUnlimitedNatural204.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural204", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralUnlimitedNatural204);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralInteger205.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger205", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralInteger205);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralUnlimitedNatural206.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural206", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralUnlimitedNatural206);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read s.t", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralInteger207.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger207", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralInteger207);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralUnlimitedNatural208.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural208", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralUnlimitedNatural208);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralUnlimitedNatural209.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural209", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralUnlimitedNatural209);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralInteger210.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger210", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralInteger210);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this_result);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this_result_LiteralUnlimitedNatural211.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural211", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this_result_LiteralUnlimitedNatural211);
						MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this_result_LiteralInteger212.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger212", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this_result_LiteralInteger212);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Fork_s.reset(new ForkNode());
				this->addToElementRepository("Fork s", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow213", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213_LiteralBoolean214.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean214", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213_LiteralBoolean214);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213_LiteralInteger215.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger215", MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213_LiteralInteger215);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_MultipleConnector_P_P_Signal_B_IRealization);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B.reset(new Operation());
			this->addToElementRepository("B_B", MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_p.reset(new Property());
			this->addToElementRepository("p", MultipleDelegation_MultipleConnector_P_P_Signal_B_p);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_S.reset(new Reception());
			this->addToElementRepository("S", MultipleDelegation_MultipleConnector_P_P_Signal_B_S);
		MultipleDelegation_MultipleConnector_P_P_Signal_R.reset(new Association());
		this->addToElementRepository("R", MultipleDelegation_MultipleConnector_P_P_Signal_R);
			MultipleDelegation_MultipleConnector_P_P_Signal_R_x.reset(new Property());
			this->addToElementRepository("x", MultipleDelegation_MultipleConnector_P_P_Signal_R_x);
				MultipleDelegation_MultipleConnector_P_P_Signal_R_x_LiteralUnlimitedNatural216.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural216", MultipleDelegation_MultipleConnector_P_P_Signal_R_x_LiteralUnlimitedNatural216);
				MultipleDelegation_MultipleConnector_P_P_Signal_R_x_LiteralInteger217.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger217", MultipleDelegation_MultipleConnector_P_P_Signal_R_x_LiteralInteger217);
			MultipleDelegation_MultipleConnector_P_P_Signal_R_y.reset(new Property());
			this->addToElementRepository("y", MultipleDelegation_MultipleConnector_P_P_Signal_R_y);
				MultipleDelegation_MultipleConnector_P_P_Signal_R_y_LiteralInteger218.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger218", MultipleDelegation_MultipleConnector_P_P_Signal_R_y_LiteralInteger218);
				MultipleDelegation_MultipleConnector_P_P_Signal_R_y_LiteralUnlimitedNatural219.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural219", MultipleDelegation_MultipleConnector_P_P_Signal_R_y_LiteralUnlimitedNatural219);
		MultipleDelegation_MultipleConnector_P_P_Signal_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", MultipleDelegation_MultipleConnector_P_P_Signal_IImpl);
			MultipleDelegation_MultipleConnector_P_P_Signal_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_MultipleConnector_P_P_Signal_IImpl_IRealization);
			MultipleDelegation_MultipleConnector_P_P_Signal_IImpl_S.reset(new Reception());
			this->addToElementRepository("S", MultipleDelegation_MultipleConnector_P_P_Signal_IImpl_S);
		MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester.reset(new Class_());
		this->addToElementRepository("AbstractTester", MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester);
			MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Start.reset(new Reception());
			this->addToElementRepository("Start", MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Start);
			MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_test.reset(new Operation());
			this->addToElementRepository("test", MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_test);
			MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Continue.reset(new Reception());
			this->addToElementRepository("Continue", MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Continue);
		MultipleDelegation_MultipleConnector_P_P_Signal_Start.reset(new Signal());
		this->addToElementRepository("Start", MultipleDelegation_MultipleConnector_P_P_Signal_Start);

	// Initialize public members
	/*
	 * Model MultipleDelegation_MultipleConnector_P_P_Signal
	 */
	MultipleDelegation_MultipleConnector_P_P_Signal->setThisPackagePtr(MultipleDelegation_MultipleConnector_P_P_Signal);
	MultipleDelegation_MultipleConnector_P_P_Signal->setName("MultipleDelegation_MultipleConnector_P_P_Signal");
	MultipleDelegation_MultipleConnector_P_P_Signal->setVisibility(VisibilityKind::public_);
		// SignalEvent StartEvent
		MultipleDelegation_MultipleConnector_P_P_Signal_StartEvent->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_StartEvent);
		MultipleDelegation_MultipleConnector_P_P_Signal_StartEvent->setName("StartEvent");
		MultipleDelegation_MultipleConnector_P_P_Signal_StartEvent->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_P_Signal_StartEvent->setSignal(MultipleDelegation_MultipleConnector_P_P_Signal_Start);
	MultipleDelegation_MultipleConnector_P_P_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Signal_StartEvent);
		// SignalEvent ContinueEvent
		MultipleDelegation_MultipleConnector_P_P_Signal_ContinueEvent->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_ContinueEvent);
		MultipleDelegation_MultipleConnector_P_P_Signal_ContinueEvent->setName("ContinueEvent");
		MultipleDelegation_MultipleConnector_P_P_Signal_ContinueEvent->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_P_Signal_ContinueEvent->setSignal(MultipleDelegation_MultipleConnector_P_P_Signal_Continue);
	MultipleDelegation_MultipleConnector_P_P_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Signal_ContinueEvent);
		// SignalEvent SEvent
		MultipleDelegation_MultipleConnector_P_P_Signal_SEvent->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_SEvent);
		MultipleDelegation_MultipleConnector_P_P_Signal_SEvent->setName("SEvent");
		MultipleDelegation_MultipleConnector_P_P_Signal_SEvent->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_P_Signal_SEvent->setSignal(MultipleDelegation_MultipleConnector_P_P_Signal_S);
	MultipleDelegation_MultipleConnector_P_P_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Signal_SEvent);
		// Class Tester
		MultipleDelegation_MultipleConnector_P_P_Signal_Tester->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester);
		MultipleDelegation_MultipleConnector_P_P_Signal_Tester->setName("Tester");
		MultipleDelegation_MultipleConnector_P_P_Signal_Tester->setVisibility(VisibilityKind::public_);
		
			// Generalization to AbstractTester
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Generalization0->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Generalization0);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Generalization0->setGeneral(MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester);
		MultipleDelegation_MultipleConnector_P_P_Signal_Tester->addGeneralization(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Generalization0);
			// Property a
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_a->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_a);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_a->setName("a");
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_a->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_a->setType(MultipleDelegation_MultipleConnector_P_P_Signal_A);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_a->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_P_Signal_Tester->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_a);
		MultipleDelegation_MultipleConnector_P_P_Signal_Tester->setClassifierBehavior(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior);
			// Activity testActivity
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->setThisActivityPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->setName("testActivity");
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->setVisibility(VisibilityKind::public_);
			// FunctionBehavior testP
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP->setName("testP");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP->setVisibility(VisibilityKind::public_);
				
					// Parameter p
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP_p->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP_p);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP_p->setName("p");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP_p->setVisibility(VisibilityKind::public_);
					
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP->addOwnedParameter(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP_p);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP->addLanguage("C++");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP->addLanguage("Include");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	static unsigned int index = 1; 	static const unsigned int MAX_INDEX = 4; 	static bool success = true;  	if(index == 1) 	{ 		std::cout<<\"Asserting a.b1.p == 4 && a.b2.p == 4 && a.b3.p == 4 && a.b4.p == 4\"<<std::endl; 	}  	// Test parameter p 	int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 	std::cout << \"a.b\" << index << \".p == \" << std::to_string(p) <<std::endl; 	success = success && (p == 4);  	if(index == MAX_INDEX) 	{ 		std::cout<<\"Signal delegated on all links (shall be true for default strategy): \";  		if(success) 		{ 			std::cout<<ASCII_GRN << \"Assertion successful.\" << ASCII_BLK << std::endl; 		} 		else 		{ 			std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 		} 	}  	index++;");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addOwnedBehavior(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP);
				// ReadStructuralFeatureAction Read a.b2
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2->setName("Read a.b2");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Signal_A_b2);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_object);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_object->setName("object");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_object->setType(MultipleDelegation_MultipleConnector_P_P_Signal_A);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2->setObject(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_B);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2);
				// ReadStructuralFeatureAction Read this.a
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a->setName("Read this.a");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_a);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_object);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_object->setName("object");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_object->setType(MultipleDelegation_MultipleConnector_P_P_Signal_Tester);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a->setObject(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_A);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a);
				// ReadStructuralFeatureAction Read b.p
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p->setName("Read b.p");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Signal_B_p);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object->setName("object");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object->setType(MultipleDelegation_MultipleConnector_P_P_Signal_B);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p->setObject(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p);
				// ReadSelfAction this
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this->setName("this");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_Tester);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this);
				// CallBehaviorAction Call testP
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP->setName("Call testP");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP->setBehavior(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_testP);
					// InputPin p
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP_p->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP_p);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP_p->setName("p");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP_p->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP->addArgument(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP_p);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP);
				// ReadStructuralFeatureAction Read a.b4
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4->setName("Read a.b4");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Signal_A_b4);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_object);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_object->setName("object");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_object->setType(MultipleDelegation_MultipleConnector_P_P_Signal_A);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4->setObject(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_B);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4);
				// ReadStructuralFeatureAction Read a.b1
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1->setName("Read a.b1");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Signal_A_b1);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_object);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_object->setName("object");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_object->setType(MultipleDelegation_MultipleConnector_P_P_Signal_A);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1->setObject(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_B);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1);
				// ForkNode Fork a
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Fork_a->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Fork_a);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Fork_a->setName("Fork a");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Fork_a->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Fork_a);
				// ReadStructuralFeatureAction Read a.b3
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3->setName("Read a.b3");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Signal_A_b3);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_object);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_object->setName("object");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_object->setType(MultipleDelegation_MultipleConnector_P_P_Signal_A);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3->setObject(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_B);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3);
				// ObjectFlow ObjectFlow1 from Fork a to object
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1->setName("ObjectFlow1");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Fork_a);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_object);
					// LiteralBoolean LiteralBoolean2
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2->setName("LiteralBoolean2");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow1);
				// ObjectFlow ObjectFlow8 from result to p
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8->setName("ObjectFlow8");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Call_testP_p);
					// LiteralBoolean LiteralBoolean9
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8_LiteralBoolean9->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8_LiteralBoolean9);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8_LiteralBoolean9->setName("LiteralBoolean9");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8_LiteralBoolean9->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8_LiteralBoolean9->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8_LiteralBoolean9);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow8);
				// ControlFlow ControlFlow15 from Read a.b2 to Read a.b3
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow15->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow15);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow15->setName("ControlFlow15");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow15->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow15->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow15->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow15);
				// ControlFlow ControlFlow16 from Read a.b3 to Read a.b4
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow16->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow16);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow16->setName("ControlFlow16");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow16->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow16->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow16->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow16);
				// ObjectFlow ObjectFlow20 from Fork a to object
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20->setName("ObjectFlow20");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Fork_a);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_object);
					// LiteralBoolean LiteralBoolean22
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20_LiteralBoolean22->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20_LiteralBoolean22);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20_LiteralBoolean22->setName("LiteralBoolean22");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20_LiteralBoolean22->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20_LiteralBoolean22->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20_LiteralBoolean22);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow20);
				// ObjectFlow ObjectFlow23 from result to object
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23->setName("ObjectFlow23");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_this_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_object);
					// LiteralBoolean LiteralBoolean24
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24->setName("LiteralBoolean24");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow23);
				// ObjectFlow ObjectFlow26 from result to object
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26->setName("ObjectFlow26");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object);
					// LiteralBoolean LiteralBoolean27
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27->setName("LiteralBoolean27");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow26);
				// ControlFlow ControlFlow29 from Read a.b1 to Read a.b2
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow29->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow29);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow29->setName("ControlFlow29");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow29->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow29->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow29->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ControlFlow29);
				// ObjectFlow ObjectFlow32 from result to object
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32->setName("ObjectFlow32");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b1_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object);
					// LiteralBoolean LiteralBoolean33
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32_LiteralBoolean33->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32_LiteralBoolean33);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32_LiteralBoolean33->setName("LiteralBoolean33");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32_LiteralBoolean33->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32_LiteralBoolean33->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32_LiteralBoolean33);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow32);
				// ObjectFlow ObjectFlow39 from Fork a to object
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39->setName("ObjectFlow39");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Fork_a);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_object);
					// LiteralBoolean LiteralBoolean40
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39_LiteralBoolean40->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39_LiteralBoolean40);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39_LiteralBoolean40->setName("LiteralBoolean40");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39_LiteralBoolean40->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39_LiteralBoolean40->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39_LiteralBoolean40);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow39);
				// ObjectFlow ObjectFlow42 from Fork a to object
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42->setName("ObjectFlow42");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Fork_a);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b3_object);
					// LiteralBoolean LiteralBoolean43
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42_LiteralBoolean43->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42_LiteralBoolean43);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42_LiteralBoolean43->setName("LiteralBoolean43");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42_LiteralBoolean43->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42_LiteralBoolean43->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42_LiteralBoolean43);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow42);
				// ObjectFlow ObjectFlow51 from result to Fork a
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51->setName("ObjectFlow51");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_this_a_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Fork_a);
					// LiteralBoolean LiteralBoolean52
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51_LiteralBoolean52->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51_LiteralBoolean52);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51_LiteralBoolean52->setName("LiteralBoolean52");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51_LiteralBoolean52->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51_LiteralBoolean52->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51_LiteralBoolean52);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow51);
				// ObjectFlow ObjectFlow54 from result to object
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54->setName("ObjectFlow54");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b4_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object);
					// LiteralBoolean LiteralBoolean55
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54_LiteralBoolean55->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54_LiteralBoolean55);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54_LiteralBoolean55->setName("LiteralBoolean55");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54_LiteralBoolean55->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54_LiteralBoolean55->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54_LiteralBoolean55);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow54);
				// ObjectFlow ObjectFlow57 from result to object
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57->setName("ObjectFlow57");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_a_b2_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_Read_b_p_object);
					// LiteralBoolean LiteralBoolean59
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57_LiteralBoolean59->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57_LiteralBoolean59);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57_LiteralBoolean59->setName("LiteralBoolean59");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57_LiteralBoolean59->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57_LiteralBoolean59->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57_LiteralBoolean59);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity_ObjectFlow57);
		MultipleDelegation_MultipleConnector_P_P_Signal_Tester->addOwnedBehavior(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity);
			// Activity TesterClassifierBehavior
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->setThisActivityPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->setName("TesterClassifierBehavior");
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->setVisibility(VisibilityKind::public_);
				// ForkNode Fork this
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this->setName("Fork this");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				// ReadStructuralFeatureAction Read a.q
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setName("Read a.q");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Signal_A_q);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object->setName("object");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object->setType(MultipleDelegation_MultipleConnector_P_P_Signal_A);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setObject(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_IImpl);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q);
				// AcceptEventAction Accept Continue_3
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->setName("Accept Continue_3");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_Continue);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->addResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result);
					// Trigger Trigger71
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger71->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger71);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger71->setName("Trigger71");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger71->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger71->setEvent(MultipleDelegation_MultipleConnector_P_P_Signal_ContinueEvent);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->addTrigger(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger71);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
				// ReadStructuralFeatureAction Read this.a
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setName("Read this.a");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_a);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setName("object");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setType(MultipleDelegation_MultipleConnector_P_P_Signal_Tester);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setObject(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_A);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a);
				// SendSignalAction Send S
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S->setName("Send S");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S->setSignal(MultipleDelegation_MultipleConnector_P_P_Signal_S);
					// InputPin target
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target->setName("target");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target->setType(MultipleDelegation_MultipleConnector_P_P_Signal_IImpl);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target);
					// InputPin v
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v->setName("v");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S->addArgument(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v);
					// InputPin t
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t->setName("t");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t->setType(MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S->addArgument(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S);
				// AcceptEventAction Accept Continue_2
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->setName("Accept Continue_2");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_Continue);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->addResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result);
					// Trigger Trigger119
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger119->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger119);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger119->setName("Trigger119");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger119->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger119->setEvent(MultipleDelegation_MultipleConnector_P_P_Signal_ContinueEvent);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->addTrigger(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger119);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
				// AcceptEventAction Accept Start
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start->setName("Accept Start");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_Start);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start->addResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
					// Trigger Trigger76
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger76->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger76);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger76->setName("Trigger76");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger76->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger76->setEvent(MultipleDelegation_MultipleConnector_P_P_Signal_StartEvent);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start->addTrigger(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger76);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				// ReadSelfAction this
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this->setName("this");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_Tester);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this);
				// AcceptEventAction Accept Continue_4
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->setName("Accept Continue_4");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_Continue);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->addResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result);
					// Trigger Trigger86
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger86->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger86);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger86->setName("Trigger86");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger86->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger86->setEvent(MultipleDelegation_MultipleConnector_P_P_Signal_ContinueEvent);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->addTrigger(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger86);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
				// ValueSpecificationAction Value(4)
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4->setName("Value(4)");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger89
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger89->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger89);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger89->setName("LiteralInteger89");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger89->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger89->setValue(4);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4->setValue(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger89);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4);
				// CallOperationAction Call test()
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_->setName("Call test()");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_->setOperation(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_test);
					// InputPin target
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target->setName("target");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target->setType(MultipleDelegation_MultipleConnector_P_P_Signal_Tester);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_);
				// AcceptEventAction Accept Continue_1
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->setName("Accept Continue_1");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_Continue);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->addResult(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result);
					// Trigger Trigger98
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger98->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger98);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger98->setName("Trigger98");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger98->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger98->setEvent(MultipleDelegation_MultipleConnector_P_P_Signal_ContinueEvent);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->addTrigger(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger98);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
				// ControlFlow ControlFlow102 from Send S to Accept Continue_1
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow102->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow102);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow102->setName("ControlFlow102");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow102->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow102->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow102->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow102);
				// ObjectFlow ObjectFlow113 from Fork this to t
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113->setName("ObjectFlow113");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_t);
					// LiteralBoolean LiteralBoolean115
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113_LiteralBoolean115->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113_LiteralBoolean115);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113_LiteralBoolean115->setName("LiteralBoolean115");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113_LiteralBoolean115->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113_LiteralBoolean115->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113_LiteralBoolean115);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow113);
				// ObjectFlow ObjectFlow116 from result to object
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116->setName("ObjectFlow116");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object);
					// LiteralBoolean LiteralBoolean117
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean117->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean117);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean117->setName("LiteralBoolean117");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean117->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean117->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116_LiteralBoolean117);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow116);
				// ObjectFlow ObjectFlow72 from result to v
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72->setName("ObjectFlow72");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Value_4_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_v);
					// LiteralBoolean LiteralBoolean73
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72_LiteralBoolean73->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72_LiteralBoolean73);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72_LiteralBoolean73->setName("LiteralBoolean73");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72_LiteralBoolean73->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72_LiteralBoolean73->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72_LiteralBoolean73);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow72);
				// ControlFlow ControlFlow75 from Accept Continue_3 to Accept Continue_4
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow75->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow75);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow75->setName("ControlFlow75");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow75->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow75->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow75->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow75);
				// ObjectFlow ObjectFlow80 from Fork this to object
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80->setName("ObjectFlow80");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
					// LiteralBoolean LiteralBoolean82
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80_LiteralBoolean82->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80_LiteralBoolean82);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80_LiteralBoolean82->setName("LiteralBoolean82");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80_LiteralBoolean82->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80_LiteralBoolean82->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80_LiteralBoolean82);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow80);
				// ControlFlow ControlFlow125 from Accept Continue_2 to Accept Continue_3
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow125->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow125);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow125->setName("ControlFlow125");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow125->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow125->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow125->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow125);
				// ObjectFlow ObjectFlow126 from result to Fork this
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126->setName("ObjectFlow126");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
					// LiteralBoolean LiteralBoolean127
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126_LiteralBoolean127->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126_LiteralBoolean127);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126_LiteralBoolean127->setName("LiteralBoolean127");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126_LiteralBoolean127->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126_LiteralBoolean127->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126_LiteralBoolean127);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow126);
				// ControlFlow ControlFlow90 from Accept Start to this
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow90->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow90);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow90->setName("ControlFlow90");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow90->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow90->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow90->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_this);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow90);
				// ObjectFlow ObjectFlow129 from result to target
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129->setName("ObjectFlow129");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Send_S_target);
					// LiteralBoolean LiteralBoolean130
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130->setName("LiteralBoolean130");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129_LiteralBoolean130);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow129);
				// ControlFlow ControlFlow93 from Accept Continue_4 to Call test()
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow93->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow93);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow93->setName("ControlFlow93");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow93->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow93->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow93->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow93);
				// ObjectFlow ObjectFlow94 from Fork this to target
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94->setName("ObjectFlow94");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target);
					// LiteralBoolean LiteralBoolean96
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94_LiteralBoolean96->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94_LiteralBoolean96);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94_LiteralBoolean96->setName("LiteralBoolean96");
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94_LiteralBoolean96->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94_LiteralBoolean96->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94_LiteralBoolean96);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow94);
				// ControlFlow ControlFlow97 from Accept Continue_1 to Accept Continue_2
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow97->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow97);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow97->setName("ControlFlow97");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow97->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow97->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow97->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow97);
		MultipleDelegation_MultipleConnector_P_P_Signal_Tester->addOwnedBehavior(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_TesterClassifierBehavior);
		
		MultipleDelegation_MultipleConnector_P_P_Signal_Tester->setIsActive(true);
			// Operation Tester_Tester
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester->setName("Tester_Tester");
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester_result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_Tester);
				MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester->addOwnedParameter(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester_result);
		MultipleDelegation_MultipleConnector_P_P_Signal_Tester->addOwnedOperation(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester);
			// Operation test
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_test->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_test);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_test->setName("test");
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_test->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Signal_Tester_test->addMethod(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_testActivity);
		MultipleDelegation_MultipleConnector_P_P_Signal_Tester->addOwnedOperation(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_test);
	MultipleDelegation_MultipleConnector_P_P_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Signal_Tester);
		// Signal Continue
		MultipleDelegation_MultipleConnector_P_P_Signal_Continue->setThisSignalPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Continue);
		MultipleDelegation_MultipleConnector_P_P_Signal_Continue->setName("Continue");
		MultipleDelegation_MultipleConnector_P_P_Signal_Continue->setVisibility(VisibilityKind::public_);
	MultipleDelegation_MultipleConnector_P_P_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Signal_Continue);
		// Activity main
		MultipleDelegation_MultipleConnector_P_P_Signal_main->setThisActivityPtr(MultipleDelegation_MultipleConnector_P_P_Signal_main);
		MultipleDelegation_MultipleConnector_P_P_Signal_main->setName("main");
		MultipleDelegation_MultipleConnector_P_P_Signal_main->setVisibility(VisibilityKind::public_);
			// CreateObjectAction Create Tester
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester->setName("Create Tester");
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester->setClassifier(MultipleDelegation_MultipleConnector_P_P_Signal_Tester);
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester_result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_Tester);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester_result);
		MultipleDelegation_MultipleConnector_P_P_Signal_main->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester);
			// StartObjectBehaviorAction Start Tester
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester->setName("Start Tester");
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester->setVisibility(VisibilityKind::public_);
				// InputPin object
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester_object);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester_object->setName("object");
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester_object->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester->setObject(MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester_object);
		MultipleDelegation_MultipleConnector_P_P_Signal_main->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester);
			// CallOperationAction Tester()
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester_->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester_);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester_->setName("Tester()");
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__result);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_Tester);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester_->addResult(MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__result);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester_->setOperation(MultipleDelegation_MultipleConnector_P_P_Signal_Tester_Tester_Tester);
				// InputPin target
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__target->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__target);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__target->setName("target");
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__target->setType(MultipleDelegation_MultipleConnector_P_P_Signal_Tester);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester_->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__target);
		MultipleDelegation_MultipleConnector_P_P_Signal_main->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester_);
			// ForkNode Fork Tester
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Fork_Tester->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_Fork_Tester);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Fork_Tester->setName("Fork Tester");
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Fork_Tester->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_P_Signal_main->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_main_Fork_Tester);
			// SendSignalAction Send Start
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start->setName("Send Start");
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start->setSignal(MultipleDelegation_MultipleConnector_P_P_Signal_Start);
				// InputPin target
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start_target->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start_target);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start_target->setName("target");
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start_target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start_target->setType(MultipleDelegation_MultipleConnector_P_P_Signal_Tester);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start_target);
		MultipleDelegation_MultipleConnector_P_P_Signal_main->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start);
			// ControlFlow ControlFlow134 from Start Tester to Send Start
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ControlFlow134->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_ControlFlow134);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ControlFlow134->setName("ControlFlow134");
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ControlFlow134->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ControlFlow134->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ControlFlow134->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start);
		MultipleDelegation_MultipleConnector_P_P_Signal_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_main_ControlFlow134);
			// ObjectFlow ObjectFlow142 from result to target
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142->setName("ObjectFlow142");
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_main_Create_Tester_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__target);
				// LiteralBoolean LiteralBoolean143
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142_LiteralBoolean143->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142_LiteralBoolean143);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142_LiteralBoolean143->setName("LiteralBoolean143");
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142_LiteralBoolean143->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142_LiteralBoolean143->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142_LiteralBoolean143);
		MultipleDelegation_MultipleConnector_P_P_Signal_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow142);
			// ObjectFlow ObjectFlow147 from Fork Tester to target
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147->setName("ObjectFlow147");
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_main_Fork_Tester);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_main_Send_Start_target);
				// LiteralBoolean LiteralBoolean149
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147_LiteralBoolean149->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147_LiteralBoolean149);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147_LiteralBoolean149->setName("LiteralBoolean149");
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147_LiteralBoolean149->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147_LiteralBoolean149->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147_LiteralBoolean149);
		MultipleDelegation_MultipleConnector_P_P_Signal_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow147);
			// ObjectFlow ObjectFlow150 from result to Fork Tester
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150->setName("ObjectFlow150");
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_main_Tester__result);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_main_Fork_Tester);
				// LiteralBoolean LiteralBoolean151
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150_LiteralBoolean151->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150_LiteralBoolean151);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150_LiteralBoolean151->setName("LiteralBoolean151");
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150_LiteralBoolean151->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150_LiteralBoolean151->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150_LiteralBoolean151);
		MultipleDelegation_MultipleConnector_P_P_Signal_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow150);
			// ObjectFlow ObjectFlow153 from Fork Tester to object
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153->setName("ObjectFlow153");
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_main_Fork_Tester);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_main_Start_Tester_object);
				// LiteralBoolean LiteralBoolean155
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153_LiteralBoolean155->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153_LiteralBoolean155);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153_LiteralBoolean155->setName("LiteralBoolean155");
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153_LiteralBoolean155->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153_LiteralBoolean155->setValue(true);
			MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153_LiteralBoolean155);
		MultipleDelegation_MultipleConnector_P_P_Signal_main->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_main_ObjectFlow153);
	MultipleDelegation_MultipleConnector_P_P_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Signal_main);
		// Class A
		MultipleDelegation_MultipleConnector_P_P_Signal_A->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_P_Signal_A);
		MultipleDelegation_MultipleConnector_P_P_Signal_A->setName("A");
		MultipleDelegation_MultipleConnector_P_P_Signal_A->setVisibility(VisibilityKind::public_);
		
			// Port q
			MultipleDelegation_MultipleConnector_P_P_Signal_A_q->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_A_q);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_q->setName("q");
			MultipleDelegation_MultipleConnector_P_P_Signal_A_q->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Signal_A_q->setType(MultipleDelegation_MultipleConnector_P_P_Signal_IImpl);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_q->setAggregation(AggregationKind::composite);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_q->isService = true;
			MultipleDelegation_MultipleConnector_P_P_Signal_A_q->addProvided(MultipleDelegation_MultipleConnector_P_P_Signal_I);
		MultipleDelegation_MultipleConnector_P_P_Signal_A->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_P_Signal_A_q);
			// Property b1
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b1->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_A_b1);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b1->setName("b1");
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b1->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b1->setType(MultipleDelegation_MultipleConnector_P_P_Signal_B);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b1->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_P_Signal_A->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_P_Signal_A_b1);
			// Property b2
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b2->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_A_b2);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b2->setName("b2");
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b2->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b2->setType(MultipleDelegation_MultipleConnector_P_P_Signal_B);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b2->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_P_Signal_A->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_P_Signal_A_b2);
			// Property b3
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b3->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_A_b3);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b3->setName("b3");
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b3->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b3->setType(MultipleDelegation_MultipleConnector_P_P_Signal_B);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b3->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_P_Signal_A->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_P_Signal_A_b3);
			// Property b4
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b4->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_A_b4);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b4->setName("b4");
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b4->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b4->setType(MultipleDelegation_MultipleConnector_P_P_Signal_B);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_b4->setAggregation(AggregationKind::composite);
		MultipleDelegation_MultipleConnector_P_P_Signal_A->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_P_Signal_A_b4);
		
		MultipleDelegation_MultipleConnector_P_P_Signal_A_r2->setName("r2");
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r2->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r2_ConnectorEnd161->setRole(MultipleDelegation_MultipleConnector_P_P_Signal_A_q);
				
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r2->addEnd(MultipleDelegation_MultipleConnector_P_P_Signal_A_r2_ConnectorEnd161);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r2_ConnectorEnd160->setRole(MultipleDelegation_MultipleConnector_P_P_Signal_A_b2);
				
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r2->addEnd(MultipleDelegation_MultipleConnector_P_P_Signal_A_r2_ConnectorEnd160);
		MultipleDelegation_MultipleConnector_P_P_Signal_A->addOwnedConnector(MultipleDelegation_MultipleConnector_P_P_Signal_A_r2);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r1->setName("r1");
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r1->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r1_ConnectorEnd164->setRole(MultipleDelegation_MultipleConnector_P_P_Signal_A_q);
				
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r1->addEnd(MultipleDelegation_MultipleConnector_P_P_Signal_A_r1_ConnectorEnd164);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r1_ConnectorEnd166->setRole(MultipleDelegation_MultipleConnector_P_P_Signal_A_b1);
				
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r1->addEnd(MultipleDelegation_MultipleConnector_P_P_Signal_A_r1_ConnectorEnd166);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r1->setType(MultipleDelegation_MultipleConnector_P_P_Signal_R);
		MultipleDelegation_MultipleConnector_P_P_Signal_A->addOwnedConnector(MultipleDelegation_MultipleConnector_P_P_Signal_A_r1);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r3->setName("r3");
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r3->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r3_ConnectorEnd169->setRole(MultipleDelegation_MultipleConnector_P_P_Signal_A_q);
				
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r3->addEnd(MultipleDelegation_MultipleConnector_P_P_Signal_A_r3_ConnectorEnd169);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r3_ConnectorEnd170->setRole(MultipleDelegation_MultipleConnector_P_P_Signal_A_b3);
				
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r3->addEnd(MultipleDelegation_MultipleConnector_P_P_Signal_A_r3_ConnectorEnd170);
		MultipleDelegation_MultipleConnector_P_P_Signal_A->addOwnedConnector(MultipleDelegation_MultipleConnector_P_P_Signal_A_r3);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r4->setName("r4");
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r4->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r4_ConnectorEnd172->setRole(MultipleDelegation_MultipleConnector_P_P_Signal_A_q);
				
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r4->addEnd(MultipleDelegation_MultipleConnector_P_P_Signal_A_r4_ConnectorEnd172);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_A_r4_ConnectorEnd171->setRole(MultipleDelegation_MultipleConnector_P_P_Signal_A_b4);
				
			MultipleDelegation_MultipleConnector_P_P_Signal_A_r4->addEnd(MultipleDelegation_MultipleConnector_P_P_Signal_A_r4_ConnectorEnd171);
		MultipleDelegation_MultipleConnector_P_P_Signal_A->addOwnedConnector(MultipleDelegation_MultipleConnector_P_P_Signal_A_r4);
			// Operation A_A
			MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A->setName("A_A");
			MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A_result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_A);
				MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A->addOwnedParameter(MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A_result);
		MultipleDelegation_MultipleConnector_P_P_Signal_A->addOwnedOperation(MultipleDelegation_MultipleConnector_P_P_Signal_A_A_A);
	MultipleDelegation_MultipleConnector_P_P_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Signal_A);
		// Signal S
		MultipleDelegation_MultipleConnector_P_P_Signal_S->setThisSignalPtr(MultipleDelegation_MultipleConnector_P_P_Signal_S);
		MultipleDelegation_MultipleConnector_P_P_Signal_S->setName("S");
		MultipleDelegation_MultipleConnector_P_P_Signal_S->setVisibility(VisibilityKind::public_);
		
			// Property v
			MultipleDelegation_MultipleConnector_P_P_Signal_S_v->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_S_v);
			MultipleDelegation_MultipleConnector_P_P_Signal_S_v->setName("v");
			MultipleDelegation_MultipleConnector_P_P_Signal_S_v->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Signal_S_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		MultipleDelegation_MultipleConnector_P_P_Signal_S->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_P_Signal_S_v);
			// Property t
			MultipleDelegation_MultipleConnector_P_P_Signal_S_t->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_S_t);
			MultipleDelegation_MultipleConnector_P_P_Signal_S_t->setName("t");
			MultipleDelegation_MultipleConnector_P_P_Signal_S_t->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Signal_S_t->setType(MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester);
		MultipleDelegation_MultipleConnector_P_P_Signal_S->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_P_Signal_S_t);
	MultipleDelegation_MultipleConnector_P_P_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Signal_S);
		// Interface I
		MultipleDelegation_MultipleConnector_P_P_Signal_I->setThisInterfacePtr(MultipleDelegation_MultipleConnector_P_P_Signal_I);
		MultipleDelegation_MultipleConnector_P_P_Signal_I->setName("I");
		MultipleDelegation_MultipleConnector_P_P_Signal_I->setVisibility(VisibilityKind::public_);
			// Reception S
			MultipleDelegation_MultipleConnector_P_P_Signal_I_S->setThisBehavioralFeaturePtr(MultipleDelegation_MultipleConnector_P_P_Signal_I_S);
			MultipleDelegation_MultipleConnector_P_P_Signal_I_S->setName("S");
			MultipleDelegation_MultipleConnector_P_P_Signal_I_S->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Signal_I_S->setSignal(MultipleDelegation_MultipleConnector_P_P_Signal_S);
		MultipleDelegation_MultipleConnector_P_P_Signal_I->addOwnedReception(MultipleDelegation_MultipleConnector_P_P_Signal_I_S);
	MultipleDelegation_MultipleConnector_P_P_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Signal_I);
		// Class B
		MultipleDelegation_MultipleConnector_P_P_Signal_B->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_P_Signal_B);
		MultipleDelegation_MultipleConnector_P_P_Signal_B->setName("B");
		MultipleDelegation_MultipleConnector_P_P_Signal_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			MultipleDelegation_MultipleConnector_P_P_Signal_B_p->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_p);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_p->setName("p");
			MultipleDelegation_MultipleConnector_P_P_Signal_B_p->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_MultipleConnector_P_P_Signal_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		MultipleDelegation_MultipleConnector_P_P_Signal_B->addOwnedAttribute(MultipleDelegation_MultipleConnector_P_P_Signal_B_p);
		MultipleDelegation_MultipleConnector_P_P_Signal_B->setClassifierBehavior(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior);
			// Activity BClassifierBehavior
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->setThisActivityPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->setName("BClassifierBehavior");
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->setVisibility(VisibilityKind::public_);
				// AcceptEventAction Accept S
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S->setName("Accept S");
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S->setVisibility(VisibilityKind::public_);
					// OutputPin s
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s->setName("s");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s->setType(MultipleDelegation_MultipleConnector_P_P_Signal_S);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S->addResult(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s);
					// Trigger Trigger185
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger185->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger185);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger185->setName("Trigger185");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger185->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger185->setEvent(MultipleDelegation_MultipleConnector_P_P_Signal_SEvent);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S->addTrigger(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger185);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S);
				// AddStructuralFeatureValueAction Set this.p
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p->setName("Set this.p");
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Signal_B_p);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object->setName("object");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object->setType(MultipleDelegation_MultipleConnector_P_P_Signal_B);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p->setObject(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object);
					// InputPin value
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value->setName("value");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p->setValue(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_B);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p);
				// SendSignalAction Send Continue
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue->setName("Send Continue");
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue->setSignal(MultipleDelegation_MultipleConnector_P_P_Signal_Continue);
					// InputPin target
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target->setName("target");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target->setType(MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue);
				// ReadStructuralFeatureAction Read s.v
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v->setName("Read s.v");
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Signal_S_v);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object->setName("object");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v->setObject(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v);
				// ReadStructuralFeatureAction Read s.t
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t->setName("Read s.t");
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t->setStructuralFeature(MultipleDelegation_MultipleConnector_P_P_Signal_S_t);
					// InputPin object
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object->setName("object");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t->setObject(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t);
				// ReadSelfAction this
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this->setThisExecutableNodePtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this->setName("this");
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this_result);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this_result->setName("result");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_B);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this->setResult(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this_result);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this);
				// ForkNode Fork s
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Fork_s->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Fork_s->setName("Fork s");
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Fork_s->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Fork_s);
				// ObjectFlow ObjectFlow175 from result to target
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175->setName("ObjectFlow175");
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue_target);
					// LiteralBoolean LiteralBoolean176
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175_LiteralBoolean176->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175_LiteralBoolean176);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175_LiteralBoolean176->setName("LiteralBoolean176");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175_LiteralBoolean176->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175_LiteralBoolean176->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175_LiteralBoolean176);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow175);
				// ObjectFlow ObjectFlow197 from Fork s to object
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197->setName("ObjectFlow197");
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_t_object);
					// LiteralBoolean LiteralBoolean198
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197_LiteralBoolean198->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197_LiteralBoolean198);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197_LiteralBoolean198->setName("LiteralBoolean198");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197_LiteralBoolean198->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197_LiteralBoolean198->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197_LiteralBoolean198);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow197);
				// ObjectFlow ObjectFlow178 from result to value
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178->setName("ObjectFlow178");
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_value);
					// LiteralBoolean LiteralBoolean179
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178_LiteralBoolean179->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178_LiteralBoolean179);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178_LiteralBoolean179->setName("LiteralBoolean179");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178_LiteralBoolean179->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178_LiteralBoolean179->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178_LiteralBoolean179);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow178);
				// ObjectFlow ObjectFlow200 from result to object
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200->setName("ObjectFlow200");
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_this_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p_object);
					// LiteralBoolean LiteralBoolean201
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200_LiteralBoolean201->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200_LiteralBoolean201);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200_LiteralBoolean201->setName("LiteralBoolean201");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200_LiteralBoolean201->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200_LiteralBoolean201->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200_LiteralBoolean201);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow200);
				// ControlFlow ControlFlow181 from Set this.p to Send Continue
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow181->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow181);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow181->setName("ControlFlow181");
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow181->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow181->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Set_this_p);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow181->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Send_Continue);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ControlFlow181);
				// ObjectFlow ObjectFlow182 from s to Fork s
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182->setName("ObjectFlow182");
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Accept_S_s);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Fork_s);
					// LiteralBoolean LiteralBoolean184
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182_LiteralBoolean184->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182_LiteralBoolean184);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182_LiteralBoolean184->setName("LiteralBoolean184");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182_LiteralBoolean184->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182_LiteralBoolean184->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182_LiteralBoolean184);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow182);
				// ObjectFlow ObjectFlow213 from Fork s to object
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213->setThisActivityEdgePtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213->setName("ObjectFlow213");
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213->setSource(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213->setTarget(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_Read_s_v_object);
					// LiteralBoolean LiteralBoolean214
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213_LiteralBoolean214->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213_LiteralBoolean214);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213_LiteralBoolean214->setName("LiteralBoolean214");
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213_LiteralBoolean214->setVisibility(VisibilityKind::public_);
					MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213_LiteralBoolean214->setValue(true);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213->setGuard(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213_LiteralBoolean214);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior_ObjectFlow213);
		MultipleDelegation_MultipleConnector_P_P_Signal_B->addOwnedBehavior(MultipleDelegation_MultipleConnector_P_P_Signal_B_BClassifierBehavior);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_IRealization->setName("IRealization");
			MultipleDelegation_MultipleConnector_P_P_Signal_B_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_IRealization->setContract(MultipleDelegation_MultipleConnector_P_P_Signal_I);
			
		MultipleDelegation_MultipleConnector_P_P_Signal_B->addInterfaceRealization(MultipleDelegation_MultipleConnector_P_P_Signal_B_IRealization);
		
		MultipleDelegation_MultipleConnector_P_P_Signal_B->setIsActive(true);
			// Operation B_B
			MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B->setName("B_B");
			MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B_result->setThisElementPtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B_result);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B_result->setName("result");
				MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B_result->setType(MultipleDelegation_MultipleConnector_P_P_Signal_B);
				MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B->addOwnedParameter(MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B_result);
		MultipleDelegation_MultipleConnector_P_P_Signal_B->addOwnedOperation(MultipleDelegation_MultipleConnector_P_P_Signal_B_B_B);
			// Reception S
			MultipleDelegation_MultipleConnector_P_P_Signal_B_S->setThisBehavioralFeaturePtr(MultipleDelegation_MultipleConnector_P_P_Signal_B_S);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_S->setName("S");
			MultipleDelegation_MultipleConnector_P_P_Signal_B_S->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Signal_B_S->setSignal(MultipleDelegation_MultipleConnector_P_P_Signal_S);
		MultipleDelegation_MultipleConnector_P_P_Signal_B->addOwnedReception(MultipleDelegation_MultipleConnector_P_P_Signal_B_S);
	MultipleDelegation_MultipleConnector_P_P_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Signal_B);
		// Association R
		MultipleDelegation_MultipleConnector_P_P_Signal_R->setThisAssociationPtr(MultipleDelegation_MultipleConnector_P_P_Signal_R);
		MultipleDelegation_MultipleConnector_P_P_Signal_R->setName("R");
		MultipleDelegation_MultipleConnector_P_P_Signal_R->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_P_Signal_R->addOwnedEnd(MultipleDelegation_MultipleConnector_P_P_Signal_R_x);
		MultipleDelegation_MultipleConnector_P_P_Signal_R->addOwnedEnd(MultipleDelegation_MultipleConnector_P_P_Signal_R_y);
	MultipleDelegation_MultipleConnector_P_P_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Signal_R);
		// Class IImpl
		MultipleDelegation_MultipleConnector_P_P_Signal_IImpl->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_P_Signal_IImpl);
		MultipleDelegation_MultipleConnector_P_P_Signal_IImpl->setName("IImpl");
		MultipleDelegation_MultipleConnector_P_P_Signal_IImpl->setVisibility(VisibilityKind::public_);
		MultipleDelegation_MultipleConnector_P_P_Signal_IImpl_IRealization->setName("IRealization");
			MultipleDelegation_MultipleConnector_P_P_Signal_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Signal_IImpl_IRealization->setContract(MultipleDelegation_MultipleConnector_P_P_Signal_I);
			
		MultipleDelegation_MultipleConnector_P_P_Signal_IImpl->addInterfaceRealization(MultipleDelegation_MultipleConnector_P_P_Signal_IImpl_IRealization);
		
			// Reception S
			MultipleDelegation_MultipleConnector_P_P_Signal_IImpl_S->setThisBehavioralFeaturePtr(MultipleDelegation_MultipleConnector_P_P_Signal_IImpl_S);
			MultipleDelegation_MultipleConnector_P_P_Signal_IImpl_S->setName("S");
			MultipleDelegation_MultipleConnector_P_P_Signal_IImpl_S->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Signal_IImpl_S->setSignal(MultipleDelegation_MultipleConnector_P_P_Signal_S);
		MultipleDelegation_MultipleConnector_P_P_Signal_IImpl->addOwnedReception(MultipleDelegation_MultipleConnector_P_P_Signal_IImpl_S);
	MultipleDelegation_MultipleConnector_P_P_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Signal_IImpl);
		// Class AbstractTester
		MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester->setThisClass_Ptr(MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester);
		MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester->setName("AbstractTester");
		MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester->setVisibility(VisibilityKind::public_);
		
		MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester->setIsAbstract(true);
		
		
		MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester->setIsActive(true);
			// Operation test
			MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_test->setThisOperationPtr(MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_test);
			MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_test->setName("test");
			MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_test->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_test->setIsAbstract(true);
		MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester->addOwnedOperation(MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_test);
			// Reception Start
			MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Start->setThisBehavioralFeaturePtr(MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Start);
			MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Start->setName("Start");
			MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Start->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Start->setSignal(MultipleDelegation_MultipleConnector_P_P_Signal_Start);
		MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester->addOwnedReception(MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Start);
			// Reception Continue
			MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Continue->setThisBehavioralFeaturePtr(MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Continue);
			MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Continue->setName("Continue");
			MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Continue->setVisibility(VisibilityKind::public_);
			MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Continue->setSignal(MultipleDelegation_MultipleConnector_P_P_Signal_Continue);
		MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester->addOwnedReception(MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester_Continue);
	MultipleDelegation_MultipleConnector_P_P_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Signal_AbstractTester);
		// Signal Start
		MultipleDelegation_MultipleConnector_P_P_Signal_Start->setThisSignalPtr(MultipleDelegation_MultipleConnector_P_P_Signal_Start);
		MultipleDelegation_MultipleConnector_P_P_Signal_Start->setName("Start");
		MultipleDelegation_MultipleConnector_P_P_Signal_Start->setVisibility(VisibilityKind::public_);
	MultipleDelegation_MultipleConnector_P_P_Signal->addPackagedElement(MultipleDelegation_MultipleConnector_P_P_Signal_Start);
}
