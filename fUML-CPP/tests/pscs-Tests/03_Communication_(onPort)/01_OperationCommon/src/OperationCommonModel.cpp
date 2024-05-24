/*
 * OperationCommonModel.cpp
 * 
 * Auto-generated file
 */

#include "OperationCommonModel.h"

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/activities/ObjectFlow.h>
#include <uml/activities/Activity.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/structuredclassifiers/Association.h>
#include <uml/values/LiteralBoolean.h>
#include <uml/actions/AddStructuralFeatureValueAction.h>
#include <uml/classification/Property.h>
#include <uml/actions/InputPin.h>
#include <uml/values/LiteralInteger.h>
#include <uml/simpleclassifiers/InterfaceRealization.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/classification/Parameter.h>
#include <uml/packages/Package.h>
#include <uml/activities/ActivityParameterNode.h>
#include <uml/values/LiteralUnlimitedNatural.h>
#include <uml/classification/Operation.h>
#include <uml/actions/ReadSelfAction.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/commonstructure/PackageImport.h>
#include <uml/actions/OutputPin.h>
#include <uml/structuredclassifiers/Class_.h>
#include <uml/simpleclassifiers/Interface.h>


/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace OperationCommon;
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

OperationCommonModel::OperationCommonModel()
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

OperationCommonModel::~OperationCommonModel()
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

const std::shared_ptr<OperationCommonModel>& OperationCommonModel::Instance()
{
	static std::shared_ptr<OperationCommonModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new OperationCommonModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void OperationCommonModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model OperationCommon
	 */
	OperationCommon.reset(new Package());
	this->addToElementRepository("OperationCommon", OperationCommon);
		OperationCommon_S.reset(new Association());
		this->addToElementRepository("S", OperationCommon_S);
			OperationCommon_S_y.reset(new Property());
			this->addToElementRepository("y", OperationCommon_S_y);
			OperationCommon_S_x.reset(new Property());
			this->addToElementRepository("x", OperationCommon_S_x);
		OperationCommon_R.reset(new Association());
		this->addToElementRepository("R", OperationCommon_R);
			OperationCommon_R_y.reset(new Property());
			this->addToElementRepository("y", OperationCommon_R_y);
			OperationCommon_R_x.reset(new Property());
			this->addToElementRepository("x", OperationCommon_R_x);
		OperationCommon_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", OperationCommon_IImpl);
			OperationCommon_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", OperationCommon_IImpl_IRealization);
			OperationCommon_IImpl_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", OperationCommon_IImpl_setP_Integer);
				OperationCommon_IImpl_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", OperationCommon_IImpl_setP_Integer_v);
		OperationCommon_I.reset(new Interface());
		this->addToElementRepository("I", OperationCommon_I);
			OperationCommon_I_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", OperationCommon_I_setP_Integer);
				OperationCommon_I_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", OperationCommon_I_setP_Integer_v);
		OperationCommon_B.reset(new Class_());
		this->addToElementRepository("B", OperationCommon_B);
			OperationCommon_B_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", OperationCommon_B_setPActivity);
				OperationCommon_B_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", OperationCommon_B_setPActivity_v);
				OperationCommon_B_setPActivity_ObjectFlow0.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow0", OperationCommon_B_setPActivity_ObjectFlow0);
					OperationCommon_B_setPActivity_ObjectFlow0_LiteralBoolean1.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean1", OperationCommon_B_setPActivity_ObjectFlow0_LiteralBoolean1);
					OperationCommon_B_setPActivity_ObjectFlow0_LiteralInteger2.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger2", OperationCommon_B_setPActivity_ObjectFlow0_LiteralInteger2);
				OperationCommon_B_setPActivity_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", OperationCommon_B_setPActivity_Set_this_p);
					OperationCommon_B_setPActivity_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", OperationCommon_B_setPActivity_Set_this_p_result);
						OperationCommon_B_setPActivity_Set_this_p_result_LiteralInteger3.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger3", OperationCommon_B_setPActivity_Set_this_p_result_LiteralInteger3);
						OperationCommon_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural4.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural4", OperationCommon_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural4);
					OperationCommon_B_setPActivity_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", OperationCommon_B_setPActivity_Set_this_p_object);
						OperationCommon_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural5.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural5", OperationCommon_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural5);
						OperationCommon_B_setPActivity_Set_this_p_object_LiteralInteger6.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger6", OperationCommon_B_setPActivity_Set_this_p_object_LiteralInteger6);
					OperationCommon_B_setPActivity_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", OperationCommon_B_setPActivity_Set_this_p_value);
						OperationCommon_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural7.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural7", OperationCommon_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural7);
						OperationCommon_B_setPActivity_Set_this_p_value_LiteralInteger8.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger8", OperationCommon_B_setPActivity_Set_this_p_value_LiteralInteger8);
				OperationCommon_B_setPActivity_ObjectFlow9.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow9", OperationCommon_B_setPActivity_ObjectFlow9);
					OperationCommon_B_setPActivity_ObjectFlow9_LiteralInteger10.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger10", OperationCommon_B_setPActivity_ObjectFlow9_LiteralInteger10);
					OperationCommon_B_setPActivity_ObjectFlow9_LiteralBoolean11.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean11", OperationCommon_B_setPActivity_ObjectFlow9_LiteralBoolean11);
				OperationCommon_B_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", OperationCommon_B_setPActivity_vParameterNode);
					OperationCommon_B_setPActivity_vParameterNode_LiteralInteger12.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger12", OperationCommon_B_setPActivity_vParameterNode_LiteralInteger12);
				OperationCommon_B_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", OperationCommon_B_setPActivity_this);
					OperationCommon_B_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", OperationCommon_B_setPActivity_this_result);
						OperationCommon_B_setPActivity_this_result_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural13", OperationCommon_B_setPActivity_this_result_LiteralUnlimitedNatural13);
						OperationCommon_B_setPActivity_this_result_LiteralInteger14.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger14", OperationCommon_B_setPActivity_this_result_LiteralInteger14);
			OperationCommon_B_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", OperationCommon_B_setP_Integer);
				OperationCommon_B_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", OperationCommon_B_setP_Integer_v);
			OperationCommon_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", OperationCommon_B_IRealization);
			OperationCommon_B_p.reset(new Property());
			this->addToElementRepository("p", OperationCommon_B_p);

	// Initialize public members
	/*
	 * Model OperationCommon
	 */
	OperationCommon->setThisPackagePtr(OperationCommon);
	OperationCommon->setName("OperationCommon");
	OperationCommon->setVisibility(VisibilityKind::public_);
		// Association S
		OperationCommon_S->setThisAssociationPtr(OperationCommon_S);
		OperationCommon_S->setName("S");
		OperationCommon_S->setVisibility(VisibilityKind::public_);
		OperationCommon_S->addOwnedEnd(OperationCommon_S_x);
		OperationCommon_S->addOwnedEnd(OperationCommon_S_y);
	OperationCommon->addPackagedElement(OperationCommon_S);
		// Association R
		OperationCommon_R->setThisAssociationPtr(OperationCommon_R);
		OperationCommon_R->setName("R");
		OperationCommon_R->setVisibility(VisibilityKind::public_);
		OperationCommon_R->addOwnedEnd(OperationCommon_R_x);
		OperationCommon_R->addOwnedEnd(OperationCommon_R_y);
	OperationCommon->addPackagedElement(OperationCommon_R);
		// Class IImpl
		OperationCommon_IImpl->setThisClass_Ptr(OperationCommon_IImpl);
		OperationCommon_IImpl->setName("IImpl");
		OperationCommon_IImpl->setVisibility(VisibilityKind::public_);
		OperationCommon_IImpl_IRealization->setName("IRealization");
			OperationCommon_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			OperationCommon_IImpl_IRealization->setContract(OperationCommon_I);
			
		OperationCommon_IImpl->addInterfaceRealization(OperationCommon_IImpl_IRealization);
		
			// Operation setP_Integer
			OperationCommon_IImpl_setP_Integer->setThisOperationPtr(OperationCommon_IImpl_setP_Integer);
			OperationCommon_IImpl_setP_Integer->setName("setP_Integer");
			OperationCommon_IImpl_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				OperationCommon_IImpl_setP_Integer_v->setThisElementPtr(OperationCommon_IImpl_setP_Integer_v);
				OperationCommon_IImpl_setP_Integer_v->setName("v");
				OperationCommon_IImpl_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				OperationCommon_IImpl_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			OperationCommon_IImpl_setP_Integer->addOwnedParameter(OperationCommon_IImpl_setP_Integer_v);
		OperationCommon_IImpl->addOwnedOperation(OperationCommon_IImpl_setP_Integer);
	OperationCommon->addPackagedElement(OperationCommon_IImpl);
		// Interface I
		OperationCommon_I->setThisInterfacePtr(OperationCommon_I);
		OperationCommon_I->setName("I");
		OperationCommon_I->setVisibility(VisibilityKind::public_);
			// Operation setP_Integer
			OperationCommon_I_setP_Integer->setThisOperationPtr(OperationCommon_I_setP_Integer);
			OperationCommon_I_setP_Integer->setName("setP_Integer");
			OperationCommon_I_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				OperationCommon_I_setP_Integer_v->setThisElementPtr(OperationCommon_I_setP_Integer_v);
				OperationCommon_I_setP_Integer_v->setName("v");
				OperationCommon_I_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				OperationCommon_I_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			OperationCommon_I_setP_Integer->addOwnedParameter(OperationCommon_I_setP_Integer_v);
		OperationCommon_I->addOwnedOperation(OperationCommon_I_setP_Integer);
	OperationCommon->addPackagedElement(OperationCommon_I);
		// Class B
		OperationCommon_B->setThisClass_Ptr(OperationCommon_B);
		OperationCommon_B->setName("B");
		OperationCommon_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			OperationCommon_B_p->setThisElementPtr(OperationCommon_B_p);
			OperationCommon_B_p->setName("p");
			OperationCommon_B_p->setVisibility(VisibilityKind::public_);
			
			OperationCommon_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		OperationCommon_B->addOwnedAttribute(OperationCommon_B_p);
		// Activity setPActivity
			OperationCommon_B_setPActivity->setThisActivityPtr(OperationCommon_B_setPActivity);
			OperationCommon_B_setPActivity->setName("setPActivity");
			OperationCommon_B_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				OperationCommon_B_setPActivity_v->setThisElementPtr(OperationCommon_B_setPActivity_v);
				OperationCommon_B_setPActivity_v->setName("v");
				OperationCommon_B_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				OperationCommon_B_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			OperationCommon_B_setPActivity->addOwnedParameter(OperationCommon_B_setPActivity_v);
				// AddStructuralFeatureValueAction Set this.p
				OperationCommon_B_setPActivity_Set_this_p->setThisExecutableNodePtr(OperationCommon_B_setPActivity_Set_this_p);
				OperationCommon_B_setPActivity_Set_this_p->setName("Set this.p");
				OperationCommon_B_setPActivity_Set_this_p->setVisibility(VisibilityKind::public_);
				OperationCommon_B_setPActivity_Set_this_p->setStructuralFeature(OperationCommon_B_p);
					// InputPin object
					OperationCommon_B_setPActivity_Set_this_p_object->setThisElementPtr(OperationCommon_B_setPActivity_Set_this_p_object);
					OperationCommon_B_setPActivity_Set_this_p_object->setName("object");
					OperationCommon_B_setPActivity_Set_this_p_object->setVisibility(VisibilityKind::public_);
					OperationCommon_B_setPActivity_Set_this_p_object->setType(OperationCommon_B);
				OperationCommon_B_setPActivity_Set_this_p->setObject(OperationCommon_B_setPActivity_Set_this_p_object);
					// InputPin value
					OperationCommon_B_setPActivity_Set_this_p_value->setThisElementPtr(OperationCommon_B_setPActivity_Set_this_p_value);
					OperationCommon_B_setPActivity_Set_this_p_value->setName("value");
					OperationCommon_B_setPActivity_Set_this_p_value->setVisibility(VisibilityKind::public_);
					OperationCommon_B_setPActivity_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				OperationCommon_B_setPActivity_Set_this_p->setValue(OperationCommon_B_setPActivity_Set_this_p_value);
					// OutputPin result
					OperationCommon_B_setPActivity_Set_this_p_result->setThisElementPtr(OperationCommon_B_setPActivity_Set_this_p_result);
					OperationCommon_B_setPActivity_Set_this_p_result->setName("result");
					OperationCommon_B_setPActivity_Set_this_p_result->setVisibility(VisibilityKind::public_);
					OperationCommon_B_setPActivity_Set_this_p_result->setType(OperationCommon_B);
				OperationCommon_B_setPActivity_Set_this_p->setResult(OperationCommon_B_setPActivity_Set_this_p_result);
				OperationCommon_B_setPActivity_Set_this_p->setIsReplaceAll(true);
			OperationCommon_B_setPActivity->addNode(OperationCommon_B_setPActivity_Set_this_p);
				// ActivityParameterNode vParameterNode
				OperationCommon_B_setPActivity_vParameterNode->setThisElementPtr(OperationCommon_B_setPActivity_vParameterNode);
				OperationCommon_B_setPActivity_vParameterNode->setName("vParameterNode");
				OperationCommon_B_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				OperationCommon_B_setPActivity_vParameterNode->setParameter(OperationCommon_B_setPActivity_v);
			OperationCommon_B_setPActivity->addNode(OperationCommon_B_setPActivity_vParameterNode);
				// ReadSelfAction this
				OperationCommon_B_setPActivity_this->setThisExecutableNodePtr(OperationCommon_B_setPActivity_this);
				OperationCommon_B_setPActivity_this->setName("this");
				OperationCommon_B_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					OperationCommon_B_setPActivity_this_result->setThisElementPtr(OperationCommon_B_setPActivity_this_result);
					OperationCommon_B_setPActivity_this_result->setName("result");
					OperationCommon_B_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					OperationCommon_B_setPActivity_this_result->setType(OperationCommon_B);
				OperationCommon_B_setPActivity_this->setResult(OperationCommon_B_setPActivity_this_result);
			OperationCommon_B_setPActivity->addNode(OperationCommon_B_setPActivity_this);
				// ObjectFlow ObjectFlow0 from vParameterNode to value
				OperationCommon_B_setPActivity_ObjectFlow0->setThisActivityEdgePtr(OperationCommon_B_setPActivity_ObjectFlow0);
				OperationCommon_B_setPActivity_ObjectFlow0->setName("ObjectFlow0");
				OperationCommon_B_setPActivity_ObjectFlow0->setVisibility(VisibilityKind::public_);
				
				OperationCommon_B_setPActivity_ObjectFlow0->setSource(OperationCommon_B_setPActivity_vParameterNode);
				OperationCommon_B_setPActivity_ObjectFlow0->setTarget(OperationCommon_B_setPActivity_Set_this_p_value);
					// LiteralBoolean LiteralBoolean1
					OperationCommon_B_setPActivity_ObjectFlow0_LiteralBoolean1->setThisElementPtr(OperationCommon_B_setPActivity_ObjectFlow0_LiteralBoolean1);
					OperationCommon_B_setPActivity_ObjectFlow0_LiteralBoolean1->setName("LiteralBoolean1");
					OperationCommon_B_setPActivity_ObjectFlow0_LiteralBoolean1->setVisibility(VisibilityKind::public_);
					OperationCommon_B_setPActivity_ObjectFlow0_LiteralBoolean1->setValue(true);
				OperationCommon_B_setPActivity_ObjectFlow0->setGuard(OperationCommon_B_setPActivity_ObjectFlow0_LiteralBoolean1);
			OperationCommon_B_setPActivity->addEdge(OperationCommon_B_setPActivity_ObjectFlow0);
				// ObjectFlow ObjectFlow9 from result to object
				OperationCommon_B_setPActivity_ObjectFlow9->setThisActivityEdgePtr(OperationCommon_B_setPActivity_ObjectFlow9);
				OperationCommon_B_setPActivity_ObjectFlow9->setName("ObjectFlow9");
				OperationCommon_B_setPActivity_ObjectFlow9->setVisibility(VisibilityKind::public_);
				
				OperationCommon_B_setPActivity_ObjectFlow9->setSource(OperationCommon_B_setPActivity_this_result);
				OperationCommon_B_setPActivity_ObjectFlow9->setTarget(OperationCommon_B_setPActivity_Set_this_p_object);
					// LiteralBoolean LiteralBoolean11
					OperationCommon_B_setPActivity_ObjectFlow9_LiteralBoolean11->setThisElementPtr(OperationCommon_B_setPActivity_ObjectFlow9_LiteralBoolean11);
					OperationCommon_B_setPActivity_ObjectFlow9_LiteralBoolean11->setName("LiteralBoolean11");
					OperationCommon_B_setPActivity_ObjectFlow9_LiteralBoolean11->setVisibility(VisibilityKind::public_);
					OperationCommon_B_setPActivity_ObjectFlow9_LiteralBoolean11->setValue(true);
				OperationCommon_B_setPActivity_ObjectFlow9->setGuard(OperationCommon_B_setPActivity_ObjectFlow9_LiteralBoolean11);
			OperationCommon_B_setPActivity->addEdge(OperationCommon_B_setPActivity_ObjectFlow9);
		OperationCommon_B->addOwnedBehavior(OperationCommon_B_setPActivity);
			OperationCommon_B_IRealization->setName("IRealization");
			OperationCommon_B_IRealization->setVisibility(VisibilityKind::public_);
			OperationCommon_B_IRealization->setContract(OperationCommon_I);
			
		OperationCommon_B->addInterfaceRealization(OperationCommon_B_IRealization);
		
			// Operation setP_Integer
			OperationCommon_B_setP_Integer->setThisOperationPtr(OperationCommon_B_setP_Integer);
			OperationCommon_B_setP_Integer->setName("setP_Integer");
			OperationCommon_B_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				OperationCommon_B_setP_Integer_v->setThisElementPtr(OperationCommon_B_setP_Integer_v);
				OperationCommon_B_setP_Integer_v->setName("v");
				OperationCommon_B_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				OperationCommon_B_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			OperationCommon_B_setP_Integer->addOwnedParameter(OperationCommon_B_setP_Integer_v);
		OperationCommon_B->addOwnedOperation(OperationCommon_B_setP_Integer);
	OperationCommon->addPackagedElement(OperationCommon_B);
}
