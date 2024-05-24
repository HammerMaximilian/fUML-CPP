/*
 * RemovingInstanceFromPartModel.cpp
 * 
 * Auto-generated file
 */

#include "RemovingInstanceFromPartModel.h"

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

using namespace RemovingInstanceFromPart;
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

RemovingInstanceFromPartModel::RemovingInstanceFromPartModel()
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

RemovingInstanceFromPartModel::~RemovingInstanceFromPartModel()
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

const std::shared_ptr<RemovingInstanceFromPartModel>& RemovingInstanceFromPartModel::Instance()
{
	static std::shared_ptr<RemovingInstanceFromPartModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new RemovingInstanceFromPartModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void RemovingInstanceFromPartModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model RemovingInstanceFromPart
	 */
	RemovingInstanceFromPart.reset(new Package());
	this->addToElementRepository("RemovingInstanceFromPart", RemovingInstanceFromPart);
		RemovingInstanceFromPart_B.reset(new Class_());
		this->addToElementRepository("B", RemovingInstanceFromPart_B);
			RemovingInstanceFromPart_B_B_B.reset(new Operation());
			this->addToElementRepository("B_B", RemovingInstanceFromPart_B_B_B);
				RemovingInstanceFromPart_B_B_B_result.reset(new Parameter());
				this->addToElementRepository("result", RemovingInstanceFromPart_B_B_B_result);
			RemovingInstanceFromPart_B_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", RemovingInstanceFromPart_B_setPActivity);
				RemovingInstanceFromPart_B_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", RemovingInstanceFromPart_B_setPActivity_vParameterNode);
					RemovingInstanceFromPart_B_setPActivity_vParameterNode_LiteralInteger0.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger0", RemovingInstanceFromPart_B_setPActivity_vParameterNode_LiteralInteger0);
				RemovingInstanceFromPart_B_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", RemovingInstanceFromPart_B_setPActivity_this);
					RemovingInstanceFromPart_B_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", RemovingInstanceFromPart_B_setPActivity_this_result);
						RemovingInstanceFromPart_B_setPActivity_this_result_LiteralUnlimitedNatural1.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural1", RemovingInstanceFromPart_B_setPActivity_this_result_LiteralUnlimitedNatural1);
						RemovingInstanceFromPart_B_setPActivity_this_result_LiteralInteger2.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger2", RemovingInstanceFromPart_B_setPActivity_this_result_LiteralInteger2);
				RemovingInstanceFromPart_B_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", RemovingInstanceFromPart_B_setPActivity_v);
				RemovingInstanceFromPart_B_setPActivity_ObjectFlow3.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow3", RemovingInstanceFromPart_B_setPActivity_ObjectFlow3);
					RemovingInstanceFromPart_B_setPActivity_ObjectFlow3_LiteralBoolean4.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean4", RemovingInstanceFromPart_B_setPActivity_ObjectFlow3_LiteralBoolean4);
					RemovingInstanceFromPart_B_setPActivity_ObjectFlow3_LiteralInteger5.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger5", RemovingInstanceFromPart_B_setPActivity_ObjectFlow3_LiteralInteger5);
				RemovingInstanceFromPart_B_setPActivity_ObjectFlow6.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow6", RemovingInstanceFromPart_B_setPActivity_ObjectFlow6);
					RemovingInstanceFromPart_B_setPActivity_ObjectFlow6_LiteralBoolean7.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean7", RemovingInstanceFromPart_B_setPActivity_ObjectFlow6_LiteralBoolean7);
					RemovingInstanceFromPart_B_setPActivity_ObjectFlow6_LiteralInteger8.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger8", RemovingInstanceFromPart_B_setPActivity_ObjectFlow6_LiteralInteger8);
				RemovingInstanceFromPart_B_setPActivity_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", RemovingInstanceFromPart_B_setPActivity_Set_this_p);
					RemovingInstanceFromPart_B_setPActivity_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", RemovingInstanceFromPart_B_setPActivity_Set_this_p_result);
						RemovingInstanceFromPart_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural9.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural9", RemovingInstanceFromPart_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural9);
						RemovingInstanceFromPart_B_setPActivity_Set_this_p_result_LiteralInteger10.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger10", RemovingInstanceFromPart_B_setPActivity_Set_this_p_result_LiteralInteger10);
					RemovingInstanceFromPart_B_setPActivity_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", RemovingInstanceFromPart_B_setPActivity_Set_this_p_value);
						RemovingInstanceFromPart_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural11.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural11", RemovingInstanceFromPart_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural11);
						RemovingInstanceFromPart_B_setPActivity_Set_this_p_value_LiteralInteger12.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger12", RemovingInstanceFromPart_B_setPActivity_Set_this_p_value_LiteralInteger12);
					RemovingInstanceFromPart_B_setPActivity_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", RemovingInstanceFromPart_B_setPActivity_Set_this_p_object);
						RemovingInstanceFromPart_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural13", RemovingInstanceFromPart_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural13);
						RemovingInstanceFromPart_B_setPActivity_Set_this_p_object_LiteralInteger14.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger14", RemovingInstanceFromPart_B_setPActivity_Set_this_p_object_LiteralInteger14);
			RemovingInstanceFromPart_B_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", RemovingInstanceFromPart_B_setP_Integer);
				RemovingInstanceFromPart_B_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", RemovingInstanceFromPart_B_setP_Integer_v);
			RemovingInstanceFromPart_B_p.reset(new Property());
			this->addToElementRepository("p", RemovingInstanceFromPart_B_p);
			RemovingInstanceFromPart_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", RemovingInstanceFromPart_B_IRealization);
		RemovingInstanceFromPart_assertA.reset(new Activity());
		this->addToElementRepository("assertA", RemovingInstanceFromPart_assertA);
			RemovingInstanceFromPart_assertA_aParameterNode.reset(new ActivityParameterNode());
			this->addToElementRepository("aParameterNode", RemovingInstanceFromPart_assertA_aParameterNode);
				RemovingInstanceFromPart_assertA_aParameterNode_LiteralInteger15.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger15", RemovingInstanceFromPart_assertA_aParameterNode_LiteralInteger15);
			RemovingInstanceFromPart_assertA_assertionNotImplemented.reset(new OpaqueBehavior());
			this->addToElementRepository("assertionNotImplemented", RemovingInstanceFromPart_assertA_assertionNotImplemented);
			RemovingInstanceFromPart_assertA_a.reset(new Parameter());
			this->addToElementRepository("a", RemovingInstanceFromPart_assertA_a);
			RemovingInstanceFromPart_assertA_Call_assertionNotImplemented.reset(new CallBehaviorAction());
			this->addToElementRepository("Call assertionNotImplemented", RemovingInstanceFromPart_assertA_Call_assertionNotImplemented);
		RemovingInstanceFromPart_I.reset(new Interface());
		this->addToElementRepository("I", RemovingInstanceFromPart_I);
			RemovingInstanceFromPart_I_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", RemovingInstanceFromPart_I_setP_Integer);
				RemovingInstanceFromPart_I_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", RemovingInstanceFromPart_I_setP_Integer_v);
		RemovingInstanceFromPart_main.reset(new Activity());
		this->addToElementRepository("main", RemovingInstanceFromPart_main);
			RemovingInstanceFromPart_main_ObjectFlow16.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow16", RemovingInstanceFromPart_main_ObjectFlow16);
				RemovingInstanceFromPart_main_ObjectFlow16_LiteralBoolean17.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean17", RemovingInstanceFromPart_main_ObjectFlow16_LiteralBoolean17);
				RemovingInstanceFromPart_main_ObjectFlow16_LiteralInteger18.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger18", RemovingInstanceFromPart_main_ObjectFlow16_LiteralInteger18);
			RemovingInstanceFromPart_main_Clear_a_b.reset(new ClearStructuralFeatureAction());
			this->addToElementRepository("Clear a.b", RemovingInstanceFromPart_main_Clear_a_b);
				RemovingInstanceFromPart_main_Clear_a_b_result.reset(new OutputPin());
				this->addToElementRepository("result", RemovingInstanceFromPart_main_Clear_a_b_result);
				RemovingInstanceFromPart_main_Clear_a_b_object.reset(new InputPin());
				this->addToElementRepository("object", RemovingInstanceFromPart_main_Clear_a_b_object);
			RemovingInstanceFromPart_main_Create_A.reset(new CreateObjectAction());
			this->addToElementRepository("Create A", RemovingInstanceFromPart_main_Create_A);
				RemovingInstanceFromPart_main_Create_A_result.reset(new OutputPin());
				this->addToElementRepository("result", RemovingInstanceFromPart_main_Create_A_result);
					RemovingInstanceFromPart_main_Create_A_result_LiteralInteger19.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger19", RemovingInstanceFromPart_main_Create_A_result_LiteralInteger19);
					RemovingInstanceFromPart_main_Create_A_result_LiteralUnlimitedNatural20.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural20", RemovingInstanceFromPart_main_Create_A_result_LiteralUnlimitedNatural20);
			RemovingInstanceFromPart_main_ObjectFlow21.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow21", RemovingInstanceFromPart_main_ObjectFlow21);
				RemovingInstanceFromPart_main_ObjectFlow21_LiteralBoolean22.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean22", RemovingInstanceFromPart_main_ObjectFlow21_LiteralBoolean22);
				RemovingInstanceFromPart_main_ObjectFlow21_LiteralInteger23.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger23", RemovingInstanceFromPart_main_ObjectFlow21_LiteralInteger23);
			RemovingInstanceFromPart_main_ObjectFlow24.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow24", RemovingInstanceFromPart_main_ObjectFlow24);
				RemovingInstanceFromPart_main_ObjectFlow24_LiteralInteger25.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger25", RemovingInstanceFromPart_main_ObjectFlow24_LiteralInteger25);
				RemovingInstanceFromPart_main_ObjectFlow24_LiteralBoolean26.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean26", RemovingInstanceFromPart_main_ObjectFlow24_LiteralBoolean26);
			RemovingInstanceFromPart_main_Call_assertA.reset(new CallBehaviorAction());
			this->addToElementRepository("Call assertA", RemovingInstanceFromPart_main_Call_assertA);
				RemovingInstanceFromPart_main_Call_assertA_a.reset(new InputPin());
				this->addToElementRepository("a", RemovingInstanceFromPart_main_Call_assertA_a);
					RemovingInstanceFromPart_main_Call_assertA_a_LiteralInteger27.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger27", RemovingInstanceFromPart_main_Call_assertA_a_LiteralInteger27);
					RemovingInstanceFromPart_main_Call_assertA_a_LiteralInteger28.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger28", RemovingInstanceFromPart_main_Call_assertA_a_LiteralInteger28);
					RemovingInstanceFromPart_main_Call_assertA_a_LiteralUnlimitedNatural29.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural29", RemovingInstanceFromPart_main_Call_assertA_a_LiteralUnlimitedNatural29);
			RemovingInstanceFromPart_main_A_.reset(new CallOperationAction());
			this->addToElementRepository("A()", RemovingInstanceFromPart_main_A_);
				RemovingInstanceFromPart_main_A__target.reset(new InputPin());
				this->addToElementRepository("target", RemovingInstanceFromPart_main_A__target);
					RemovingInstanceFromPart_main_A__target_LiteralUnlimitedNatural30.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural30", RemovingInstanceFromPart_main_A__target_LiteralUnlimitedNatural30);
					RemovingInstanceFromPart_main_A__target_LiteralInteger31.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger31", RemovingInstanceFromPart_main_A__target_LiteralInteger31);
				RemovingInstanceFromPart_main_A__result.reset(new OutputPin());
				this->addToElementRepository("result", RemovingInstanceFromPart_main_A__result);
					RemovingInstanceFromPart_main_A__result_LiteralInteger32.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger32", RemovingInstanceFromPart_main_A__result_LiteralInteger32);
					RemovingInstanceFromPart_main_A__result_LiteralInteger33.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger33", RemovingInstanceFromPart_main_A__result_LiteralInteger33);
					RemovingInstanceFromPart_main_A__result_LiteralUnlimitedNatural34.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural34", RemovingInstanceFromPart_main_A__result_LiteralUnlimitedNatural34);
		RemovingInstanceFromPart_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", RemovingInstanceFromPart_IImpl);
			RemovingInstanceFromPart_IImpl_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", RemovingInstanceFromPart_IImpl_setP_Integer);
				RemovingInstanceFromPart_IImpl_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", RemovingInstanceFromPart_IImpl_setP_Integer_v);
			RemovingInstanceFromPart_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", RemovingInstanceFromPart_IImpl_IRealization);
		RemovingInstanceFromPart_A.reset(new Class_());
		this->addToElementRepository("A", RemovingInstanceFromPart_A);
			RemovingInstanceFromPart_A_q.reset(new Port());
			this->addToElementRepository("q", RemovingInstanceFromPart_A_q);
			RemovingInstanceFromPart_A_A_A.reset(new Operation());
			this->addToElementRepository("A_A", RemovingInstanceFromPart_A_A_A);
				RemovingInstanceFromPart_A_A_A_result.reset(new Parameter());
				this->addToElementRepository("result", RemovingInstanceFromPart_A_A_A_result);
			RemovingInstanceFromPart_A_r.reset(new Connector());
			this->addToElementRepository("r", RemovingInstanceFromPart_A_r);
				RemovingInstanceFromPart_A_r_ConnectorEnd35.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd35", RemovingInstanceFromPart_A_r_ConnectorEnd35);
				RemovingInstanceFromPart_A_r_ConnectorEnd36.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd36", RemovingInstanceFromPart_A_r_ConnectorEnd36);
			RemovingInstanceFromPart_A_b.reset(new Property());
			this->addToElementRepository("b", RemovingInstanceFromPart_A_b);
		RemovingInstanceFromPart_R.reset(new Association());
		this->addToElementRepository("R", RemovingInstanceFromPart_R);
			RemovingInstanceFromPart_R_y.reset(new Property());
			this->addToElementRepository("y", RemovingInstanceFromPart_R_y);
			RemovingInstanceFromPart_R_x.reset(new Property());
			this->addToElementRepository("x", RemovingInstanceFromPart_R_x);

	// Initialize public members
	/*
	 * Model RemovingInstanceFromPart
	 */
	RemovingInstanceFromPart->setThisPackagePtr(RemovingInstanceFromPart);
	RemovingInstanceFromPart->setName("RemovingInstanceFromPart");
	RemovingInstanceFromPart->setVisibility(VisibilityKind::public_);
		// Class B
		RemovingInstanceFromPart_B->setThisClass_Ptr(RemovingInstanceFromPart_B);
		RemovingInstanceFromPart_B->setName("B");
		RemovingInstanceFromPart_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			RemovingInstanceFromPart_B_p->setThisElementPtr(RemovingInstanceFromPart_B_p);
			RemovingInstanceFromPart_B_p->setName("p");
			RemovingInstanceFromPart_B_p->setVisibility(VisibilityKind::public_);
			
			RemovingInstanceFromPart_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		RemovingInstanceFromPart_B->addOwnedAttribute(RemovingInstanceFromPart_B_p);
		// Activity setPActivity
			RemovingInstanceFromPart_B_setPActivity->setThisActivityPtr(RemovingInstanceFromPart_B_setPActivity);
			RemovingInstanceFromPart_B_setPActivity->setName("setPActivity");
			RemovingInstanceFromPart_B_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				RemovingInstanceFromPart_B_setPActivity_v->setThisElementPtr(RemovingInstanceFromPart_B_setPActivity_v);
				RemovingInstanceFromPart_B_setPActivity_v->setName("v");
				RemovingInstanceFromPart_B_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPart_B_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			RemovingInstanceFromPart_B_setPActivity->addOwnedParameter(RemovingInstanceFromPart_B_setPActivity_v);
				// ActivityParameterNode vParameterNode
				RemovingInstanceFromPart_B_setPActivity_vParameterNode->setThisElementPtr(RemovingInstanceFromPart_B_setPActivity_vParameterNode);
				RemovingInstanceFromPart_B_setPActivity_vParameterNode->setName("vParameterNode");
				RemovingInstanceFromPart_B_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPart_B_setPActivity_vParameterNode->setParameter(RemovingInstanceFromPart_B_setPActivity_v);
			RemovingInstanceFromPart_B_setPActivity->addNode(RemovingInstanceFromPart_B_setPActivity_vParameterNode);
				// ReadSelfAction this
				RemovingInstanceFromPart_B_setPActivity_this->setThisExecutableNodePtr(RemovingInstanceFromPart_B_setPActivity_this);
				RemovingInstanceFromPart_B_setPActivity_this->setName("this");
				RemovingInstanceFromPart_B_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					RemovingInstanceFromPart_B_setPActivity_this_result->setThisElementPtr(RemovingInstanceFromPart_B_setPActivity_this_result);
					RemovingInstanceFromPart_B_setPActivity_this_result->setName("result");
					RemovingInstanceFromPart_B_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					RemovingInstanceFromPart_B_setPActivity_this_result->setType(RemovingInstanceFromPart_B);
				RemovingInstanceFromPart_B_setPActivity_this->setResult(RemovingInstanceFromPart_B_setPActivity_this_result);
			RemovingInstanceFromPart_B_setPActivity->addNode(RemovingInstanceFromPart_B_setPActivity_this);
				// AddStructuralFeatureValueAction Set this.p
				RemovingInstanceFromPart_B_setPActivity_Set_this_p->setThisExecutableNodePtr(RemovingInstanceFromPart_B_setPActivity_Set_this_p);
				RemovingInstanceFromPart_B_setPActivity_Set_this_p->setName("Set this.p");
				RemovingInstanceFromPart_B_setPActivity_Set_this_p->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPart_B_setPActivity_Set_this_p->setStructuralFeature(RemovingInstanceFromPart_B_p);
					// InputPin object
					RemovingInstanceFromPart_B_setPActivity_Set_this_p_object->setThisElementPtr(RemovingInstanceFromPart_B_setPActivity_Set_this_p_object);
					RemovingInstanceFromPart_B_setPActivity_Set_this_p_object->setName("object");
					RemovingInstanceFromPart_B_setPActivity_Set_this_p_object->setVisibility(VisibilityKind::public_);
					RemovingInstanceFromPart_B_setPActivity_Set_this_p_object->setType(RemovingInstanceFromPart_B);
				RemovingInstanceFromPart_B_setPActivity_Set_this_p->setObject(RemovingInstanceFromPart_B_setPActivity_Set_this_p_object);
					// InputPin value
					RemovingInstanceFromPart_B_setPActivity_Set_this_p_value->setThisElementPtr(RemovingInstanceFromPart_B_setPActivity_Set_this_p_value);
					RemovingInstanceFromPart_B_setPActivity_Set_this_p_value->setName("value");
					RemovingInstanceFromPart_B_setPActivity_Set_this_p_value->setVisibility(VisibilityKind::public_);
					RemovingInstanceFromPart_B_setPActivity_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				RemovingInstanceFromPart_B_setPActivity_Set_this_p->setValue(RemovingInstanceFromPart_B_setPActivity_Set_this_p_value);
					// OutputPin result
					RemovingInstanceFromPart_B_setPActivity_Set_this_p_result->setThisElementPtr(RemovingInstanceFromPart_B_setPActivity_Set_this_p_result);
					RemovingInstanceFromPart_B_setPActivity_Set_this_p_result->setName("result");
					RemovingInstanceFromPart_B_setPActivity_Set_this_p_result->setVisibility(VisibilityKind::public_);
					RemovingInstanceFromPart_B_setPActivity_Set_this_p_result->setType(RemovingInstanceFromPart_B);
				RemovingInstanceFromPart_B_setPActivity_Set_this_p->setResult(RemovingInstanceFromPart_B_setPActivity_Set_this_p_result);
			RemovingInstanceFromPart_B_setPActivity->addNode(RemovingInstanceFromPart_B_setPActivity_Set_this_p);
				// ObjectFlow ObjectFlow3 from vParameterNode to value
				RemovingInstanceFromPart_B_setPActivity_ObjectFlow3->setThisActivityEdgePtr(RemovingInstanceFromPart_B_setPActivity_ObjectFlow3);
				RemovingInstanceFromPart_B_setPActivity_ObjectFlow3->setName("ObjectFlow3");
				RemovingInstanceFromPart_B_setPActivity_ObjectFlow3->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPart_B_setPActivity_ObjectFlow3->setSource(RemovingInstanceFromPart_B_setPActivity_vParameterNode);
				RemovingInstanceFromPart_B_setPActivity_ObjectFlow3->setTarget(RemovingInstanceFromPart_B_setPActivity_Set_this_p_value);
					// LiteralBoolean LiteralBoolean4
					RemovingInstanceFromPart_B_setPActivity_ObjectFlow3_LiteralBoolean4->setThisElementPtr(RemovingInstanceFromPart_B_setPActivity_ObjectFlow3_LiteralBoolean4);
					RemovingInstanceFromPart_B_setPActivity_ObjectFlow3_LiteralBoolean4->setName("LiteralBoolean4");
					RemovingInstanceFromPart_B_setPActivity_ObjectFlow3_LiteralBoolean4->setVisibility(VisibilityKind::public_);
					RemovingInstanceFromPart_B_setPActivity_ObjectFlow3_LiteralBoolean4->setValue(true);
				RemovingInstanceFromPart_B_setPActivity_ObjectFlow3->setGuard(RemovingInstanceFromPart_B_setPActivity_ObjectFlow3_LiteralBoolean4);
			RemovingInstanceFromPart_B_setPActivity->addEdge(RemovingInstanceFromPart_B_setPActivity_ObjectFlow3);
				// ObjectFlow ObjectFlow6 from result to object
				RemovingInstanceFromPart_B_setPActivity_ObjectFlow6->setThisActivityEdgePtr(RemovingInstanceFromPart_B_setPActivity_ObjectFlow6);
				RemovingInstanceFromPart_B_setPActivity_ObjectFlow6->setName("ObjectFlow6");
				RemovingInstanceFromPart_B_setPActivity_ObjectFlow6->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPart_B_setPActivity_ObjectFlow6->setSource(RemovingInstanceFromPart_B_setPActivity_this_result);
				RemovingInstanceFromPart_B_setPActivity_ObjectFlow6->setTarget(RemovingInstanceFromPart_B_setPActivity_Set_this_p_object);
					// LiteralBoolean LiteralBoolean7
					RemovingInstanceFromPart_B_setPActivity_ObjectFlow6_LiteralBoolean7->setThisElementPtr(RemovingInstanceFromPart_B_setPActivity_ObjectFlow6_LiteralBoolean7);
					RemovingInstanceFromPart_B_setPActivity_ObjectFlow6_LiteralBoolean7->setName("LiteralBoolean7");
					RemovingInstanceFromPart_B_setPActivity_ObjectFlow6_LiteralBoolean7->setVisibility(VisibilityKind::public_);
					RemovingInstanceFromPart_B_setPActivity_ObjectFlow6_LiteralBoolean7->setValue(true);
				RemovingInstanceFromPart_B_setPActivity_ObjectFlow6->setGuard(RemovingInstanceFromPart_B_setPActivity_ObjectFlow6_LiteralBoolean7);
			RemovingInstanceFromPart_B_setPActivity->addEdge(RemovingInstanceFromPart_B_setPActivity_ObjectFlow6);
		RemovingInstanceFromPart_B->addOwnedBehavior(RemovingInstanceFromPart_B_setPActivity);
			RemovingInstanceFromPart_B_IRealization->setName("IRealization");
			RemovingInstanceFromPart_B_IRealization->setVisibility(VisibilityKind::public_);
			RemovingInstanceFromPart_B_IRealization->setContract(RemovingInstanceFromPart_I);
			
		RemovingInstanceFromPart_B->addInterfaceRealization(RemovingInstanceFromPart_B_IRealization);
		
			// Operation B_B
			RemovingInstanceFromPart_B_B_B->setThisOperationPtr(RemovingInstanceFromPart_B_B_B);
			RemovingInstanceFromPart_B_B_B->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			RemovingInstanceFromPart_B_B_B->setName("B_B");
			RemovingInstanceFromPart_B_B_B->setVisibility(VisibilityKind::public_);
				// Parameter result
				RemovingInstanceFromPart_B_B_B_result->setThisElementPtr(RemovingInstanceFromPart_B_B_B_result);
				RemovingInstanceFromPart_B_B_B_result->setName("result");
				RemovingInstanceFromPart_B_B_B_result->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPart_B_B_B_result->setType(RemovingInstanceFromPart_B);
				RemovingInstanceFromPart_B_B_B_result->setDirection(ParameterDirectionKind::return_);
			RemovingInstanceFromPart_B_B_B->addOwnedParameter(RemovingInstanceFromPart_B_B_B_result);
		RemovingInstanceFromPart_B->addOwnedOperation(RemovingInstanceFromPart_B_B_B);
			// Operation setP_Integer
			RemovingInstanceFromPart_B_setP_Integer->setThisOperationPtr(RemovingInstanceFromPart_B_setP_Integer);
			RemovingInstanceFromPart_B_setP_Integer->setName("setP_Integer");
			RemovingInstanceFromPart_B_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				RemovingInstanceFromPart_B_setP_Integer_v->setThisElementPtr(RemovingInstanceFromPart_B_setP_Integer_v);
				RemovingInstanceFromPart_B_setP_Integer_v->setName("v");
				RemovingInstanceFromPart_B_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPart_B_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			RemovingInstanceFromPart_B_setP_Integer->addOwnedParameter(RemovingInstanceFromPart_B_setP_Integer_v);
			RemovingInstanceFromPart_B_setP_Integer->addMethod(RemovingInstanceFromPart_B_setPActivity);
		RemovingInstanceFromPart_B->addOwnedOperation(RemovingInstanceFromPart_B_setP_Integer);
	RemovingInstanceFromPart->addPackagedElement(RemovingInstanceFromPart_B);
		// Activity assertA
		RemovingInstanceFromPart_assertA->setThisActivityPtr(RemovingInstanceFromPart_assertA);
		RemovingInstanceFromPart_assertA->setName("assertA");
		RemovingInstanceFromPart_assertA->setVisibility(VisibilityKind::public_);
		// FunctionBehavior assertionNotImplemented
			RemovingInstanceFromPart_assertA_assertionNotImplemented->setThisClass_Ptr(RemovingInstanceFromPart_assertA_assertionNotImplemented);
			RemovingInstanceFromPart_assertA_assertionNotImplemented->setName("assertionNotImplemented");
			RemovingInstanceFromPart_assertA_assertionNotImplemented->setVisibility(VisibilityKind::public_);
			RemovingInstanceFromPart_assertA_assertionNotImplemented->addLanguage("C++");
			RemovingInstanceFromPart_assertA_assertionNotImplemented->addLanguage("Include");
			RemovingInstanceFromPart_assertA_assertionNotImplemented->addBody("std::cout << \"Assertion currenlty not implemented! Model was validated by manual debugging.\"<<std::endl;");
			RemovingInstanceFromPart_assertA_assertionNotImplemented->addBody("#include <iostream>");
		RemovingInstanceFromPart_assertA->addOwnedBehavior(RemovingInstanceFromPart_assertA_assertionNotImplemented);
			// Parameter a
			RemovingInstanceFromPart_assertA_a->setThisElementPtr(RemovingInstanceFromPart_assertA_a);
			RemovingInstanceFromPart_assertA_a->setName("a");
			RemovingInstanceFromPart_assertA_a->setVisibility(VisibilityKind::public_);
			
			RemovingInstanceFromPart_assertA_a->setType(RemovingInstanceFromPart_A);
		RemovingInstanceFromPart_assertA->addOwnedParameter(RemovingInstanceFromPart_assertA_a);
			// ActivityParameterNode aParameterNode
			RemovingInstanceFromPart_assertA_aParameterNode->setThisElementPtr(RemovingInstanceFromPart_assertA_aParameterNode);
			RemovingInstanceFromPart_assertA_aParameterNode->setName("aParameterNode");
			RemovingInstanceFromPart_assertA_aParameterNode->setVisibility(VisibilityKind::public_);
		RemovingInstanceFromPart_assertA->addNode(RemovingInstanceFromPart_assertA_aParameterNode);
			// CallBehaviorAction Call assertionNotImplemented
			RemovingInstanceFromPart_assertA_Call_assertionNotImplemented->setThisExecutableNodePtr(RemovingInstanceFromPart_assertA_Call_assertionNotImplemented);
			RemovingInstanceFromPart_assertA_Call_assertionNotImplemented->setName("Call assertionNotImplemented");
			RemovingInstanceFromPart_assertA_Call_assertionNotImplemented->setVisibility(VisibilityKind::public_);
			RemovingInstanceFromPart_assertA_Call_assertionNotImplemented->setBehavior(RemovingInstanceFromPart_assertA_assertionNotImplemented);
		RemovingInstanceFromPart_assertA->addNode(RemovingInstanceFromPart_assertA_Call_assertionNotImplemented);
	RemovingInstanceFromPart->addPackagedElement(RemovingInstanceFromPart_assertA);
		// Interface I
		RemovingInstanceFromPart_I->setThisInterfacePtr(RemovingInstanceFromPart_I);
		RemovingInstanceFromPart_I->setName("I");
		RemovingInstanceFromPart_I->setVisibility(VisibilityKind::public_);
			// Operation setP_Integer
			RemovingInstanceFromPart_I_setP_Integer->setThisOperationPtr(RemovingInstanceFromPart_I_setP_Integer);
			RemovingInstanceFromPart_I_setP_Integer->setName("setP_Integer");
			RemovingInstanceFromPart_I_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				RemovingInstanceFromPart_I_setP_Integer_v->setThisElementPtr(RemovingInstanceFromPart_I_setP_Integer_v);
				RemovingInstanceFromPart_I_setP_Integer_v->setName("v");
				RemovingInstanceFromPart_I_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPart_I_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			RemovingInstanceFromPart_I_setP_Integer->addOwnedParameter(RemovingInstanceFromPart_I_setP_Integer_v);
		RemovingInstanceFromPart_I->addOwnedOperation(RemovingInstanceFromPart_I_setP_Integer);
	RemovingInstanceFromPart->addPackagedElement(RemovingInstanceFromPart_I);
		// Activity main
		RemovingInstanceFromPart_main->setThisActivityPtr(RemovingInstanceFromPart_main);
		RemovingInstanceFromPart_main->setName("main");
		RemovingInstanceFromPart_main->setVisibility(VisibilityKind::public_);
			// ClearStructuralFeatureAction Clear a.b
			RemovingInstanceFromPart_main_Clear_a_b->setThisExecutableNodePtr(RemovingInstanceFromPart_main_Clear_a_b);
			RemovingInstanceFromPart_main_Clear_a_b->setName("Clear a.b");
			RemovingInstanceFromPart_main_Clear_a_b->setVisibility(VisibilityKind::public_);
			RemovingInstanceFromPart_main_Clear_a_b->setStructuralFeature(RemovingInstanceFromPart_A_b);
				// InputPin object
				RemovingInstanceFromPart_main_Clear_a_b_object->setThisElementPtr(RemovingInstanceFromPart_main_Clear_a_b_object);
				RemovingInstanceFromPart_main_Clear_a_b_object->setName("object");
				RemovingInstanceFromPart_main_Clear_a_b_object->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPart_main_Clear_a_b_object->setType(RemovingInstanceFromPart_A);
			RemovingInstanceFromPart_main_Clear_a_b->setObject(RemovingInstanceFromPart_main_Clear_a_b_object);
				// OutputPin result
				RemovingInstanceFromPart_main_Clear_a_b_result->setThisElementPtr(RemovingInstanceFromPart_main_Clear_a_b_result);
				RemovingInstanceFromPart_main_Clear_a_b_result->setName("result");
				RemovingInstanceFromPart_main_Clear_a_b_result->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPart_main_Clear_a_b_result->setType(RemovingInstanceFromPart_A);
			RemovingInstanceFromPart_main_Clear_a_b->setResult(RemovingInstanceFromPart_main_Clear_a_b_result);
		RemovingInstanceFromPart_main->addNode(RemovingInstanceFromPart_main_Clear_a_b);
			// CreateObjectAction Create A
			RemovingInstanceFromPart_main_Create_A->setThisExecutableNodePtr(RemovingInstanceFromPart_main_Create_A);
			RemovingInstanceFromPart_main_Create_A->setName("Create A");
			RemovingInstanceFromPart_main_Create_A->setVisibility(VisibilityKind::public_);
			RemovingInstanceFromPart_main_Create_A->setClassifier(RemovingInstanceFromPart_A);
				// OutputPin result
				RemovingInstanceFromPart_main_Create_A_result->setThisElementPtr(RemovingInstanceFromPart_main_Create_A_result);
				RemovingInstanceFromPart_main_Create_A_result->setName("result");
				RemovingInstanceFromPart_main_Create_A_result->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPart_main_Create_A_result->setType(RemovingInstanceFromPart_A);
			RemovingInstanceFromPart_main_Create_A->setResult(RemovingInstanceFromPart_main_Create_A_result);
		RemovingInstanceFromPart_main->addNode(RemovingInstanceFromPart_main_Create_A);
			// CallBehaviorAction Call assertA
			RemovingInstanceFromPart_main_Call_assertA->setThisExecutableNodePtr(RemovingInstanceFromPart_main_Call_assertA);
			RemovingInstanceFromPart_main_Call_assertA->setName("Call assertA");
			RemovingInstanceFromPart_main_Call_assertA->setVisibility(VisibilityKind::public_);
			RemovingInstanceFromPart_main_Call_assertA->setBehavior(RemovingInstanceFromPart_assertA);
				// InputPin a
				RemovingInstanceFromPart_main_Call_assertA_a->setThisElementPtr(RemovingInstanceFromPart_main_Call_assertA_a);
				RemovingInstanceFromPart_main_Call_assertA_a->setName("a");
				RemovingInstanceFromPart_main_Call_assertA_a->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPart_main_Call_assertA_a->setType(RemovingInstanceFromPart_A);
			RemovingInstanceFromPart_main_Call_assertA->addArgument(RemovingInstanceFromPart_main_Call_assertA_a);
		RemovingInstanceFromPart_main->addNode(RemovingInstanceFromPart_main_Call_assertA);
			// CallOperationAction A()
			RemovingInstanceFromPart_main_A_->setThisExecutableNodePtr(RemovingInstanceFromPart_main_A_);
			RemovingInstanceFromPart_main_A_->setName("A()");
			RemovingInstanceFromPart_main_A_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				RemovingInstanceFromPart_main_A__result->setThisElementPtr(RemovingInstanceFromPart_main_A__result);
				RemovingInstanceFromPart_main_A__result->setName("result");
				RemovingInstanceFromPart_main_A__result->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPart_main_A__result->setType(RemovingInstanceFromPart_A);
			RemovingInstanceFromPart_main_A_->addResult(RemovingInstanceFromPart_main_A__result);
			RemovingInstanceFromPart_main_A_->setOperation(RemovingInstanceFromPart_A_A_A);
				// InputPin target
				RemovingInstanceFromPart_main_A__target->setThisElementPtr(RemovingInstanceFromPart_main_A__target);
				RemovingInstanceFromPart_main_A__target->setName("target");
				RemovingInstanceFromPart_main_A__target->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPart_main_A__target->setType(RemovingInstanceFromPart_A);
			RemovingInstanceFromPart_main_A_->setTarget(RemovingInstanceFromPart_main_A__target);
		RemovingInstanceFromPart_main->addNode(RemovingInstanceFromPart_main_A_);
			// ObjectFlow ObjectFlow16 from result to a
			RemovingInstanceFromPart_main_ObjectFlow16->setThisActivityEdgePtr(RemovingInstanceFromPart_main_ObjectFlow16);
			RemovingInstanceFromPart_main_ObjectFlow16->setName("ObjectFlow16");
			RemovingInstanceFromPart_main_ObjectFlow16->setVisibility(VisibilityKind::public_);
			
			RemovingInstanceFromPart_main_ObjectFlow16->setSource(RemovingInstanceFromPart_main_Clear_a_b_result);
			RemovingInstanceFromPart_main_ObjectFlow16->setTarget(RemovingInstanceFromPart_main_Call_assertA_a);
				// LiteralBoolean LiteralBoolean17
				RemovingInstanceFromPart_main_ObjectFlow16_LiteralBoolean17->setThisElementPtr(RemovingInstanceFromPart_main_ObjectFlow16_LiteralBoolean17);
				RemovingInstanceFromPart_main_ObjectFlow16_LiteralBoolean17->setName("LiteralBoolean17");
				RemovingInstanceFromPart_main_ObjectFlow16_LiteralBoolean17->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPart_main_ObjectFlow16_LiteralBoolean17->setValue(true);
			RemovingInstanceFromPart_main_ObjectFlow16->setGuard(RemovingInstanceFromPart_main_ObjectFlow16_LiteralBoolean17);
		RemovingInstanceFromPart_main->addEdge(RemovingInstanceFromPart_main_ObjectFlow16);
			// ObjectFlow ObjectFlow21 from result to object
			RemovingInstanceFromPart_main_ObjectFlow21->setThisActivityEdgePtr(RemovingInstanceFromPart_main_ObjectFlow21);
			RemovingInstanceFromPart_main_ObjectFlow21->setName("ObjectFlow21");
			RemovingInstanceFromPart_main_ObjectFlow21->setVisibility(VisibilityKind::public_);
			
			RemovingInstanceFromPart_main_ObjectFlow21->setSource(RemovingInstanceFromPart_main_A__result);
			RemovingInstanceFromPart_main_ObjectFlow21->setTarget(RemovingInstanceFromPart_main_Clear_a_b_object);
				// LiteralBoolean LiteralBoolean22
				RemovingInstanceFromPart_main_ObjectFlow21_LiteralBoolean22->setThisElementPtr(RemovingInstanceFromPart_main_ObjectFlow21_LiteralBoolean22);
				RemovingInstanceFromPart_main_ObjectFlow21_LiteralBoolean22->setName("LiteralBoolean22");
				RemovingInstanceFromPart_main_ObjectFlow21_LiteralBoolean22->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPart_main_ObjectFlow21_LiteralBoolean22->setValue(true);
			RemovingInstanceFromPart_main_ObjectFlow21->setGuard(RemovingInstanceFromPart_main_ObjectFlow21_LiteralBoolean22);
		RemovingInstanceFromPart_main->addEdge(RemovingInstanceFromPart_main_ObjectFlow21);
			// ObjectFlow ObjectFlow24 from result to target
			RemovingInstanceFromPart_main_ObjectFlow24->setThisActivityEdgePtr(RemovingInstanceFromPart_main_ObjectFlow24);
			RemovingInstanceFromPart_main_ObjectFlow24->setName("ObjectFlow24");
			RemovingInstanceFromPart_main_ObjectFlow24->setVisibility(VisibilityKind::public_);
			
			RemovingInstanceFromPart_main_ObjectFlow24->setSource(RemovingInstanceFromPart_main_Create_A_result);
			RemovingInstanceFromPart_main_ObjectFlow24->setTarget(RemovingInstanceFromPart_main_A__target);
				// LiteralBoolean LiteralBoolean26
				RemovingInstanceFromPart_main_ObjectFlow24_LiteralBoolean26->setThisElementPtr(RemovingInstanceFromPart_main_ObjectFlow24_LiteralBoolean26);
				RemovingInstanceFromPart_main_ObjectFlow24_LiteralBoolean26->setName("LiteralBoolean26");
				RemovingInstanceFromPart_main_ObjectFlow24_LiteralBoolean26->setVisibility(VisibilityKind::public_);
				RemovingInstanceFromPart_main_ObjectFlow24_LiteralBoolean26->setValue(true);
			RemovingInstanceFromPart_main_ObjectFlow24->setGuard(RemovingInstanceFromPart_main_ObjectFlow24_LiteralBoolean26);
		RemovingInstanceFromPart_main->addEdge(RemovingInstanceFromPart_main_ObjectFlow24);
	RemovingInstanceFromPart->addPackagedElement(RemovingInstanceFromPart_main);
		// Class IImpl
		RemovingInstanceFromPart_IImpl->setThisClass_Ptr(RemovingInstanceFromPart_IImpl);
		RemovingInstanceFromPart_IImpl->setName("IImpl");
		RemovingInstanceFromPart_IImpl->setVisibility(VisibilityKind::public_);
		RemovingInstanceFromPart_IImpl_IRealization->setName("IRealization");
			RemovingInstanceFromPart_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			RemovingInstanceFromPart_IImpl_IRealization->setContract(RemovingInstanceFromPart_I);
			
		RemovingInstanceFromPart_IImpl->addInterfaceRealization(RemovingInstanceFromPart_IImpl_IRealization);
		
			// Operation setP_Integer
			RemovingInstanceFromPart_IImpl_setP_Integer->setThisOperationPtr(RemovingInstanceFromPart_IImpl_setP_Integer);
			RemovingInstanceFromPart_IImpl_setP_Integer->setName("setP_Integer");
			RemovingInstanceFromPart_IImpl_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				RemovingInstanceFromPart_IImpl_setP_Integer_v->setThisElementPtr(RemovingInstanceFromPart_IImpl_setP_Integer_v);
				RemovingInstanceFromPart_IImpl_setP_Integer_v->setName("v");
				RemovingInstanceFromPart_IImpl_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPart_IImpl_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			RemovingInstanceFromPart_IImpl_setP_Integer->addOwnedParameter(RemovingInstanceFromPart_IImpl_setP_Integer_v);
		RemovingInstanceFromPart_IImpl->addOwnedOperation(RemovingInstanceFromPart_IImpl_setP_Integer);
	RemovingInstanceFromPart->addPackagedElement(RemovingInstanceFromPart_IImpl);
		// Class A
		RemovingInstanceFromPart_A->setThisClass_Ptr(RemovingInstanceFromPart_A);
		RemovingInstanceFromPart_A->setName("A");
		RemovingInstanceFromPart_A->setVisibility(VisibilityKind::public_);
		
			// Port q
			RemovingInstanceFromPart_A_q->setThisElementPtr(RemovingInstanceFromPart_A_q);
			RemovingInstanceFromPart_A_q->setName("q");
			RemovingInstanceFromPart_A_q->setVisibility(VisibilityKind::public_);
			
			RemovingInstanceFromPart_A_q->setType(RemovingInstanceFromPart_IImpl);
			RemovingInstanceFromPart_A_q->setAggregation(AggregationKind::composite);
			RemovingInstanceFromPart_A_q->isService = true;
			RemovingInstanceFromPart_A_q->addProvided(RemovingInstanceFromPart_I);
		RemovingInstanceFromPart_A->addOwnedAttribute(RemovingInstanceFromPart_A_q);
			// Property b
			RemovingInstanceFromPart_A_b->setThisElementPtr(RemovingInstanceFromPart_A_b);
			RemovingInstanceFromPart_A_b->setName("b");
			RemovingInstanceFromPart_A_b->setVisibility(VisibilityKind::public_);
			
			RemovingInstanceFromPart_A_b->setType(RemovingInstanceFromPart_B);
			RemovingInstanceFromPart_A_b->setAggregation(AggregationKind::composite);
		RemovingInstanceFromPart_A->addOwnedAttribute(RemovingInstanceFromPart_A_b);
		
		RemovingInstanceFromPart_A_r->setName("r");
			RemovingInstanceFromPart_A_r->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPart_A_r_ConnectorEnd35->setRole(RemovingInstanceFromPart_A_q);
				
			RemovingInstanceFromPart_A_r->addEnd(RemovingInstanceFromPart_A_r_ConnectorEnd35);
				
				RemovingInstanceFromPart_A_r_ConnectorEnd36->setRole(RemovingInstanceFromPart_A_b);
				
			RemovingInstanceFromPart_A_r->addEnd(RemovingInstanceFromPart_A_r_ConnectorEnd36);
			RemovingInstanceFromPart_A_r->setType(RemovingInstanceFromPart_R);
		RemovingInstanceFromPart_A->addOwnedConnector(RemovingInstanceFromPart_A_r);
			// Operation A_A
			RemovingInstanceFromPart_A_A_A->setThisOperationPtr(RemovingInstanceFromPart_A_A_A);
			RemovingInstanceFromPart_A_A_A->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			RemovingInstanceFromPart_A_A_A->setName("A_A");
			RemovingInstanceFromPart_A_A_A->setVisibility(VisibilityKind::public_);
				// Parameter result
				RemovingInstanceFromPart_A_A_A_result->setThisElementPtr(RemovingInstanceFromPart_A_A_A_result);
				RemovingInstanceFromPart_A_A_A_result->setName("result");
				RemovingInstanceFromPart_A_A_A_result->setVisibility(VisibilityKind::public_);
				
				RemovingInstanceFromPart_A_A_A_result->setType(RemovingInstanceFromPart_A);
				RemovingInstanceFromPart_A_A_A_result->setDirection(ParameterDirectionKind::return_);
			RemovingInstanceFromPart_A_A_A->addOwnedParameter(RemovingInstanceFromPart_A_A_A_result);
		RemovingInstanceFromPart_A->addOwnedOperation(RemovingInstanceFromPart_A_A_A);
	RemovingInstanceFromPart->addPackagedElement(RemovingInstanceFromPart_A);
		// Association R
		RemovingInstanceFromPart_R->setThisAssociationPtr(RemovingInstanceFromPart_R);
		RemovingInstanceFromPart_R->setName("R");
		RemovingInstanceFromPart_R->setVisibility(VisibilityKind::public_);
		RemovingInstanceFromPart_R->addOwnedEnd(RemovingInstanceFromPart_R_x);
		RemovingInstanceFromPart_R->addOwnedEnd(RemovingInstanceFromPart_R_y);
	RemovingInstanceFromPart->addPackagedElement(RemovingInstanceFromPart_R);
}
