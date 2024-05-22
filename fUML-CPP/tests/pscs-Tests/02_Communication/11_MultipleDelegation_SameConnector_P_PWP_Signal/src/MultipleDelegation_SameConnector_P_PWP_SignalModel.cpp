/*
 * MultipleDelegation_SameConnector_P_PWP_SignalModel.cpp
 * 
 * Auto-generated file
 */

#include "MultipleDelegation_SameConnector_P_PWP_SignalModel.h"

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
#include <uml/actions/ReadSelfAction.h>
#include <uml/classification/Operation.h>
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
#include <uml/structuredclassifiers/Association.h>
#include <uml/structuredclassifiers/Connector.h>
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

using namespace MultipleDelegation_SameConnector_P_PWP_Signal;
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

MultipleDelegation_SameConnector_P_PWP_SignalModel::MultipleDelegation_SameConnector_P_PWP_SignalModel()
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

MultipleDelegation_SameConnector_P_PWP_SignalModel::~MultipleDelegation_SameConnector_P_PWP_SignalModel()
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

const std::shared_ptr<MultipleDelegation_SameConnector_P_PWP_SignalModel>& MultipleDelegation_SameConnector_P_PWP_SignalModel::Instance()
{
	static std::shared_ptr<MultipleDelegation_SameConnector_P_PWP_SignalModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new MultipleDelegation_SameConnector_P_PWP_SignalModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void MultipleDelegation_SameConnector_P_PWP_SignalModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model MultipleDelegation_SameConnector_P_PWP_Signal
	 */
	MultipleDelegation_SameConnector_P_PWP_Signal.reset(new Package());
	this->addToElementRepository("MultipleDelegation_SameConnector_P_PWP_Signal", MultipleDelegation_SameConnector_P_PWP_Signal);
		MultipleDelegation_SameConnector_P_PWP_Signal_Tester.reset(new Class_());
		this->addToElementRepository("Tester", MultipleDelegation_SameConnector_P_PWP_Signal_Tester);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Generalization0.reset(new Generalization());
			this->addToElementRepository("Generalization0", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Generalization0);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity.reset(new Activity());
			this->addToElementRepository("testActivity", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow1", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean2", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1_LiteralInteger3.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger3", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1_LiteralInteger3);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow4", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4_LiteralBoolean5.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean5", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4_LiteralBoolean5);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4_LiteralInteger6.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger6", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4_LiteralInteger6);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read a.b", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object_LiteralInteger7.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger7", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object_LiteralInteger7);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object_LiteralUnlimitedNatural8.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural8", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object_LiteralUnlimitedNatural8);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result_LiteralInteger9.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger9", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result_LiteralInteger9);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result_LiteralUnlimitedNatural10.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural10", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result_LiteralUnlimitedNatural10);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP.reset(new OpaqueBehavior());
				this->addToElementRepository("testP", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP_p.reset(new Parameter());
					this->addToElementRepository("p", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP_p);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow11", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11_LiteralBoolean12.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean12", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11_LiteralBoolean12);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11_LiteralInteger13.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger13", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11_LiteralInteger13);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this_result_LiteralUnlimitedNatural14.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural14", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this_result_LiteralUnlimitedNatural14);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this_result_LiteralInteger15.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger15", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this_result_LiteralInteger15);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read this.c", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result_LiteralUnlimitedNatural16.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural16", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result_LiteralUnlimitedNatural16);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result_LiteralInteger17.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger17", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result_LiteralInteger17);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object_LiteralInteger18.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger18", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object_LiteralInteger18);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object_LiteralUnlimitedNatural19.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural19", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object_LiteralUnlimitedNatural19);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP.reset(new CallBehaviorAction());
				this->addToElementRepository("Call testP", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p.reset(new InputPin());
					this->addToElementRepository("p", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p_LiteralInteger20.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger20", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p_LiteralInteger20);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p_LiteralInteger21.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger21", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p_LiteralInteger21);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p_LiteralUnlimitedNatural22.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural22", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p_LiteralUnlimitedNatural22);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow23", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean24", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23_LiteralInteger25.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger25", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23_LiteralInteger25);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow26", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean27", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26_LiteralInteger28.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger28", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26_LiteralInteger28);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read b.p", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object_LiteralInteger29.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger29", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object_LiteralInteger29);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object_LiteralUnlimitedNatural30.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural30", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object_LiteralUnlimitedNatural30);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result_LiteralInteger31.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger31", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result_LiteralInteger31);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result_LiteralUnlimitedNatural32.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural32", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result_LiteralUnlimitedNatural32);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a_.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read c.a[]", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__result);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__result_LiteralInteger33.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger33", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__result_LiteralInteger33);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__result_LiteralUnlimitedNatural34.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural34", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__result_LiteralUnlimitedNatural34);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__object);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__object_LiteralUnlimitedNatural35.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural35", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__object_LiteralUnlimitedNatural35);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__object_LiteralInteger36.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger36", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__object_LiteralInteger36);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester.reset(new Operation());
			this->addToElementRepository("Tester_Tester", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior.reset(new Activity());
			this->addToElementRepository("TesterClassifierBehavior", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read c.p", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object_LiteralInteger37.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger37", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object_LiteralInteger37);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object_LiteralUnlimitedNatural38.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural38", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object_LiteralUnlimitedNatural38);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result_LiteralUnlimitedNatural39.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural39", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result_LiteralUnlimitedNatural39);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result_LiteralInteger40.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger40", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result_LiteralInteger40);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_3", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger41.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger41", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger41);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralUnlimitedNatural42.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural42", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralUnlimitedNatural42);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger43.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger43", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result_LiteralInteger43);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger44.reset(new Trigger());
					this->addToElementRepository("Trigger44", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger44);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow45", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45_LiteralBoolean46.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean46", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45_LiteralBoolean46);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45_LiteralInteger47);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow48.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow48", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow48);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Start", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger49.reset(new Trigger());
					this->addToElementRepository("Trigger49", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger49);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger50.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger50", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger50);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural51.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural51", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural51);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger52.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger52", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger52);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow53", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53_LiteralInteger54.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger54", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53_LiteralInteger54);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53_LiteralBoolean55.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean55", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53_LiteralBoolean55);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_4", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralUnlimitedNatural56.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural56", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralUnlimitedNatural56);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger57.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger57", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger57);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger58.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger58", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result_LiteralInteger58);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger59.reset(new Trigger());
					this->addToElementRepository("Trigger59", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger59);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4.reset(new ValueSpecificationAction());
				this->addToElementRepository("Value(4)", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger60.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger60", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralInteger60);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural61.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural61", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result_LiteralUnlimitedNatural61);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger62.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger62", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger62);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow63.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow63", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow63);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_.reset(new CallOperationAction());
				this->addToElementRepository("Call test()", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target.reset(new InputPin());
					this->addToElementRepository("target", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger64.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger64", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger64);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural65.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural65", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural65);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow66.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow66", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow66);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow67", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67_LiteralInteger68.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger68", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67_LiteralInteger68);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67_LiteralBoolean69.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean69", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67_LiteralBoolean69);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow70.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow70", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow70);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_1", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger71.reset(new Trigger());
					this->addToElementRepository("Trigger71", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger71);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralUnlimitedNatural72.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural72", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralUnlimitedNatural72);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger73.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger73", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger73);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger74.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger74", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result_LiteralInteger74);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this.reset(new ForkNode());
				this->addToElementRepository("Fork this", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow75.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow75", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow75);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read this.c", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result_LiteralUnlimitedNatural76.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural76", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result_LiteralUnlimitedNatural76);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result_LiteralInteger77.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger77", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result_LiteralInteger77);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object_LiteralUnlimitedNatural78.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural78", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object_LiteralUnlimitedNatural78);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object_LiteralInteger79.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger79", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object_LiteralInteger79);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S.reset(new SendSignalAction());
				this->addToElementRepository("Send S", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t.reset(new InputPin());
					this->addToElementRepository("t", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralInteger80.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger80", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralInteger80);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralUnlimitedNatural81.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural81", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t_LiteralUnlimitedNatural81);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target.reset(new InputPin());
					this->addToElementRepository("target", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural82.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural82", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralUnlimitedNatural82);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger83.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger83", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target_LiteralInteger83);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v.reset(new InputPin());
					this->addToElementRepository("v", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralInteger84.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger84", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralInteger84);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralUnlimitedNatural85.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural85", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v_LiteralUnlimitedNatural85);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow86", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86_LiteralInteger87.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger87", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86_LiteralInteger87);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86_LiteralBoolean88.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean88", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86_LiteralBoolean88);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow89", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89_LiteralBoolean90.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean90", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89_LiteralBoolean90);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89_LiteralInteger91.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger91", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89_LiteralInteger91);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue_2", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger92.reset(new Trigger());
					this->addToElementRepository("Trigger92", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger92);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralUnlimitedNatural93.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural93", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralUnlimitedNatural93);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger94.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger94", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger94);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger95.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger95", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result_LiteralInteger95);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result_LiteralInteger96.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger96", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result_LiteralInteger96);
						MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural97.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural97", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural97);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow98.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow98", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow98);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow99", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99_LiteralBoolean100.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean100", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99_LiteralBoolean100);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99_LiteralInteger101.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger101", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99_LiteralInteger101);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow102", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102_LiteralBoolean103.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean103", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102_LiteralBoolean103);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102_LiteralInteger104.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger104", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102_LiteralInteger104);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_test.reset(new Operation());
			this->addToElementRepository("test", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_test);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_c.reset(new Property());
			this->addToElementRepository("c", MultipleDelegation_SameConnector_P_PWP_Signal_Tester_c);
		MultipleDelegation_SameConnector_P_PWP_Signal_ContinueEvent.reset(new SignalEvent());
		this->addToElementRepository("ContinueEvent", MultipleDelegation_SameConnector_P_PWP_Signal_ContinueEvent);
		MultipleDelegation_SameConnector_P_PWP_Signal_StartEvent.reset(new SignalEvent());
		this->addToElementRepository("StartEvent", MultipleDelegation_SameConnector_P_PWP_Signal_StartEvent);
		MultipleDelegation_SameConnector_P_PWP_Signal_U.reset(new Association());
		this->addToElementRepository("U", MultipleDelegation_SameConnector_P_PWP_Signal_U);
			MultipleDelegation_SameConnector_P_PWP_Signal_U_x.reset(new Property());
			this->addToElementRepository("x", MultipleDelegation_SameConnector_P_PWP_Signal_U_x);
				MultipleDelegation_SameConnector_P_PWP_Signal_U_x_LiteralUnlimitedNatural105.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural105", MultipleDelegation_SameConnector_P_PWP_Signal_U_x_LiteralUnlimitedNatural105);
				MultipleDelegation_SameConnector_P_PWP_Signal_U_x_LiteralInteger106.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger106", MultipleDelegation_SameConnector_P_PWP_Signal_U_x_LiteralInteger106);
			MultipleDelegation_SameConnector_P_PWP_Signal_U_y.reset(new Property());
			this->addToElementRepository("y", MultipleDelegation_SameConnector_P_PWP_Signal_U_y);
				MultipleDelegation_SameConnector_P_PWP_Signal_U_y_LiteralInteger107.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger107", MultipleDelegation_SameConnector_P_PWP_Signal_U_y_LiteralInteger107);
				MultipleDelegation_SameConnector_P_PWP_Signal_U_y_LiteralUnlimitedNatural108.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural108", MultipleDelegation_SameConnector_P_PWP_Signal_U_y_LiteralUnlimitedNatural108);
		MultipleDelegation_SameConnector_P_PWP_Signal_C.reset(new Class_());
		this->addToElementRepository("C", MultipleDelegation_SameConnector_P_PWP_Signal_C);
			MultipleDelegation_SameConnector_P_PWP_Signal_C_u.reset(new Connector());
			this->addToElementRepository("u", MultipleDelegation_SameConnector_P_PWP_Signal_C_u);
				MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd109.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd109", MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd109);
					MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd109_LiteralInteger110.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger110", MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd109_LiteralInteger110);
					MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd109_LiteralUnlimitedNatural111.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural111", MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd109_LiteralUnlimitedNatural111);
				MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd112.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd112", MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd112);
					MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd112_LiteralUnlimitedNatural113.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural113", MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd112_LiteralUnlimitedNatural113);
			MultipleDelegation_SameConnector_P_PWP_Signal_C_a.reset(new Property());
			this->addToElementRepository("a", MultipleDelegation_SameConnector_P_PWP_Signal_C_a);
				MultipleDelegation_SameConnector_P_PWP_Signal_C_a_LiteralUnlimitedNatural114.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural114", MultipleDelegation_SameConnector_P_PWP_Signal_C_a_LiteralUnlimitedNatural114);
				MultipleDelegation_SameConnector_P_PWP_Signal_C_a_LiteralInteger115.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger115", MultipleDelegation_SameConnector_P_PWP_Signal_C_a_LiteralInteger115);
			MultipleDelegation_SameConnector_P_PWP_Signal_C_p.reset(new Port());
			this->addToElementRepository("p", MultipleDelegation_SameConnector_P_PWP_Signal_C_p);
		MultipleDelegation_SameConnector_P_PWP_Signal_I.reset(new Interface());
		this->addToElementRepository("I", MultipleDelegation_SameConnector_P_PWP_Signal_I);
			MultipleDelegation_SameConnector_P_PWP_Signal_I_S.reset(new Reception());
			this->addToElementRepository("S", MultipleDelegation_SameConnector_P_PWP_Signal_I_S);
		MultipleDelegation_SameConnector_P_PWP_Signal_B.reset(new Class_());
		this->addToElementRepository("B", MultipleDelegation_SameConnector_P_PWP_Signal_B);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior.reset(new Activity());
			this->addToElementRepository("BClassifierBehavior", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow116", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116_LiteralBoolean117.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean117", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116_LiteralBoolean117);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116_LiteralInteger118.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger118", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116_LiteralInteger118);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow119", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119_LiteralBoolean120.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean120", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119_LiteralBoolean120);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119_LiteralInteger121.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger121", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119_LiteralInteger121);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow122.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow122", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow122);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow123", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123_LiteralInteger124.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger124", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123_LiteralInteger124);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123_LiteralBoolean125.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean125", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123_LiteralBoolean125);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S.reset(new AcceptEventAction());
				this->addToElementRepository("Accept S", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger126.reset(new Trigger());
					this->addToElementRepository("Trigger126", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger126);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s.reset(new OutputPin());
					this->addToElementRepository("s", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s_LiteralUnlimitedNatural127.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural127", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s_LiteralUnlimitedNatural127);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger128.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger128", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger128);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger129.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger129", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s_LiteralInteger129);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural130.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural130", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural130);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralInteger131.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger131", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralInteger131);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralInteger132.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger132", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralInteger132);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural133.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural133", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural133);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralInteger134.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger134", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralInteger134);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural135.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural135", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural135);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue.reset(new SendSignalAction());
				this->addToElementRepository("Send Continue", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target.reset(new InputPin());
					this->addToElementRepository("target", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural136.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural136", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural136);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralInteger137.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger137", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralInteger137);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow138", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138_LiteralBoolean139.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean139", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138_LiteralBoolean139);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138_LiteralInteger140.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger140", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138_LiteralInteger140);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow141", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141_LiteralBoolean142.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean142", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141_LiteralBoolean142);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141_LiteralInteger143.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger143", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141_LiteralInteger143);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read s.v", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralInteger144.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger144", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralInteger144);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralUnlimitedNatural145.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural145", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralUnlimitedNatural145);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralInteger146.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger146", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralInteger146);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralUnlimitedNatural147.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural147", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralUnlimitedNatural147);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read s.t", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object.reset(new InputPin());
					this->addToElementRepository("object", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralInteger148.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger148", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralInteger148);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralUnlimitedNatural149.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural149", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralUnlimitedNatural149);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralUnlimitedNatural150.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural150", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralUnlimitedNatural150);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralInteger151.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger151", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralInteger151);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this_result);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this_result_LiteralUnlimitedNatural152.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural152", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this_result_LiteralUnlimitedNatural152);
						MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this_result_LiteralInteger153.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger153", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this_result_LiteralInteger153);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s.reset(new ForkNode());
				this->addToElementRepository("Fork s", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow154", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154_LiteralBoolean155.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean155", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154_LiteralBoolean155);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154_LiteralInteger156.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger156", MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154_LiteralInteger156);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_SameConnector_P_PWP_Signal_B_IRealization);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B.reset(new Operation());
			this->addToElementRepository("B_B", MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_p.reset(new Property());
			this->addToElementRepository("p", MultipleDelegation_SameConnector_P_PWP_Signal_B_p);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_S.reset(new Reception());
			this->addToElementRepository("S", MultipleDelegation_SameConnector_P_PWP_Signal_B_S);
		MultipleDelegation_SameConnector_P_PWP_Signal_Continue.reset(new Signal());
		this->addToElementRepository("Continue", MultipleDelegation_SameConnector_P_PWP_Signal_Continue);
		MultipleDelegation_SameConnector_P_PWP_Signal_A.reset(new Class_());
		this->addToElementRepository("A", MultipleDelegation_SameConnector_P_PWP_Signal_A);
			MultipleDelegation_SameConnector_P_PWP_Signal_A_q.reset(new Port());
			this->addToElementRepository("q", MultipleDelegation_SameConnector_P_PWP_Signal_A_q);
			MultipleDelegation_SameConnector_P_PWP_Signal_A_r.reset(new Connector());
			this->addToElementRepository("r", MultipleDelegation_SameConnector_P_PWP_Signal_A_r);
				MultipleDelegation_SameConnector_P_PWP_Signal_A_r_ConnectorEnd157.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd157", MultipleDelegation_SameConnector_P_PWP_Signal_A_r_ConnectorEnd157);
					MultipleDelegation_SameConnector_P_PWP_Signal_A_r_ConnectorEnd157_LiteralUnlimitedNatural158.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural158", MultipleDelegation_SameConnector_P_PWP_Signal_A_r_ConnectorEnd157_LiteralUnlimitedNatural158);
					MultipleDelegation_SameConnector_P_PWP_Signal_A_r_ConnectorEnd157_LiteralInteger159.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger159", MultipleDelegation_SameConnector_P_PWP_Signal_A_r_ConnectorEnd157_LiteralInteger159);
				MultipleDelegation_SameConnector_P_PWP_Signal_A_r_ConnectorEnd160.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd160", MultipleDelegation_SameConnector_P_PWP_Signal_A_r_ConnectorEnd160);
					MultipleDelegation_SameConnector_P_PWP_Signal_A_r_ConnectorEnd160_LiteralUnlimitedNatural161.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural161", MultipleDelegation_SameConnector_P_PWP_Signal_A_r_ConnectorEnd160_LiteralUnlimitedNatural161);
			MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A);
				MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_A_b.reset(new Property());
			this->addToElementRepository("b", MultipleDelegation_SameConnector_P_PWP_Signal_A_b);
				MultipleDelegation_SameConnector_P_PWP_Signal_A_b_LiteralInteger162.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger162", MultipleDelegation_SameConnector_P_PWP_Signal_A_b_LiteralInteger162);
				MultipleDelegation_SameConnector_P_PWP_Signal_A_b_LiteralUnlimitedNatural163.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural163", MultipleDelegation_SameConnector_P_PWP_Signal_A_b_LiteralUnlimitedNatural163);
		MultipleDelegation_SameConnector_P_PWP_Signal_R.reset(new Association());
		this->addToElementRepository("R", MultipleDelegation_SameConnector_P_PWP_Signal_R);
			MultipleDelegation_SameConnector_P_PWP_Signal_R_x.reset(new Property());
			this->addToElementRepository("x", MultipleDelegation_SameConnector_P_PWP_Signal_R_x);
				MultipleDelegation_SameConnector_P_PWP_Signal_R_x_LiteralUnlimitedNatural164.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural164", MultipleDelegation_SameConnector_P_PWP_Signal_R_x_LiteralUnlimitedNatural164);
				MultipleDelegation_SameConnector_P_PWP_Signal_R_x_LiteralInteger165.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger165", MultipleDelegation_SameConnector_P_PWP_Signal_R_x_LiteralInteger165);
			MultipleDelegation_SameConnector_P_PWP_Signal_R_y.reset(new Property());
			this->addToElementRepository("y", MultipleDelegation_SameConnector_P_PWP_Signal_R_y);
				MultipleDelegation_SameConnector_P_PWP_Signal_R_y_LiteralInteger166.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger166", MultipleDelegation_SameConnector_P_PWP_Signal_R_y_LiteralInteger166);
				MultipleDelegation_SameConnector_P_PWP_Signal_R_y_LiteralUnlimitedNatural167.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural167", MultipleDelegation_SameConnector_P_PWP_Signal_R_y_LiteralUnlimitedNatural167);
		MultipleDelegation_SameConnector_P_PWP_Signal_S.reset(new Signal());
		this->addToElementRepository("S", MultipleDelegation_SameConnector_P_PWP_Signal_S);
			MultipleDelegation_SameConnector_P_PWP_Signal_S_v.reset(new Property());
			this->addToElementRepository("v", MultipleDelegation_SameConnector_P_PWP_Signal_S_v);
			MultipleDelegation_SameConnector_P_PWP_Signal_S_t.reset(new Property());
			this->addToElementRepository("t", MultipleDelegation_SameConnector_P_PWP_Signal_S_t);
		MultipleDelegation_SameConnector_P_PWP_Signal_SEvent.reset(new SignalEvent());
		this->addToElementRepository("SEvent", MultipleDelegation_SameConnector_P_PWP_Signal_SEvent);
		MultipleDelegation_SameConnector_P_PWP_Signal_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", MultipleDelegation_SameConnector_P_PWP_Signal_IImpl);
			MultipleDelegation_SameConnector_P_PWP_Signal_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", MultipleDelegation_SameConnector_P_PWP_Signal_IImpl_IRealization);
			MultipleDelegation_SameConnector_P_PWP_Signal_IImpl_S.reset(new Reception());
			this->addToElementRepository("S", MultipleDelegation_SameConnector_P_PWP_Signal_IImpl_S);
		MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester.reset(new Class_());
		this->addToElementRepository("AbstractTester", MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester);
			MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Start.reset(new Reception());
			this->addToElementRepository("Start", MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Start);
			MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_test.reset(new Operation());
			this->addToElementRepository("test", MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_test);
			MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Continue.reset(new Reception());
			this->addToElementRepository("Continue", MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Continue);
		MultipleDelegation_SameConnector_P_PWP_Signal_main.reset(new Activity());
		this->addToElementRepository("main", MultipleDelegation_SameConnector_P_PWP_Signal_main);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow168", MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168_LiteralInteger169.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger169", MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168_LiteralInteger169);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168_LiteralBoolean170.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean170", MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168_LiteralBoolean170);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Fork_Tester.reset(new ForkNode());
			this->addToElementRepository("Fork Tester", MultipleDelegation_SameConnector_P_PWP_Signal_main_Fork_Tester);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow171", MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171_LiteralInteger172.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger172", MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171_LiteralInteger172);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171_LiteralBoolean173.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean173", MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171_LiteralBoolean173);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester_.reset(new CallOperationAction());
			this->addToElementRepository("Tester()", MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester_);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__target);
					MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__target_LiteralInteger174.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger174", MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__target_LiteralInteger174);
					MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__target_LiteralUnlimitedNatural175.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural175", MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__target_LiteralUnlimitedNatural175);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__result);
					MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__result_LiteralInteger176.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger176", MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__result_LiteralInteger176);
					MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__result_LiteralInteger177.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger177", MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__result_LiteralInteger177);
					MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__result_LiteralUnlimitedNatural178.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural178", MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__result_LiteralUnlimitedNatural178);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester.reset(new StartObjectBehaviorAction());
			this->addToElementRepository("Start Tester", MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester_object.reset(new InputPin());
				this->addToElementRepository("object", MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester_object);
					MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester_object_LiteralUnlimitedNatural179.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural179", MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester_object_LiteralUnlimitedNatural179);
					MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester_object_LiteralInteger180.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger180", MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester_object_LiteralInteger180);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow181", MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181_LiteralBoolean182.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean182", MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181_LiteralBoolean182);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181_LiteralInteger183.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger183", MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181_LiteralInteger183);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester.reset(new CreateObjectAction());
			this->addToElementRepository("Create Tester", MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester_result.reset(new OutputPin());
				this->addToElementRepository("result", MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester_result_LiteralInteger184.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger184", MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester_result_LiteralInteger184);
					MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester_result_LiteralUnlimitedNatural185.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural185", MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester_result_LiteralUnlimitedNatural185);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start.reset(new SendSignalAction());
			this->addToElementRepository("Send Start", MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start_target.reset(new InputPin());
				this->addToElementRepository("target", MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start_target);
					MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start_target_LiteralInteger186.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger186", MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start_target_LiteralInteger186);
					MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start_target_LiteralUnlimitedNatural187.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural187", MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start_target_LiteralUnlimitedNatural187);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow188", MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188_LiteralInteger189.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger189", MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188_LiteralInteger189);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188_LiteralBoolean190.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean190", MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188_LiteralBoolean190);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ControlFlow191.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow191", MultipleDelegation_SameConnector_P_PWP_Signal_main_ControlFlow191);
		MultipleDelegation_SameConnector_P_PWP_Signal_Start.reset(new Signal());
		this->addToElementRepository("Start", MultipleDelegation_SameConnector_P_PWP_Signal_Start);

	// Initialize public members
	/*
	 * Model MultipleDelegation_SameConnector_P_PWP_Signal
	 */
	MultipleDelegation_SameConnector_P_PWP_Signal->setThisPackagePtr(MultipleDelegation_SameConnector_P_PWP_Signal);
	MultipleDelegation_SameConnector_P_PWP_Signal->setName("MultipleDelegation_SameConnector_P_PWP_Signal");
	MultipleDelegation_SameConnector_P_PWP_Signal->setVisibility(VisibilityKind::public_);
		// Class Tester
		MultipleDelegation_SameConnector_P_PWP_Signal_Tester->setThisClass_Ptr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester);
		MultipleDelegation_SameConnector_P_PWP_Signal_Tester->setName("Tester");
		MultipleDelegation_SameConnector_P_PWP_Signal_Tester->setVisibility(VisibilityKind::public_);
		
			// Generalization to AbstractTester
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Generalization0->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Generalization0);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Generalization0->setGeneral(MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester);
		MultipleDelegation_SameConnector_P_PWP_Signal_Tester->addGeneralization(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Generalization0);
			// Property c
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_c->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_c);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_c->setName("c");
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_c->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_c->setType(MultipleDelegation_SameConnector_P_PWP_Signal_C);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_c->setAggregation(AggregationKind::composite);
		MultipleDelegation_SameConnector_P_PWP_Signal_Tester->addOwnedAttribute(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_c);
		MultipleDelegation_SameConnector_P_PWP_Signal_Tester->setClassifierBehavior(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior);
			// Activity testActivity
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity->setThisActivityPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity->setName("testActivity");
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity->setVisibility(VisibilityKind::public_);
			// FunctionBehavior testP
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP->setThisClass_Ptr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP->setName("testP");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP->setVisibility(VisibilityKind::public_);
				
					// Parameter p
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP_p->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP_p);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP_p->setName("p");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP_p->setVisibility(VisibilityKind::public_);
					
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP->addOwnedParameter(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP_p);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP->addLanguage("C++");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP->addLanguage("Include");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	static unsigned int index = 1; 	static const unsigned int MAX_INDEX = 4; 	static bool success = true;  	if(index == 1) 	{ 		std::cout<<\"Asserting c.a[1].b.p == 4 && c.a[2].b.p == 4 && c.a[3].b.p == 4 && c.a[4].b.p == 4\"<<std::endl; 	}  	// Test parameter p 	int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 	std::cout << \"c.a[\" << index << \"].b.p == \" << std::to_string(p) <<std::endl; 	success = success && (p == 4);  	if(index == MAX_INDEX) 	{ 		std::cout<<\"Signal delegated on all links (shall be true for default strategy): \";  		if(success) 		{ 			std::cout<<ASCII_GRN << \"Assertion successful.\" << ASCII_BLK << std::endl; 		} 		else 		{ 			std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 		} 	}  	index++;");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity->addOwnedBehavior(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP);
				// ReadStructuralFeatureAction Read a.b
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b->setName("Read a.b");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b->setStructuralFeature(MultipleDelegation_SameConnector_P_PWP_Signal_A_b);
					// InputPin object
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object->setName("object");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object->setType(MultipleDelegation_SameConnector_P_PWP_Signal_A);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b->setObject(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_B);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result->setUpper(4);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result->setLower(4);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b->setResult(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b);
				// ReadSelfAction this
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this->setName("this");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_Tester);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this->setResult(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this);
				// ReadStructuralFeatureAction Read this.c
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c->setName("Read this.c");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c->setStructuralFeature(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_c);
					// InputPin object
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object->setName("object");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object->setType(MultipleDelegation_SameConnector_P_PWP_Signal_Tester);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c->setObject(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_C);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c->setResult(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c);
				// CallBehaviorAction Call testP
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP->setName("Call testP");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP->setBehavior(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_testP);
					// InputPin p
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p->setName("p");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP->addArgument(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP);
				// ReadStructuralFeatureAction Read b.p
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p->setName("Read b.p");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p->setStructuralFeature(MultipleDelegation_SameConnector_P_PWP_Signal_B_p);
					// InputPin object
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object->setName("object");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object->setType(MultipleDelegation_SameConnector_P_PWP_Signal_B);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p->setObject(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p->setResult(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p);
				// ReadStructuralFeatureAction Read c.a[]
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a_->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a_);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a_->setName("Read c.a[]");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a_->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a_->setStructuralFeature(MultipleDelegation_SameConnector_P_PWP_Signal_C_a);
					// InputPin object
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__object->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__object);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__object->setName("object");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__object->setType(MultipleDelegation_SameConnector_P_PWP_Signal_C);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a_->setObject(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__object);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__result);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_A);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__result->setUpper(4);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__result->setLower(4);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a_->setResult(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__result);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a_);
				// ObjectFlow ObjectFlow4 from result to object
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4->setName("ObjectFlow4");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_result);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_object);
					// LiteralBoolean LiteralBoolean5
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4_LiteralBoolean5->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4_LiteralBoolean5);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4_LiteralBoolean5->setName("LiteralBoolean5");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4_LiteralBoolean5->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4_LiteralBoolean5->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4_LiteralBoolean5);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow4);
				// ObjectFlow ObjectFlow1 from result to object
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1->setName("ObjectFlow1");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__result);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_a_b_object);
					// LiteralBoolean LiteralBoolean2
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2->setName("LiteralBoolean2");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1_LiteralBoolean2);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow1);
				// ObjectFlow ObjectFlow11 from result to p
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11->setName("ObjectFlow11");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_b_p_result);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Call_testP_p);
					// LiteralBoolean LiteralBoolean12
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11_LiteralBoolean12->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11_LiteralBoolean12);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11_LiteralBoolean12->setName("LiteralBoolean12");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11_LiteralBoolean12->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11_LiteralBoolean12->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11_LiteralBoolean12);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow11);
				// ObjectFlow ObjectFlow23 from result to object
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23->setName("ObjectFlow23");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_this_result);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_object);
					// LiteralBoolean LiteralBoolean24
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24->setName("LiteralBoolean24");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23_LiteralBoolean24);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow23);
				// ObjectFlow ObjectFlow26 from result to object
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26->setName("ObjectFlow26");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_this_c_result);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_Read_c_a__object);
					// LiteralBoolean LiteralBoolean27
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27->setName("LiteralBoolean27");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26_LiteralBoolean27);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity_ObjectFlow26);
		MultipleDelegation_SameConnector_P_PWP_Signal_Tester->addOwnedBehavior(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity);
			// Activity TesterClassifierBehavior
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->setThisActivityPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->setName("TesterClassifierBehavior");
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->setVisibility(VisibilityKind::public_);
				// ForkNode Fork this
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this->setName("Fork this");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this);
				// ReadStructuralFeatureAction Read c.p
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p->setName("Read c.p");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p->setStructuralFeature(MultipleDelegation_SameConnector_P_PWP_Signal_C_p);
					// InputPin object
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object->setName("object");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object->setType(MultipleDelegation_SameConnector_P_PWP_Signal_C);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p->setObject(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_IImpl);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p->setResult(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p);
				// AcceptEventAction Accept Continue_3
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->setName("Accept Continue_3");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_Continue);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->addResult(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_result);
					// Trigger Trigger44
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger44->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger44);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger44->setName("Trigger44");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger44->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger44->setEvent(MultipleDelegation_SameConnector_P_PWP_Signal_ContinueEvent);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3->addTrigger(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3_Trigger44);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
				// ReadStructuralFeatureAction Read this.c
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c->setName("Read this.c");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c->setStructuralFeature(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_c);
					// InputPin object
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object->setName("object");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object->setType(MultipleDelegation_SameConnector_P_PWP_Signal_Tester);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c->setObject(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_C);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c->setResult(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c);
				// SendSignalAction Send S
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S->setName("Send S");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S->setSignal(MultipleDelegation_SameConnector_P_PWP_Signal_S);
					// InputPin target
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target->setName("target");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target->setType(MultipleDelegation_SameConnector_P_PWP_Signal_IImpl);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target);
					// InputPin v
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v->setName("v");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S->addArgument(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v);
					// InputPin t
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t->setName("t");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t->setType(MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S->addArgument(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S);
				// AcceptEventAction Accept Continue_2
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->setName("Accept Continue_2");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_Continue);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->addResult(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_result);
					// Trigger Trigger92
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger92->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger92);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger92->setName("Trigger92");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger92->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger92->setEvent(MultipleDelegation_SameConnector_P_PWP_Signal_ContinueEvent);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2->addTrigger(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2_Trigger92);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
				// AcceptEventAction Accept Start
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start->setName("Accept Start");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_Start);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start->addResult(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
					// Trigger Trigger49
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger49->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger49);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger49->setName("Trigger49");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger49->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger49->setEvent(MultipleDelegation_SameConnector_P_PWP_Signal_StartEvent);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start->addTrigger(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger49);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				// ReadSelfAction this
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this->setName("this");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_Tester);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this->setResult(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this);
				// AcceptEventAction Accept Continue_4
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->setName("Accept Continue_4");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_Continue);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->addResult(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_result);
					// Trigger Trigger59
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger59->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger59);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger59->setName("Trigger59");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger59->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger59->setEvent(MultipleDelegation_SameConnector_P_PWP_Signal_ContinueEvent);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4->addTrigger(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4_Trigger59);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
				// ValueSpecificationAction Value(4)
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4->setName("Value(4)");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger62
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger62->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger62);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger62->setName("LiteralInteger62");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger62->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger62->setValue(4);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4->setValue(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_LiteralInteger62);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4->setResult(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4);
				// CallOperationAction Call test()
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_->setName("Call test()");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_->setOperation(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_test);
					// InputPin target
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target->setName("target");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target->setType(MultipleDelegation_SameConnector_P_PWP_Signal_Tester);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_);
				// AcceptEventAction Accept Continue_1
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->setName("Accept Continue_1");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_Continue);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->addResult(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_result);
					// Trigger Trigger71
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger71->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger71);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger71->setName("Trigger71");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger71->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger71->setEvent(MultipleDelegation_SameConnector_P_PWP_Signal_ContinueEvent);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1->addTrigger(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1_Trigger71);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
				// ControlFlow ControlFlow75 from Send S to Accept Continue_1
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow75->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow75);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow75->setName("ControlFlow75");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow75->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow75->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow75->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow75);
				// ObjectFlow ObjectFlow86 from Fork this to t
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86->setName("ObjectFlow86");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_t);
					// LiteralBoolean LiteralBoolean88
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86_LiteralBoolean88->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86_LiteralBoolean88);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86_LiteralBoolean88->setName("LiteralBoolean88");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86_LiteralBoolean88->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86_LiteralBoolean88->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86_LiteralBoolean88);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow86);
				// ObjectFlow ObjectFlow89 from result to object
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89->setName("ObjectFlow89");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_result);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_object);
					// LiteralBoolean LiteralBoolean90
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89_LiteralBoolean90->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89_LiteralBoolean90);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89_LiteralBoolean90->setName("LiteralBoolean90");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89_LiteralBoolean90->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89_LiteralBoolean90->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89_LiteralBoolean90);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow89);
				// ObjectFlow ObjectFlow45 from result to v
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45->setName("ObjectFlow45");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Value_4_result);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_v);
					// LiteralBoolean LiteralBoolean46
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45_LiteralBoolean46->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45_LiteralBoolean46);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45_LiteralBoolean46->setName("LiteralBoolean46");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45_LiteralBoolean46->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45_LiteralBoolean46->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45_LiteralBoolean46);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow45);
				// ControlFlow ControlFlow48 from Accept Continue_3 to Accept Continue_4
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow48->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow48);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow48->setName("ControlFlow48");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow48->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow48->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow48->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow48);
				// ObjectFlow ObjectFlow53 from Fork this to object
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53->setName("ObjectFlow53");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_this_c_object);
					// LiteralBoolean LiteralBoolean55
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53_LiteralBoolean55->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53_LiteralBoolean55);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53_LiteralBoolean55->setName("LiteralBoolean55");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53_LiteralBoolean55->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53_LiteralBoolean55->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53_LiteralBoolean55);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow53);
				// ControlFlow ControlFlow98 from Accept Continue_2 to Accept Continue_3
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow98->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow98);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow98->setName("ControlFlow98");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow98->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow98->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow98->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_3);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow98);
				// ObjectFlow ObjectFlow99 from result to Fork this
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99->setName("ObjectFlow99");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this_result);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this);
					// LiteralBoolean LiteralBoolean100
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99_LiteralBoolean100->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99_LiteralBoolean100);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99_LiteralBoolean100->setName("LiteralBoolean100");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99_LiteralBoolean100->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99_LiteralBoolean100->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99_LiteralBoolean100);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow99);
				// ControlFlow ControlFlow63 from Accept Start to this
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow63->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow63);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow63->setName("ControlFlow63");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow63->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow63->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow63->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_this);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow63);
				// ObjectFlow ObjectFlow102 from result to target
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102->setName("ObjectFlow102");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Read_c_p_result);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Send_S_target);
					// LiteralBoolean LiteralBoolean103
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102_LiteralBoolean103->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102_LiteralBoolean103);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102_LiteralBoolean103->setName("LiteralBoolean103");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102_LiteralBoolean103->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102_LiteralBoolean103->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102_LiteralBoolean103);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow102);
				// ControlFlow ControlFlow66 from Accept Continue_4 to Call test()
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow66->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow66);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow66->setName("ControlFlow66");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow66->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow66->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_4);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow66->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test_);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow66);
				// ObjectFlow ObjectFlow67 from Fork this to target
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67->setName("ObjectFlow67");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Fork_this);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Call_test__target);
					// LiteralBoolean LiteralBoolean69
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67_LiteralBoolean69->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67_LiteralBoolean69);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67_LiteralBoolean69->setName("LiteralBoolean69");
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67_LiteralBoolean69->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67_LiteralBoolean69->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67_LiteralBoolean69);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ObjectFlow67);
				// ControlFlow ControlFlow70 from Accept Continue_1 to Accept Continue_2
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow70->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow70);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow70->setName("ControlFlow70");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow70->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow70->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_1);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow70->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_Accept_Continue_2);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior_ControlFlow70);
		MultipleDelegation_SameConnector_P_PWP_Signal_Tester->addOwnedBehavior(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_TesterClassifierBehavior);
		
		MultipleDelegation_SameConnector_P_PWP_Signal_Tester->setIsActive(true);
			// Operation Tester_Tester
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester->setThisOperationPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester->setName("Tester_Tester");
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester_result);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester_result->setName("result");
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_Tester);
				MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester->addOwnedParameter(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester_result);
		MultipleDelegation_SameConnector_P_PWP_Signal_Tester->addOwnedOperation(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester);
			// Operation test
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_test->setThisOperationPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_test);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_test->setName("test");
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_test->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Signal_Tester_test->addMethod(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_testActivity);
		MultipleDelegation_SameConnector_P_PWP_Signal_Tester->addOwnedOperation(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_test);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_Tester);
		// SignalEvent ContinueEvent
		MultipleDelegation_SameConnector_P_PWP_Signal_ContinueEvent->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_ContinueEvent);
		MultipleDelegation_SameConnector_P_PWP_Signal_ContinueEvent->setName("ContinueEvent");
		MultipleDelegation_SameConnector_P_PWP_Signal_ContinueEvent->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_PWP_Signal_ContinueEvent->setSignal(MultipleDelegation_SameConnector_P_PWP_Signal_Continue);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_ContinueEvent);
		// SignalEvent StartEvent
		MultipleDelegation_SameConnector_P_PWP_Signal_StartEvent->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_StartEvent);
		MultipleDelegation_SameConnector_P_PWP_Signal_StartEvent->setName("StartEvent");
		MultipleDelegation_SameConnector_P_PWP_Signal_StartEvent->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_PWP_Signal_StartEvent->setSignal(MultipleDelegation_SameConnector_P_PWP_Signal_Start);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_StartEvent);
		// Association U
		MultipleDelegation_SameConnector_P_PWP_Signal_U->setThisAssociationPtr(MultipleDelegation_SameConnector_P_PWP_Signal_U);
		MultipleDelegation_SameConnector_P_PWP_Signal_U->setName("U");
		MultipleDelegation_SameConnector_P_PWP_Signal_U->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_PWP_Signal_U->addOwnedEnd(MultipleDelegation_SameConnector_P_PWP_Signal_U_x);
		MultipleDelegation_SameConnector_P_PWP_Signal_U->addOwnedEnd(MultipleDelegation_SameConnector_P_PWP_Signal_U_y);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_U);
		// Class C
		MultipleDelegation_SameConnector_P_PWP_Signal_C->setThisClass_Ptr(MultipleDelegation_SameConnector_P_PWP_Signal_C);
		MultipleDelegation_SameConnector_P_PWP_Signal_C->setName("C");
		MultipleDelegation_SameConnector_P_PWP_Signal_C->setVisibility(VisibilityKind::public_);
		
			// Port p
			MultipleDelegation_SameConnector_P_PWP_Signal_C_p->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_C_p);
			MultipleDelegation_SameConnector_P_PWP_Signal_C_p->setName("p");
			MultipleDelegation_SameConnector_P_PWP_Signal_C_p->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Signal_C_p->setType(MultipleDelegation_SameConnector_P_PWP_Signal_IImpl);
			MultipleDelegation_SameConnector_P_PWP_Signal_C_p->setAggregation(AggregationKind::composite);
			MultipleDelegation_SameConnector_P_PWP_Signal_C_p->isService = true;
			MultipleDelegation_SameConnector_P_PWP_Signal_C_p->addProvided(MultipleDelegation_SameConnector_P_PWP_Signal_I);
		MultipleDelegation_SameConnector_P_PWP_Signal_C->addOwnedAttribute(MultipleDelegation_SameConnector_P_PWP_Signal_C_p);
			// Property a
			MultipleDelegation_SameConnector_P_PWP_Signal_C_a->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_C_a);
			MultipleDelegation_SameConnector_P_PWP_Signal_C_a->setName("a");
			MultipleDelegation_SameConnector_P_PWP_Signal_C_a->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Signal_C_a->setUpper(4);
			MultipleDelegation_SameConnector_P_PWP_Signal_C_a->setLower(4);
			MultipleDelegation_SameConnector_P_PWP_Signal_C_a->setType(MultipleDelegation_SameConnector_P_PWP_Signal_A);
			MultipleDelegation_SameConnector_P_PWP_Signal_C_a->setAggregation(AggregationKind::composite);
		MultipleDelegation_SameConnector_P_PWP_Signal_C->addOwnedAttribute(MultipleDelegation_SameConnector_P_PWP_Signal_C_a);
		
		MultipleDelegation_SameConnector_P_PWP_Signal_C_u->setName("u");
			MultipleDelegation_SameConnector_P_PWP_Signal_C_u->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd112->setUpper(-1);
				MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd112->setRole(MultipleDelegation_SameConnector_P_PWP_Signal_C_p);
				
			MultipleDelegation_SameConnector_P_PWP_Signal_C_u->addEnd(MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd112);
				MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd109->setUpper(-1);
				MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd109->setLower(4);
				MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd109->setRole(MultipleDelegation_SameConnector_P_PWP_Signal_A_q);
				MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd109->setPartWithPort(MultipleDelegation_SameConnector_P_PWP_Signal_C_a);
				
			MultipleDelegation_SameConnector_P_PWP_Signal_C_u->addEnd(MultipleDelegation_SameConnector_P_PWP_Signal_C_u_ConnectorEnd109);
			MultipleDelegation_SameConnector_P_PWP_Signal_C_u->setType(MultipleDelegation_SameConnector_P_PWP_Signal_U);
		MultipleDelegation_SameConnector_P_PWP_Signal_C->addOwnedConnector(MultipleDelegation_SameConnector_P_PWP_Signal_C_u);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_C);
		// Interface I
		MultipleDelegation_SameConnector_P_PWP_Signal_I->setThisInterfacePtr(MultipleDelegation_SameConnector_P_PWP_Signal_I);
		MultipleDelegation_SameConnector_P_PWP_Signal_I->setName("I");
		MultipleDelegation_SameConnector_P_PWP_Signal_I->setVisibility(VisibilityKind::public_);
			// Reception S
			MultipleDelegation_SameConnector_P_PWP_Signal_I_S->setThisBehavioralFeaturePtr(MultipleDelegation_SameConnector_P_PWP_Signal_I_S);
			MultipleDelegation_SameConnector_P_PWP_Signal_I_S->setName("S");
			MultipleDelegation_SameConnector_P_PWP_Signal_I_S->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Signal_I_S->setSignal(MultipleDelegation_SameConnector_P_PWP_Signal_S);
		MultipleDelegation_SameConnector_P_PWP_Signal_I->addOwnedReception(MultipleDelegation_SameConnector_P_PWP_Signal_I_S);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_I);
		// Class B
		MultipleDelegation_SameConnector_P_PWP_Signal_B->setThisClass_Ptr(MultipleDelegation_SameConnector_P_PWP_Signal_B);
		MultipleDelegation_SameConnector_P_PWP_Signal_B->setName("B");
		MultipleDelegation_SameConnector_P_PWP_Signal_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			MultipleDelegation_SameConnector_P_PWP_Signal_B_p->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_p);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_p->setName("p");
			MultipleDelegation_SameConnector_P_PWP_Signal_B_p->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Signal_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		MultipleDelegation_SameConnector_P_PWP_Signal_B->addOwnedAttribute(MultipleDelegation_SameConnector_P_PWP_Signal_B_p);
		MultipleDelegation_SameConnector_P_PWP_Signal_B->setClassifierBehavior(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior);
			// Activity BClassifierBehavior
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->setThisActivityPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->setName("BClassifierBehavior");
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->setVisibility(VisibilityKind::public_);
				// AcceptEventAction Accept S
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S->setName("Accept S");
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S->setVisibility(VisibilityKind::public_);
					// OutputPin s
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s->setName("s");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s->setType(MultipleDelegation_SameConnector_P_PWP_Signal_S);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S->addResult(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s);
					// Trigger Trigger126
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger126->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger126);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger126->setName("Trigger126");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger126->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger126->setEvent(MultipleDelegation_SameConnector_P_PWP_Signal_SEvent);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S->addTrigger(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_Trigger126);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S);
				// AddStructuralFeatureValueAction Set this.p
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p->setName("Set this.p");
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p->setStructuralFeature(MultipleDelegation_SameConnector_P_PWP_Signal_B_p);
					// InputPin object
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object->setName("object");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object->setType(MultipleDelegation_SameConnector_P_PWP_Signal_B);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p->setObject(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object);
					// InputPin value
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value->setName("value");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p->setValue(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_B);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p->setResult(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p);
				// SendSignalAction Send Continue
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue->setName("Send Continue");
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue->setSignal(MultipleDelegation_SameConnector_P_PWP_Signal_Continue);
					// InputPin target
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target->setName("target");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target->setType(MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue);
				// ReadStructuralFeatureAction Read s.v
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v->setName("Read s.v");
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v->setStructuralFeature(MultipleDelegation_SameConnector_P_PWP_Signal_S_v);
					// InputPin object
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object->setName("object");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v->setObject(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v->setResult(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v);
				// ReadStructuralFeatureAction Read s.t
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t->setName("Read s.t");
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t->setStructuralFeature(MultipleDelegation_SameConnector_P_PWP_Signal_S_t);
					// InputPin object
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object->setName("object");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t->setObject(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t->setResult(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t);
				// ReadSelfAction this
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this->setName("this");
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this_result);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this_result->setName("result");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_B);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this->setResult(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this);
				// ForkNode Fork s
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s->setName("Fork s");
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s);
				// ObjectFlow ObjectFlow116 from result to target
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116->setName("ObjectFlow116");
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_result);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue_target);
					// LiteralBoolean LiteralBoolean117
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116_LiteralBoolean117->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116_LiteralBoolean117);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116_LiteralBoolean117->setName("LiteralBoolean117");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116_LiteralBoolean117->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116_LiteralBoolean117->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116_LiteralBoolean117);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow116);
				// ObjectFlow ObjectFlow138 from Fork s to object
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138->setName("ObjectFlow138");
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_t_object);
					// LiteralBoolean LiteralBoolean139
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138_LiteralBoolean139->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138_LiteralBoolean139);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138_LiteralBoolean139->setName("LiteralBoolean139");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138_LiteralBoolean139->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138_LiteralBoolean139->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138_LiteralBoolean139);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow138);
				// ObjectFlow ObjectFlow119 from result to value
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119->setName("ObjectFlow119");
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_result);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_value);
					// LiteralBoolean LiteralBoolean120
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119_LiteralBoolean120->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119_LiteralBoolean120);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119_LiteralBoolean120->setName("LiteralBoolean120");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119_LiteralBoolean120->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119_LiteralBoolean120->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119_LiteralBoolean120);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow119);
				// ObjectFlow ObjectFlow141 from result to object
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141->setName("ObjectFlow141");
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_this_result);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p_object);
					// LiteralBoolean LiteralBoolean142
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141_LiteralBoolean142->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141_LiteralBoolean142);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141_LiteralBoolean142->setName("LiteralBoolean142");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141_LiteralBoolean142->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141_LiteralBoolean142->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141_LiteralBoolean142);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow141);
				// ControlFlow ControlFlow122 from Set this.p to Send Continue
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow122->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow122);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow122->setName("ControlFlow122");
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow122->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow122->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Set_this_p);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow122->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Send_Continue);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ControlFlow122);
				// ObjectFlow ObjectFlow123 from s to Fork s
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123->setName("ObjectFlow123");
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Accept_S_s);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s);
					// LiteralBoolean LiteralBoolean125
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123_LiteralBoolean125->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123_LiteralBoolean125);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123_LiteralBoolean125->setName("LiteralBoolean125");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123_LiteralBoolean125->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123_LiteralBoolean125->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123_LiteralBoolean125);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow123);
				// ObjectFlow ObjectFlow154 from Fork s to object
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154->setName("ObjectFlow154");
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Fork_s);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_Read_s_v_object);
					// LiteralBoolean LiteralBoolean155
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154_LiteralBoolean155->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154_LiteralBoolean155);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154_LiteralBoolean155->setName("LiteralBoolean155");
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154_LiteralBoolean155->setVisibility(VisibilityKind::public_);
					MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154_LiteralBoolean155->setValue(true);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154_LiteralBoolean155);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior_ObjectFlow154);
		MultipleDelegation_SameConnector_P_PWP_Signal_B->addOwnedBehavior(MultipleDelegation_SameConnector_P_PWP_Signal_B_BClassifierBehavior);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_IRealization->setName("IRealization");
			MultipleDelegation_SameConnector_P_PWP_Signal_B_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_IRealization->setContract(MultipleDelegation_SameConnector_P_PWP_Signal_I);
			
		MultipleDelegation_SameConnector_P_PWP_Signal_B->addInterfaceRealization(MultipleDelegation_SameConnector_P_PWP_Signal_B_IRealization);
		
		MultipleDelegation_SameConnector_P_PWP_Signal_B->setIsActive(true);
			// Operation B_B
			MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B->setThisOperationPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B->setName("B_B");
			MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B_result);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B_result->setName("result");
				MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_B);
				MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B->addOwnedParameter(MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B_result);
		MultipleDelegation_SameConnector_P_PWP_Signal_B->addOwnedOperation(MultipleDelegation_SameConnector_P_PWP_Signal_B_B_B);
			// Reception S
			MultipleDelegation_SameConnector_P_PWP_Signal_B_S->setThisBehavioralFeaturePtr(MultipleDelegation_SameConnector_P_PWP_Signal_B_S);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_S->setName("S");
			MultipleDelegation_SameConnector_P_PWP_Signal_B_S->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Signal_B_S->setSignal(MultipleDelegation_SameConnector_P_PWP_Signal_S);
		MultipleDelegation_SameConnector_P_PWP_Signal_B->addOwnedReception(MultipleDelegation_SameConnector_P_PWP_Signal_B_S);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_B);
		// Signal Continue
		MultipleDelegation_SameConnector_P_PWP_Signal_Continue->setThisSignalPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Continue);
		MultipleDelegation_SameConnector_P_PWP_Signal_Continue->setName("Continue");
		MultipleDelegation_SameConnector_P_PWP_Signal_Continue->setVisibility(VisibilityKind::public_);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_Continue);
		// Class A
		MultipleDelegation_SameConnector_P_PWP_Signal_A->setThisClass_Ptr(MultipleDelegation_SameConnector_P_PWP_Signal_A);
		MultipleDelegation_SameConnector_P_PWP_Signal_A->setName("A");
		MultipleDelegation_SameConnector_P_PWP_Signal_A->setVisibility(VisibilityKind::public_);
		
			// Port q
			MultipleDelegation_SameConnector_P_PWP_Signal_A_q->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_A_q);
			MultipleDelegation_SameConnector_P_PWP_Signal_A_q->setName("q");
			MultipleDelegation_SameConnector_P_PWP_Signal_A_q->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Signal_A_q->setType(MultipleDelegation_SameConnector_P_PWP_Signal_IImpl);
			MultipleDelegation_SameConnector_P_PWP_Signal_A_q->setAggregation(AggregationKind::composite);
			MultipleDelegation_SameConnector_P_PWP_Signal_A_q->isService = true;
			MultipleDelegation_SameConnector_P_PWP_Signal_A_q->addProvided(MultipleDelegation_SameConnector_P_PWP_Signal_I);
		MultipleDelegation_SameConnector_P_PWP_Signal_A->addOwnedAttribute(MultipleDelegation_SameConnector_P_PWP_Signal_A_q);
			// Property b
			MultipleDelegation_SameConnector_P_PWP_Signal_A_b->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_A_b);
			MultipleDelegation_SameConnector_P_PWP_Signal_A_b->setName("b");
			MultipleDelegation_SameConnector_P_PWP_Signal_A_b->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Signal_A_b->setType(MultipleDelegation_SameConnector_P_PWP_Signal_B);
			MultipleDelegation_SameConnector_P_PWP_Signal_A_b->setAggregation(AggregationKind::composite);
		MultipleDelegation_SameConnector_P_PWP_Signal_A->addOwnedAttribute(MultipleDelegation_SameConnector_P_PWP_Signal_A_b);
		
		MultipleDelegation_SameConnector_P_PWP_Signal_A_r->setName("r");
			MultipleDelegation_SameConnector_P_PWP_Signal_A_r->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_A_r_ConnectorEnd160->setRole(MultipleDelegation_SameConnector_P_PWP_Signal_A_q);
				
			MultipleDelegation_SameConnector_P_PWP_Signal_A_r->addEnd(MultipleDelegation_SameConnector_P_PWP_Signal_A_r_ConnectorEnd160);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_A_r_ConnectorEnd157->setRole(MultipleDelegation_SameConnector_P_PWP_Signal_A_b);
				
			MultipleDelegation_SameConnector_P_PWP_Signal_A_r->addEnd(MultipleDelegation_SameConnector_P_PWP_Signal_A_r_ConnectorEnd157);
			MultipleDelegation_SameConnector_P_PWP_Signal_A_r->setType(MultipleDelegation_SameConnector_P_PWP_Signal_R);
		MultipleDelegation_SameConnector_P_PWP_Signal_A->addOwnedConnector(MultipleDelegation_SameConnector_P_PWP_Signal_A_r);
			// Operation A_A
			MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A->setThisOperationPtr(MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A);
			MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A->setName("A_A");
			MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A_result);
				MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A_result->setName("result");
				MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_A);
				MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A->addOwnedParameter(MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A_result);
		MultipleDelegation_SameConnector_P_PWP_Signal_A->addOwnedOperation(MultipleDelegation_SameConnector_P_PWP_Signal_A_A_A);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_A);
		// Association R
		MultipleDelegation_SameConnector_P_PWP_Signal_R->setThisAssociationPtr(MultipleDelegation_SameConnector_P_PWP_Signal_R);
		MultipleDelegation_SameConnector_P_PWP_Signal_R->setName("R");
		MultipleDelegation_SameConnector_P_PWP_Signal_R->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_PWP_Signal_R->addOwnedEnd(MultipleDelegation_SameConnector_P_PWP_Signal_R_x);
		MultipleDelegation_SameConnector_P_PWP_Signal_R->addOwnedEnd(MultipleDelegation_SameConnector_P_PWP_Signal_R_y);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_R);
		// Signal S
		MultipleDelegation_SameConnector_P_PWP_Signal_S->setThisSignalPtr(MultipleDelegation_SameConnector_P_PWP_Signal_S);
		MultipleDelegation_SameConnector_P_PWP_Signal_S->setName("S");
		MultipleDelegation_SameConnector_P_PWP_Signal_S->setVisibility(VisibilityKind::public_);
		
			// Property v
			MultipleDelegation_SameConnector_P_PWP_Signal_S_v->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_S_v);
			MultipleDelegation_SameConnector_P_PWP_Signal_S_v->setName("v");
			MultipleDelegation_SameConnector_P_PWP_Signal_S_v->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Signal_S_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		MultipleDelegation_SameConnector_P_PWP_Signal_S->addOwnedAttribute(MultipleDelegation_SameConnector_P_PWP_Signal_S_v);
			// Property t
			MultipleDelegation_SameConnector_P_PWP_Signal_S_t->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_S_t);
			MultipleDelegation_SameConnector_P_PWP_Signal_S_t->setName("t");
			MultipleDelegation_SameConnector_P_PWP_Signal_S_t->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Signal_S_t->setType(MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester);
		MultipleDelegation_SameConnector_P_PWP_Signal_S->addOwnedAttribute(MultipleDelegation_SameConnector_P_PWP_Signal_S_t);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_S);
		// SignalEvent SEvent
		MultipleDelegation_SameConnector_P_PWP_Signal_SEvent->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_SEvent);
		MultipleDelegation_SameConnector_P_PWP_Signal_SEvent->setName("SEvent");
		MultipleDelegation_SameConnector_P_PWP_Signal_SEvent->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_PWP_Signal_SEvent->setSignal(MultipleDelegation_SameConnector_P_PWP_Signal_S);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_SEvent);
		// Class IImpl
		MultipleDelegation_SameConnector_P_PWP_Signal_IImpl->setThisClass_Ptr(MultipleDelegation_SameConnector_P_PWP_Signal_IImpl);
		MultipleDelegation_SameConnector_P_PWP_Signal_IImpl->setName("IImpl");
		MultipleDelegation_SameConnector_P_PWP_Signal_IImpl->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_PWP_Signal_IImpl_IRealization->setName("IRealization");
			MultipleDelegation_SameConnector_P_PWP_Signal_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Signal_IImpl_IRealization->setContract(MultipleDelegation_SameConnector_P_PWP_Signal_I);
			
		MultipleDelegation_SameConnector_P_PWP_Signal_IImpl->addInterfaceRealization(MultipleDelegation_SameConnector_P_PWP_Signal_IImpl_IRealization);
		
			// Reception S
			MultipleDelegation_SameConnector_P_PWP_Signal_IImpl_S->setThisBehavioralFeaturePtr(MultipleDelegation_SameConnector_P_PWP_Signal_IImpl_S);
			MultipleDelegation_SameConnector_P_PWP_Signal_IImpl_S->setName("S");
			MultipleDelegation_SameConnector_P_PWP_Signal_IImpl_S->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Signal_IImpl_S->setSignal(MultipleDelegation_SameConnector_P_PWP_Signal_S);
		MultipleDelegation_SameConnector_P_PWP_Signal_IImpl->addOwnedReception(MultipleDelegation_SameConnector_P_PWP_Signal_IImpl_S);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_IImpl);
		// Class AbstractTester
		MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester->setThisClass_Ptr(MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester);
		MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester->setName("AbstractTester");
		MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester->setVisibility(VisibilityKind::public_);
		
		MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester->setIsAbstract(true);
		
		
		MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester->setIsActive(true);
			// Operation test
			MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_test->setThisOperationPtr(MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_test);
			MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_test->setName("test");
			MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_test->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_test->setIsAbstract(true);
		MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester->addOwnedOperation(MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_test);
			// Reception Start
			MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Start->setThisBehavioralFeaturePtr(MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Start);
			MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Start->setName("Start");
			MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Start->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Start->setSignal(MultipleDelegation_SameConnector_P_PWP_Signal_Start);
		MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester->addOwnedReception(MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Start);
			// Reception Continue
			MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Continue->setThisBehavioralFeaturePtr(MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Continue);
			MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Continue->setName("Continue");
			MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Continue->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Continue->setSignal(MultipleDelegation_SameConnector_P_PWP_Signal_Continue);
		MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester->addOwnedReception(MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester_Continue);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_AbstractTester);
		// Activity main
		MultipleDelegation_SameConnector_P_PWP_Signal_main->setThisActivityPtr(MultipleDelegation_SameConnector_P_PWP_Signal_main);
		MultipleDelegation_SameConnector_P_PWP_Signal_main->setName("main");
		MultipleDelegation_SameConnector_P_PWP_Signal_main->setVisibility(VisibilityKind::public_);
			// ForkNode Fork Tester
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Fork_Tester->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_Fork_Tester);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Fork_Tester->setName("Fork Tester");
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Fork_Tester->setVisibility(VisibilityKind::public_);
		MultipleDelegation_SameConnector_P_PWP_Signal_main->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_main_Fork_Tester);
			// CallOperationAction Tester()
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester_->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester_);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester_->setName("Tester()");
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__result);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__result->setName("result");
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_Tester);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester_->addResult(MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__result);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester_->setOperation(MultipleDelegation_SameConnector_P_PWP_Signal_Tester_Tester_Tester);
				// InputPin target
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__target->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__target);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__target->setName("target");
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__target->setType(MultipleDelegation_SameConnector_P_PWP_Signal_Tester);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester_->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__target);
		MultipleDelegation_SameConnector_P_PWP_Signal_main->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester_);
			// StartObjectBehaviorAction Start Tester
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester->setName("Start Tester");
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester->setVisibility(VisibilityKind::public_);
				// InputPin object
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester_object->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester_object);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester_object->setName("object");
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester_object->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester->setObject(MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester_object);
		MultipleDelegation_SameConnector_P_PWP_Signal_main->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester);
			// CreateObjectAction Create Tester
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester->setName("Create Tester");
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester->setClassifier(MultipleDelegation_SameConnector_P_PWP_Signal_Tester);
				// OutputPin result
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester_result->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester_result);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester_result->setName("result");
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester_result->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester_result->setType(MultipleDelegation_SameConnector_P_PWP_Signal_Tester);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester->setResult(MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester_result);
		MultipleDelegation_SameConnector_P_PWP_Signal_main->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester);
			// SendSignalAction Send Start
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start->setThisExecutableNodePtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start->setName("Send Start");
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start->setVisibility(VisibilityKind::public_);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start->setSignal(MultipleDelegation_SameConnector_P_PWP_Signal_Start);
				// InputPin target
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start_target->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start_target);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start_target->setName("target");
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start_target->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start_target->setType(MultipleDelegation_SameConnector_P_PWP_Signal_Tester);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start_target);
		MultipleDelegation_SameConnector_P_PWP_Signal_main->addNode(MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start);
			// ObjectFlow ObjectFlow168 from result to target
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168->setName("ObjectFlow168");
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_main_Create_Tester_result);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__target);
				// LiteralBoolean LiteralBoolean170
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168_LiteralBoolean170->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168_LiteralBoolean170);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168_LiteralBoolean170->setName("LiteralBoolean170");
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168_LiteralBoolean170->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168_LiteralBoolean170->setValue(true);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168_LiteralBoolean170);
		MultipleDelegation_SameConnector_P_PWP_Signal_main->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow168);
			// ObjectFlow ObjectFlow171 from result to Fork Tester
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171->setName("ObjectFlow171");
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_main_Tester__result);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_main_Fork_Tester);
				// LiteralBoolean LiteralBoolean173
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171_LiteralBoolean173->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171_LiteralBoolean173);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171_LiteralBoolean173->setName("LiteralBoolean173");
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171_LiteralBoolean173->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171_LiteralBoolean173->setValue(true);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171_LiteralBoolean173);
		MultipleDelegation_SameConnector_P_PWP_Signal_main->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow171);
			// ObjectFlow ObjectFlow181 from Fork Tester to object
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181->setName("ObjectFlow181");
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_main_Fork_Tester);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester_object);
				// LiteralBoolean LiteralBoolean182
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181_LiteralBoolean182->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181_LiteralBoolean182);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181_LiteralBoolean182->setName("LiteralBoolean182");
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181_LiteralBoolean182->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181_LiteralBoolean182->setValue(true);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181_LiteralBoolean182);
		MultipleDelegation_SameConnector_P_PWP_Signal_main->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow181);
			// ObjectFlow ObjectFlow188 from Fork Tester to target
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188->setName("ObjectFlow188");
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_main_Fork_Tester);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start_target);
				// LiteralBoolean LiteralBoolean190
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188_LiteralBoolean190->setThisElementPtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188_LiteralBoolean190);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188_LiteralBoolean190->setName("LiteralBoolean190");
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188_LiteralBoolean190->setVisibility(VisibilityKind::public_);
				MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188_LiteralBoolean190->setValue(true);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188->setGuard(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188_LiteralBoolean190);
		MultipleDelegation_SameConnector_P_PWP_Signal_main->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_main_ObjectFlow188);
			// ControlFlow ControlFlow191 from Start Tester to Send Start
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ControlFlow191->setThisActivityEdgePtr(MultipleDelegation_SameConnector_P_PWP_Signal_main_ControlFlow191);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ControlFlow191->setName("ControlFlow191");
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ControlFlow191->setVisibility(VisibilityKind::public_);
			
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ControlFlow191->setSource(MultipleDelegation_SameConnector_P_PWP_Signal_main_Start_Tester);
			MultipleDelegation_SameConnector_P_PWP_Signal_main_ControlFlow191->setTarget(MultipleDelegation_SameConnector_P_PWP_Signal_main_Send_Start);
		MultipleDelegation_SameConnector_P_PWP_Signal_main->addEdge(MultipleDelegation_SameConnector_P_PWP_Signal_main_ControlFlow191);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_main);
		// Signal Start
		MultipleDelegation_SameConnector_P_PWP_Signal_Start->setThisSignalPtr(MultipleDelegation_SameConnector_P_PWP_Signal_Start);
		MultipleDelegation_SameConnector_P_PWP_Signal_Start->setName("Start");
		MultipleDelegation_SameConnector_P_PWP_Signal_Start->setVisibility(VisibilityKind::public_);
	MultipleDelegation_SameConnector_P_PWP_Signal->addPackagedElement(MultipleDelegation_SameConnector_P_PWP_Signal_Start);
}
