/*
 * RemovingInstanceFromPortModel.cpp
 * 
 * Auto-generated file
 */

#include "RemovingInstanceFromPortModel.h"

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/actions/CallBehaviorAction.h>
#include <uml/activities/Activity.h>
#include <uml/activities/ObjectFlow.h>
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
#include <uml/simpleclassifiers/Interface.h>
#include <uml/structuredclassifiers/ConnectorEnd.h>
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
#include <uml/actions/ClearStructuralFeatureAction.h>
#include <uml/structuredclassifiers/Class_.h>


/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace RemovingInstanceFromPort;
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

RemovingInstanceFromPortModel::RemovingInstanceFromPortModel()
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

RemovingInstanceFromPortModel::~RemovingInstanceFromPortModel()
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

const std::shared_ptr<RemovingInstanceFromPortModel>& RemovingInstanceFromPortModel::Instance()
{
	static std::shared_ptr<RemovingInstanceFromPortModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new RemovingInstanceFromPortModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void RemovingInstanceFromPortModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model RemovingInstanceFromPort
	 */
	RemovingInstanceFromPort.reset(new Package());
	this->addToElementRepository("RemovingInstanceFromPort", RemovingInstanceFromPort);
		RemovingInstanceFromPort_B.reset(new Class_());
		this->addToElementRepository("B", RemovingInstanceFromPort_B);
			RemovingInstanceFromPort_B_B_B.reset(new Operation());
			this->addToElementRepository("B_B", RemovingInstanceFromPort_B_B_B);
				RemovingInstanceFromPort_B_B_B_result.reset(new Parameter());
				this->addToElementRepository("result", RemovingInstanceFromPort_B_B_B_result);
			RemovingInstanceFromPort_B_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", RemovingInstanceFromPort_B_setPActivity);
				RemovingInstanceFromPort_B_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", RemovingInstanceFromPort_B_setPActivity_vParameterNode);
					RemovingInstanceFromPort_B_setPActivity_vParameterNode_LiteralInteger0.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger0", RemovingInstanceFromPort_B_setPActivity_vParameterNode_LiteralInteger0);
				RemovingInstanceFromPort_B_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", RemovingInstanceFromPort_B_setPActivity_this);
					RemovingInstanceFromPort_B_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", RemovingInstanceFromPort_B_setPActivity_this_result);
						RemovingInstanceFromPort_B_setPActivity_this_result_LiteralUnlimitedNatural1.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural1", RemovingInstanceFromPort_B_setPActivity_this_result_LiteralUnlimitedNatural1);
						RemovingInstanceFromPort_B_setPActivity_this_result_LiteralInteger2.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger2", RemovingInstanceFromPort_B_setPActivity_this_result_LiteralInteger2);
				RemovingInstanceFromPort_B_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", RemovingInstanceFromPort_B_setPActivity_v);
				RemovingInstanceFromPort_B_setPActivity_ObjectFlow3.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow3", RemovingInstanceFromPort_B_setPActivity_ObjectFlow3);
					RemovingInstanceFromPort_B_setPActivity_ObjectFlow3_LiteralBoolean4.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean4", RemovingInstanceFromPort_B_setPActivity_ObjectFlow3_LiteralBoolean4);
					RemovingInstanceFromPort_B_setPActivity_ObjectFlow3_LiteralInteger5.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger5", RemovingInstanceFromPort_B_setPActivity_ObjectFlow3_LiteralInteger5);
				RemovingInstanceFromPort_B_setPActivity_ObjectFlow6.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow6", RemovingInstanceFromPort_B_setPActivity_ObjectFlow6);
					RemovingInstanceFromPort_B_setPActivity_ObjectFlow6_LiteralBoolean7.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean7", RemovingInstanceFromPort_B_setPActivity_ObjectFlow6_LiteralBoolean7);
					RemovingInstanceFromPort_B_setPActivity_ObjectFlow6_LiteralInteger8.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger8", RemovingInstanceFromPort_B_setPActivity_ObjectFlow6_LiteralInteger8);
				RemovingInstanceFromPort_B_setPActivity_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", RemovingInstanceFromPort_B_setPActivity_Set_this_p);
					RemovingInstanceFromPort_B_setPActivity_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", RemovingInstanceFromPort_B_setPActivity_Set_this_p_result);
						RemovingInstanceFromPort_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural9.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural9", RemovingInstanceFromPort_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural9);
						RemovingInstanceFromPort_B_setPActivity_Set_this_p_result_LiteralInteger10.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger10", RemovingInstanceFromPort_B_setPActivity_Set_this_p_result_LiteralInteger10);
					RemovingInstanceFromPort_B_setPActivity_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", RemovingInstanceFromPort_B_setPActivity_Set_this_p_value);
						RemovingInstanceFromPort_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural11.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural11", RemovingInstanceFromPort_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural11);
						RemovingInstanceFromPort_B_setPActivity_Set_this_p_value_LiteralInteger12.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger12", RemovingInstanceFromPort_B_setPActivity_Set_this_p_value_LiteralInteger12);
					RemovingInstanceFromPort_B_setPActivity_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", RemovingInstanceFromPort_B_setPActivity_Set_this_p_object);
						RemovingInstanceFromPort_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural13", RemovingInstanceFromPort_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural13);
						RemovingInstanceFromPort_B_setPActivity_Set_this_p_object_LiteralInteger14.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger14", RemovingInstanceFromPort_B_setPActivity_Set_this_p_object_LiteralInteger14);
			RemovingInstanceFromPort_B_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", RemovingInstanceFromPort_B_setP_Integer);
				RemovingInstanceFromPort_B_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", RemovingInstanceFromPort_B_setP_Integer_v);
			RemovingInstanceFromPort_B_p.reset(new Property());
			this->addToElementRepository("p", RemovingInstanceFromPort_B_p);
			RemovingInstanceFromPort_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", RemovingInstanceFromPort_B_IRealization);
		RemovingInstanceFromPort_assertA.reset(new Activity());
		this->addToElementRepository("assertA", RemovingInstanceFromPort_assertA);
			RemovingInstanceFromPort_assertA_aParameterNode.reset(new ActivityParameterNode());
			this->addToElementRepository("aParameterNode", RemovingInstanceFromPort_assertA_aParameterNode);
				RemovingInstanceFromPort_assertA_aParameterNode_LiteralInteger15.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger15", RemovingInstanceFromPort_assertA_aParameterNode_LiteralInteger15);
			RemovingInstanceFromPort_assertA_assertionNotImplemented.reset(new OpaqueBehavior());
			this->addToElementRepository("assertionNotImplemented", RemovingInstanceFromPort_assertA_assertionNotImplemented);
			RemovingInstanceFromPort_assertA_a.reset(new Parameter());
			this->addToElementRepository("a", RemovingInstanceFromPort_assertA_a);
			RemovingInstanceFromPort_assertA_Call_assertionNotImplemented.reset(new CallBehaviorAction());
			this->addToElementRepository("Call assertionNotImplemented", RemovingInstanceFromPort_assertA_Call_assertionNotImplemented);
		RemovingInstanceFromPort_I.reset(new Interface());
		this->addToElementRepository("I", RemovingInstanceFromPort_I);
			RemovingInstanceFromPort_I_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", RemovingInstanceFromPort_I_setP_Integer);
				RemovingInstanceFromPort_I_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", RemovingInstanceFromPort_I_setP_Integer_v);
		RemovingInstanceFromPort_main.reset(new Activity());
		this->addToElementRepository("main", RemovingInstanceFromPort_main);
			RemovingInstanceFromPort_main_ObjectFlow16.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow16", RemovingInstanceFromPort_main_ObjectFlow16);
				RemovingInstanceFromPort_main_ObjectFlow16_LiteralBoolean17.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean17", RemovingInstanceFromPort_main_ObjectFlow16_LiteralBoolean17);
				RemovingInstanceFromPort_main_ObjectFlow16_LiteralInteger18.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger18", RemovingInstanceFromPort_main_ObjectFlow16_LiteralInteger18);
			RemovingInstanceFromPort_main_Clear_a_q.reset(new ClearStructuralFeatureAction());
			this->addToElementRepository("Clear a.q", RemovingInstanceFromPort_main_Clear_a_q);
				RemovingInstanceFromPort_main_Clear_a_q_result.reset(new OutputPin());
				this->addToElementRepository("result", RemovingInstanceFromPort_main_Clear_a_q_result);
				RemovingInstanceFromPort_main_Clear_a_q_object.reset(new InputPin());
				this->addToElementRepository("object", RemovingInstanceFromPort_main_Clear_a_q_object);
			RemovingInstanceFromPort_main_Create_A.reset(new CreateObjectAction());
			this->addToElementRepository("Create A", RemovingInstanceFromPort_main_Create_A);
				RemovingInstanceFromPort_main_Create_A_result.reset(new OutputPin());
				this->addToElementRepository("result", RemovingInstanceFromPort_main_Create_A_result);
					RemovingInstanceFromPort_main_Create_A_result_LiteralInteger19.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger19", RemovingInstanceFromPort_main_Create_A_result_LiteralInteger19);
					RemovingInstanceFromPort_main_Create_A_result_LiteralUnlimitedNatural20.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural20", RemovingInstanceFromPort_main_Create_A_result_LiteralUnlimitedNatural20);
			RemovingInstanceFromPort_main_ObjectFlow21.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow21", RemovingInstanceFromPort_main_ObjectFlow21);
				RemovingInstanceFromPort_main_ObjectFlow21_LiteralBoolean22.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean22", RemovingInstanceFromPort_main_ObjectFlow21_LiteralBoolean22);
				RemovingInstanceFromPort_main_ObjectFlow21_LiteralInteger23.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger23", RemovingInstanceFromPort_main_ObjectFlow21_LiteralInteger23);
			RemovingInstanceFromPort_main_ObjectFlow24.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow24", RemovingInstanceFromPort_main_ObjectFlow24);
				RemovingInstanceFromPort_main_ObjectFlow24_LiteralInteger25.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger25", RemovingInstanceFromPort_main_ObjectFlow24_LiteralInteger25);
				RemovingInstanceFromPort_main_ObjectFlow24_LiteralBoolean26.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean26", RemovingInstanceFromPort_main_ObjectFlow24_LiteralBoolean26);
			RemovingInstanceFromPort_main_Call_assertA.reset(new CallBehaviorAction());
			this->addToElementRepository("Call assertA", RemovingInstanceFromPort_main_Call_assertA);
				RemovingInstanceFromPort_main_Call_assertA_a.reset(new InputPin());
				this->addToElementRepository("a", RemovingInstanceFromPort_main_Call_assertA_a);
					RemovingInstanceFromPort_main_Call_assertA_a_LiteralInteger27.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger27", RemovingInstanceFromPort_main_Call_assertA_a_LiteralInteger27);
					RemovingInstanceFromPort_main_Call_assertA_a_LiteralInteger28.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger28", RemovingInstanceFromPort_main_Call_assertA_a_LiteralInteger28);
					RemovingInstanceFromPort_main_Call_assertA_a_LiteralUnlimitedNatural29.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural29", RemovingInstanceFromPort_main_Call_assertA_a_LiteralUnlimitedNatural29);
			RemovingInstanceFromPort_main_A_.reset(new CallOperationAction());
			this->addToElementRepository("A()", RemovingInstanceFromPort_main_A_);
				RemovingInstanceFromPort_main_A__target.reset(new InputPin());
				this->addToElementRepository("target", RemovingInstanceFromPort_main_A__target);
					RemovingInstanceFromPort_main_A__target_LiteralUnlimitedNatural30.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural30", RemovingInstanceFromPort_main_A__target_LiteralUnlimitedNatural30);
					RemovingInstanceFromPort_main_A__target_LiteralInteger31.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger31", RemovingInstanceFromPort_main_A__target_LiteralInteger31);
				RemovingInstanceFromPort_main_A__result.reset(new OutputPin());
				this->addToElementRepository("result", RemovingInstanceFromPort_main_A__result);
					RemovingInstanceFromPort_main_A__result_LiteralInteger32.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger32", RemovingInstanceFromPort_main_A__result_LiteralInteger32);
					RemovingInstanceFromPort_main_A__result_LiteralInteger33.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger33", RemovingInstanceFromPort_main_A__result_LiteralInteger33);
					RemovingInstanceFromPort_main_A__result_LiteralUnlimitedNatural34.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural34", RemovingInstanceFromPort_main_A__result_LiteralUnlimitedNatural34);
		RemovingInstanceFromPort_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", RemovingInstanceFromPort_IImpl);
			RemovingInstanceFromPort_IImpl_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", RemovingInstanceFromPort_IImpl_setP_Integer);
				RemovingInstanceFromPort_IImpl_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", RemovingInstanceFromPort_IImpl_setP_Integer_v);
			RemovingInstanceFromPort_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", RemovingInstanceFromPort_IImpl_IRealization);
		RemovingInstanceFromPort_A.reset(new Class_());
		this->addToElementRepository("A", RemovingInstanceFromPort_A);
			RemovingInstanceFromPort_A_q.reset(new Port());
			this->addToElementRepository("q", RemovingInstanceFromPort_A_q);
			RemovingInstanceFromPort_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", RemovingInstanceFromPort_A_A_A);
				RemovingInstanceFromPort_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", RemovingInstanceFromPort_A_A_A_result);
			RemovingInstanceFromPort_A_r.reset(new Connector());
			this->addToElementRepository("r", RemovingInstanceFromPort_A_r);
				RemovingInstanceFromPort_A_r_ConnectorEnd35.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd35", RemovingInstanceFromPort_A_r_ConnectorEnd35);
				RemovingInstanceFromPort_A_r_ConnectorEnd36.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd36", RemovingInstanceFromPort_A_r_ConnectorEnd36);
			RemovingInstanceFromPort_A_b.reset(new Property());
			this->addToElementRepository("b", RemovingInstanceFromPort_A_b);
		RemovingInstanceFromPort_R.reset(new Association());
		this->addToElementRepository("R", RemovingInstanceFromPort_R);
			RemovingInstanceFromPort_R_y.reset(new Property());
			this->addToElementRepository("y", RemovingInstanceFromPort_R_y);
			RemovingInstanceFromPort_R_x.reset(new Property());
			this->addToElementRepository("x", RemovingInstanceFromPort_R_x);

	// Initialize public members
	/*
	 * Model RemovingInstanceFromPort
	 */
	RemovingInstanceFromPort->setThisPackagePtr(RemovingInstanceFromPort);
	RemovingInstanceFromPort->setName("RemovingInstanceFromPort");
	RemovingInstanceFromPort->setVisibility(VisibilityKind::public_);
		// Class B
		RemovingInstanceFromPort_B->setThisClass_Ptr(RemovingInstanceFromPort_B);
		RemovingInstanceFromPort_B->setName("B");
		RemovingInstanceFromPort_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			RemovingInstanceFromPort_B_p->setThisElementPtr(RemovingInstanceFromPort_B_p);
			RemovingInstanceFromPort_B_p->setName("p");
			RemovingInstanceFromPort_B_p->setVisibility(VisibilityKind::public_);
			
			RemovingInstanceFromPort_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		RemovingInstanceFromPort_B->addOwnedAttribute(RemovingInstanceFromPort_B_p);
		// Activity setPActivity
			RemovingInstanceFromPort_B_setPActivity->setThisActivityPtr(RemovingInstanceFromPort_B_setPActivity);
			RemovingInstanceFromPort_B_setPActivity->setName("setPActivity");
			RemovingInstanceFromPort_B_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				RemovingInstanceFromPort_B_setPActivity_v->setThisElementPtr(RemovingInstanceFromPort_B_setPActivity_v);
				RemovingInstanceFromPort_B_setPActivity_v->setName("v");
				RemovingInstanceFromPort_B_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPort_B_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			RemovingInstanceFromPort_B_setPActivity->addOwnedParameter(RemovingInstanceFromPort_B_setPActivity_v);
				// ActivityParameterNode vParameterNode
				RemovingInstanceFromPort_B_setPActivity_vParameterNode->setThisElementPtr(RemovingInstanceFromPort_B_setPActivity_vParameterNode);
				RemovingInstanceFromPort_B_setPActivity_vParameterNode->setName("vParameterNode");
				RemovingInstanceFromPort_B_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPort_B_setPActivity_vParameterNode->setParameter(RemovingInstanceFromPort_B_setPActivity_v);
			RemovingInstanceFromPort_B_setPActivity->addNode(RemovingInstanceFromPort_B_setPActivity_vParameterNode);
				// ReadSelfAction this
				RemovingInstanceFromPort_B_setPActivity_this->setThisExecutableNodePtr(RemovingInstanceFromPort_B_setPActivity_this);
				RemovingInstanceFromPort_B_setPActivity_this->setName("this");
				RemovingInstanceFromPort_B_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					RemovingInstanceFromPort_B_setPActivity_this_result->setThisElementPtr(RemovingInstanceFromPort_B_setPActivity_this_result);
					RemovingInstanceFromPort_B_setPActivity_this_result->setName("result");
					RemovingInstanceFromPort_B_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					RemovingInstanceFromPort_B_setPActivity_this_result->setType(RemovingInstanceFromPort_B);
				RemovingInstanceFromPort_B_setPActivity_this->setResult(RemovingInstanceFromPort_B_setPActivity_this_result);
			RemovingInstanceFromPort_B_setPActivity->addNode(RemovingInstanceFromPort_B_setPActivity_this);
				// AddStructuralFeatureValueAction Set this.p
				RemovingInstanceFromPort_B_setPActivity_Set_this_p->setThisExecutableNodePtr(RemovingInstanceFromPort_B_setPActivity_Set_this_p);
				RemovingInstanceFromPort_B_setPActivity_Set_this_p->setName("Set this.p");
				RemovingInstanceFromPort_B_setPActivity_Set_this_p->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPort_B_setPActivity_Set_this_p->setStructuralFeature(RemovingInstanceFromPort_B_p);
					// InputPin object
					RemovingInstanceFromPort_B_setPActivity_Set_this_p_object->setThisElementPtr(RemovingInstanceFromPort_B_setPActivity_Set_this_p_object);
					RemovingInstanceFromPort_B_setPActivity_Set_this_p_object->setName("object");
					RemovingInstanceFromPort_B_setPActivity_Set_this_p_object->setVisibility(VisibilityKind::public_);
					RemovingInstanceFromPort_B_setPActivity_Set_this_p_object->setType(RemovingInstanceFromPort_B);
				RemovingInstanceFromPort_B_setPActivity_Set_this_p->setObject(RemovingInstanceFromPort_B_setPActivity_Set_this_p_object);
					// InputPin value
					RemovingInstanceFromPort_B_setPActivity_Set_this_p_value->setThisElementPtr(RemovingInstanceFromPort_B_setPActivity_Set_this_p_value);
					RemovingInstanceFromPort_B_setPActivity_Set_this_p_value->setName("value");
					RemovingInstanceFromPort_B_setPActivity_Set_this_p_value->setVisibility(VisibilityKind::public_);
					RemovingInstanceFromPort_B_setPActivity_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				RemovingInstanceFromPort_B_setPActivity_Set_this_p->setValue(RemovingInstanceFromPort_B_setPActivity_Set_this_p_value);
					// OutputPin result
					RemovingInstanceFromPort_B_setPActivity_Set_this_p_result->setThisElementPtr(RemovingInstanceFromPort_B_setPActivity_Set_this_p_result);
					RemovingInstanceFromPort_B_setPActivity_Set_this_p_result->setName("result");
					RemovingInstanceFromPort_B_setPActivity_Set_this_p_result->setVisibility(VisibilityKind::public_);
					RemovingInstanceFromPort_B_setPActivity_Set_this_p_result->setType(RemovingInstanceFromPort_B);
				RemovingInstanceFromPort_B_setPActivity_Set_this_p->setResult(RemovingInstanceFromPort_B_setPActivity_Set_this_p_result);
			RemovingInstanceFromPort_B_setPActivity->addNode(RemovingInstanceFromPort_B_setPActivity_Set_this_p);
				// ObjectFlow ObjectFlow3 from vParameterNode to value
				RemovingInstanceFromPort_B_setPActivity_ObjectFlow3->setThisActivityEdgePtr(RemovingInstanceFromPort_B_setPActivity_ObjectFlow3);
				RemovingInstanceFromPort_B_setPActivity_ObjectFlow3->setName("ObjectFlow3");
				RemovingInstanceFromPort_B_setPActivity_ObjectFlow3->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPort_B_setPActivity_ObjectFlow3->setSource(RemovingInstanceFromPort_B_setPActivity_vParameterNode);
				RemovingInstanceFromPort_B_setPActivity_ObjectFlow3->setTarget(RemovingInstanceFromPort_B_setPActivity_Set_this_p_value);
					// LiteralBoolean LiteralBoolean4
					RemovingInstanceFromPort_B_setPActivity_ObjectFlow3_LiteralBoolean4->setThisElementPtr(RemovingInstanceFromPort_B_setPActivity_ObjectFlow3_LiteralBoolean4);
					RemovingInstanceFromPort_B_setPActivity_ObjectFlow3_LiteralBoolean4->setName("LiteralBoolean4");
					RemovingInstanceFromPort_B_setPActivity_ObjectFlow3_LiteralBoolean4->setVisibility(VisibilityKind::public_);
					RemovingInstanceFromPort_B_setPActivity_ObjectFlow3_LiteralBoolean4->setValue(true);
				RemovingInstanceFromPort_B_setPActivity_ObjectFlow3->setGuard(RemovingInstanceFromPort_B_setPActivity_ObjectFlow3_LiteralBoolean4);
			RemovingInstanceFromPort_B_setPActivity->addEdge(RemovingInstanceFromPort_B_setPActivity_ObjectFlow3);
				// ObjectFlow ObjectFlow6 from result to object
				RemovingInstanceFromPort_B_setPActivity_ObjectFlow6->setThisActivityEdgePtr(RemovingInstanceFromPort_B_setPActivity_ObjectFlow6);
				RemovingInstanceFromPort_B_setPActivity_ObjectFlow6->setName("ObjectFlow6");
				RemovingInstanceFromPort_B_setPActivity_ObjectFlow6->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPort_B_setPActivity_ObjectFlow6->setSource(RemovingInstanceFromPort_B_setPActivity_this_result);
				RemovingInstanceFromPort_B_setPActivity_ObjectFlow6->setTarget(RemovingInstanceFromPort_B_setPActivity_Set_this_p_object);
					// LiteralBoolean LiteralBoolean7
					RemovingInstanceFromPort_B_setPActivity_ObjectFlow6_LiteralBoolean7->setThisElementPtr(RemovingInstanceFromPort_B_setPActivity_ObjectFlow6_LiteralBoolean7);
					RemovingInstanceFromPort_B_setPActivity_ObjectFlow6_LiteralBoolean7->setName("LiteralBoolean7");
					RemovingInstanceFromPort_B_setPActivity_ObjectFlow6_LiteralBoolean7->setVisibility(VisibilityKind::public_);
					RemovingInstanceFromPort_B_setPActivity_ObjectFlow6_LiteralBoolean7->setValue(true);
				RemovingInstanceFromPort_B_setPActivity_ObjectFlow6->setGuard(RemovingInstanceFromPort_B_setPActivity_ObjectFlow6_LiteralBoolean7);
			RemovingInstanceFromPort_B_setPActivity->addEdge(RemovingInstanceFromPort_B_setPActivity_ObjectFlow6);
		RemovingInstanceFromPort_B->addOwnedBehavior(RemovingInstanceFromPort_B_setPActivity);
			RemovingInstanceFromPort_B_IRealization->setName("IRealization");
			RemovingInstanceFromPort_B_IRealization->setVisibility(VisibilityKind::public_);
			RemovingInstanceFromPort_B_IRealization->setContract(RemovingInstanceFromPort_I);
			
		RemovingInstanceFromPort_B->addInterfaceRealization(RemovingInstanceFromPort_B_IRealization);
		
			// Operation B_B
			RemovingInstanceFromPort_B_B_B->setThisOperationPtr(RemovingInstanceFromPort_B_B_B);
			RemovingInstanceFromPort_B_B_B->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			RemovingInstanceFromPort_B_B_B->setName("B_B");
			RemovingInstanceFromPort_B_B_B->setVisibility(VisibilityKind::public_);
				// Parameter result
				RemovingInstanceFromPort_B_B_B_result->setThisElementPtr(RemovingInstanceFromPort_B_B_B_result);
				RemovingInstanceFromPort_B_B_B_result->setName("result");
				RemovingInstanceFromPort_B_B_B_result->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPort_B_B_B_result->setType(RemovingInstanceFromPort_B);
				RemovingInstanceFromPort_B_B_B_result->setDirection(ParameterDirectionKind::return_);
			RemovingInstanceFromPort_B_B_B->addOwnedParameter(RemovingInstanceFromPort_B_B_B_result);
		RemovingInstanceFromPort_B->addOwnedOperation(RemovingInstanceFromPort_B_B_B);
			// Operation setP_Integer
			RemovingInstanceFromPort_B_setP_Integer->setThisOperationPtr(RemovingInstanceFromPort_B_setP_Integer);
			RemovingInstanceFromPort_B_setP_Integer->setName("setP_Integer");
			RemovingInstanceFromPort_B_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				RemovingInstanceFromPort_B_setP_Integer_v->setThisElementPtr(RemovingInstanceFromPort_B_setP_Integer_v);
				RemovingInstanceFromPort_B_setP_Integer_v->setName("v");
				RemovingInstanceFromPort_B_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPort_B_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			RemovingInstanceFromPort_B_setP_Integer->addOwnedParameter(RemovingInstanceFromPort_B_setP_Integer_v);
			RemovingInstanceFromPort_B_setP_Integer->addMethod(RemovingInstanceFromPort_B_setPActivity);
		RemovingInstanceFromPort_B->addOwnedOperation(RemovingInstanceFromPort_B_setP_Integer);
	RemovingInstanceFromPort->addPackagedElement(RemovingInstanceFromPort_B);
		// Activity assertA
		RemovingInstanceFromPort_assertA->setThisActivityPtr(RemovingInstanceFromPort_assertA);
		RemovingInstanceFromPort_assertA->setName("assertA");
		RemovingInstanceFromPort_assertA->setVisibility(VisibilityKind::public_);
		// FunctionBehavior assertionNotImplemented
			RemovingInstanceFromPort_assertA_assertionNotImplemented->setThisClass_Ptr(RemovingInstanceFromPort_assertA_assertionNotImplemented);
			RemovingInstanceFromPort_assertA_assertionNotImplemented->setName("assertionNotImplemented");
			RemovingInstanceFromPort_assertA_assertionNotImplemented->setVisibility(VisibilityKind::public_);
			RemovingInstanceFromPort_assertA_assertionNotImplemented->addLanguage("C++");
			RemovingInstanceFromPort_assertA_assertionNotImplemented->addLanguage("Include");
			RemovingInstanceFromPort_assertA_assertionNotImplemented->addBody("std::cout << \"Assertion currenlty not implemented! Model was validated by manual debugging.\"<<std::endl;");
			RemovingInstanceFromPort_assertA_assertionNotImplemented->addBody("#include <iostream>");
		RemovingInstanceFromPort_assertA->addOwnedBehavior(RemovingInstanceFromPort_assertA_assertionNotImplemented);
			// Parameter a
			RemovingInstanceFromPort_assertA_a->setThisElementPtr(RemovingInstanceFromPort_assertA_a);
			RemovingInstanceFromPort_assertA_a->setName("a");
			RemovingInstanceFromPort_assertA_a->setVisibility(VisibilityKind::public_);
			
			RemovingInstanceFromPort_assertA_a->setType(RemovingInstanceFromPort_A);
		RemovingInstanceFromPort_assertA->addOwnedParameter(RemovingInstanceFromPort_assertA_a);
			// ActivityParameterNode aParameterNode
			RemovingInstanceFromPort_assertA_aParameterNode->setThisElementPtr(RemovingInstanceFromPort_assertA_aParameterNode);
			RemovingInstanceFromPort_assertA_aParameterNode->setName("aParameterNode");
			RemovingInstanceFromPort_assertA_aParameterNode->setVisibility(VisibilityKind::public_);
		RemovingInstanceFromPort_assertA->addNode(RemovingInstanceFromPort_assertA_aParameterNode);
			// CallBehaviorAction Call assertionNotImplemented
			RemovingInstanceFromPort_assertA_Call_assertionNotImplemented->setThisExecutableNodePtr(RemovingInstanceFromPort_assertA_Call_assertionNotImplemented);
			RemovingInstanceFromPort_assertA_Call_assertionNotImplemented->setName("Call assertionNotImplemented");
			RemovingInstanceFromPort_assertA_Call_assertionNotImplemented->setVisibility(VisibilityKind::public_);
			RemovingInstanceFromPort_assertA_Call_assertionNotImplemented->setBehavior(RemovingInstanceFromPort_assertA_assertionNotImplemented);
		RemovingInstanceFromPort_assertA->addNode(RemovingInstanceFromPort_assertA_Call_assertionNotImplemented);
	RemovingInstanceFromPort->addPackagedElement(RemovingInstanceFromPort_assertA);
		// Interface I
		RemovingInstanceFromPort_I->setThisInterfacePtr(RemovingInstanceFromPort_I);
		RemovingInstanceFromPort_I->setName("I");
		RemovingInstanceFromPort_I->setVisibility(VisibilityKind::public_);
			// Operation setP_Integer
			RemovingInstanceFromPort_I_setP_Integer->setThisOperationPtr(RemovingInstanceFromPort_I_setP_Integer);
			RemovingInstanceFromPort_I_setP_Integer->setName("setP_Integer");
			RemovingInstanceFromPort_I_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				RemovingInstanceFromPort_I_setP_Integer_v->setThisElementPtr(RemovingInstanceFromPort_I_setP_Integer_v);
				RemovingInstanceFromPort_I_setP_Integer_v->setName("v");
				RemovingInstanceFromPort_I_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPort_I_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			RemovingInstanceFromPort_I_setP_Integer->addOwnedParameter(RemovingInstanceFromPort_I_setP_Integer_v);
		RemovingInstanceFromPort_I->addOwnedOperation(RemovingInstanceFromPort_I_setP_Integer);
	RemovingInstanceFromPort->addPackagedElement(RemovingInstanceFromPort_I);
		// Activity main
		RemovingInstanceFromPort_main->setThisActivityPtr(RemovingInstanceFromPort_main);
		RemovingInstanceFromPort_main->setName("main");
		RemovingInstanceFromPort_main->setVisibility(VisibilityKind::public_);
			// ClearStructuralFeatureAction Clear a.q
			RemovingInstanceFromPort_main_Clear_a_q->setThisExecutableNodePtr(RemovingInstanceFromPort_main_Clear_a_q);
			RemovingInstanceFromPort_main_Clear_a_q->setName("Clear a.q");
			RemovingInstanceFromPort_main_Clear_a_q->setVisibility(VisibilityKind::public_);
			RemovingInstanceFromPort_main_Clear_a_q->setStructuralFeature(RemovingInstanceFromPort_A_q);
				// InputPin object
				RemovingInstanceFromPort_main_Clear_a_q_object->setThisElementPtr(RemovingInstanceFromPort_main_Clear_a_q_object);
				RemovingInstanceFromPort_main_Clear_a_q_object->setName("object");
				RemovingInstanceFromPort_main_Clear_a_q_object->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPort_main_Clear_a_q_object->setType(RemovingInstanceFromPort_A);
			RemovingInstanceFromPort_main_Clear_a_q->setObject(RemovingInstanceFromPort_main_Clear_a_q_object);
				// OutputPin result
				RemovingInstanceFromPort_main_Clear_a_q_result->setThisElementPtr(RemovingInstanceFromPort_main_Clear_a_q_result);
				RemovingInstanceFromPort_main_Clear_a_q_result->setName("result");
				RemovingInstanceFromPort_main_Clear_a_q_result->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPort_main_Clear_a_q_result->setType(RemovingInstanceFromPort_A);
			RemovingInstanceFromPort_main_Clear_a_q->setResult(RemovingInstanceFromPort_main_Clear_a_q_result);
		RemovingInstanceFromPort_main->addNode(RemovingInstanceFromPort_main_Clear_a_q);
			// CreateObjectAction Create A
			RemovingInstanceFromPort_main_Create_A->setThisExecutableNodePtr(RemovingInstanceFromPort_main_Create_A);
			RemovingInstanceFromPort_main_Create_A->setName("Create A");
			RemovingInstanceFromPort_main_Create_A->setVisibility(VisibilityKind::public_);
			RemovingInstanceFromPort_main_Create_A->setClassifier(RemovingInstanceFromPort_A);
				// OutputPin result
				RemovingInstanceFromPort_main_Create_A_result->setThisElementPtr(RemovingInstanceFromPort_main_Create_A_result);
				RemovingInstanceFromPort_main_Create_A_result->setName("result");
				RemovingInstanceFromPort_main_Create_A_result->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPort_main_Create_A_result->setType(RemovingInstanceFromPort_A);
			RemovingInstanceFromPort_main_Create_A->setResult(RemovingInstanceFromPort_main_Create_A_result);
		RemovingInstanceFromPort_main->addNode(RemovingInstanceFromPort_main_Create_A);
			// CallBehaviorAction Call assertA
			RemovingInstanceFromPort_main_Call_assertA->setThisExecutableNodePtr(RemovingInstanceFromPort_main_Call_assertA);
			RemovingInstanceFromPort_main_Call_assertA->setName("Call assertA");
			RemovingInstanceFromPort_main_Call_assertA->setVisibility(VisibilityKind::public_);
			RemovingInstanceFromPort_main_Call_assertA->setBehavior(RemovingInstanceFromPort_assertA);
				// InputPin a
				RemovingInstanceFromPort_main_Call_assertA_a->setThisElementPtr(RemovingInstanceFromPort_main_Call_assertA_a);
				RemovingInstanceFromPort_main_Call_assertA_a->setName("a");
				RemovingInstanceFromPort_main_Call_assertA_a->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPort_main_Call_assertA_a->setType(RemovingInstanceFromPort_A);
			RemovingInstanceFromPort_main_Call_assertA->addArgument(RemovingInstanceFromPort_main_Call_assertA_a);
		RemovingInstanceFromPort_main->addNode(RemovingInstanceFromPort_main_Call_assertA);
			// CallOperationAction A()
			RemovingInstanceFromPort_main_A_->setThisExecutableNodePtr(RemovingInstanceFromPort_main_A_);
			RemovingInstanceFromPort_main_A_->setName("A()");
			RemovingInstanceFromPort_main_A_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				RemovingInstanceFromPort_main_A__result->setThisElementPtr(RemovingInstanceFromPort_main_A__result);
				RemovingInstanceFromPort_main_A__result->setName("result");
				RemovingInstanceFromPort_main_A__result->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPort_main_A__result->setType(RemovingInstanceFromPort_A);
			RemovingInstanceFromPort_main_A_->addResult(RemovingInstanceFromPort_main_A__result);
			RemovingInstanceFromPort_main_A_->setOperation(RemovingInstanceFromPort_A_A_A);
				// InputPin target
				RemovingInstanceFromPort_main_A__target->setThisElementPtr(RemovingInstanceFromPort_main_A__target);
				RemovingInstanceFromPort_main_A__target->setName("target");
				RemovingInstanceFromPort_main_A__target->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPort_main_A__target->setType(RemovingInstanceFromPort_A);
			RemovingInstanceFromPort_main_A_->setTarget(RemovingInstanceFromPort_main_A__target);
		RemovingInstanceFromPort_main->addNode(RemovingInstanceFromPort_main_A_);
			// ObjectFlow ObjectFlow16 from result to a
			RemovingInstanceFromPort_main_ObjectFlow16->setThisActivityEdgePtr(RemovingInstanceFromPort_main_ObjectFlow16);
			RemovingInstanceFromPort_main_ObjectFlow16->setName("ObjectFlow16");
			RemovingInstanceFromPort_main_ObjectFlow16->setVisibility(VisibilityKind::public_);
			
			RemovingInstanceFromPort_main_ObjectFlow16->setSource(RemovingInstanceFromPort_main_Clear_a_q_result);
			RemovingInstanceFromPort_main_ObjectFlow16->setTarget(RemovingInstanceFromPort_main_Call_assertA_a);
				// LiteralBoolean LiteralBoolean17
				RemovingInstanceFromPort_main_ObjectFlow16_LiteralBoolean17->setThisElementPtr(RemovingInstanceFromPort_main_ObjectFlow16_LiteralBoolean17);
				RemovingInstanceFromPort_main_ObjectFlow16_LiteralBoolean17->setName("LiteralBoolean17");
				RemovingInstanceFromPort_main_ObjectFlow16_LiteralBoolean17->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPort_main_ObjectFlow16_LiteralBoolean17->setValue(true);
			RemovingInstanceFromPort_main_ObjectFlow16->setGuard(RemovingInstanceFromPort_main_ObjectFlow16_LiteralBoolean17);
		RemovingInstanceFromPort_main->addEdge(RemovingInstanceFromPort_main_ObjectFlow16);
			// ObjectFlow ObjectFlow21 from result to object
			RemovingInstanceFromPort_main_ObjectFlow21->setThisActivityEdgePtr(RemovingInstanceFromPort_main_ObjectFlow21);
			RemovingInstanceFromPort_main_ObjectFlow21->setName("ObjectFlow21");
			RemovingInstanceFromPort_main_ObjectFlow21->setVisibility(VisibilityKind::public_);
			
			RemovingInstanceFromPort_main_ObjectFlow21->setSource(RemovingInstanceFromPort_main_A__result);
			RemovingInstanceFromPort_main_ObjectFlow21->setTarget(RemovingInstanceFromPort_main_Clear_a_q_object);
				// LiteralBoolean LiteralBoolean22
				RemovingInstanceFromPort_main_ObjectFlow21_LiteralBoolean22->setThisElementPtr(RemovingInstanceFromPort_main_ObjectFlow21_LiteralBoolean22);
				RemovingInstanceFromPort_main_ObjectFlow21_LiteralBoolean22->setName("LiteralBoolean22");
				RemovingInstanceFromPort_main_ObjectFlow21_LiteralBoolean22->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPort_main_ObjectFlow21_LiteralBoolean22->setValue(true);
			RemovingInstanceFromPort_main_ObjectFlow21->setGuard(RemovingInstanceFromPort_main_ObjectFlow21_LiteralBoolean22);
		RemovingInstanceFromPort_main->addEdge(RemovingInstanceFromPort_main_ObjectFlow21);
			// ObjectFlow ObjectFlow24 from result to target
			RemovingInstanceFromPort_main_ObjectFlow24->setThisActivityEdgePtr(RemovingInstanceFromPort_main_ObjectFlow24);
			RemovingInstanceFromPort_main_ObjectFlow24->setName("ObjectFlow24");
			RemovingInstanceFromPort_main_ObjectFlow24->setVisibility(VisibilityKind::public_);
			
			RemovingInstanceFromPort_main_ObjectFlow24->setSource(RemovingInstanceFromPort_main_Create_A_result);
			RemovingInstanceFromPort_main_ObjectFlow24->setTarget(RemovingInstanceFromPort_main_A__target);
				// LiteralBoolean LiteralBoolean26
				RemovingInstanceFromPort_main_ObjectFlow24_LiteralBoolean26->setThisElementPtr(RemovingInstanceFromPort_main_ObjectFlow24_LiteralBoolean26);
				RemovingInstanceFromPort_main_ObjectFlow24_LiteralBoolean26->setName("LiteralBoolean26");
				RemovingInstanceFromPort_main_ObjectFlow24_LiteralBoolean26->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPort_main_ObjectFlow24_LiteralBoolean26->setValue(true);
			RemovingInstanceFromPort_main_ObjectFlow24->setGuard(RemovingInstanceFromPort_main_ObjectFlow24_LiteralBoolean26);
		RemovingInstanceFromPort_main->addEdge(RemovingInstanceFromPort_main_ObjectFlow24);
	RemovingInstanceFromPort->addPackagedElement(RemovingInstanceFromPort_main);
		// Class IImpl
		RemovingInstanceFromPort_IImpl->setThisClass_Ptr(RemovingInstanceFromPort_IImpl);
		RemovingInstanceFromPort_IImpl->setName("IImpl");
		RemovingInstanceFromPort_IImpl->setVisibility(VisibilityKind::public_);
		RemovingInstanceFromPort_IImpl_IRealization->setName("IRealization");
			RemovingInstanceFromPort_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			RemovingInstanceFromPort_IImpl_IRealization->setContract(RemovingInstanceFromPort_I);
			
		RemovingInstanceFromPort_IImpl->addInterfaceRealization(RemovingInstanceFromPort_IImpl_IRealization);
		
			// Operation setP_Integer
			RemovingInstanceFromPort_IImpl_setP_Integer->setThisOperationPtr(RemovingInstanceFromPort_IImpl_setP_Integer);
			RemovingInstanceFromPort_IImpl_setP_Integer->setName("setP_Integer");
			RemovingInstanceFromPort_IImpl_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				RemovingInstanceFromPort_IImpl_setP_Integer_v->setThisElementPtr(RemovingInstanceFromPort_IImpl_setP_Integer_v);
				RemovingInstanceFromPort_IImpl_setP_Integer_v->setName("v");
				RemovingInstanceFromPort_IImpl_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPort_IImpl_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			RemovingInstanceFromPort_IImpl_setP_Integer->addOwnedParameter(RemovingInstanceFromPort_IImpl_setP_Integer_v);
		RemovingInstanceFromPort_IImpl->addOwnedOperation(RemovingInstanceFromPort_IImpl_setP_Integer);
	RemovingInstanceFromPort->addPackagedElement(RemovingInstanceFromPort_IImpl);
		// Class A
		RemovingInstanceFromPort_A->setThisClass_Ptr(RemovingInstanceFromPort_A);
		RemovingInstanceFromPort_A->setName("A");
		RemovingInstanceFromPort_A->setVisibility(VisibilityKind::public_);
		
			// Port q
			RemovingInstanceFromPort_A_q->setThisElementPtr(RemovingInstanceFromPort_A_q);
			RemovingInstanceFromPort_A_q->setName("q");
			RemovingInstanceFromPort_A_q->setVisibility(VisibilityKind::public_);
			
			RemovingInstanceFromPort_A_q->setType(RemovingInstanceFromPort_IImpl);
			RemovingInstanceFromPort_A_q->setAggregation(AggregationKind::composite);
			RemovingInstanceFromPort_A_q->isService = true;
			RemovingInstanceFromPort_A_q->addProvided(RemovingInstanceFromPort_I);
		RemovingInstanceFromPort_A->addOwnedAttribute(RemovingInstanceFromPort_A_q);
			// Property b
			RemovingInstanceFromPort_A_b->setThisElementPtr(RemovingInstanceFromPort_A_b);
			RemovingInstanceFromPort_A_b->setName("b");
			RemovingInstanceFromPort_A_b->setVisibility(VisibilityKind::public_);
			
			RemovingInstanceFromPort_A_b->setType(RemovingInstanceFromPort_B);
			RemovingInstanceFromPort_A_b->setAggregation(AggregationKind::composite);
		RemovingInstanceFromPort_A->addOwnedAttribute(RemovingInstanceFromPort_A_b);
		
		RemovingInstanceFromPort_A_r->setName("r");
			RemovingInstanceFromPort_A_r->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPort_A_r_ConnectorEnd35->setRole(RemovingInstanceFromPort_A_q);
				
			RemovingInstanceFromPort_A_r->addEnd(RemovingInstanceFromPort_A_r_ConnectorEnd35);
				
				RemovingInstanceFromPort_A_r_ConnectorEnd36->setRole(RemovingInstanceFromPort_A_b);
				
			RemovingInstanceFromPort_A_r->addEnd(RemovingInstanceFromPort_A_r_ConnectorEnd36);
			RemovingInstanceFromPort_A_r->setType(RemovingInstanceFromPort_R);
		RemovingInstanceFromPort_A->addOwnedConnector(RemovingInstanceFromPort_A_r);
			// Operation A_A
			RemovingInstanceFromPort_A_A_A->setThisOperationPtr(RemovingInstanceFromPort_A_A_A);
			RemovingInstanceFromPort_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			RemovingInstanceFromPort_A_A_A->setName("A_A");
			RemovingInstanceFromPort_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				RemovingInstanceFromPort_A_A_A_result->setThisElementPtr(RemovingInstanceFromPort_A_A_A_result);
				RemovingInstanceFromPort_A_A_A_result->setName("result");
				RemovingInstanceFromPort_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPort_A_A_A_result->setType(RemovingInstanceFromPort_A);
				RemovingInstanceFromPort_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			RemovingInstanceFromPort_A_A_A->addOwnedParameter(RemovingInstanceFromPort_A_A_A_result);
		RemovingInstanceFromPort_A->addOwnedOperation(RemovingInstanceFromPort_A_A_A);
	RemovingInstanceFromPort->addPackagedElement(RemovingInstanceFromPort_A);
		// Association R
		RemovingInstanceFromPort_R->setThisAssociationPtr(RemovingInstanceFromPort_R);
		RemovingInstanceFromPort_R->setName("R");
		RemovingInstanceFromPort_R->setVisibility(VisibilityKind::public_);
		RemovingInstanceFromPort_R->addOwnedEnd(RemovingInstanceFromPort_R_x);
		RemovingInstanceFromPort_R->addOwnedEnd(RemovingInstanceFromPort_R_y);
	RemovingInstanceFromPort->addPackagedElement(RemovingInstanceFromPort_R);
}
