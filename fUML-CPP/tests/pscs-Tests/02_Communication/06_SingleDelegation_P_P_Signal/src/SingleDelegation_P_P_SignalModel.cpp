/*
 * SingleDelegation_P_P_SignalModel.cpp
 * 
 * Auto-generated file
 */

#include "SingleDelegation_P_P_SignalModel.h"

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
#include <uml/simpleclassifiers/Interface.h>
#include <uml/activities/ControlFlow.h>
#include <uml/activities/ForkNode.h>
#include <uml/structuredclassifiers/ConnectorEnd.h>
#include <uml/classification/Generalization.h>
#include <uml/activities/InitialNode.h>
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
#include <uml/values/LiteralString.h>
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

using namespace SingleDelegation_P_P_Signal;
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

SingleDelegation_P_P_SignalModel::SingleDelegation_P_P_SignalModel()
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

SingleDelegation_P_P_SignalModel::~SingleDelegation_P_P_SignalModel()
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

const std::shared_ptr<SingleDelegation_P_P_SignalModel>& SingleDelegation_P_P_SignalModel::Instance()
{
	static std::shared_ptr<SingleDelegation_P_P_SignalModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new SingleDelegation_P_P_SignalModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void SingleDelegation_P_P_SignalModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model SingleDelegation_P_P_Signal
	 */
	SingleDelegation_P_P_Signal.reset(new Package());
	this->addToElementRepository("SingleDelegation_P_P_Signal", SingleDelegation_P_P_Signal);
		SingleDelegation_P_P_Signal_S.reset(new Signal());
		this->addToElementRepository("S", SingleDelegation_P_P_Signal_S);
			SingleDelegation_P_P_Signal_S_v.reset(new Property());
			this->addToElementRepository("v", SingleDelegation_P_P_Signal_S_v);
			SingleDelegation_P_P_Signal_S_t.reset(new Property());
			this->addToElementRepository("t", SingleDelegation_P_P_Signal_S_t);
		SingleDelegation_P_P_Signal_SignalEventContinue.reset(new SignalEvent());
		this->addToElementRepository("SignalEventContinue", SingleDelegation_P_P_Signal_SignalEventContinue);
		SingleDelegation_P_P_Signal_R.reset(new Association());
		this->addToElementRepository("R", SingleDelegation_P_P_Signal_R);
			SingleDelegation_P_P_Signal_R_y.reset(new Property());
			this->addToElementRepository("y", SingleDelegation_P_P_Signal_R_y);
			SingleDelegation_P_P_Signal_R_x.reset(new Property());
			this->addToElementRepository("x", SingleDelegation_P_P_Signal_R_x);
		SingleDelegation_P_P_Signal_Continue.reset(new Signal());
		this->addToElementRepository("Continue", SingleDelegation_P_P_Signal_Continue);
		SingleDelegation_P_P_Signal_B.reset(new Class_());
		this->addToElementRepository("B", SingleDelegation_P_P_Signal_B);
			SingleDelegation_P_P_Signal_B_B_B.reset(new Operation());
			this->addToElementRepository("B_B", SingleDelegation_P_P_Signal_B_B_B);
				SingleDelegation_P_P_Signal_B_B_B_result.reset(new Parameter());
				this->addToElementRepository("result", SingleDelegation_P_P_Signal_B_B_B_result);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior.reset(new Activity());
			this->addToElementRepository("BClassifierBehavior", SingleDelegation_P_P_Signal_B_BClassifierBehavior);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow0", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0_LiteralBoolean1.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean1", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0_LiteralBoolean1);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0_LiteralInteger2.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger2", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0_LiteralInteger2);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow3.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow3", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow3);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", SingleDelegation_P_P_Signal_B_BClassifierBehavior_this);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result_LiteralInteger4.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger4", SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result_LiteralInteger4);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result_LiteralUnlimitedNatural5.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural5", SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result_LiteralUnlimitedNatural5);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow6", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6_LiteralBoolean7.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean7", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6_LiteralBoolean7);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6_LiteralInteger8.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger8", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6_LiteralInteger8);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow9.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow9", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow9);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S.reset(new AcceptEventAction());
				this->addToElementRepository("Accept S", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result_LiteralInteger10.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger10", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result_LiteralInteger10);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result_LiteralUnlimitedNatural11.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural11", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result_LiteralUnlimitedNatural11);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result_LiteralInteger12.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger12", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result_LiteralInteger12);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger13.reset(new Trigger());
					this->addToElementRepository("Trigger13", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger13);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue.reset(new SendSignalAction());
				this->addToElementRepository("Send Continue", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target.reset(new InputPin());
					this->addToElementRepository("target", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural14.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural14", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralUnlimitedNatural14);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralInteger15.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger15", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target_LiteralInteger15);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read s.v", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralUnlimitedNatural16.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural16", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralUnlimitedNatural16);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralInteger17.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger17", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result_LiteralInteger17);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object.reset(new InputPin());
					this->addToElementRepository("object", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralInteger18.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger18", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralInteger18);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralUnlimitedNatural19.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural19", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object_LiteralUnlimitedNatural19);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow20", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20_LiteralInteger21.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger21", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20_LiteralInteger21);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20_LiteralBoolean22.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean22", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20_LiteralBoolean22);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow23", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23_LiteralBoolean24.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean24", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23_LiteralBoolean24);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23_LiteralInteger25.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger25", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23_LiteralInteger25);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow26", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26_LiteralBoolean27.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean27", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26_LiteralBoolean27);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26_LiteralInteger28.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger28", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26_LiteralInteger28);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Initial.reset(new InitialNode());
				this->addToElementRepository("Initial", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Initial);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow29", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29_LiteralBoolean30.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean30", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29_LiteralBoolean30);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29_LiteralInteger31.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger31", SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29_LiteralInteger31);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralInteger32.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger32", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralInteger32);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural33.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural33", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object_LiteralUnlimitedNatural33);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_result);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural34.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural34", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralUnlimitedNatural34);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralInteger35.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger35", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_result_LiteralInteger35);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralInteger36.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger36", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralInteger36);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural37.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural37", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value_LiteralUnlimitedNatural37);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read s.t", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object.reset(new InputPin());
					this->addToElementRepository("object", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralUnlimitedNatural38.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural38", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralUnlimitedNatural38);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralInteger39.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger39", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object_LiteralInteger39);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralInteger40.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger40", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralInteger40);
						SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralUnlimitedNatural41.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural41", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result_LiteralUnlimitedNatural41);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Fork_S.reset(new ForkNode());
				this->addToElementRepository("Fork S", SingleDelegation_P_P_Signal_B_BClassifierBehavior_Fork_S);
			SingleDelegation_P_P_Signal_B_p.reset(new Property());
			this->addToElementRepository("p", SingleDelegation_P_P_Signal_B_p);
			SingleDelegation_P_P_Signal_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", SingleDelegation_P_P_Signal_B_IRealization);
			SingleDelegation_P_P_Signal_B_S.reset(new Reception());
			this->addToElementRepository("S", SingleDelegation_P_P_Signal_B_S);
		SingleDelegation_P_P_Signal_SignalEventS.reset(new SignalEvent());
		this->addToElementRepository("SignalEventS", SingleDelegation_P_P_Signal_SignalEventS);
		SingleDelegation_P_P_Signal_A.reset(new Class_());
		this->addToElementRepository("A", SingleDelegation_P_P_Signal_A);
			SingleDelegation_P_P_Signal_A_b.reset(new Property());
			this->addToElementRepository("b", SingleDelegation_P_P_Signal_A_b);
			SingleDelegation_P_P_Signal_A_r.reset(new Connector());
			this->addToElementRepository("r", SingleDelegation_P_P_Signal_A_r);
				SingleDelegation_P_P_Signal_A_r_ConnectorEnd42.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd42", SingleDelegation_P_P_Signal_A_r_ConnectorEnd42);
				SingleDelegation_P_P_Signal_A_r_ConnectorEnd43.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd43", SingleDelegation_P_P_Signal_A_r_ConnectorEnd43);
			SingleDelegation_P_P_Signal_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", SingleDelegation_P_P_Signal_A_A_A);
				SingleDelegation_P_P_Signal_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", SingleDelegation_P_P_Signal_A_A_A_result);
			SingleDelegation_P_P_Signal_A_q.reset(new Port());
			this->addToElementRepository("q", SingleDelegation_P_P_Signal_A_q);
		SingleDelegation_P_P_Signal_Start.reset(new Signal());
		this->addToElementRepository("Start", SingleDelegation_P_P_Signal_Start);
		SingleDelegation_P_P_Signal_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", SingleDelegation_P_P_Signal_IImpl);
			SingleDelegation_P_P_Signal_IImpl_S.reset(new Reception());
			this->addToElementRepository("S", SingleDelegation_P_P_Signal_IImpl_S);
			SingleDelegation_P_P_Signal_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", SingleDelegation_P_P_Signal_IImpl_IRealization);
		SingleDelegation_P_P_Signal_Tester.reset(new Class_());
		this->addToElementRepository("Tester", SingleDelegation_P_P_Signal_Tester);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior.reset(new Activity());
			this->addToElementRepository("TesterClassifierBehavior", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result_LiteralInteger44.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger44", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result_LiteralInteger44);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural45.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural45", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result_LiteralUnlimitedNatural45);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow46", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralInteger47);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean48.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean48", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean48);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow49", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49_LiteralInteger50.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger50", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49_LiteralInteger50);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49_LiteralBoolean51.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean51", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49_LiteralBoolean51);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow52", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52_LiteralInteger53.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger53", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52_LiteralInteger53);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52_LiteralBoolean54.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean54", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52_LiteralBoolean54);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Start", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural55.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural55", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralUnlimitedNatural55);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger56.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger56", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger56);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger57.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger57", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result_LiteralInteger57);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger58.reset(new Trigger());
					this->addToElementRepository("Trigger58", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger58);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read this.a", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object.reset(new InputPin());
					this->addToElementRepository("object", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralInteger59.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger59", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralInteger59);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural60", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object_LiteralUnlimitedNatural60);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralUnlimitedNatural61.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural61", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralUnlimitedNatural61);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralInteger62.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger62", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result_LiteralInteger62);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4.reset(new ValueSpecificationAction());
				this->addToElementRepository("Int(4)", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_LiteralInteger63.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger63", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_LiteralInteger63);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result_LiteralUnlimitedNatural64.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural64", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result_LiteralUnlimitedNatural64);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result_LiteralInteger65.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger65", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result_LiteralInteger65);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue.reset(new AcceptEventAction());
				this->addToElementRepository("Accept Continue", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger66.reset(new Trigger());
					this->addToElementRepository("Trigger66", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger66);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger67.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger67", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger67);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralUnlimitedNatural68.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural68", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralUnlimitedNatural68);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger69.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger69", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result_LiteralInteger69);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Initial.reset(new InitialNode());
				this->addToElementRepository("Initial", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Initial);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S.reset(new SendSignalAction());
				this->addToElementRepository(" Send S", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t.reset(new InputPin());
					this->addToElementRepository("t", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t_LiteralInteger70.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger70", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t_LiteralInteger70);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t_LiteralUnlimitedNatural71.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural71", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t_LiteralUnlimitedNatural71);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v.reset(new InputPin());
					this->addToElementRepository("v", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v_LiteralInteger72.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger72", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v_LiteralInteger72);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v_LiteralUnlimitedNatural73.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural73", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v_LiteralUnlimitedNatural73);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target.reset(new InputPin());
					this->addToElementRepository("target", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target_LiteralInteger74.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger74", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target_LiteralInteger74);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target_LiteralUnlimitedNatural75.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural75", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target_LiteralUnlimitedNatural75);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow76", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76_LiteralInteger77.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger77", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76_LiteralInteger77);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76_LiteralBoolean78.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean78", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76_LiteralBoolean78);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow79", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79_LiteralBoolean80.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean80", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79_LiteralBoolean80);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79_LiteralInteger81.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger81", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79_LiteralInteger81);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow82", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82_LiteralInteger83.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger83", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82_LiteralInteger83);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82_LiteralBoolean84.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean84", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82_LiteralBoolean84);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow85", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85_LiteralBoolean86.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean86", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85_LiteralBoolean86);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85_LiteralInteger87.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger87", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85_LiteralInteger87);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow88.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow88", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow88);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow89.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow89", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow89);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read a.q", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result_LiteralInteger90.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger90", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result_LiteralInteger90);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result_LiteralUnlimitedNatural91.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural91", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result_LiteralUnlimitedNatural91);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object.reset(new InputPin());
					this->addToElementRepository("object", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object_LiteralUnlimitedNatural92.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural92", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object_LiteralUnlimitedNatural92);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object_LiteralInteger93.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger93", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object_LiteralInteger93);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow94.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow94", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow94);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this.reset(new ForkNode());
				this->addToElementRepository("Fork this", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_.reset(new CallOperationAction());
				this->addToElementRepository("Call test()", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target.reset(new InputPin());
					this->addToElementRepository("target", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural95.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural95", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralUnlimitedNatural95);
						SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger96.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger96", SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target_LiteralInteger96);
			SingleDelegation_P_P_Signal_Tester_Tester_Tester.reset(new Operation());
			this->addToElementRepository("Tester_Tester", SingleDelegation_P_P_Signal_Tester_Tester_Tester);
				SingleDelegation_P_P_Signal_Tester_Tester_Tester_result.reset(new Parameter());
				this->addToElementRepository("result", SingleDelegation_P_P_Signal_Tester_Tester_Tester_result);
			SingleDelegation_P_P_Signal_Tester_a.reset(new Property());
			this->addToElementRepository("a", SingleDelegation_P_P_Signal_Tester_a);
			SingleDelegation_P_P_Signal_Tester_testActivity.reset(new Activity());
			this->addToElementRepository("testActivity", SingleDelegation_P_P_Signal_Tester_testActivity);
				SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow97.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow97", SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow97);
				SingleDelegation_P_P_Signal_Tester_testActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", SingleDelegation_P_P_Signal_Tester_testActivity_this);
					SingleDelegation_P_P_Signal_Tester_testActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_Tester_testActivity_this_result);
						SingleDelegation_P_P_Signal_Tester_testActivity_this_result_LiteralInteger98.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger98", SingleDelegation_P_P_Signal_Tester_testActivity_this_result_LiteralInteger98);
						SingleDelegation_P_P_Signal_Tester_testActivity_this_result_LiteralUnlimitedNatural99.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural99", SingleDelegation_P_P_Signal_Tester_testActivity_this_result_LiteralUnlimitedNatural99);
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read this.a", SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object.reset(new InputPin());
					this->addToElementRepository("object", SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object);
						SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object_LiteralInteger100.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger100", SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object_LiteralInteger100);
						SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object_LiteralUnlimitedNatural101.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural101", SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object_LiteralUnlimitedNatural101);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result);
						SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result_LiteralUnlimitedNatural102.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural102", SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result_LiteralUnlimitedNatural102);
						SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result_LiteralInteger103.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger103", SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result_LiteralInteger103);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow104", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104_LiteralInteger105.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger105", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104_LiteralInteger105);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104_LiteralBoolean106.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean106", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104_LiteralBoolean106);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow107", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107_LiteralInteger108.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger108", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107_LiteralInteger108);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107_LiteralBoolean109.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean109", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107_LiteralBoolean109);
				SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage.reset(new ValueSpecificationAction());
				this->addToElementRepository("InitialMessage", SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage);
					SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result);
						SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result_LiteralInteger110.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger110", SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result_LiteralInteger110);
						SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result_LiteralUnlimitedNatural111.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural111", SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result_LiteralUnlimitedNatural111);
					SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_LiteralString112.reset(new LiteralString());
					this->addToElementRepository("LiteralString112", SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_LiteralString112);
				SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage.reset(new ValueSpecificationAction());
				this->addToElementRepository("EndMessage", SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage);
					SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result);
						SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result_LiteralInteger113.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger113", SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result_LiteralInteger113);
						SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result_LiteralUnlimitedNatural114.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural114", SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result_LiteralUnlimitedNatural114);
					SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_LiteralString115.reset(new LiteralString());
					this->addToElementRepository("LiteralString115", SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_LiteralString115);
				SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP.reset(new CallBehaviorAction());
				this->addToElementRepository("Call testP", SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP);
					SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p.reset(new InputPin());
					this->addToElementRepository("p", SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p);
						SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralInteger116.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger116", SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralInteger116);
						SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralInteger117.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger117", SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralInteger117);
						SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralUnlimitedNatural118.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural118", SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p_LiteralUnlimitedNatural118);
				SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow119.reset(new ControlFlow());
				this->addToElementRepository("ControlFlow119", SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow119);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow120", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120_LiteralBoolean121.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean121", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120_LiteralBoolean121);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120_LiteralInteger122.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger122", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120_LiteralInteger122);
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read a.b", SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object.reset(new InputPin());
					this->addToElementRepository("object", SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object);
						SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object_LiteralUnlimitedNatural123.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural123", SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object_LiteralUnlimitedNatural123);
						SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object_LiteralInteger124.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger124", SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object_LiteralInteger124);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result);
						SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result_LiteralInteger125.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger125", SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result_LiteralInteger125);
						SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result_LiteralUnlimitedNatural126.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural126", SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result_LiteralUnlimitedNatural126);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow127", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127_LiteralInteger128.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger128", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127_LiteralInteger128);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127_LiteralBoolean129.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean129", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127_LiteralBoolean129);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow130", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130_LiteralInteger131.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger131", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130_LiteralInteger131);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130_LiteralBoolean132.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean132", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130_LiteralBoolean132);
				SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage.reset(new CallBehaviorAction());
				this->addToElementRepository("WriteLine(EndMessage)", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage);
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value.reset(new InputPin());
					this->addToElementRepository("value", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value);
						SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value_LiteralUnlimitedNatural133.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural133", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value_LiteralUnlimitedNatural133);
						SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value_LiteralInteger134.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger134", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value_LiteralInteger134);
						SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value_LiteralInteger135.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger135", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value_LiteralInteger135);
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus);
						SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus_LiteralInteger136.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger136", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus_LiteralInteger136);
						SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus_LiteralInteger137.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger137", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus_LiteralInteger137);
						SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus_LiteralUnlimitedNatural138.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural138", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus_LiteralUnlimitedNatural138);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow139", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139_LiteralBoolean140.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean140", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139_LiteralBoolean140);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139_LiteralInteger141.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger141", SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139_LiteralInteger141);
				SingleDelegation_P_P_Signal_Tester_testActivity_testP.reset(new OpaqueBehavior());
				this->addToElementRepository("testP", SingleDelegation_P_P_Signal_Tester_testActivity_testP);
					SingleDelegation_P_P_Signal_Tester_testActivity_testP_p.reset(new Parameter());
					this->addToElementRepository("p", SingleDelegation_P_P_Signal_Tester_testActivity_testP_p);
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p.reset(new ReadStructuralFeatureAction());
				this->addToElementRepository("Read b.p", SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object.reset(new InputPin());
					this->addToElementRepository("object", SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object);
						SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object_LiteralUnlimitedNatural142.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural142", SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object_LiteralUnlimitedNatural142);
						SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object_LiteralInteger143.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger143", SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object_LiteralInteger143);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result.reset(new OutputPin());
					this->addToElementRepository("result", SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result);
						SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result_LiteralUnlimitedNatural144.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural144", SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result_LiteralUnlimitedNatural144);
						SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result_LiteralInteger145.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger145", SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result_LiteralInteger145);
				SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage.reset(new CallBehaviorAction());
				this->addToElementRepository("WriteLine(InitialMessage)", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage);
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value.reset(new InputPin());
					this->addToElementRepository("value", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value);
						SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value_LiteralInteger146.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger146", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value_LiteralInteger146);
						SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value_LiteralInteger147.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger147", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value_LiteralInteger147);
						SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value_LiteralUnlimitedNatural148.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural148", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value_LiteralUnlimitedNatural148);
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus.reset(new OutputPin());
					this->addToElementRepository("errorStatus", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus);
						SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus_LiteralInteger149.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger149", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus_LiteralInteger149);
						SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus_LiteralUnlimitedNatural150.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural150", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus_LiteralUnlimitedNatural150);
						SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus_LiteralInteger151.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger151", SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus_LiteralInteger151);
			SingleDelegation_P_P_Signal_Tester_Generalization152.reset(new Generalization());
			this->addToElementRepository("Generalization152", SingleDelegation_P_P_Signal_Tester_Generalization152);
			SingleDelegation_P_P_Signal_Tester_test.reset(new Operation());
			this->addToElementRepository("test", SingleDelegation_P_P_Signal_Tester_test);
		SingleDelegation_P_P_Signal_AbstractTester.reset(new Class_());
		this->addToElementRepository("AbstractTester", SingleDelegation_P_P_Signal_AbstractTester);
			SingleDelegation_P_P_Signal_AbstractTester_Start.reset(new Reception());
			this->addToElementRepository("Start", SingleDelegation_P_P_Signal_AbstractTester_Start);
			SingleDelegation_P_P_Signal_AbstractTester_test.reset(new Operation());
			this->addToElementRepository("test", SingleDelegation_P_P_Signal_AbstractTester_test);
			SingleDelegation_P_P_Signal_AbstractTester_Continue.reset(new Reception());
			this->addToElementRepository("Continue", SingleDelegation_P_P_Signal_AbstractTester_Continue);
		SingleDelegation_P_P_Signal_main.reset(new Activity());
		this->addToElementRepository("main", SingleDelegation_P_P_Signal_main);
			SingleDelegation_P_P_Signal_main_Tester_.reset(new CallOperationAction());
			this->addToElementRepository("Tester()", SingleDelegation_P_P_Signal_main_Tester_);
				SingleDelegation_P_P_Signal_main_Tester__target.reset(new InputPin());
				this->addToElementRepository("target", SingleDelegation_P_P_Signal_main_Tester__target);
					SingleDelegation_P_P_Signal_main_Tester__target_LiteralInteger153.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger153", SingleDelegation_P_P_Signal_main_Tester__target_LiteralInteger153);
					SingleDelegation_P_P_Signal_main_Tester__target_LiteralUnlimitedNatural154.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural154", SingleDelegation_P_P_Signal_main_Tester__target_LiteralUnlimitedNatural154);
				SingleDelegation_P_P_Signal_main_Tester__result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_P_Signal_main_Tester__result);
					SingleDelegation_P_P_Signal_main_Tester__result_LiteralInteger155.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger155", SingleDelegation_P_P_Signal_main_Tester__result_LiteralInteger155);
					SingleDelegation_P_P_Signal_main_Tester__result_LiteralInteger156.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger156", SingleDelegation_P_P_Signal_main_Tester__result_LiteralInteger156);
					SingleDelegation_P_P_Signal_main_Tester__result_LiteralUnlimitedNatural157.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural157", SingleDelegation_P_P_Signal_main_Tester__result_LiteralUnlimitedNatural157);
			SingleDelegation_P_P_Signal_main_ObjectFlow158.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow158", SingleDelegation_P_P_Signal_main_ObjectFlow158);
				SingleDelegation_P_P_Signal_main_ObjectFlow158_LiteralBoolean159.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean159", SingleDelegation_P_P_Signal_main_ObjectFlow158_LiteralBoolean159);
				SingleDelegation_P_P_Signal_main_ObjectFlow158_LiteralInteger160.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger160", SingleDelegation_P_P_Signal_main_ObjectFlow158_LiteralInteger160);
			SingleDelegation_P_P_Signal_main_Create_Tester.reset(new CreateObjectAction());
			this->addToElementRepository("Create Tester", SingleDelegation_P_P_Signal_main_Create_Tester);
				SingleDelegation_P_P_Signal_main_Create_Tester_result.reset(new OutputPin());
				this->addToElementRepository("result", SingleDelegation_P_P_Signal_main_Create_Tester_result);
					SingleDelegation_P_P_Signal_main_Create_Tester_result_LiteralInteger161.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger161", SingleDelegation_P_P_Signal_main_Create_Tester_result_LiteralInteger161);
					SingleDelegation_P_P_Signal_main_Create_Tester_result_LiteralUnlimitedNatural162.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural162", SingleDelegation_P_P_Signal_main_Create_Tester_result_LiteralUnlimitedNatural162);
			SingleDelegation_P_P_Signal_main_ObjectFlow163.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow163", SingleDelegation_P_P_Signal_main_ObjectFlow163);
				SingleDelegation_P_P_Signal_main_ObjectFlow163_LiteralBoolean164.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean164", SingleDelegation_P_P_Signal_main_ObjectFlow163_LiteralBoolean164);
				SingleDelegation_P_P_Signal_main_ObjectFlow163_LiteralInteger165.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger165", SingleDelegation_P_P_Signal_main_ObjectFlow163_LiteralInteger165);
			SingleDelegation_P_P_Signal_main_ControlFlow166.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow166", SingleDelegation_P_P_Signal_main_ControlFlow166);
			SingleDelegation_P_P_Signal_main_ObjectFlow167.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow167", SingleDelegation_P_P_Signal_main_ObjectFlow167);
				SingleDelegation_P_P_Signal_main_ObjectFlow167_LiteralInteger168.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger168", SingleDelegation_P_P_Signal_main_ObjectFlow167_LiteralInteger168);
				SingleDelegation_P_P_Signal_main_ObjectFlow167_LiteralBoolean169.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean169", SingleDelegation_P_P_Signal_main_ObjectFlow167_LiteralBoolean169);
			SingleDelegation_P_P_Signal_main_Start_Tester.reset(new StartObjectBehaviorAction());
			this->addToElementRepository("Start Tester", SingleDelegation_P_P_Signal_main_Start_Tester);
				SingleDelegation_P_P_Signal_main_Start_Tester_object.reset(new InputPin());
				this->addToElementRepository("object", SingleDelegation_P_P_Signal_main_Start_Tester_object);
					SingleDelegation_P_P_Signal_main_Start_Tester_object_LiteralUnlimitedNatural170.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural170", SingleDelegation_P_P_Signal_main_Start_Tester_object_LiteralUnlimitedNatural170);
					SingleDelegation_P_P_Signal_main_Start_Tester_object_LiteralInteger171.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger171", SingleDelegation_P_P_Signal_main_Start_Tester_object_LiteralInteger171);
			SingleDelegation_P_P_Signal_main_Send_Start.reset(new SendSignalAction());
			this->addToElementRepository("Send Start", SingleDelegation_P_P_Signal_main_Send_Start);
				SingleDelegation_P_P_Signal_main_Send_Start_target.reset(new InputPin());
				this->addToElementRepository("target", SingleDelegation_P_P_Signal_main_Send_Start_target);
					SingleDelegation_P_P_Signal_main_Send_Start_target_LiteralUnlimitedNatural172.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural172", SingleDelegation_P_P_Signal_main_Send_Start_target_LiteralUnlimitedNatural172);
					SingleDelegation_P_P_Signal_main_Send_Start_target_LiteralInteger173.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger173", SingleDelegation_P_P_Signal_main_Send_Start_target_LiteralInteger173);
			SingleDelegation_P_P_Signal_main_Fork_Tester.reset(new ForkNode());
			this->addToElementRepository("Fork Tester", SingleDelegation_P_P_Signal_main_Fork_Tester);
			SingleDelegation_P_P_Signal_main_ObjectFlow174.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow174", SingleDelegation_P_P_Signal_main_ObjectFlow174);
				SingleDelegation_P_P_Signal_main_ObjectFlow174_LiteralBoolean175.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean175", SingleDelegation_P_P_Signal_main_ObjectFlow174_LiteralBoolean175);
				SingleDelegation_P_P_Signal_main_ObjectFlow174_LiteralInteger176.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger176", SingleDelegation_P_P_Signal_main_ObjectFlow174_LiteralInteger176);
		SingleDelegation_P_P_Signal_I.reset(new Interface());
		this->addToElementRepository("I", SingleDelegation_P_P_Signal_I);
			SingleDelegation_P_P_Signal_I_S.reset(new Reception());
			this->addToElementRepository("S", SingleDelegation_P_P_Signal_I_S);
		SingleDelegation_P_P_Signal_SignalEventStart.reset(new SignalEvent());
		this->addToElementRepository("SignalEventStart", SingleDelegation_P_P_Signal_SignalEventStart);

	// Initialize public members
	/*
	 * Model SingleDelegation_P_P_Signal
	 */
	SingleDelegation_P_P_Signal->setThisPackagePtr(SingleDelegation_P_P_Signal);
	SingleDelegation_P_P_Signal->setName("SingleDelegation_P_P_Signal");
	SingleDelegation_P_P_Signal->setVisibility(VisibilityKind::public_);
		// Signal S
		SingleDelegation_P_P_Signal_S->setThisSignalPtr(SingleDelegation_P_P_Signal_S);
		SingleDelegation_P_P_Signal_S->setName("S");
		SingleDelegation_P_P_Signal_S->setVisibility(VisibilityKind::public_);
		
			// Property v
			SingleDelegation_P_P_Signal_S_v->setThisElementPtr(SingleDelegation_P_P_Signal_S_v);
			SingleDelegation_P_P_Signal_S_v->setName("v");
			SingleDelegation_P_P_Signal_S_v->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Signal_S_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		SingleDelegation_P_P_Signal_S->addOwnedAttribute(SingleDelegation_P_P_Signal_S_v);
			// Property t
			SingleDelegation_P_P_Signal_S_t->setThisElementPtr(SingleDelegation_P_P_Signal_S_t);
			SingleDelegation_P_P_Signal_S_t->setName("t");
			SingleDelegation_P_P_Signal_S_t->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Signal_S_t->setType(SingleDelegation_P_P_Signal_AbstractTester);
		SingleDelegation_P_P_Signal_S->addOwnedAttribute(SingleDelegation_P_P_Signal_S_t);
	SingleDelegation_P_P_Signal->addPackagedElement(SingleDelegation_P_P_Signal_S);
		// SignalEvent SignalEventContinue
		SingleDelegation_P_P_Signal_SignalEventContinue->setThisElementPtr(SingleDelegation_P_P_Signal_SignalEventContinue);
		SingleDelegation_P_P_Signal_SignalEventContinue->setName("SignalEventContinue");
		SingleDelegation_P_P_Signal_SignalEventContinue->setVisibility(VisibilityKind::public_);
		SingleDelegation_P_P_Signal_SignalEventContinue->setSignal(SingleDelegation_P_P_Signal_Continue);
	SingleDelegation_P_P_Signal->addPackagedElement(SingleDelegation_P_P_Signal_SignalEventContinue);
		// Association R
		SingleDelegation_P_P_Signal_R->setThisAssociationPtr(SingleDelegation_P_P_Signal_R);
		SingleDelegation_P_P_Signal_R->setName("R");
		SingleDelegation_P_P_Signal_R->setVisibility(VisibilityKind::public_);
		SingleDelegation_P_P_Signal_R->addOwnedEnd(SingleDelegation_P_P_Signal_R_x);
		SingleDelegation_P_P_Signal_R->addOwnedEnd(SingleDelegation_P_P_Signal_R_y);
	SingleDelegation_P_P_Signal->addPackagedElement(SingleDelegation_P_P_Signal_R);
		// Signal Continue
		SingleDelegation_P_P_Signal_Continue->setThisSignalPtr(SingleDelegation_P_P_Signal_Continue);
		SingleDelegation_P_P_Signal_Continue->setName("Continue");
		SingleDelegation_P_P_Signal_Continue->setVisibility(VisibilityKind::public_);
	SingleDelegation_P_P_Signal->addPackagedElement(SingleDelegation_P_P_Signal_Continue);
		// Class B
		SingleDelegation_P_P_Signal_B->setThisClass_Ptr(SingleDelegation_P_P_Signal_B);
		SingleDelegation_P_P_Signal_B->setName("B");
		SingleDelegation_P_P_Signal_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			SingleDelegation_P_P_Signal_B_p->setThisElementPtr(SingleDelegation_P_P_Signal_B_p);
			SingleDelegation_P_P_Signal_B_p->setName("p");
			SingleDelegation_P_P_Signal_B_p->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Signal_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		SingleDelegation_P_P_Signal_B->addOwnedAttribute(SingleDelegation_P_P_Signal_B_p);
		SingleDelegation_P_P_Signal_B->setClassifierBehavior(SingleDelegation_P_P_Signal_B_BClassifierBehavior);
			// Activity BClassifierBehavior
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->setThisActivityPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->setName("BClassifierBehavior");
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->setVisibility(VisibilityKind::public_);
				// InitialNode Initial
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Initial->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Initial);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Initial->setName("Initial");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Initial->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addNode(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Initial);
				// ReadSelfAction this
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_this->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_this);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_this->setName("this");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result->setName("result");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result->setType(SingleDelegation_P_P_Signal_B);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_this->setResult(SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addNode(SingleDelegation_P_P_Signal_B_BClassifierBehavior_this);
				// AddStructuralFeatureValueAction Set this.p
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p->setName("Set this.p");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p->setStructuralFeature(SingleDelegation_P_P_Signal_B_p);
					// InputPin object
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object->setName("object");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object->setType(SingleDelegation_P_P_Signal_B);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p->setObject(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object);
					// InputPin value
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value->setName("value");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p->setValue(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value);
					// OutputPin result
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_result->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_result);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_result->setName("result");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_result->setType(SingleDelegation_P_P_Signal_B);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p->setResult(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_result);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addNode(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p);
				// ReadStructuralFeatureAction Read s.t
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t->setName("Read s.t");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t->setStructuralFeature(SingleDelegation_P_P_Signal_S_t);
					// InputPin object
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object->setName("object");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object->setType(SingleDelegation_P_P_Signal_S);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t->setObject(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object);
					// OutputPin result
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result->setName("result");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result->setType(SingleDelegation_P_P_Signal_AbstractTester);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t->setResult(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addNode(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t);
				// AcceptEventAction Accept S
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S->setName("Accept S");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S->setVisibility(VisibilityKind::public_);
					// OutputPin result
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result->setName("result");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result->setType(SingleDelegation_P_P_Signal_S);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S->addResult(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result);
					// Trigger Trigger13
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger13->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger13);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger13->setName("Trigger13");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger13->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger13->setEvent(SingleDelegation_P_P_Signal_SignalEventS);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S->addTrigger(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_Trigger13);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addNode(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S);
				// ForkNode Fork S
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Fork_S->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Fork_S);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Fork_S->setName("Fork S");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Fork_S->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addNode(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Fork_S);
				// SendSignalAction Send Continue
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue->setName("Send Continue");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue->setSignal(SingleDelegation_P_P_Signal_Continue);
					// InputPin target
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target->setName("target");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target->setType(SingleDelegation_P_P_Signal_AbstractTester);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue->setTarget(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addNode(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue);
				// ReadStructuralFeatureAction Read s.v
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v->setName("Read s.v");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v->setStructuralFeature(SingleDelegation_P_P_Signal_S_v);
					// InputPin object
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object->setName("object");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object->setType(SingleDelegation_P_P_Signal_S);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v->setObject(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object);
					// OutputPin result
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result->setName("result");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v->setResult(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addNode(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v);
				// ObjectFlow ObjectFlow20 from Fork S to object
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20->setName("ObjectFlow20");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20->setSource(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Fork_S);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20->setTarget(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_object);
					// LiteralBoolean LiteralBoolean22
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20_LiteralBoolean22->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20_LiteralBoolean22);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20_LiteralBoolean22->setName("LiteralBoolean22");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20_LiteralBoolean22->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20_LiteralBoolean22->setValue(true);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20->setGuard(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20_LiteralBoolean22);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow20);
				// ObjectFlow ObjectFlow23 from result to object
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23->setName("ObjectFlow23");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23->setSource(SingleDelegation_P_P_Signal_B_BClassifierBehavior_this_result);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23->setTarget(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_object);
					// LiteralBoolean LiteralBoolean24
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23_LiteralBoolean24->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23_LiteralBoolean24);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23_LiteralBoolean24->setName("LiteralBoolean24");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23_LiteralBoolean24->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23_LiteralBoolean24->setValue(true);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23->setGuard(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23_LiteralBoolean24);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow23);
				// ObjectFlow ObjectFlow26 from result to target
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26->setName("ObjectFlow26");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26->setSource(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_result);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26->setTarget(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue_target);
					// LiteralBoolean LiteralBoolean27
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26_LiteralBoolean27->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26_LiteralBoolean27);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26_LiteralBoolean27->setName("LiteralBoolean27");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26_LiteralBoolean27->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26_LiteralBoolean27->setValue(true);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26->setGuard(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26_LiteralBoolean27);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow26);
				// ObjectFlow ObjectFlow0 from Fork S to object
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0->setName("ObjectFlow0");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0->setSource(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Fork_S);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0->setTarget(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_t_object);
					// LiteralBoolean LiteralBoolean1
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0_LiteralBoolean1->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0_LiteralBoolean1);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0_LiteralBoolean1->setName("LiteralBoolean1");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0_LiteralBoolean1->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0_LiteralBoolean1->setValue(true);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0->setGuard(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0_LiteralBoolean1);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow0);
				// ControlFlow ControlFlow3 from Set this.p to Send Continue
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow3->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow3);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow3->setName("ControlFlow3");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow3->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow3->setSource(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow3->setTarget(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Send_Continue);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow3);
				// ObjectFlow ObjectFlow29 from result to Fork S
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29->setName("ObjectFlow29");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29->setSource(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S_result);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29->setTarget(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Fork_S);
					// LiteralBoolean LiteralBoolean30
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29_LiteralBoolean30->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29_LiteralBoolean30);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29_LiteralBoolean30->setName("LiteralBoolean30");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29_LiteralBoolean30->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29_LiteralBoolean30->setValue(true);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29->setGuard(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29_LiteralBoolean30);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow29);
				// ObjectFlow ObjectFlow6 from result to value
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6->setName("ObjectFlow6");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6->setSource(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Read_s_v_result);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6->setTarget(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Set_this_p_value);
					// LiteralBoolean LiteralBoolean7
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6_LiteralBoolean7->setThisElementPtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6_LiteralBoolean7);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6_LiteralBoolean7->setName("LiteralBoolean7");
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6_LiteralBoolean7->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6_LiteralBoolean7->setValue(true);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6->setGuard(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6_LiteralBoolean7);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ObjectFlow6);
				// ControlFlow ControlFlow9 from Initial to Accept S
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow9->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow9);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow9->setName("ControlFlow9");
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow9->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow9->setSource(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Initial);
				SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow9->setTarget(SingleDelegation_P_P_Signal_B_BClassifierBehavior_Accept_S);
			SingleDelegation_P_P_Signal_B_BClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_B_BClassifierBehavior_ControlFlow9);
		SingleDelegation_P_P_Signal_B->addOwnedBehavior(SingleDelegation_P_P_Signal_B_BClassifierBehavior);
			SingleDelegation_P_P_Signal_B_IRealization->setName("IRealization");
			SingleDelegation_P_P_Signal_B_IRealization->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Signal_B_IRealization->setContract(SingleDelegation_P_P_Signal_I);
			
		SingleDelegation_P_P_Signal_B->addInterfaceRealization(SingleDelegation_P_P_Signal_B_IRealization);
		
		SingleDelegation_P_P_Signal_B->setIsActive(true);
			// Operation B_B
			SingleDelegation_P_P_Signal_B_B_B->setThisOperationPtr(SingleDelegation_P_P_Signal_B_B_B);
			SingleDelegation_P_P_Signal_B_B_B->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			SingleDelegation_P_P_Signal_B_B_B->setName("B_B");
			SingleDelegation_P_P_Signal_B_B_B->setVisibility(VisibilityKind::public_);
				// Parameter result
				SingleDelegation_P_P_Signal_B_B_B_result->setThisElementPtr(SingleDelegation_P_P_Signal_B_B_B_result);
				SingleDelegation_P_P_Signal_B_B_B_result->setName("result");
				SingleDelegation_P_P_Signal_B_B_B_result->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_B_B_B_result->setType(SingleDelegation_P_P_Signal_B);
				SingleDelegation_P_P_Signal_B_B_B_result->setDirection(ParameterDirectionKind::return_);
			SingleDelegation_P_P_Signal_B_B_B->addOwnedParameter(SingleDelegation_P_P_Signal_B_B_B_result);
		SingleDelegation_P_P_Signal_B->addOwnedOperation(SingleDelegation_P_P_Signal_B_B_B);
			// Reception S
			SingleDelegation_P_P_Signal_B_S->setThisBehavioralFeaturePtr(SingleDelegation_P_P_Signal_B_S);
			SingleDelegation_P_P_Signal_B_S->setName("S");
			SingleDelegation_P_P_Signal_B_S->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Signal_B_S->setSignal(SingleDelegation_P_P_Signal_S);
		SingleDelegation_P_P_Signal_B->addOwnedReception(SingleDelegation_P_P_Signal_B_S);
	SingleDelegation_P_P_Signal->addPackagedElement(SingleDelegation_P_P_Signal_B);
		// SignalEvent SignalEventS
		SingleDelegation_P_P_Signal_SignalEventS->setThisElementPtr(SingleDelegation_P_P_Signal_SignalEventS);
		SingleDelegation_P_P_Signal_SignalEventS->setName("SignalEventS");
		SingleDelegation_P_P_Signal_SignalEventS->setVisibility(VisibilityKind::public_);
		SingleDelegation_P_P_Signal_SignalEventS->setSignal(SingleDelegation_P_P_Signal_S);
	SingleDelegation_P_P_Signal->addPackagedElement(SingleDelegation_P_P_Signal_SignalEventS);
		// Class A
		SingleDelegation_P_P_Signal_A->setThisClass_Ptr(SingleDelegation_P_P_Signal_A);
		SingleDelegation_P_P_Signal_A->setName("A");
		SingleDelegation_P_P_Signal_A->setVisibility(VisibilityKind::public_);
		
			// Port q
			SingleDelegation_P_P_Signal_A_q->setThisElementPtr(SingleDelegation_P_P_Signal_A_q);
			SingleDelegation_P_P_Signal_A_q->setName("q");
			SingleDelegation_P_P_Signal_A_q->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Signal_A_q->setType(SingleDelegation_P_P_Signal_IImpl);
			SingleDelegation_P_P_Signal_A_q->setAggregation(AggregationKind::composite);
			SingleDelegation_P_P_Signal_A_q->isService = true;
			SingleDelegation_P_P_Signal_A_q->addProvided(SingleDelegation_P_P_Signal_I);
		SingleDelegation_P_P_Signal_A->addOwnedAttribute(SingleDelegation_P_P_Signal_A_q);
			// Property b
			SingleDelegation_P_P_Signal_A_b->setThisElementPtr(SingleDelegation_P_P_Signal_A_b);
			SingleDelegation_P_P_Signal_A_b->setName("b");
			SingleDelegation_P_P_Signal_A_b->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Signal_A_b->setType(SingleDelegation_P_P_Signal_B);
			SingleDelegation_P_P_Signal_A_b->setAggregation(AggregationKind::composite);
		SingleDelegation_P_P_Signal_A->addOwnedAttribute(SingleDelegation_P_P_Signal_A_b);
		
		SingleDelegation_P_P_Signal_A_r->setName("r");
			SingleDelegation_P_P_Signal_A_r->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_A_r_ConnectorEnd43->setRole(SingleDelegation_P_P_Signal_A_q);
				
			SingleDelegation_P_P_Signal_A_r->addEnd(SingleDelegation_P_P_Signal_A_r_ConnectorEnd43);
				
				SingleDelegation_P_P_Signal_A_r_ConnectorEnd42->setRole(SingleDelegation_P_P_Signal_A_b);
				
			SingleDelegation_P_P_Signal_A_r->addEnd(SingleDelegation_P_P_Signal_A_r_ConnectorEnd42);
			SingleDelegation_P_P_Signal_A_r->setType(SingleDelegation_P_P_Signal_R);
		SingleDelegation_P_P_Signal_A->addOwnedConnector(SingleDelegation_P_P_Signal_A_r);
			// Operation A_A
			SingleDelegation_P_P_Signal_A_A_A->setThisOperationPtr(SingleDelegation_P_P_Signal_A_A_A);
			SingleDelegation_P_P_Signal_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			SingleDelegation_P_P_Signal_A_A_A->setName("A_A");
			SingleDelegation_P_P_Signal_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				SingleDelegation_P_P_Signal_A_A_A_result->setThisElementPtr(SingleDelegation_P_P_Signal_A_A_A_result);
				SingleDelegation_P_P_Signal_A_A_A_result->setName("result");
				SingleDelegation_P_P_Signal_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_A_A_A_result->setType(SingleDelegation_P_P_Signal_A);
				SingleDelegation_P_P_Signal_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			SingleDelegation_P_P_Signal_A_A_A->addOwnedParameter(SingleDelegation_P_P_Signal_A_A_A_result);
		SingleDelegation_P_P_Signal_A->addOwnedOperation(SingleDelegation_P_P_Signal_A_A_A);
	SingleDelegation_P_P_Signal->addPackagedElement(SingleDelegation_P_P_Signal_A);
		// Signal Start
		SingleDelegation_P_P_Signal_Start->setThisSignalPtr(SingleDelegation_P_P_Signal_Start);
		SingleDelegation_P_P_Signal_Start->setName("Start");
		SingleDelegation_P_P_Signal_Start->setVisibility(VisibilityKind::public_);
	SingleDelegation_P_P_Signal->addPackagedElement(SingleDelegation_P_P_Signal_Start);
		// Class IImpl
		SingleDelegation_P_P_Signal_IImpl->setThisClass_Ptr(SingleDelegation_P_P_Signal_IImpl);
		SingleDelegation_P_P_Signal_IImpl->setName("IImpl");
		SingleDelegation_P_P_Signal_IImpl->setVisibility(VisibilityKind::public_);
		SingleDelegation_P_P_Signal_IImpl_IRealization->setName("IRealization");
			SingleDelegation_P_P_Signal_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Signal_IImpl_IRealization->setContract(SingleDelegation_P_P_Signal_I);
			
		SingleDelegation_P_P_Signal_IImpl->addInterfaceRealization(SingleDelegation_P_P_Signal_IImpl_IRealization);
		
			// Reception S
			SingleDelegation_P_P_Signal_IImpl_S->setThisBehavioralFeaturePtr(SingleDelegation_P_P_Signal_IImpl_S);
			SingleDelegation_P_P_Signal_IImpl_S->setName("S");
			SingleDelegation_P_P_Signal_IImpl_S->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Signal_IImpl_S->setSignal(SingleDelegation_P_P_Signal_S);
		SingleDelegation_P_P_Signal_IImpl->addOwnedReception(SingleDelegation_P_P_Signal_IImpl_S);
	SingleDelegation_P_P_Signal->addPackagedElement(SingleDelegation_P_P_Signal_IImpl);
		// Class Tester
		SingleDelegation_P_P_Signal_Tester->setThisClass_Ptr(SingleDelegation_P_P_Signal_Tester);
		SingleDelegation_P_P_Signal_Tester->setName("Tester");
		SingleDelegation_P_P_Signal_Tester->setVisibility(VisibilityKind::public_);
		
			// Generalization to AbstractTester
			SingleDelegation_P_P_Signal_Tester_Generalization152->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_Generalization152);
			SingleDelegation_P_P_Signal_Tester_Generalization152->setGeneral(SingleDelegation_P_P_Signal_AbstractTester);
		SingleDelegation_P_P_Signal_Tester->addGeneralization(SingleDelegation_P_P_Signal_Tester_Generalization152);
			// Property a
			SingleDelegation_P_P_Signal_Tester_a->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_a);
			SingleDelegation_P_P_Signal_Tester_a->setName("a");
			SingleDelegation_P_P_Signal_Tester_a->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Signal_Tester_a->setType(SingleDelegation_P_P_Signal_A);
			SingleDelegation_P_P_Signal_Tester_a->setAggregation(AggregationKind::composite);
		SingleDelegation_P_P_Signal_Tester->addOwnedAttribute(SingleDelegation_P_P_Signal_Tester_a);
		SingleDelegation_P_P_Signal_Tester->setClassifierBehavior(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior);
			// Activity TesterClassifierBehavior
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->setThisActivityPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->setName("TesterClassifierBehavior");
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->setVisibility(VisibilityKind::public_);
				// ReadSelfAction this
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this->setName("this");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result->setName("result");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result->setType(SingleDelegation_P_P_Signal_Tester);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this->setResult(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addNode(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this);
				// ValueSpecificationAction Int(4)
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4->setName("Int(4)");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4->setVisibility(VisibilityKind::public_);
					// LiteralInteger LiteralInteger63
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_LiteralInteger63->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_LiteralInteger63);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_LiteralInteger63->setName("LiteralInteger63");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_LiteralInteger63->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_LiteralInteger63->setValue(4);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4->setValue(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_LiteralInteger63);
					// OutputPin result
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result->setName("result");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4->setResult(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addNode(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4);
				// AcceptEventAction Accept Continue
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue->setName("Accept Continue");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue->setVisibility(VisibilityKind::package);
					// OutputPin result
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result->setName("result");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result->setType(SingleDelegation_P_P_Signal_Continue);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue->addResult(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_result);
					// Trigger Trigger66
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger66->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger66);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger66->setName("Trigger66");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger66->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger66->setEvent(SingleDelegation_P_P_Signal_SignalEventContinue);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue->addTrigger(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue_Trigger66);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addNode(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue);
				// InitialNode Initial
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Initial->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Initial);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Initial->setName("Initial");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Initial->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addNode(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Initial);
				// SendSignalAction  Send S
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S->setName(" Send S");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S->setSignal(SingleDelegation_P_P_Signal_S);
					// InputPin target
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target->setName("target");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target->setType(SingleDelegation_P_P_Signal_IImpl);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S->setTarget(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target);
					// InputPin v
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v->setName("v");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S->addArgument(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v);
					// InputPin t
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t->setName("t");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t->setType(SingleDelegation_P_P_Signal_AbstractTester);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S->addArgument(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addNode(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S);
				// AcceptEventAction Accept Start
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start->setName("Accept Start");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start->setVisibility(VisibilityKind::public_);
					// OutputPin result
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setName("result");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result->setType(SingleDelegation_P_P_Signal_Start);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start->addResult(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_result);
					// Trigger Trigger58
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger58->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger58);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger58->setName("Trigger58");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger58->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger58->setEvent(SingleDelegation_P_P_Signal_SignalEventStart);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start->addTrigger(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start_Trigger58);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addNode(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				// ReadStructuralFeatureAction Read a.q
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setName("Read a.q");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setStructuralFeature(SingleDelegation_P_P_Signal_A_q);
					// InputPin object
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object->setName("object");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object->setType(SingleDelegation_P_P_Signal_A);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setObject(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object);
					// OutputPin result
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result->setName("result");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result->setType(SingleDelegation_P_P_Signal_IImpl);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q->setResult(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addNode(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q);
				// ForkNode Fork this
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this->setName("Fork this");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addNode(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				// ReadStructuralFeatureAction Read this.a
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setName("Read this.a");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setStructuralFeature(SingleDelegation_P_P_Signal_Tester_a);
					// InputPin object
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setName("object");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object->setType(SingleDelegation_P_P_Signal_Tester);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setObject(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
					// OutputPin result
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setName("result");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result->setType(SingleDelegation_P_P_Signal_A);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a->setResult(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addNode(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a);
				// CallOperationAction Call test()
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_->setName("Call test()");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_->setOperation(SingleDelegation_P_P_Signal_Tester_test);
					// InputPin target
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target->setName("target");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target->setType(SingleDelegation_P_P_Signal_Tester);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_->setTarget(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addNode(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_);
				// ObjectFlow ObjectFlow46 from Fork this to t
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46->setName("ObjectFlow46");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46->setSource(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46->setTarget(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_t);
					// LiteralBoolean LiteralBoolean48
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean48->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean48);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean48->setName("LiteralBoolean48");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean48->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean48->setValue(true);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46->setGuard(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46_LiteralBoolean48);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow46);
				// ObjectFlow ObjectFlow76 from result to Fork this
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76->setName("ObjectFlow76");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76->setSource(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this_result);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76->setTarget(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
					// LiteralBoolean LiteralBoolean78
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76_LiteralBoolean78->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76_LiteralBoolean78);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76_LiteralBoolean78->setName("LiteralBoolean78");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76_LiteralBoolean78->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76_LiteralBoolean78->setValue(true);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76->setGuard(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76_LiteralBoolean78);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow76);
				// ObjectFlow ObjectFlow79 from Fork this to object
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79->setName("ObjectFlow79");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79->setSource(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79->setTarget(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_object);
					// LiteralBoolean LiteralBoolean80
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79_LiteralBoolean80->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79_LiteralBoolean80);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79_LiteralBoolean80->setName("LiteralBoolean80");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79_LiteralBoolean80->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79_LiteralBoolean80->setValue(true);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79->setGuard(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79_LiteralBoolean80);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow79);
				// ObjectFlow ObjectFlow49 from result to v
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49->setName("ObjectFlow49");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49->setSource(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Int_4_result);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49->setTarget(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_v);
					// LiteralBoolean LiteralBoolean51
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49_LiteralBoolean51->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49_LiteralBoolean51);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49_LiteralBoolean51->setName("LiteralBoolean51");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49_LiteralBoolean51->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49_LiteralBoolean51->setValue(true);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49->setGuard(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49_LiteralBoolean51);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow49);
				// ObjectFlow ObjectFlow52 from Fork this to target
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52->setName("ObjectFlow52");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52->setSource(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Fork_this);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52->setTarget(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test__target);
					// LiteralBoolean LiteralBoolean54
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52_LiteralBoolean54->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52_LiteralBoolean54);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52_LiteralBoolean54->setName("LiteralBoolean54");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52_LiteralBoolean54->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52_LiteralBoolean54->setValue(true);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52->setGuard(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52_LiteralBoolean54);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow52);
				// ObjectFlow ObjectFlow82 from result to object
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82->setName("ObjectFlow82");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82->setSource(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_this_a_result);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82->setTarget(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_object);
					// LiteralBoolean LiteralBoolean84
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82_LiteralBoolean84->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82_LiteralBoolean84);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82_LiteralBoolean84->setName("LiteralBoolean84");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82_LiteralBoolean84->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82_LiteralBoolean84->setValue(true);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82->setGuard(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82_LiteralBoolean84);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow82);
				// ObjectFlow ObjectFlow85 from result to target
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85->setName("ObjectFlow85");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85->setSource(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Read_a_q_result);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85->setTarget(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior__Send_S_target);
					// LiteralBoolean LiteralBoolean86
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85_LiteralBoolean86->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85_LiteralBoolean86);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85_LiteralBoolean86->setName("LiteralBoolean86");
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85_LiteralBoolean86->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85_LiteralBoolean86->setValue(true);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85->setGuard(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85_LiteralBoolean86);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ObjectFlow85);
				// ControlFlow ControlFlow88 from Accept Start to this
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow88->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow88);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow88->setName("ControlFlow88");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow88->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow88->setSource(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow88->setTarget(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_this);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow88);
				// ControlFlow ControlFlow89 from Initial to Accept Start
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow89->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow89);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow89->setName("ControlFlow89");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow89->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow89->setSource(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Initial);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow89->setTarget(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Start);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow89);
				// ControlFlow ControlFlow94 from Accept Continue to Call test()
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow94->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow94);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow94->setName("ControlFlow94");
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow94->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow94->setSource(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Accept_Continue);
				SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow94->setTarget(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_Call_test_);
			SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior->addEdge(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior_ControlFlow94);
		SingleDelegation_P_P_Signal_Tester->addOwnedBehavior(SingleDelegation_P_P_Signal_Tester_TesterClassifierBehavior);
			// Activity testActivity
			SingleDelegation_P_P_Signal_Tester_testActivity->setThisActivityPtr(SingleDelegation_P_P_Signal_Tester_testActivity);
			SingleDelegation_P_P_Signal_Tester_testActivity->setName("testActivity");
			SingleDelegation_P_P_Signal_Tester_testActivity->setVisibility(VisibilityKind::public_);
			// FunctionBehavior testP
				SingleDelegation_P_P_Signal_Tester_testActivity_testP->setThisClass_Ptr(SingleDelegation_P_P_Signal_Tester_testActivity_testP);
				SingleDelegation_P_P_Signal_Tester_testActivity_testP->setName("testP");
				SingleDelegation_P_P_Signal_Tester_testActivity_testP->setVisibility(VisibilityKind::public_);
				
					// Parameter p
					SingleDelegation_P_P_Signal_Tester_testActivity_testP_p->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_testP_p);
					SingleDelegation_P_P_Signal_Tester_testActivity_testP_p->setName("p");
					SingleDelegation_P_P_Signal_Tester_testActivity_testP_p->setVisibility(VisibilityKind::public_);
					
					SingleDelegation_P_P_Signal_Tester_testActivity_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				SingleDelegation_P_P_Signal_Tester_testActivity_testP->addOwnedParameter(SingleDelegation_P_P_Signal_Tester_testActivity_testP_p);
				SingleDelegation_P_P_Signal_Tester_testActivity_testP->addLanguage("C++");
				SingleDelegation_P_P_Signal_Tester_testActivity_testP->addLanguage("Include");
				SingleDelegation_P_P_Signal_Tester_testActivity_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	std::cout<<\"Asserting a.b.p == 4\"<<std::endl;  	// Test parameter p 	int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 	std::cout << \"a.b.p == \" << std::to_string(p) <<std::endl; 	std::cout<<\"Signal delegated to classifier behavior: \"; 	 	if(p == 4) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 	}");
				SingleDelegation_P_P_Signal_Tester_testActivity_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
			SingleDelegation_P_P_Signal_Tester_testActivity->addOwnedBehavior(SingleDelegation_P_P_Signal_Tester_testActivity_testP);
				// ReadSelfAction this
				SingleDelegation_P_P_Signal_Tester_testActivity_this->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_testActivity_this);
				SingleDelegation_P_P_Signal_Tester_testActivity_this->setName("this");
				SingleDelegation_P_P_Signal_Tester_testActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					SingleDelegation_P_P_Signal_Tester_testActivity_this_result->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_this_result);
					SingleDelegation_P_P_Signal_Tester_testActivity_this_result->setName("result");
					SingleDelegation_P_P_Signal_Tester_testActivity_this_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_this_result->setType(SingleDelegation_P_P_Signal_Tester);
				SingleDelegation_P_P_Signal_Tester_testActivity_this->setResult(SingleDelegation_P_P_Signal_Tester_testActivity_this_result);
			SingleDelegation_P_P_Signal_Tester_testActivity->addNode(SingleDelegation_P_P_Signal_Tester_testActivity_this);
				// ReadStructuralFeatureAction Read a.b
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b);
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b->setName("Read a.b");
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b->setStructuralFeature(SingleDelegation_P_P_Signal_A_b);
					// InputPin object
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object->setName("object");
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object->setType(SingleDelegation_P_P_Signal_A);
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b->setObject(SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object);
					// OutputPin result
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result->setName("result");
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result->setType(SingleDelegation_P_P_Signal_B);
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b->setResult(SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result);
			SingleDelegation_P_P_Signal_Tester_testActivity->addNode(SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b);
				// ReadStructuralFeatureAction Read this.a
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a);
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a->setName("Read this.a");
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a->setStructuralFeature(SingleDelegation_P_P_Signal_Tester_a);
					// InputPin object
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object->setName("object");
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object->setType(SingleDelegation_P_P_Signal_Tester);
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a->setObject(SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object);
					// OutputPin result
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result->setName("result");
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result->setType(SingleDelegation_P_P_Signal_A);
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a->setResult(SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result);
			SingleDelegation_P_P_Signal_Tester_testActivity->addNode(SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a);
				// CallBehaviorAction WriteLine(EndMessage)
				SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage);
				SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage->setName("WriteLine(EndMessage)");
				SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus);
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus->setName("errorStatus");
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus->setLower(0);
				SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage->addResult(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_errorStatus);
				SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value);
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value->setName("value");
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage->addArgument(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value);
			SingleDelegation_P_P_Signal_Tester_testActivity->addNode(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage);
				// ValueSpecificationAction InitialMessage
				SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage);
				SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage->setName("InitialMessage");
				SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString112
					SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_LiteralString112->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_LiteralString112);
					SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_LiteralString112->setName("LiteralString112");
					SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_LiteralString112->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_LiteralString112->setValue("-- Running test case: Single delegation connector - Signal delegated from port to part --");
				SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage->setValue(SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_LiteralString112);
					// OutputPin result
					SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result);
					SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result->setName("result");
					SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage->setResult(SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result);
			SingleDelegation_P_P_Signal_Tester_testActivity->addNode(SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage);
				// ValueSpecificationAction EndMessage
				SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage);
				SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage->setName("EndMessage");
				SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage->setVisibility(VisibilityKind::public_);
					// LiteralString LiteralString115
					SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_LiteralString115->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_LiteralString115);
					SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_LiteralString115->setName("LiteralString115");
					SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_LiteralString115->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_LiteralString115->setValue("-- End of test case --");
				SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage->setValue(SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_LiteralString115);
					// OutputPin result
					SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result);
					SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result->setName("result");
					SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage->setResult(SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result);
			SingleDelegation_P_P_Signal_Tester_testActivity->addNode(SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage);
				// ReadStructuralFeatureAction Read b.p
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p);
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p->setName("Read b.p");
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p->setStructuralFeature(SingleDelegation_P_P_Signal_B_p);
					// InputPin object
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object->setName("object");
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object->setType(SingleDelegation_P_P_Signal_B);
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p->setObject(SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object);
					// OutputPin result
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result->setName("result");
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p->setResult(SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result);
			SingleDelegation_P_P_Signal_Tester_testActivity->addNode(SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p);
				// CallBehaviorAction Call testP
				SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP);
				SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP->setName("Call testP");
				SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP->setBehavior(SingleDelegation_P_P_Signal_Tester_testActivity_testP);
					// InputPin p
					SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p);
					SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p->setName("p");
					SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP->addArgument(SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p);
			SingleDelegation_P_P_Signal_Tester_testActivity->addNode(SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP);
				// CallBehaviorAction WriteLine(InitialMessage)
				SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage);
				SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage->setName("WriteLine(InitialMessage)");
				SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage->setVisibility(VisibilityKind::public_);
				
					// OutputPin errorStatus
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus);
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus->setName("errorStatus");
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus->setType(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_Common_Status);
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus->setLower(0);
				SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage->addResult(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_errorStatus);
				SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage->setBehavior(FoundationalModelLibraryModel::Instance()->FoundationalModelLibrary_BasicInputOutput_WriteLine);
					// InputPin value
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value);
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value->setName("value");
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_String);
				SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage->addArgument(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value);
			SingleDelegation_P_P_Signal_Tester_testActivity->addNode(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage);
				// ControlFlow ControlFlow119 from WriteLine(InitialMessage) to this
				SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow119->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow119);
				SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow119->setName("ControlFlow119");
				SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow119->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow119->setSource(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage);
				SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow119->setTarget(SingleDelegation_P_P_Signal_Tester_testActivity_this);
			SingleDelegation_P_P_Signal_Tester_testActivity->addEdge(SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow119);
				// ControlFlow ControlFlow97 from Call testP to WriteLine(EndMessage)
				SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow97->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow97);
				SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow97->setName("ControlFlow97");
				SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow97->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow97->setSource(SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP);
				SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow97->setTarget(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage);
			SingleDelegation_P_P_Signal_Tester_testActivity->addEdge(SingleDelegation_P_P_Signal_Tester_testActivity_ControlFlow97);
				// ObjectFlow ObjectFlow120 from result to value
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120->setName("ObjectFlow120");
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120->setSource(SingleDelegation_P_P_Signal_Tester_testActivity_InitialMessage_result);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120->setTarget(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_InitialMessage_value);
					// LiteralBoolean LiteralBoolean121
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120_LiteralBoolean121->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120_LiteralBoolean121);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120_LiteralBoolean121->setName("LiteralBoolean121");
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120_LiteralBoolean121->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120_LiteralBoolean121->setValue(true);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120->setGuard(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120_LiteralBoolean121);
			SingleDelegation_P_P_Signal_Tester_testActivity->addEdge(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow120);
				// ObjectFlow ObjectFlow127 from result to p
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127->setName("ObjectFlow127");
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127->setSource(SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_result);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127->setTarget(SingleDelegation_P_P_Signal_Tester_testActivity_Call_testP_p);
					// LiteralBoolean LiteralBoolean129
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127_LiteralBoolean129->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127_LiteralBoolean129);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127_LiteralBoolean129->setName("LiteralBoolean129");
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127_LiteralBoolean129->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127_LiteralBoolean129->setValue(true);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127->setGuard(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127_LiteralBoolean129);
			SingleDelegation_P_P_Signal_Tester_testActivity->addEdge(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow127);
				// ObjectFlow ObjectFlow104 from result to value
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104->setName("ObjectFlow104");
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104->setSource(SingleDelegation_P_P_Signal_Tester_testActivity_EndMessage_result);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104->setTarget(SingleDelegation_P_P_Signal_Tester_testActivity_WriteLine_EndMessage_value);
					// LiteralBoolean LiteralBoolean106
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104_LiteralBoolean106->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104_LiteralBoolean106);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104_LiteralBoolean106->setName("LiteralBoolean106");
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104_LiteralBoolean106->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104_LiteralBoolean106->setValue(true);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104->setGuard(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104_LiteralBoolean106);
			SingleDelegation_P_P_Signal_Tester_testActivity->addEdge(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow104);
				// ObjectFlow ObjectFlow107 from result to object
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107->setName("ObjectFlow107");
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107->setSource(SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_result);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107->setTarget(SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_object);
					// LiteralBoolean LiteralBoolean109
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107_LiteralBoolean109->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107_LiteralBoolean109);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107_LiteralBoolean109->setName("LiteralBoolean109");
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107_LiteralBoolean109->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107_LiteralBoolean109->setValue(true);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107->setGuard(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107_LiteralBoolean109);
			SingleDelegation_P_P_Signal_Tester_testActivity->addEdge(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow107);
				// ObjectFlow ObjectFlow130 from result to object
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130->setName("ObjectFlow130");
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130->setSource(SingleDelegation_P_P_Signal_Tester_testActivity_Read_a_b_result);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130->setTarget(SingleDelegation_P_P_Signal_Tester_testActivity_Read_b_p_object);
					// LiteralBoolean LiteralBoolean132
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130_LiteralBoolean132->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130_LiteralBoolean132);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130_LiteralBoolean132->setName("LiteralBoolean132");
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130_LiteralBoolean132->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130_LiteralBoolean132->setValue(true);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130->setGuard(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130_LiteralBoolean132);
			SingleDelegation_P_P_Signal_Tester_testActivity->addEdge(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow130);
				// ObjectFlow ObjectFlow139 from result to object
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139->setName("ObjectFlow139");
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139->setSource(SingleDelegation_P_P_Signal_Tester_testActivity_this_result);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139->setTarget(SingleDelegation_P_P_Signal_Tester_testActivity_Read_this_a_object);
					// LiteralBoolean LiteralBoolean140
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139_LiteralBoolean140->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139_LiteralBoolean140);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139_LiteralBoolean140->setName("LiteralBoolean140");
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139_LiteralBoolean140->setVisibility(VisibilityKind::public_);
					SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139_LiteralBoolean140->setValue(true);
				SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139->setGuard(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139_LiteralBoolean140);
			SingleDelegation_P_P_Signal_Tester_testActivity->addEdge(SingleDelegation_P_P_Signal_Tester_testActivity_ObjectFlow139);
		SingleDelegation_P_P_Signal_Tester->addOwnedBehavior(SingleDelegation_P_P_Signal_Tester_testActivity);
		
		SingleDelegation_P_P_Signal_Tester->setIsActive(true);
			// Operation Tester_Tester
			SingleDelegation_P_P_Signal_Tester_Tester_Tester->setThisOperationPtr(SingleDelegation_P_P_Signal_Tester_Tester_Tester);
			SingleDelegation_P_P_Signal_Tester_Tester_Tester->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			SingleDelegation_P_P_Signal_Tester_Tester_Tester->setName("Tester_Tester");
			SingleDelegation_P_P_Signal_Tester_Tester_Tester->setVisibility(VisibilityKind::public_);
				// Parameter result
				SingleDelegation_P_P_Signal_Tester_Tester_Tester_result->setThisElementPtr(SingleDelegation_P_P_Signal_Tester_Tester_Tester_result);
				SingleDelegation_P_P_Signal_Tester_Tester_Tester_result->setName("result");
				SingleDelegation_P_P_Signal_Tester_Tester_Tester_result->setVisibility(VisibilityKind::public_);
				
				SingleDelegation_P_P_Signal_Tester_Tester_Tester_result->setType(SingleDelegation_P_P_Signal_Tester);
				SingleDelegation_P_P_Signal_Tester_Tester_Tester_result->setDirection(ParameterDirectionKind::return_);
			SingleDelegation_P_P_Signal_Tester_Tester_Tester->addOwnedParameter(SingleDelegation_P_P_Signal_Tester_Tester_Tester_result);
		SingleDelegation_P_P_Signal_Tester->addOwnedOperation(SingleDelegation_P_P_Signal_Tester_Tester_Tester);
			// Operation test
			SingleDelegation_P_P_Signal_Tester_test->setThisOperationPtr(SingleDelegation_P_P_Signal_Tester_test);
			SingleDelegation_P_P_Signal_Tester_test->setName("test");
			SingleDelegation_P_P_Signal_Tester_test->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Signal_Tester_test->addMethod(SingleDelegation_P_P_Signal_Tester_testActivity);
			SingleDelegation_P_P_Signal_Tester_test->addRedefinedOperation(SingleDelegation_P_P_Signal_AbstractTester_test);
		SingleDelegation_P_P_Signal_Tester->addOwnedOperation(SingleDelegation_P_P_Signal_Tester_test);
	SingleDelegation_P_P_Signal->addPackagedElement(SingleDelegation_P_P_Signal_Tester);
		// Class AbstractTester
		SingleDelegation_P_P_Signal_AbstractTester->setThisClass_Ptr(SingleDelegation_P_P_Signal_AbstractTester);
		SingleDelegation_P_P_Signal_AbstractTester->setName("AbstractTester");
		SingleDelegation_P_P_Signal_AbstractTester->setVisibility(VisibilityKind::public_);
		
		SingleDelegation_P_P_Signal_AbstractTester->setIsAbstract(true);
		
		
		SingleDelegation_P_P_Signal_AbstractTester->setIsActive(true);
			// Operation test
			SingleDelegation_P_P_Signal_AbstractTester_test->setThisOperationPtr(SingleDelegation_P_P_Signal_AbstractTester_test);
			SingleDelegation_P_P_Signal_AbstractTester_test->setName("test");
			SingleDelegation_P_P_Signal_AbstractTester_test->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Signal_AbstractTester_test->setIsAbstract(true);
		SingleDelegation_P_P_Signal_AbstractTester->addOwnedOperation(SingleDelegation_P_P_Signal_AbstractTester_test);
			// Reception Start
			SingleDelegation_P_P_Signal_AbstractTester_Start->setThisBehavioralFeaturePtr(SingleDelegation_P_P_Signal_AbstractTester_Start);
			SingleDelegation_P_P_Signal_AbstractTester_Start->setName("Start");
			SingleDelegation_P_P_Signal_AbstractTester_Start->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Signal_AbstractTester_Start->setSignal(SingleDelegation_P_P_Signal_Start);
		SingleDelegation_P_P_Signal_AbstractTester->addOwnedReception(SingleDelegation_P_P_Signal_AbstractTester_Start);
			// Reception Continue
			SingleDelegation_P_P_Signal_AbstractTester_Continue->setThisBehavioralFeaturePtr(SingleDelegation_P_P_Signal_AbstractTester_Continue);
			SingleDelegation_P_P_Signal_AbstractTester_Continue->setName("Continue");
			SingleDelegation_P_P_Signal_AbstractTester_Continue->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Signal_AbstractTester_Continue->setSignal(SingleDelegation_P_P_Signal_Continue);
		SingleDelegation_P_P_Signal_AbstractTester->addOwnedReception(SingleDelegation_P_P_Signal_AbstractTester_Continue);
	SingleDelegation_P_P_Signal->addPackagedElement(SingleDelegation_P_P_Signal_AbstractTester);
		// Activity main
		SingleDelegation_P_P_Signal_main->setThisActivityPtr(SingleDelegation_P_P_Signal_main);
		SingleDelegation_P_P_Signal_main->setName("main");
		SingleDelegation_P_P_Signal_main->setVisibility(VisibilityKind::public_);
			// CallOperationAction Tester()
			SingleDelegation_P_P_Signal_main_Tester_->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_main_Tester_);
			SingleDelegation_P_P_Signal_main_Tester_->setName("Tester()");
			SingleDelegation_P_P_Signal_main_Tester_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				SingleDelegation_P_P_Signal_main_Tester__result->setThisElementPtr(SingleDelegation_P_P_Signal_main_Tester__result);
				SingleDelegation_P_P_Signal_main_Tester__result->setName("result");
				SingleDelegation_P_P_Signal_main_Tester__result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_main_Tester__result->setType(SingleDelegation_P_P_Signal_Tester);
			SingleDelegation_P_P_Signal_main_Tester_->addResult(SingleDelegation_P_P_Signal_main_Tester__result);
			SingleDelegation_P_P_Signal_main_Tester_->setOperation(SingleDelegation_P_P_Signal_Tester_Tester_Tester);
				// InputPin target
				SingleDelegation_P_P_Signal_main_Tester__target->setThisElementPtr(SingleDelegation_P_P_Signal_main_Tester__target);
				SingleDelegation_P_P_Signal_main_Tester__target->setName("target");
				SingleDelegation_P_P_Signal_main_Tester__target->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_main_Tester__target->setType(SingleDelegation_P_P_Signal_Tester);
			SingleDelegation_P_P_Signal_main_Tester_->setTarget(SingleDelegation_P_P_Signal_main_Tester__target);
		SingleDelegation_P_P_Signal_main->addNode(SingleDelegation_P_P_Signal_main_Tester_);
			// CreateObjectAction Create Tester
			SingleDelegation_P_P_Signal_main_Create_Tester->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_main_Create_Tester);
			SingleDelegation_P_P_Signal_main_Create_Tester->setName("Create Tester");
			SingleDelegation_P_P_Signal_main_Create_Tester->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Signal_main_Create_Tester->setClassifier(SingleDelegation_P_P_Signal_Tester);
				// OutputPin result
				SingleDelegation_P_P_Signal_main_Create_Tester_result->setThisElementPtr(SingleDelegation_P_P_Signal_main_Create_Tester_result);
				SingleDelegation_P_P_Signal_main_Create_Tester_result->setName("result");
				SingleDelegation_P_P_Signal_main_Create_Tester_result->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_main_Create_Tester_result->setType(SingleDelegation_P_P_Signal_Tester);
			SingleDelegation_P_P_Signal_main_Create_Tester->setResult(SingleDelegation_P_P_Signal_main_Create_Tester_result);
		SingleDelegation_P_P_Signal_main->addNode(SingleDelegation_P_P_Signal_main_Create_Tester);
			// StartObjectBehaviorAction Start Tester
			SingleDelegation_P_P_Signal_main_Start_Tester->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_main_Start_Tester);
			SingleDelegation_P_P_Signal_main_Start_Tester->setName("Start Tester");
			SingleDelegation_P_P_Signal_main_Start_Tester->setVisibility(VisibilityKind::public_);
				// InputPin object
				SingleDelegation_P_P_Signal_main_Start_Tester_object->setThisElementPtr(SingleDelegation_P_P_Signal_main_Start_Tester_object);
				SingleDelegation_P_P_Signal_main_Start_Tester_object->setName("object");
				SingleDelegation_P_P_Signal_main_Start_Tester_object->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_main_Start_Tester_object->setType(SingleDelegation_P_P_Signal_Tester);
			SingleDelegation_P_P_Signal_main_Start_Tester->setObject(SingleDelegation_P_P_Signal_main_Start_Tester_object);
		SingleDelegation_P_P_Signal_main->addNode(SingleDelegation_P_P_Signal_main_Start_Tester);
			// SendSignalAction Send Start
			SingleDelegation_P_P_Signal_main_Send_Start->setThisExecutableNodePtr(SingleDelegation_P_P_Signal_main_Send_Start);
			SingleDelegation_P_P_Signal_main_Send_Start->setName("Send Start");
			SingleDelegation_P_P_Signal_main_Send_Start->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Signal_main_Send_Start->setSignal(SingleDelegation_P_P_Signal_Start);
				// InputPin target
				SingleDelegation_P_P_Signal_main_Send_Start_target->setThisElementPtr(SingleDelegation_P_P_Signal_main_Send_Start_target);
				SingleDelegation_P_P_Signal_main_Send_Start_target->setName("target");
				SingleDelegation_P_P_Signal_main_Send_Start_target->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_main_Send_Start_target->setType(SingleDelegation_P_P_Signal_Tester);
			SingleDelegation_P_P_Signal_main_Send_Start->setTarget(SingleDelegation_P_P_Signal_main_Send_Start_target);
		SingleDelegation_P_P_Signal_main->addNode(SingleDelegation_P_P_Signal_main_Send_Start);
			// ForkNode Fork Tester
			SingleDelegation_P_P_Signal_main_Fork_Tester->setThisElementPtr(SingleDelegation_P_P_Signal_main_Fork_Tester);
			SingleDelegation_P_P_Signal_main_Fork_Tester->setName("Fork Tester");
			SingleDelegation_P_P_Signal_main_Fork_Tester->setVisibility(VisibilityKind::public_);
		SingleDelegation_P_P_Signal_main->addNode(SingleDelegation_P_P_Signal_main_Fork_Tester);
			// ObjectFlow ObjectFlow158 from result to target
			SingleDelegation_P_P_Signal_main_ObjectFlow158->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_main_ObjectFlow158);
			SingleDelegation_P_P_Signal_main_ObjectFlow158->setName("ObjectFlow158");
			SingleDelegation_P_P_Signal_main_ObjectFlow158->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Signal_main_ObjectFlow158->setSource(SingleDelegation_P_P_Signal_main_Create_Tester_result);
			SingleDelegation_P_P_Signal_main_ObjectFlow158->setTarget(SingleDelegation_P_P_Signal_main_Tester__target);
				// LiteralBoolean LiteralBoolean159
				SingleDelegation_P_P_Signal_main_ObjectFlow158_LiteralBoolean159->setThisElementPtr(SingleDelegation_P_P_Signal_main_ObjectFlow158_LiteralBoolean159);
				SingleDelegation_P_P_Signal_main_ObjectFlow158_LiteralBoolean159->setName("LiteralBoolean159");
				SingleDelegation_P_P_Signal_main_ObjectFlow158_LiteralBoolean159->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_main_ObjectFlow158_LiteralBoolean159->setValue(true);
			SingleDelegation_P_P_Signal_main_ObjectFlow158->setGuard(SingleDelegation_P_P_Signal_main_ObjectFlow158_LiteralBoolean159);
		SingleDelegation_P_P_Signal_main->addEdge(SingleDelegation_P_P_Signal_main_ObjectFlow158);
			// ObjectFlow ObjectFlow163 from Fork Tester to object
			SingleDelegation_P_P_Signal_main_ObjectFlow163->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_main_ObjectFlow163);
			SingleDelegation_P_P_Signal_main_ObjectFlow163->setName("ObjectFlow163");
			SingleDelegation_P_P_Signal_main_ObjectFlow163->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Signal_main_ObjectFlow163->setSource(SingleDelegation_P_P_Signal_main_Fork_Tester);
			SingleDelegation_P_P_Signal_main_ObjectFlow163->setTarget(SingleDelegation_P_P_Signal_main_Start_Tester_object);
				// LiteralBoolean LiteralBoolean164
				SingleDelegation_P_P_Signal_main_ObjectFlow163_LiteralBoolean164->setThisElementPtr(SingleDelegation_P_P_Signal_main_ObjectFlow163_LiteralBoolean164);
				SingleDelegation_P_P_Signal_main_ObjectFlow163_LiteralBoolean164->setName("LiteralBoolean164");
				SingleDelegation_P_P_Signal_main_ObjectFlow163_LiteralBoolean164->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_main_ObjectFlow163_LiteralBoolean164->setValue(true);
			SingleDelegation_P_P_Signal_main_ObjectFlow163->setGuard(SingleDelegation_P_P_Signal_main_ObjectFlow163_LiteralBoolean164);
		SingleDelegation_P_P_Signal_main->addEdge(SingleDelegation_P_P_Signal_main_ObjectFlow163);
			// ControlFlow ControlFlow166 from Start Tester to Send Start
			SingleDelegation_P_P_Signal_main_ControlFlow166->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_main_ControlFlow166);
			SingleDelegation_P_P_Signal_main_ControlFlow166->setName("ControlFlow166");
			SingleDelegation_P_P_Signal_main_ControlFlow166->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Signal_main_ControlFlow166->setSource(SingleDelegation_P_P_Signal_main_Start_Tester);
			SingleDelegation_P_P_Signal_main_ControlFlow166->setTarget(SingleDelegation_P_P_Signal_main_Send_Start);
		SingleDelegation_P_P_Signal_main->addEdge(SingleDelegation_P_P_Signal_main_ControlFlow166);
			// ObjectFlow ObjectFlow167 from result to Fork Tester
			SingleDelegation_P_P_Signal_main_ObjectFlow167->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_main_ObjectFlow167);
			SingleDelegation_P_P_Signal_main_ObjectFlow167->setName("ObjectFlow167");
			SingleDelegation_P_P_Signal_main_ObjectFlow167->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Signal_main_ObjectFlow167->setSource(SingleDelegation_P_P_Signal_main_Tester__result);
			SingleDelegation_P_P_Signal_main_ObjectFlow167->setTarget(SingleDelegation_P_P_Signal_main_Fork_Tester);
				// LiteralBoolean LiteralBoolean169
				SingleDelegation_P_P_Signal_main_ObjectFlow167_LiteralBoolean169->setThisElementPtr(SingleDelegation_P_P_Signal_main_ObjectFlow167_LiteralBoolean169);
				SingleDelegation_P_P_Signal_main_ObjectFlow167_LiteralBoolean169->setName("LiteralBoolean169");
				SingleDelegation_P_P_Signal_main_ObjectFlow167_LiteralBoolean169->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_main_ObjectFlow167_LiteralBoolean169->setValue(true);
			SingleDelegation_P_P_Signal_main_ObjectFlow167->setGuard(SingleDelegation_P_P_Signal_main_ObjectFlow167_LiteralBoolean169);
		SingleDelegation_P_P_Signal_main->addEdge(SingleDelegation_P_P_Signal_main_ObjectFlow167);
			// ObjectFlow ObjectFlow174 from Fork Tester to target
			SingleDelegation_P_P_Signal_main_ObjectFlow174->setThisActivityEdgePtr(SingleDelegation_P_P_Signal_main_ObjectFlow174);
			SingleDelegation_P_P_Signal_main_ObjectFlow174->setName("ObjectFlow174");
			SingleDelegation_P_P_Signal_main_ObjectFlow174->setVisibility(VisibilityKind::public_);
			
			SingleDelegation_P_P_Signal_main_ObjectFlow174->setSource(SingleDelegation_P_P_Signal_main_Fork_Tester);
			SingleDelegation_P_P_Signal_main_ObjectFlow174->setTarget(SingleDelegation_P_P_Signal_main_Send_Start_target);
				// LiteralBoolean LiteralBoolean175
				SingleDelegation_P_P_Signal_main_ObjectFlow174_LiteralBoolean175->setThisElementPtr(SingleDelegation_P_P_Signal_main_ObjectFlow174_LiteralBoolean175);
				SingleDelegation_P_P_Signal_main_ObjectFlow174_LiteralBoolean175->setName("LiteralBoolean175");
				SingleDelegation_P_P_Signal_main_ObjectFlow174_LiteralBoolean175->setVisibility(VisibilityKind::public_);
				SingleDelegation_P_P_Signal_main_ObjectFlow174_LiteralBoolean175->setValue(true);
			SingleDelegation_P_P_Signal_main_ObjectFlow174->setGuard(SingleDelegation_P_P_Signal_main_ObjectFlow174_LiteralBoolean175);
		SingleDelegation_P_P_Signal_main->addEdge(SingleDelegation_P_P_Signal_main_ObjectFlow174);
	SingleDelegation_P_P_Signal->addPackagedElement(SingleDelegation_P_P_Signal_main);
		// Interface I
		SingleDelegation_P_P_Signal_I->setThisInterfacePtr(SingleDelegation_P_P_Signal_I);
		SingleDelegation_P_P_Signal_I->setName("I");
		SingleDelegation_P_P_Signal_I->setVisibility(VisibilityKind::public_);
			// Reception S
			SingleDelegation_P_P_Signal_I_S->setThisBehavioralFeaturePtr(SingleDelegation_P_P_Signal_I_S);
			SingleDelegation_P_P_Signal_I_S->setName("S");
			SingleDelegation_P_P_Signal_I_S->setVisibility(VisibilityKind::public_);
			SingleDelegation_P_P_Signal_I_S->setSignal(SingleDelegation_P_P_Signal_S);
		SingleDelegation_P_P_Signal_I->addOwnedReception(SingleDelegation_P_P_Signal_I_S);
	SingleDelegation_P_P_Signal->addPackagedElement(SingleDelegation_P_P_Signal_I);
		// SignalEvent SignalEventStart
		SingleDelegation_P_P_Signal_SignalEventStart->setThisElementPtr(SingleDelegation_P_P_Signal_SignalEventStart);
		SingleDelegation_P_P_Signal_SignalEventStart->setName("SignalEventStart");
		SingleDelegation_P_P_Signal_SignalEventStart->setVisibility(VisibilityKind::public_);
		SingleDelegation_P_P_Signal_SignalEventStart->setSignal(SingleDelegation_P_P_Signal_Start);
	SingleDelegation_P_P_Signal->addPackagedElement(SingleDelegation_P_P_Signal_SignalEventStart);
}
