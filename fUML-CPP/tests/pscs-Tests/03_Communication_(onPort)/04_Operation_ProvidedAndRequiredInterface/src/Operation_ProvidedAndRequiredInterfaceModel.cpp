/*
 * Operation_ProvidedAndRequiredInterfaceModel.cpp
 * 
 * Auto-generated file
 */

#include "Operation_ProvidedAndRequiredInterfaceModel.h"

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
#include <uml/commonstructure/Usage.h>
#include <utils/standardprofile/StandardProfileModel.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <uml/simpleclassifiers/Interface.h>
#include <uml/activities/ControlFlow.h>
#include <uml/activities/ForkNode.h>
#include <uml/structuredclassifiers/ConnectorEnd.h>
#include <uml/classification/Generalization.h>
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

using namespace Operation_ProvidedAndRequiredInterface;
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

Operation_ProvidedAndRequiredInterfaceModel::Operation_ProvidedAndRequiredInterfaceModel()
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

Operation_ProvidedAndRequiredInterfaceModel::~Operation_ProvidedAndRequiredInterfaceModel()
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

const std::shared_ptr<Operation_ProvidedAndRequiredInterfaceModel>& Operation_ProvidedAndRequiredInterfaceModel::Instance()
{
	static std::shared_ptr<Operation_ProvidedAndRequiredInterfaceModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new Operation_ProvidedAndRequiredInterfaceModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void Operation_ProvidedAndRequiredInterfaceModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model Operation_ProvidedAndRequiredInterface
	 */
	Operation_ProvidedAndRequiredInterface.reset(new Package());
	this->addToElementRepository("Operation_ProvidedAndRequiredInterface", Operation_ProvidedAndRequiredInterface);
		Operation_ProvidedAndRequiredInterface_R.reset(new Association());
		this->addToElementRepository("R", Operation_ProvidedAndRequiredInterface_R);
			Operation_ProvidedAndRequiredInterface_R_y.reset(new Property());
			this->addToElementRepository("y", Operation_ProvidedAndRequiredInterface_R_y);
			Operation_ProvidedAndRequiredInterface_R_x.reset(new Property());
			this->addToElementRepository("x", Operation_ProvidedAndRequiredInterface_R_x);
		Operation_ProvidedAndRequiredInterface_S.reset(new Association());
		this->addToElementRepository("S", Operation_ProvidedAndRequiredInterface_S);
			Operation_ProvidedAndRequiredInterface_S_x.reset(new Property());
			this->addToElementRepository("x", Operation_ProvidedAndRequiredInterface_S_x);
			Operation_ProvidedAndRequiredInterface_S_y.reset(new Property());
			this->addToElementRepository("y", Operation_ProvidedAndRequiredInterface_S_y);
		Operation_ProvidedAndRequiredInterface_C.reset(new Class_());
		this->addToElementRepository("C", Operation_ProvidedAndRequiredInterface_C);
			Operation_ProvidedAndRequiredInterface_C_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_ProvidedAndRequiredInterface_C_setP_Integer);
				Operation_ProvidedAndRequiredInterface_C_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_ProvidedAndRequiredInterface_C_setP_Integer_v);
			Operation_ProvidedAndRequiredInterface_C_q.reset(new Port());
			this->addToElementRepository("q", Operation_ProvidedAndRequiredInterface_C_q);
			Operation_ProvidedAndRequiredInterface_C_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", Operation_ProvidedAndRequiredInterface_C_IRealization);
			Operation_ProvidedAndRequiredInterface_C_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", Operation_ProvidedAndRequiredInterface_C_setPActivity);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow0", Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0_LiteralBoolean1.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean1", Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0_LiteralBoolean1);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0_LiteralInteger2.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger2", Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0_LiteralInteger2);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", Operation_ProvidedAndRequiredInterface_C_setPActivity_vParameterNode);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_vParameterNode_LiteralInteger3.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger3", Operation_ProvidedAndRequiredInterface_C_setPActivity_vParameterNode_LiteralInteger3);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow4", Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4_LiteralInteger5.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger5", Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4_LiteralInteger5);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4_LiteralBoolean6.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean6", Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4_LiteralBoolean6);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Operation_ProvidedAndRequiredInterface_C_setPActivity_this);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result);
						Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result_LiteralInteger7.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger7", Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result_LiteralInteger7);
						Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result_LiteralUnlimitedNatural8.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural8", Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result_LiteralUnlimitedNatural8);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_ProvidedAndRequiredInterface_C_setPActivity_v);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q.reset(new CallOperationAction());
				this->addToElementRepository("Call I::setP on q", Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target.reset(new InputPin());
					this->addToElementRepository("target", Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target);
						Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target_LiteralInteger9.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger9", Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target_LiteralInteger9);
						Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural10.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural10", Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural10);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v.reset(new InputPin());
					this->addToElementRepository("v", Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v);
						Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger11.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger11", Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger11);
						Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger12.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger12", Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralInteger12);
						Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural13", Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural13);
		Operation_ProvidedAndRequiredInterface_I.reset(new Interface());
		this->addToElementRepository("I", Operation_ProvidedAndRequiredInterface_I);
			Operation_ProvidedAndRequiredInterface_I_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_ProvidedAndRequiredInterface_I_setP_Integer);
				Operation_ProvidedAndRequiredInterface_I_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_ProvidedAndRequiredInterface_I_setP_Integer_v);
		Operation_ProvidedAndRequiredInterface_D.reset(new Class_());
		this->addToElementRepository("D", Operation_ProvidedAndRequiredInterface_D);
			Operation_ProvidedAndRequiredInterface_D_D_D.reset(new Operation());
			this->addToElementRepository("D_D", Operation_ProvidedAndRequiredInterface_D_D_D);
				Operation_ProvidedAndRequiredInterface_D_D_D_result.reset(new Parameter());
				this->addToElementRepository("result", Operation_ProvidedAndRequiredInterface_D_D_D_result);
			Operation_ProvidedAndRequiredInterface_D_a.reset(new Property());
			this->addToElementRepository("a", Operation_ProvidedAndRequiredInterface_D_a);
			Operation_ProvidedAndRequiredInterface_D_e.reset(new Property());
			this->addToElementRepository("e", Operation_ProvidedAndRequiredInterface_D_e);
			Operation_ProvidedAndRequiredInterface_D_s.reset(new Connector());
			this->addToElementRepository("s", Operation_ProvidedAndRequiredInterface_D_s);
				Operation_ProvidedAndRequiredInterface_D_s_ConnectorEnd14.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd14", Operation_ProvidedAndRequiredInterface_D_s_ConnectorEnd14);
				Operation_ProvidedAndRequiredInterface_D_s_ConnectorEnd15.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd15", Operation_ProvidedAndRequiredInterface_D_s_ConnectorEnd15);
		Operation_ProvidedAndRequiredInterface_main.reset(new Activity());
		this->addToElementRepository("main", Operation_ProvidedAndRequiredInterface_main);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow16.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow16", Operation_ProvidedAndRequiredInterface_main_ObjectFlow16);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow16_LiteralBoolean17.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean17", Operation_ProvidedAndRequiredInterface_main_ObjectFlow16_LiteralBoolean17);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow16_LiteralInteger18.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger18", Operation_ProvidedAndRequiredInterface_main_ObjectFlow16_LiteralInteger18);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow19.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow19", Operation_ProvidedAndRequiredInterface_main_ObjectFlow19);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow19_LiteralInteger20.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger20", Operation_ProvidedAndRequiredInterface_main_ObjectFlow19_LiteralInteger20);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow19_LiteralBoolean21.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean21", Operation_ProvidedAndRequiredInterface_main_ObjectFlow19_LiteralBoolean21);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow22.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow22", Operation_ProvidedAndRequiredInterface_main_ObjectFlow22);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow22_LiteralBoolean23.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean23", Operation_ProvidedAndRequiredInterface_main_ObjectFlow22_LiteralBoolean23);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow22_LiteralInteger24.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger24", Operation_ProvidedAndRequiredInterface_main_ObjectFlow22_LiteralInteger24);
			Operation_ProvidedAndRequiredInterface_main_Fork_d.reset(new ForkNode());
			this->addToElementRepository("Fork d", Operation_ProvidedAndRequiredInterface_main_Fork_d);
			Operation_ProvidedAndRequiredInterface_main_Call_setP_.reset(new CallOperationAction());
			this->addToElementRepository("Call setP()", Operation_ProvidedAndRequiredInterface_main_Call_setP_);
				Operation_ProvidedAndRequiredInterface_main_Call_setP__v.reset(new InputPin());
				this->addToElementRepository("v", Operation_ProvidedAndRequiredInterface_main_Call_setP__v);
					Operation_ProvidedAndRequiredInterface_main_Call_setP__v_LiteralInteger25.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger25", Operation_ProvidedAndRequiredInterface_main_Call_setP__v_LiteralInteger25);
					Operation_ProvidedAndRequiredInterface_main_Call_setP__v_LiteralUnlimitedNatural26.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural26", Operation_ProvidedAndRequiredInterface_main_Call_setP__v_LiteralUnlimitedNatural26);
					Operation_ProvidedAndRequiredInterface_main_Call_setP__v_LiteralInteger27.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger27", Operation_ProvidedAndRequiredInterface_main_Call_setP__v_LiteralInteger27);
				Operation_ProvidedAndRequiredInterface_main_Call_setP__target.reset(new InputPin());
				this->addToElementRepository("target", Operation_ProvidedAndRequiredInterface_main_Call_setP__target);
					Operation_ProvidedAndRequiredInterface_main_Call_setP__target_LiteralInteger28.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger28", Operation_ProvidedAndRequiredInterface_main_Call_setP__target_LiteralInteger28);
					Operation_ProvidedAndRequiredInterface_main_Call_setP__target_LiteralUnlimitedNatural29.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural29", Operation_ProvidedAndRequiredInterface_main_Call_setP__target_LiteralUnlimitedNatural29);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow30.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow30", Operation_ProvidedAndRequiredInterface_main_ObjectFlow30);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow30_LiteralInteger31.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger31", Operation_ProvidedAndRequiredInterface_main_ObjectFlow30_LiteralInteger31);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow30_LiteralBoolean32.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean32", Operation_ProvidedAndRequiredInterface_main_ObjectFlow30_LiteralBoolean32);
			Operation_ProvidedAndRequiredInterface_main_Call_testP.reset(new CallBehaviorAction());
			this->addToElementRepository("Call testP", Operation_ProvidedAndRequiredInterface_main_Call_testP);
				Operation_ProvidedAndRequiredInterface_main_Call_testP_p.reset(new InputPin());
				this->addToElementRepository("p", Operation_ProvidedAndRequiredInterface_main_Call_testP_p);
					Operation_ProvidedAndRequiredInterface_main_Call_testP_p_LiteralInteger33.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger33", Operation_ProvidedAndRequiredInterface_main_Call_testP_p_LiteralInteger33);
					Operation_ProvidedAndRequiredInterface_main_Call_testP_p_LiteralInteger34.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger34", Operation_ProvidedAndRequiredInterface_main_Call_testP_p_LiteralInteger34);
					Operation_ProvidedAndRequiredInterface_main_Call_testP_p_LiteralUnlimitedNatural35.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural35", Operation_ProvidedAndRequiredInterface_main_Call_testP_p_LiteralUnlimitedNatural35);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow36.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow36", Operation_ProvidedAndRequiredInterface_main_ObjectFlow36);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow36_LiteralBoolean37.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean37", Operation_ProvidedAndRequiredInterface_main_ObjectFlow36_LiteralBoolean37);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow36_LiteralInteger38.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger38", Operation_ProvidedAndRequiredInterface_main_ObjectFlow36_LiteralInteger38);
			Operation_ProvidedAndRequiredInterface_main_testP.reset(new OpaqueBehavior());
			this->addToElementRepository("testP", Operation_ProvidedAndRequiredInterface_main_testP);
				Operation_ProvidedAndRequiredInterface_main_testP_p.reset(new Parameter());
				this->addToElementRepository("p", Operation_ProvidedAndRequiredInterface_main_testP_p);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow39.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow39", Operation_ProvidedAndRequiredInterface_main_ObjectFlow39);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow39_LiteralBoolean40.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean40", Operation_ProvidedAndRequiredInterface_main_ObjectFlow39_LiteralBoolean40);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow39_LiteralInteger41.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger41", Operation_ProvidedAndRequiredInterface_main_ObjectFlow39_LiteralInteger41);
			Operation_ProvidedAndRequiredInterface_main_Read_a_b.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read a.b", Operation_ProvidedAndRequiredInterface_main_Read_a_b);
				Operation_ProvidedAndRequiredInterface_main_Read_a_b_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_ProvidedAndRequiredInterface_main_Read_a_b_object);
					Operation_ProvidedAndRequiredInterface_main_Read_a_b_object_LiteralInteger42.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger42", Operation_ProvidedAndRequiredInterface_main_Read_a_b_object_LiteralInteger42);
					Operation_ProvidedAndRequiredInterface_main_Read_a_b_object_LiteralUnlimitedNatural43.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural43", Operation_ProvidedAndRequiredInterface_main_Read_a_b_object_LiteralUnlimitedNatural43);
				Operation_ProvidedAndRequiredInterface_main_Read_a_b_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_ProvidedAndRequiredInterface_main_Read_a_b_result);
					Operation_ProvidedAndRequiredInterface_main_Read_a_b_result_LiteralUnlimitedNatural44.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural44", Operation_ProvidedAndRequiredInterface_main_Read_a_b_result_LiteralUnlimitedNatural44);
					Operation_ProvidedAndRequiredInterface_main_Read_a_b_result_LiteralInteger45.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger45", Operation_ProvidedAndRequiredInterface_main_Read_a_b_result_LiteralInteger45);
			Operation_ProvidedAndRequiredInterface_main_D_.reset(new CallOperationAction());
			this->addToElementRepository("D()", Operation_ProvidedAndRequiredInterface_main_D_);
				Operation_ProvidedAndRequiredInterface_main_D__target.reset(new InputPin());
				this->addToElementRepository("target", Operation_ProvidedAndRequiredInterface_main_D__target);
					Operation_ProvidedAndRequiredInterface_main_D__target_LiteralUnlimitedNatural46.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural46", Operation_ProvidedAndRequiredInterface_main_D__target_LiteralUnlimitedNatural46);
					Operation_ProvidedAndRequiredInterface_main_D__target_LiteralInteger47.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger47", Operation_ProvidedAndRequiredInterface_main_D__target_LiteralInteger47);
				Operation_ProvidedAndRequiredInterface_main_D__result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_ProvidedAndRequiredInterface_main_D__result);
					Operation_ProvidedAndRequiredInterface_main_D__result_LiteralInteger48.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger48", Operation_ProvidedAndRequiredInterface_main_D__result_LiteralInteger48);
					Operation_ProvidedAndRequiredInterface_main_D__result_LiteralUnlimitedNatural49.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural49", Operation_ProvidedAndRequiredInterface_main_D__result_LiteralUnlimitedNatural49);
					Operation_ProvidedAndRequiredInterface_main_D__result_LiteralInteger50.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger50", Operation_ProvidedAndRequiredInterface_main_D__result_LiteralInteger50);
			Operation_ProvidedAndRequiredInterface_main_ControlFlow51.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow51", Operation_ProvidedAndRequiredInterface_main_ControlFlow51);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow52.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow52", Operation_ProvidedAndRequiredInterface_main_ObjectFlow52);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow52_LiteralInteger53.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger53", Operation_ProvidedAndRequiredInterface_main_ObjectFlow52_LiteralInteger53);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow52_LiteralBoolean54.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean54", Operation_ProvidedAndRequiredInterface_main_ObjectFlow52_LiteralBoolean54);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow55.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow55", Operation_ProvidedAndRequiredInterface_main_ObjectFlow55);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow55_LiteralBoolean56.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean56", Operation_ProvidedAndRequiredInterface_main_ObjectFlow55_LiteralBoolean56);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow55_LiteralInteger57.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger57", Operation_ProvidedAndRequiredInterface_main_ObjectFlow55_LiteralInteger57);
			Operation_ProvidedAndRequiredInterface_main_Read_b_p.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read b.p", Operation_ProvidedAndRequiredInterface_main_Read_b_p);
				Operation_ProvidedAndRequiredInterface_main_Read_b_p_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_ProvidedAndRequiredInterface_main_Read_b_p_result);
					Operation_ProvidedAndRequiredInterface_main_Read_b_p_result_LiteralInteger58.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger58", Operation_ProvidedAndRequiredInterface_main_Read_b_p_result_LiteralInteger58);
					Operation_ProvidedAndRequiredInterface_main_Read_b_p_result_LiteralUnlimitedNatural59.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural59", Operation_ProvidedAndRequiredInterface_main_Read_b_p_result_LiteralUnlimitedNatural59);
				Operation_ProvidedAndRequiredInterface_main_Read_b_p_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_ProvidedAndRequiredInterface_main_Read_b_p_object);
					Operation_ProvidedAndRequiredInterface_main_Read_b_p_object_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural60", Operation_ProvidedAndRequiredInterface_main_Read_b_p_object_LiteralUnlimitedNatural60);
					Operation_ProvidedAndRequiredInterface_main_Read_b_p_object_LiteralInteger61.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger61", Operation_ProvidedAndRequiredInterface_main_Read_b_p_object_LiteralInteger61);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow62.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow62", Operation_ProvidedAndRequiredInterface_main_ObjectFlow62);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow62_LiteralInteger63.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger63", Operation_ProvidedAndRequiredInterface_main_ObjectFlow62_LiteralInteger63);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow62_LiteralBoolean64.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean64", Operation_ProvidedAndRequiredInterface_main_ObjectFlow62_LiteralBoolean64);
			Operation_ProvidedAndRequiredInterface_main_Read_e_c.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read e.c", Operation_ProvidedAndRequiredInterface_main_Read_e_c);
				Operation_ProvidedAndRequiredInterface_main_Read_e_c_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_ProvidedAndRequiredInterface_main_Read_e_c_object);
					Operation_ProvidedAndRequiredInterface_main_Read_e_c_object_LiteralInteger65.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger65", Operation_ProvidedAndRequiredInterface_main_Read_e_c_object_LiteralInteger65);
					Operation_ProvidedAndRequiredInterface_main_Read_e_c_object_LiteralUnlimitedNatural66.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural66", Operation_ProvidedAndRequiredInterface_main_Read_e_c_object_LiteralUnlimitedNatural66);
				Operation_ProvidedAndRequiredInterface_main_Read_e_c_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_ProvidedAndRequiredInterface_main_Read_e_c_result);
					Operation_ProvidedAndRequiredInterface_main_Read_e_c_result_LiteralInteger67.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger67", Operation_ProvidedAndRequiredInterface_main_Read_e_c_result_LiteralInteger67);
					Operation_ProvidedAndRequiredInterface_main_Read_e_c_result_LiteralUnlimitedNatural68.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural68", Operation_ProvidedAndRequiredInterface_main_Read_e_c_result_LiteralUnlimitedNatural68);
			Operation_ProvidedAndRequiredInterface_main_Value_4.reset(new ValueSpecificationAction());
			this->addToElementRepository("Value(4)", Operation_ProvidedAndRequiredInterface_main_Value_4);
				Operation_ProvidedAndRequiredInterface_main_Value_4_LiteralInteger69.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger69", Operation_ProvidedAndRequiredInterface_main_Value_4_LiteralInteger69);
				Operation_ProvidedAndRequiredInterface_main_Value_4_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_ProvidedAndRequiredInterface_main_Value_4_result);
					Operation_ProvidedAndRequiredInterface_main_Value_4_result_LiteralInteger70.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger70", Operation_ProvidedAndRequiredInterface_main_Value_4_result_LiteralInteger70);
					Operation_ProvidedAndRequiredInterface_main_Value_4_result_LiteralUnlimitedNatural71.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural71", Operation_ProvidedAndRequiredInterface_main_Value_4_result_LiteralUnlimitedNatural71);
			Operation_ProvidedAndRequiredInterface_main_Read_d_e.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read d.e", Operation_ProvidedAndRequiredInterface_main_Read_d_e);
				Operation_ProvidedAndRequiredInterface_main_Read_d_e_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_ProvidedAndRequiredInterface_main_Read_d_e_result);
					Operation_ProvidedAndRequiredInterface_main_Read_d_e_result_LiteralInteger72.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger72", Operation_ProvidedAndRequiredInterface_main_Read_d_e_result_LiteralInteger72);
					Operation_ProvidedAndRequiredInterface_main_Read_d_e_result_LiteralUnlimitedNatural73.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural73", Operation_ProvidedAndRequiredInterface_main_Read_d_e_result_LiteralUnlimitedNatural73);
				Operation_ProvidedAndRequiredInterface_main_Read_d_e_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_ProvidedAndRequiredInterface_main_Read_d_e_object);
					Operation_ProvidedAndRequiredInterface_main_Read_d_e_object_LiteralUnlimitedNatural74.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural74", Operation_ProvidedAndRequiredInterface_main_Read_d_e_object_LiteralUnlimitedNatural74);
					Operation_ProvidedAndRequiredInterface_main_Read_d_e_object_LiteralInteger75.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger75", Operation_ProvidedAndRequiredInterface_main_Read_d_e_object_LiteralInteger75);
			Operation_ProvidedAndRequiredInterface_main_Create_D.reset(new CreateObjectAction());
			this->addToElementRepository("Create D", Operation_ProvidedAndRequiredInterface_main_Create_D);
				Operation_ProvidedAndRequiredInterface_main_Create_D_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_ProvidedAndRequiredInterface_main_Create_D_result);
					Operation_ProvidedAndRequiredInterface_main_Create_D_result_LiteralUnlimitedNatural76.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural76", Operation_ProvidedAndRequiredInterface_main_Create_D_result_LiteralUnlimitedNatural76);
					Operation_ProvidedAndRequiredInterface_main_Create_D_result_LiteralInteger77.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger77", Operation_ProvidedAndRequiredInterface_main_Create_D_result_LiteralInteger77);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow78.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow78", Operation_ProvidedAndRequiredInterface_main_ObjectFlow78);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow78_LiteralInteger79.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger79", Operation_ProvidedAndRequiredInterface_main_ObjectFlow78_LiteralInteger79);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow78_LiteralBoolean80.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean80", Operation_ProvidedAndRequiredInterface_main_ObjectFlow78_LiteralBoolean80);
			Operation_ProvidedAndRequiredInterface_main_Read_d_a.reset(new ReadStructuralFeatureAction());
			this->addToElementRepository("Read d.a", Operation_ProvidedAndRequiredInterface_main_Read_d_a);
				Operation_ProvidedAndRequiredInterface_main_Read_d_a_object.reset(new InputPin());
				this->addToElementRepository("object", Operation_ProvidedAndRequiredInterface_main_Read_d_a_object);
					Operation_ProvidedAndRequiredInterface_main_Read_d_a_object_LiteralUnlimitedNatural81.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural81", Operation_ProvidedAndRequiredInterface_main_Read_d_a_object_LiteralUnlimitedNatural81);
					Operation_ProvidedAndRequiredInterface_main_Read_d_a_object_LiteralInteger82.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger82", Operation_ProvidedAndRequiredInterface_main_Read_d_a_object_LiteralInteger82);
				Operation_ProvidedAndRequiredInterface_main_Read_d_a_result.reset(new OutputPin());
				this->addToElementRepository("result", Operation_ProvidedAndRequiredInterface_main_Read_d_a_result);
					Operation_ProvidedAndRequiredInterface_main_Read_d_a_result_LiteralUnlimitedNatural83.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural83", Operation_ProvidedAndRequiredInterface_main_Read_d_a_result_LiteralUnlimitedNatural83);
					Operation_ProvidedAndRequiredInterface_main_Read_d_a_result_LiteralInteger84.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger84", Operation_ProvidedAndRequiredInterface_main_Read_d_a_result_LiteralInteger84);
		Operation_ProvidedAndRequiredInterface_A.reset(new Class_());
		this->addToElementRepository("A", Operation_ProvidedAndRequiredInterface_A);
			Operation_ProvidedAndRequiredInterface_A_b.reset(new Property());
			this->addToElementRepository("b", Operation_ProvidedAndRequiredInterface_A_b);
			Operation_ProvidedAndRequiredInterface_A_q.reset(new Port());
			this->addToElementRepository("q", Operation_ProvidedAndRequiredInterface_A_q);
			Operation_ProvidedAndRequiredInterface_A_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_ProvidedAndRequiredInterface_A_setP_Integer);
				Operation_ProvidedAndRequiredInterface_A_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_ProvidedAndRequiredInterface_A_setP_Integer_v);
			Operation_ProvidedAndRequiredInterface_A_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", Operation_ProvidedAndRequiredInterface_A_setPActivity);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", Operation_ProvidedAndRequiredInterface_A_setPActivity_vParameterNode);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_vParameterNode_LiteralInteger85.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger85", Operation_ProvidedAndRequiredInterface_A_setPActivity_vParameterNode_LiteralInteger85);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Operation_ProvidedAndRequiredInterface_A_setPActivity_this);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result);
						Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result_LiteralUnlimitedNatural86.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural86", Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result_LiteralUnlimitedNatural86);
						Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result_LiteralInteger87.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger87", Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result_LiteralInteger87);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow88", Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88_LiteralBoolean89.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean89", Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88_LiteralBoolean89);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88_LiteralInteger90.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger90", Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88_LiteralInteger90);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow91", Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91_LiteralInteger92.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger92", Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91_LiteralInteger92);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91_LiteralBoolean93.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean93", Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91_LiteralBoolean93);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_ProvidedAndRequiredInterface_A_setPActivity_v);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q.reset(new CallOperationAction());
				this->addToElementRepository("Call I::setP on q", Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v.reset(new InputPin());
					this->addToElementRepository("v", Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v);
						Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural94.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural94", Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralUnlimitedNatural94);
						Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger95.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger95", Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger95);
						Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger96.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger96", Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v_LiteralInteger96);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_target.reset(new InputPin());
					this->addToElementRepository("target", Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_target);
						Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralInteger97.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger97", Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralInteger97);
						Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural98.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural98", Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_target_LiteralUnlimitedNatural98);
			Operation_ProvidedAndRequiredInterface_A_r.reset(new Connector());
			this->addToElementRepository("r", Operation_ProvidedAndRequiredInterface_A_r);
				Operation_ProvidedAndRequiredInterface_A_r_ConnectorEnd99.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd99", Operation_ProvidedAndRequiredInterface_A_r_ConnectorEnd99);
				Operation_ProvidedAndRequiredInterface_A_r_ConnectorEnd100.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd100", Operation_ProvidedAndRequiredInterface_A_r_ConnectorEnd100);
		Operation_ProvidedAndRequiredInterface_E.reset(new Class_());
		this->addToElementRepository("E", Operation_ProvidedAndRequiredInterface_E);
			Operation_ProvidedAndRequiredInterface_E_c.reset(new Property());
			this->addToElementRepository("c", Operation_ProvidedAndRequiredInterface_E_c);
			Operation_ProvidedAndRequiredInterface_E_s.reset(new Connector());
			this->addToElementRepository("s", Operation_ProvidedAndRequiredInterface_E_s);
				Operation_ProvidedAndRequiredInterface_E_s_ConnectorEnd101.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd101", Operation_ProvidedAndRequiredInterface_E_s_ConnectorEnd101);
				Operation_ProvidedAndRequiredInterface_E_s_ConnectorEnd102.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd102", Operation_ProvidedAndRequiredInterface_E_s_ConnectorEnd102);
			Operation_ProvidedAndRequiredInterface_E_q.reset(new Port());
			this->addToElementRepository("q", Operation_ProvidedAndRequiredInterface_E_q);
		Operation_ProvidedAndRequiredInterface_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", Operation_ProvidedAndRequiredInterface_IImpl);
			Operation_ProvidedAndRequiredInterface_IImpl_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", Operation_ProvidedAndRequiredInterface_IImpl_IRealization);
			Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer);
				Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer_v);
		Operation_ProvidedAndRequiredInterface_IUsageIProvReq.reset(new Usage());
		this->addToElementRepository("IUsageIProvReq", Operation_ProvidedAndRequiredInterface_IUsageIProvReq);
		Operation_ProvidedAndRequiredInterface_IProvReq.reset(new Class_());
		this->addToElementRepository("IProvReq", Operation_ProvidedAndRequiredInterface_IProvReq);
			Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer);
				Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer_v);
			Operation_ProvidedAndRequiredInterface_IProvReq_Generalization103.reset(new Generalization());
			this->addToElementRepository("Generalization103", Operation_ProvidedAndRequiredInterface_IProvReq_Generalization103);
		Operation_ProvidedAndRequiredInterface_B.reset(new Class_());
		this->addToElementRepository("B", Operation_ProvidedAndRequiredInterface_B);
			Operation_ProvidedAndRequiredInterface_B_setPActivity.reset(new Activity());
			this->addToElementRepository("setPActivity", Operation_ProvidedAndRequiredInterface_B_setPActivity);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow104", Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104_LiteralInteger105.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger105", Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104_LiteralInteger105);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104_LiteralBoolean106.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean106", Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104_LiteralBoolean106);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107.reset(new ObjectFlow());
				this->addToElementRepository("ObjectFlow107", Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107_LiteralBoolean108.reset(new LiteralBoolean());
					this->addToElementRepository("LiteralBoolean108", Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107_LiteralBoolean108);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107_LiteralInteger109.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger109", Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107_LiteralInteger109);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_ProvidedAndRequiredInterface_B_setPActivity_v);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_vParameterNode.reset(new ActivityParameterNode());
				this->addToElementRepository("vParameterNode", Operation_ProvidedAndRequiredInterface_B_setPActivity_vParameterNode);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_vParameterNode_LiteralInteger110.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger110", Operation_ProvidedAndRequiredInterface_B_setPActivity_vParameterNode_LiteralInteger110);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p.reset(new AddStructuralFeatureValueAction());
				this->addToElementRepository("Set this.p", Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value.reset(new InputPin());
					this->addToElementRepository("value", Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value);
						Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value_LiteralInteger111.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger111", Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value_LiteralInteger111);
						Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural112.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural112", Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural112);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object.reset(new InputPin());
					this->addToElementRepository("object", Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object);
						Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object_LiteralInteger113.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger113", Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object_LiteralInteger113);
						Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural114.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural114", Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural114);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_result.reset(new OutputPin());
					this->addToElementRepository("result", Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_result);
						Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_result_LiteralInteger115.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger115", Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_result_LiteralInteger115);
						Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural116.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural116", Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural116);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_this.reset(new ReadSelfAction());
				this->addToElementRepository("this", Operation_ProvidedAndRequiredInterface_B_setPActivity_this);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result.reset(new OutputPin());
					this->addToElementRepository("result", Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result);
						Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result_LiteralUnlimitedNatural117.reset(new LiteralUnlimitedNatural());
						this->addToElementRepository("LiteralUnlimitedNatural117", Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result_LiteralUnlimitedNatural117);
						Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result_LiteralInteger118.reset(new LiteralInteger());
						this->addToElementRepository("LiteralInteger118", Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result_LiteralInteger118);
			Operation_ProvidedAndRequiredInterface_B_p.reset(new Property());
			this->addToElementRepository("p", Operation_ProvidedAndRequiredInterface_B_p);
			Operation_ProvidedAndRequiredInterface_B_IRealization.reset(new InterfaceRealization());
			this->addToElementRepository("IRealization", Operation_ProvidedAndRequiredInterface_B_IRealization);
			Operation_ProvidedAndRequiredInterface_B_setP_Integer.reset(new Operation());
			this->addToElementRepository("setP_Integer", Operation_ProvidedAndRequiredInterface_B_setP_Integer);
				Operation_ProvidedAndRequiredInterface_B_setP_Integer_v.reset(new Parameter());
				this->addToElementRepository("v", Operation_ProvidedAndRequiredInterface_B_setP_Integer_v);

	// Initialize public members
	/*
	 * Model Operation_ProvidedAndRequiredInterface
	 */
	Operation_ProvidedAndRequiredInterface->setThisPackagePtr(Operation_ProvidedAndRequiredInterface);
	Operation_ProvidedAndRequiredInterface->setName("Operation_ProvidedAndRequiredInterface");
	Operation_ProvidedAndRequiredInterface->setVisibility(VisibilityKind::public_);
		// Association R
		Operation_ProvidedAndRequiredInterface_R->setThisAssociationPtr(Operation_ProvidedAndRequiredInterface_R);
		Operation_ProvidedAndRequiredInterface_R->setName("R");
		Operation_ProvidedAndRequiredInterface_R->setVisibility(VisibilityKind::public_);
		Operation_ProvidedAndRequiredInterface_R->addOwnedEnd(Operation_ProvidedAndRequiredInterface_R_x);
		Operation_ProvidedAndRequiredInterface_R->addOwnedEnd(Operation_ProvidedAndRequiredInterface_R_y);
	Operation_ProvidedAndRequiredInterface->addPackagedElement(Operation_ProvidedAndRequiredInterface_R);
		// Association S
		Operation_ProvidedAndRequiredInterface_S->setThisAssociationPtr(Operation_ProvidedAndRequiredInterface_S);
		Operation_ProvidedAndRequiredInterface_S->setName("S");
		Operation_ProvidedAndRequiredInterface_S->setVisibility(VisibilityKind::public_);
		Operation_ProvidedAndRequiredInterface_S->addOwnedEnd(Operation_ProvidedAndRequiredInterface_S_x);
		Operation_ProvidedAndRequiredInterface_S->addOwnedEnd(Operation_ProvidedAndRequiredInterface_S_y);
	Operation_ProvidedAndRequiredInterface->addPackagedElement(Operation_ProvidedAndRequiredInterface_S);
		// Class C
		Operation_ProvidedAndRequiredInterface_C->setThisClass_Ptr(Operation_ProvidedAndRequiredInterface_C);
		Operation_ProvidedAndRequiredInterface_C->setName("C");
		Operation_ProvidedAndRequiredInterface_C->setVisibility(VisibilityKind::public_);
		
			// Port q
			Operation_ProvidedAndRequiredInterface_C_q->setThisElementPtr(Operation_ProvidedAndRequiredInterface_C_q);
			Operation_ProvidedAndRequiredInterface_C_q->setName("q");
			Operation_ProvidedAndRequiredInterface_C_q->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_C_q->setType(Operation_ProvidedAndRequiredInterface_IProvReq);
			Operation_ProvidedAndRequiredInterface_C_q->setAggregation(AggregationKind::composite);
			Operation_ProvidedAndRequiredInterface_C_q->isService = true;
			Operation_ProvidedAndRequiredInterface_C_q->addRequired(Operation_ProvidedAndRequiredInterface_I);
			Operation_ProvidedAndRequiredInterface_C_q->addProvided(Operation_ProvidedAndRequiredInterface_I);
		Operation_ProvidedAndRequiredInterface_C->addOwnedAttribute(Operation_ProvidedAndRequiredInterface_C_q);
		// Activity setPActivity
			Operation_ProvidedAndRequiredInterface_C_setPActivity->setThisActivityPtr(Operation_ProvidedAndRequiredInterface_C_setPActivity);
			Operation_ProvidedAndRequiredInterface_C_setPActivity->setName("setPActivity");
			Operation_ProvidedAndRequiredInterface_C_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				Operation_ProvidedAndRequiredInterface_C_setPActivity_v->setThisElementPtr(Operation_ProvidedAndRequiredInterface_C_setPActivity_v);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_v->setName("v");
				Operation_ProvidedAndRequiredInterface_C_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_C_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedAndRequiredInterface_C_setPActivity->addOwnedParameter(Operation_ProvidedAndRequiredInterface_C_setPActivity_v);
				// ActivityParameterNode vParameterNode
				Operation_ProvidedAndRequiredInterface_C_setPActivity_vParameterNode->setThisElementPtr(Operation_ProvidedAndRequiredInterface_C_setPActivity_vParameterNode);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_vParameterNode->setName("vParameterNode");
				Operation_ProvidedAndRequiredInterface_C_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_C_setPActivity_vParameterNode->setParameter(Operation_ProvidedAndRequiredInterface_C_setPActivity_v);
			Operation_ProvidedAndRequiredInterface_C_setPActivity->addNode(Operation_ProvidedAndRequiredInterface_C_setPActivity_vParameterNode);
				// ReadSelfAction this
				Operation_ProvidedAndRequiredInterface_C_setPActivity_this->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_C_setPActivity_this);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_this->setName("this");
				Operation_ProvidedAndRequiredInterface_C_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result->setThisElementPtr(Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result->setName("result");
					Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result->setType(Operation_ProvidedAndRequiredInterface_C);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_this->setResult(Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result);
			Operation_ProvidedAndRequiredInterface_C_setPActivity->addNode(Operation_ProvidedAndRequiredInterface_C_setPActivity_this);
				// CallOperationAction Call I::setP on q
				Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q->setName("Call I::setP on q");
				Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q->setOnPort(Operation_ProvidedAndRequiredInterface_C_q);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q->setOperation(Operation_ProvidedAndRequiredInterface_I_setP_Integer);
					// InputPin target
					Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target->setThisElementPtr(Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target->setName("target");
					Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target->setVisibility(VisibilityKind::public_);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target->setType(Operation_ProvidedAndRequiredInterface_C);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q->setTarget(Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target);
					// InputPin v
					Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v->setThisElementPtr(Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v->setName("v");
					Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v->setVisibility(VisibilityKind::public_);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q->addArgument(Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v);
			Operation_ProvidedAndRequiredInterface_C_setPActivity->addNode(Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q);
				// ObjectFlow ObjectFlow0 from result to target
				Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0->setName("ObjectFlow0");
				Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0->setSource(Operation_ProvidedAndRequiredInterface_C_setPActivity_this_result);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0->setTarget(Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_target);
					// LiteralBoolean LiteralBoolean1
					Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0_LiteralBoolean1->setThisElementPtr(Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0_LiteralBoolean1);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0_LiteralBoolean1->setName("LiteralBoolean1");
					Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0_LiteralBoolean1->setVisibility(VisibilityKind::public_);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0_LiteralBoolean1->setValue(true);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0->setGuard(Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0_LiteralBoolean1);
			Operation_ProvidedAndRequiredInterface_C_setPActivity->addEdge(Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow0);
				// ObjectFlow ObjectFlow4 from vParameterNode to v
				Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4->setName("ObjectFlow4");
				Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4->setSource(Operation_ProvidedAndRequiredInterface_C_setPActivity_vParameterNode);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4->setTarget(Operation_ProvidedAndRequiredInterface_C_setPActivity_Call_I_setP_on_q_v);
					// LiteralBoolean LiteralBoolean6
					Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4_LiteralBoolean6->setThisElementPtr(Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4_LiteralBoolean6);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4_LiteralBoolean6->setName("LiteralBoolean6");
					Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4_LiteralBoolean6->setVisibility(VisibilityKind::public_);
					Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4_LiteralBoolean6->setValue(true);
				Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4->setGuard(Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4_LiteralBoolean6);
			Operation_ProvidedAndRequiredInterface_C_setPActivity->addEdge(Operation_ProvidedAndRequiredInterface_C_setPActivity_ObjectFlow4);
		Operation_ProvidedAndRequiredInterface_C->addOwnedBehavior(Operation_ProvidedAndRequiredInterface_C_setPActivity);
			Operation_ProvidedAndRequiredInterface_C_IRealization->setName("IRealization");
			Operation_ProvidedAndRequiredInterface_C_IRealization->setVisibility(VisibilityKind::public_);
			Operation_ProvidedAndRequiredInterface_C_IRealization->setContract(Operation_ProvidedAndRequiredInterface_I);
			
		Operation_ProvidedAndRequiredInterface_C->addInterfaceRealization(Operation_ProvidedAndRequiredInterface_C_IRealization);
		
			// Operation setP_Integer
			Operation_ProvidedAndRequiredInterface_C_setP_Integer->setThisOperationPtr(Operation_ProvidedAndRequiredInterface_C_setP_Integer);
			Operation_ProvidedAndRequiredInterface_C_setP_Integer->setName("setP_Integer");
			Operation_ProvidedAndRequiredInterface_C_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_ProvidedAndRequiredInterface_C_setP_Integer_v->setThisElementPtr(Operation_ProvidedAndRequiredInterface_C_setP_Integer_v);
				Operation_ProvidedAndRequiredInterface_C_setP_Integer_v->setName("v");
				Operation_ProvidedAndRequiredInterface_C_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_C_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedAndRequiredInterface_C_setP_Integer->addOwnedParameter(Operation_ProvidedAndRequiredInterface_C_setP_Integer_v);
			Operation_ProvidedAndRequiredInterface_C_setP_Integer->addMethod(Operation_ProvidedAndRequiredInterface_C_setPActivity);
		Operation_ProvidedAndRequiredInterface_C->addOwnedOperation(Operation_ProvidedAndRequiredInterface_C_setP_Integer);
	Operation_ProvidedAndRequiredInterface->addPackagedElement(Operation_ProvidedAndRequiredInterface_C);
		// Interface I
		Operation_ProvidedAndRequiredInterface_I->setThisInterfacePtr(Operation_ProvidedAndRequiredInterface_I);
		Operation_ProvidedAndRequiredInterface_I->setName("I");
		Operation_ProvidedAndRequiredInterface_I->setVisibility(VisibilityKind::public_);
			// Operation setP_Integer
			Operation_ProvidedAndRequiredInterface_I_setP_Integer->setThisOperationPtr(Operation_ProvidedAndRequiredInterface_I_setP_Integer);
			Operation_ProvidedAndRequiredInterface_I_setP_Integer->setName("setP_Integer");
			Operation_ProvidedAndRequiredInterface_I_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_ProvidedAndRequiredInterface_I_setP_Integer_v->setThisElementPtr(Operation_ProvidedAndRequiredInterface_I_setP_Integer_v);
				Operation_ProvidedAndRequiredInterface_I_setP_Integer_v->setName("v");
				Operation_ProvidedAndRequiredInterface_I_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_I_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedAndRequiredInterface_I_setP_Integer->addOwnedParameter(Operation_ProvidedAndRequiredInterface_I_setP_Integer_v);
		Operation_ProvidedAndRequiredInterface_I->addOwnedOperation(Operation_ProvidedAndRequiredInterface_I_setP_Integer);
	Operation_ProvidedAndRequiredInterface->addPackagedElement(Operation_ProvidedAndRequiredInterface_I);
		// Class D
		Operation_ProvidedAndRequiredInterface_D->setThisClass_Ptr(Operation_ProvidedAndRequiredInterface_D);
		Operation_ProvidedAndRequiredInterface_D->setName("D");
		Operation_ProvidedAndRequiredInterface_D->setVisibility(VisibilityKind::public_);
		
			// Property e
			Operation_ProvidedAndRequiredInterface_D_e->setThisElementPtr(Operation_ProvidedAndRequiredInterface_D_e);
			Operation_ProvidedAndRequiredInterface_D_e->setName("e");
			Operation_ProvidedAndRequiredInterface_D_e->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_D_e->setType(Operation_ProvidedAndRequiredInterface_E);
			Operation_ProvidedAndRequiredInterface_D_e->setAggregation(AggregationKind::composite);
		Operation_ProvidedAndRequiredInterface_D->addOwnedAttribute(Operation_ProvidedAndRequiredInterface_D_e);
			// Property a
			Operation_ProvidedAndRequiredInterface_D_a->setThisElementPtr(Operation_ProvidedAndRequiredInterface_D_a);
			Operation_ProvidedAndRequiredInterface_D_a->setName("a");
			Operation_ProvidedAndRequiredInterface_D_a->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_D_a->setType(Operation_ProvidedAndRequiredInterface_A);
			Operation_ProvidedAndRequiredInterface_D_a->setAggregation(AggregationKind::composite);
		Operation_ProvidedAndRequiredInterface_D->addOwnedAttribute(Operation_ProvidedAndRequiredInterface_D_a);
		
		Operation_ProvidedAndRequiredInterface_D_s->setName("s");
			Operation_ProvidedAndRequiredInterface_D_s->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_D_s_ConnectorEnd15->setRole(Operation_ProvidedAndRequiredInterface_E_q);
				Operation_ProvidedAndRequiredInterface_D_s_ConnectorEnd15->setPartWithPort(Operation_ProvidedAndRequiredInterface_D_e);
				
			Operation_ProvidedAndRequiredInterface_D_s->addEnd(Operation_ProvidedAndRequiredInterface_D_s_ConnectorEnd15);
				
				Operation_ProvidedAndRequiredInterface_D_s_ConnectorEnd14->setRole(Operation_ProvidedAndRequiredInterface_A_q);
				Operation_ProvidedAndRequiredInterface_D_s_ConnectorEnd14->setPartWithPort(Operation_ProvidedAndRequiredInterface_D_a);
				
			Operation_ProvidedAndRequiredInterface_D_s->addEnd(Operation_ProvidedAndRequiredInterface_D_s_ConnectorEnd14);
			Operation_ProvidedAndRequiredInterface_D_s->setType(Operation_ProvidedAndRequiredInterface_S);
		Operation_ProvidedAndRequiredInterface_D->addOwnedConnector(Operation_ProvidedAndRequiredInterface_D_s);
			// Operation D_D
			Operation_ProvidedAndRequiredInterface_D_D_D->setThisOperationPtr(Operation_ProvidedAndRequiredInterface_D_D_D);
			Operation_ProvidedAndRequiredInterface_D_D_D->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			Operation_ProvidedAndRequiredInterface_D_D_D->setName("D_D");
			Operation_ProvidedAndRequiredInterface_D_D_D->setVisibility(VisibilityKind::public_);
				// Parameter result
				Operation_ProvidedAndRequiredInterface_D_D_D_result->setThisElementPtr(Operation_ProvidedAndRequiredInterface_D_D_D_result);
				Operation_ProvidedAndRequiredInterface_D_D_D_result->setName("result");
				Operation_ProvidedAndRequiredInterface_D_D_D_result->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_D_D_D_result->setType(Operation_ProvidedAndRequiredInterface_D);
				Operation_ProvidedAndRequiredInterface_D_D_D_result->setDirection(ParameterDirectionKind::return_);
			Operation_ProvidedAndRequiredInterface_D_D_D->addOwnedParameter(Operation_ProvidedAndRequiredInterface_D_D_D_result);
		Operation_ProvidedAndRequiredInterface_D->addOwnedOperation(Operation_ProvidedAndRequiredInterface_D_D_D);
	Operation_ProvidedAndRequiredInterface->addPackagedElement(Operation_ProvidedAndRequiredInterface_D);
		// Activity main
		Operation_ProvidedAndRequiredInterface_main->setThisActivityPtr(Operation_ProvidedAndRequiredInterface_main);
		Operation_ProvidedAndRequiredInterface_main->setName("main");
		Operation_ProvidedAndRequiredInterface_main->setVisibility(VisibilityKind::public_);
		// FunctionBehavior testP
			Operation_ProvidedAndRequiredInterface_main_testP->setThisClass_Ptr(Operation_ProvidedAndRequiredInterface_main_testP);
			Operation_ProvidedAndRequiredInterface_main_testP->setName("testP");
			Operation_ProvidedAndRequiredInterface_main_testP->setVisibility(VisibilityKind::public_);
			
				// Parameter p
				Operation_ProvidedAndRequiredInterface_main_testP_p->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_testP_p);
				Operation_ProvidedAndRequiredInterface_main_testP_p->setName("p");
				Operation_ProvidedAndRequiredInterface_main_testP_p->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_main_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedAndRequiredInterface_main_testP->addOwnedParameter(Operation_ProvidedAndRequiredInterface_main_testP_p);
			Operation_ProvidedAndRequiredInterface_main_testP->addLanguage("C++");
			Operation_ProvidedAndRequiredInterface_main_testP->addLanguage("Include");
			Operation_ProvidedAndRequiredInterface_main_testP->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	std::cout<<\"Asserting d.a.b.p == 4\"<<std::endl;  	// Test parameter p 	int p = AS(IntegerValue, inputParameters->at(0)->values->at(0))->value; 	fuml::Debug::println(\"[doBody] argument p = \" + std::to_string(p)); 	 	std::cout << \"d.a.b.p == \" << std::to_string(p) <<std::endl; 	std::cout<<\"Invocation forwarded out of e through q: \";  	if(p == 4) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK << std::endl; 	}");
			Operation_ProvidedAndRequiredInterface_main_testP->addBody("#include <iostream> #include <fuml/semantics/simpleclassifiers/IntegerValue.h> ");
		Operation_ProvidedAndRequiredInterface_main->addOwnedBehavior(Operation_ProvidedAndRequiredInterface_main_testP);
			// ReadStructuralFeatureAction Read a.b
			Operation_ProvidedAndRequiredInterface_main_Read_a_b->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_main_Read_a_b);
			Operation_ProvidedAndRequiredInterface_main_Read_a_b->setName("Read a.b");
			Operation_ProvidedAndRequiredInterface_main_Read_a_b->setVisibility(VisibilityKind::public_);
			Operation_ProvidedAndRequiredInterface_main_Read_a_b->setStructuralFeature(Operation_ProvidedAndRequiredInterface_A_b);
				// InputPin object
				Operation_ProvidedAndRequiredInterface_main_Read_a_b_object->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Read_a_b_object);
				Operation_ProvidedAndRequiredInterface_main_Read_a_b_object->setName("object");
				Operation_ProvidedAndRequiredInterface_main_Read_a_b_object->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Read_a_b_object->setType(Operation_ProvidedAndRequiredInterface_A);
			Operation_ProvidedAndRequiredInterface_main_Read_a_b->setObject(Operation_ProvidedAndRequiredInterface_main_Read_a_b_object);
				// OutputPin result
				Operation_ProvidedAndRequiredInterface_main_Read_a_b_result->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Read_a_b_result);
				Operation_ProvidedAndRequiredInterface_main_Read_a_b_result->setName("result");
				Operation_ProvidedAndRequiredInterface_main_Read_a_b_result->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Read_a_b_result->setType(Operation_ProvidedAndRequiredInterface_B);
			Operation_ProvidedAndRequiredInterface_main_Read_a_b->setResult(Operation_ProvidedAndRequiredInterface_main_Read_a_b_result);
		Operation_ProvidedAndRequiredInterface_main->addNode(Operation_ProvidedAndRequiredInterface_main_Read_a_b);
			// CallOperationAction D()
			Operation_ProvidedAndRequiredInterface_main_D_->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_main_D_);
			Operation_ProvidedAndRequiredInterface_main_D_->setName("D()");
			Operation_ProvidedAndRequiredInterface_main_D_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				Operation_ProvidedAndRequiredInterface_main_D__result->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_D__result);
				Operation_ProvidedAndRequiredInterface_main_D__result->setName("result");
				Operation_ProvidedAndRequiredInterface_main_D__result->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_D__result->setType(Operation_ProvidedAndRequiredInterface_D);
			Operation_ProvidedAndRequiredInterface_main_D_->addResult(Operation_ProvidedAndRequiredInterface_main_D__result);
			Operation_ProvidedAndRequiredInterface_main_D_->setOperation(Operation_ProvidedAndRequiredInterface_D_D_D);
				// InputPin target
				Operation_ProvidedAndRequiredInterface_main_D__target->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_D__target);
				Operation_ProvidedAndRequiredInterface_main_D__target->setName("target");
				Operation_ProvidedAndRequiredInterface_main_D__target->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_D__target->setType(Operation_ProvidedAndRequiredInterface_D);
			Operation_ProvidedAndRequiredInterface_main_D_->setTarget(Operation_ProvidedAndRequiredInterface_main_D__target);
		Operation_ProvidedAndRequiredInterface_main->addNode(Operation_ProvidedAndRequiredInterface_main_D_);
			// ReadStructuralFeatureAction Read b.p
			Operation_ProvidedAndRequiredInterface_main_Read_b_p->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_main_Read_b_p);
			Operation_ProvidedAndRequiredInterface_main_Read_b_p->setName("Read b.p");
			Operation_ProvidedAndRequiredInterface_main_Read_b_p->setVisibility(VisibilityKind::public_);
			Operation_ProvidedAndRequiredInterface_main_Read_b_p->setStructuralFeature(Operation_ProvidedAndRequiredInterface_B_p);
				// InputPin object
				Operation_ProvidedAndRequiredInterface_main_Read_b_p_object->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Read_b_p_object);
				Operation_ProvidedAndRequiredInterface_main_Read_b_p_object->setName("object");
				Operation_ProvidedAndRequiredInterface_main_Read_b_p_object->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Read_b_p_object->setType(Operation_ProvidedAndRequiredInterface_B);
			Operation_ProvidedAndRequiredInterface_main_Read_b_p->setObject(Operation_ProvidedAndRequiredInterface_main_Read_b_p_object);
				// OutputPin result
				Operation_ProvidedAndRequiredInterface_main_Read_b_p_result->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Read_b_p_result);
				Operation_ProvidedAndRequiredInterface_main_Read_b_p_result->setName("result");
				Operation_ProvidedAndRequiredInterface_main_Read_b_p_result->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Read_b_p_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedAndRequiredInterface_main_Read_b_p->setResult(Operation_ProvidedAndRequiredInterface_main_Read_b_p_result);
		Operation_ProvidedAndRequiredInterface_main->addNode(Operation_ProvidedAndRequiredInterface_main_Read_b_p);
			// ForkNode Fork d
			Operation_ProvidedAndRequiredInterface_main_Fork_d->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Fork_d);
			Operation_ProvidedAndRequiredInterface_main_Fork_d->setName("Fork d");
			Operation_ProvidedAndRequiredInterface_main_Fork_d->setVisibility(VisibilityKind::public_);
		Operation_ProvidedAndRequiredInterface_main->addNode(Operation_ProvidedAndRequiredInterface_main_Fork_d);
			// ReadStructuralFeatureAction Read e.c
			Operation_ProvidedAndRequiredInterface_main_Read_e_c->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_main_Read_e_c);
			Operation_ProvidedAndRequiredInterface_main_Read_e_c->setName("Read e.c");
			Operation_ProvidedAndRequiredInterface_main_Read_e_c->setVisibility(VisibilityKind::public_);
			Operation_ProvidedAndRequiredInterface_main_Read_e_c->setStructuralFeature(Operation_ProvidedAndRequiredInterface_E_c);
				// InputPin object
				Operation_ProvidedAndRequiredInterface_main_Read_e_c_object->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Read_e_c_object);
				Operation_ProvidedAndRequiredInterface_main_Read_e_c_object->setName("object");
				Operation_ProvidedAndRequiredInterface_main_Read_e_c_object->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Read_e_c_object->setType(Operation_ProvidedAndRequiredInterface_E);
			Operation_ProvidedAndRequiredInterface_main_Read_e_c->setObject(Operation_ProvidedAndRequiredInterface_main_Read_e_c_object);
				// OutputPin result
				Operation_ProvidedAndRequiredInterface_main_Read_e_c_result->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Read_e_c_result);
				Operation_ProvidedAndRequiredInterface_main_Read_e_c_result->setName("result");
				Operation_ProvidedAndRequiredInterface_main_Read_e_c_result->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Read_e_c_result->setType(Operation_ProvidedAndRequiredInterface_C);
			Operation_ProvidedAndRequiredInterface_main_Read_e_c->setResult(Operation_ProvidedAndRequiredInterface_main_Read_e_c_result);
		Operation_ProvidedAndRequiredInterface_main->addNode(Operation_ProvidedAndRequiredInterface_main_Read_e_c);
			// CallOperationAction Call setP()
			Operation_ProvidedAndRequiredInterface_main_Call_setP_->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_main_Call_setP_);
			Operation_ProvidedAndRequiredInterface_main_Call_setP_->setName("Call setP()");
			Operation_ProvidedAndRequiredInterface_main_Call_setP_->setVisibility(VisibilityKind::public_);
			Operation_ProvidedAndRequiredInterface_main_Call_setP_->setOperation(Operation_ProvidedAndRequiredInterface_C_setP_Integer);
				// InputPin target
				Operation_ProvidedAndRequiredInterface_main_Call_setP__target->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Call_setP__target);
				Operation_ProvidedAndRequiredInterface_main_Call_setP__target->setName("target");
				Operation_ProvidedAndRequiredInterface_main_Call_setP__target->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Call_setP__target->setType(Operation_ProvidedAndRequiredInterface_C);
			Operation_ProvidedAndRequiredInterface_main_Call_setP_->setTarget(Operation_ProvidedAndRequiredInterface_main_Call_setP__target);
				// InputPin v
				Operation_ProvidedAndRequiredInterface_main_Call_setP__v->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Call_setP__v);
				Operation_ProvidedAndRequiredInterface_main_Call_setP__v->setName("v");
				Operation_ProvidedAndRequiredInterface_main_Call_setP__v->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Call_setP__v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedAndRequiredInterface_main_Call_setP_->addArgument(Operation_ProvidedAndRequiredInterface_main_Call_setP__v);
		Operation_ProvidedAndRequiredInterface_main->addNode(Operation_ProvidedAndRequiredInterface_main_Call_setP_);
			// CallBehaviorAction Call testP
			Operation_ProvidedAndRequiredInterface_main_Call_testP->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_main_Call_testP);
			Operation_ProvidedAndRequiredInterface_main_Call_testP->setName("Call testP");
			Operation_ProvidedAndRequiredInterface_main_Call_testP->setVisibility(VisibilityKind::public_);
			Operation_ProvidedAndRequiredInterface_main_Call_testP->setBehavior(Operation_ProvidedAndRequiredInterface_main_testP);
				// InputPin p
				Operation_ProvidedAndRequiredInterface_main_Call_testP_p->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Call_testP_p);
				Operation_ProvidedAndRequiredInterface_main_Call_testP_p->setName("p");
				Operation_ProvidedAndRequiredInterface_main_Call_testP_p->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Call_testP_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedAndRequiredInterface_main_Call_testP->addArgument(Operation_ProvidedAndRequiredInterface_main_Call_testP_p);
		Operation_ProvidedAndRequiredInterface_main->addNode(Operation_ProvidedAndRequiredInterface_main_Call_testP);
			// ValueSpecificationAction Value(4)
			Operation_ProvidedAndRequiredInterface_main_Value_4->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_main_Value_4);
			Operation_ProvidedAndRequiredInterface_main_Value_4->setName("Value(4)");
			Operation_ProvidedAndRequiredInterface_main_Value_4->setVisibility(VisibilityKind::public_);
				// LiteralInteger LiteralInteger69
				Operation_ProvidedAndRequiredInterface_main_Value_4_LiteralInteger69->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Value_4_LiteralInteger69);
				Operation_ProvidedAndRequiredInterface_main_Value_4_LiteralInteger69->setName("LiteralInteger69");
				Operation_ProvidedAndRequiredInterface_main_Value_4_LiteralInteger69->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Value_4_LiteralInteger69->setValue(4);
			Operation_ProvidedAndRequiredInterface_main_Value_4->setValue(Operation_ProvidedAndRequiredInterface_main_Value_4_LiteralInteger69);
				// OutputPin result
				Operation_ProvidedAndRequiredInterface_main_Value_4_result->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Value_4_result);
				Operation_ProvidedAndRequiredInterface_main_Value_4_result->setName("result");
				Operation_ProvidedAndRequiredInterface_main_Value_4_result->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Value_4_result->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedAndRequiredInterface_main_Value_4->setResult(Operation_ProvidedAndRequiredInterface_main_Value_4_result);
		Operation_ProvidedAndRequiredInterface_main->addNode(Operation_ProvidedAndRequiredInterface_main_Value_4);
			// ReadStructuralFeatureAction Read d.e
			Operation_ProvidedAndRequiredInterface_main_Read_d_e->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_main_Read_d_e);
			Operation_ProvidedAndRequiredInterface_main_Read_d_e->setName("Read d.e");
			Operation_ProvidedAndRequiredInterface_main_Read_d_e->setVisibility(VisibilityKind::public_);
			Operation_ProvidedAndRequiredInterface_main_Read_d_e->setStructuralFeature(Operation_ProvidedAndRequiredInterface_D_e);
				// InputPin object
				Operation_ProvidedAndRequiredInterface_main_Read_d_e_object->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Read_d_e_object);
				Operation_ProvidedAndRequiredInterface_main_Read_d_e_object->setName("object");
				Operation_ProvidedAndRequiredInterface_main_Read_d_e_object->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Read_d_e_object->setType(Operation_ProvidedAndRequiredInterface_D);
			Operation_ProvidedAndRequiredInterface_main_Read_d_e->setObject(Operation_ProvidedAndRequiredInterface_main_Read_d_e_object);
				// OutputPin result
				Operation_ProvidedAndRequiredInterface_main_Read_d_e_result->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Read_d_e_result);
				Operation_ProvidedAndRequiredInterface_main_Read_d_e_result->setName("result");
				Operation_ProvidedAndRequiredInterface_main_Read_d_e_result->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Read_d_e_result->setType(Operation_ProvidedAndRequiredInterface_E);
			Operation_ProvidedAndRequiredInterface_main_Read_d_e->setResult(Operation_ProvidedAndRequiredInterface_main_Read_d_e_result);
		Operation_ProvidedAndRequiredInterface_main->addNode(Operation_ProvidedAndRequiredInterface_main_Read_d_e);
			// CreateObjectAction Create D
			Operation_ProvidedAndRequiredInterface_main_Create_D->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_main_Create_D);
			Operation_ProvidedAndRequiredInterface_main_Create_D->setName("Create D");
			Operation_ProvidedAndRequiredInterface_main_Create_D->setVisibility(VisibilityKind::public_);
			Operation_ProvidedAndRequiredInterface_main_Create_D->setClassifier(Operation_ProvidedAndRequiredInterface_D);
				// OutputPin result
				Operation_ProvidedAndRequiredInterface_main_Create_D_result->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Create_D_result);
				Operation_ProvidedAndRequiredInterface_main_Create_D_result->setName("result");
				Operation_ProvidedAndRequiredInterface_main_Create_D_result->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Create_D_result->setType(Operation_ProvidedAndRequiredInterface_D);
			Operation_ProvidedAndRequiredInterface_main_Create_D->setResult(Operation_ProvidedAndRequiredInterface_main_Create_D_result);
		Operation_ProvidedAndRequiredInterface_main->addNode(Operation_ProvidedAndRequiredInterface_main_Create_D);
			// ReadStructuralFeatureAction Read d.a
			Operation_ProvidedAndRequiredInterface_main_Read_d_a->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_main_Read_d_a);
			Operation_ProvidedAndRequiredInterface_main_Read_d_a->setName("Read d.a");
			Operation_ProvidedAndRequiredInterface_main_Read_d_a->setVisibility(VisibilityKind::public_);
			Operation_ProvidedAndRequiredInterface_main_Read_d_a->setStructuralFeature(Operation_ProvidedAndRequiredInterface_D_a);
				// InputPin object
				Operation_ProvidedAndRequiredInterface_main_Read_d_a_object->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Read_d_a_object);
				Operation_ProvidedAndRequiredInterface_main_Read_d_a_object->setName("object");
				Operation_ProvidedAndRequiredInterface_main_Read_d_a_object->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Read_d_a_object->setType(Operation_ProvidedAndRequiredInterface_D);
			Operation_ProvidedAndRequiredInterface_main_Read_d_a->setObject(Operation_ProvidedAndRequiredInterface_main_Read_d_a_object);
				// OutputPin result
				Operation_ProvidedAndRequiredInterface_main_Read_d_a_result->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_Read_d_a_result);
				Operation_ProvidedAndRequiredInterface_main_Read_d_a_result->setName("result");
				Operation_ProvidedAndRequiredInterface_main_Read_d_a_result->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_Read_d_a_result->setType(Operation_ProvidedAndRequiredInterface_A);
			Operation_ProvidedAndRequiredInterface_main_Read_d_a->setResult(Operation_ProvidedAndRequiredInterface_main_Read_d_a_result);
		Operation_ProvidedAndRequiredInterface_main->addNode(Operation_ProvidedAndRequiredInterface_main_Read_d_a);
			// ObjectFlow ObjectFlow39 from Fork d to object
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow39->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow39);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow39->setName("ObjectFlow39");
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow39->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow39->setSource(Operation_ProvidedAndRequiredInterface_main_Fork_d);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow39->setTarget(Operation_ProvidedAndRequiredInterface_main_Read_d_a_object);
				// LiteralBoolean LiteralBoolean40
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow39_LiteralBoolean40->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow39_LiteralBoolean40);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow39_LiteralBoolean40->setName("LiteralBoolean40");
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow39_LiteralBoolean40->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow39_LiteralBoolean40->setValue(true);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow39->setGuard(Operation_ProvidedAndRequiredInterface_main_ObjectFlow39_LiteralBoolean40);
		Operation_ProvidedAndRequiredInterface_main->addEdge(Operation_ProvidedAndRequiredInterface_main_ObjectFlow39);
			// ObjectFlow ObjectFlow16 from result to target
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow16->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow16);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow16->setName("ObjectFlow16");
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow16->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow16->setSource(Operation_ProvidedAndRequiredInterface_main_Read_e_c_result);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow16->setTarget(Operation_ProvidedAndRequiredInterface_main_Call_setP__target);
				// LiteralBoolean LiteralBoolean17
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow16_LiteralBoolean17->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow16_LiteralBoolean17);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow16_LiteralBoolean17->setName("LiteralBoolean17");
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow16_LiteralBoolean17->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow16_LiteralBoolean17->setValue(true);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow16->setGuard(Operation_ProvidedAndRequiredInterface_main_ObjectFlow16_LiteralBoolean17);
		Operation_ProvidedAndRequiredInterface_main->addEdge(Operation_ProvidedAndRequiredInterface_main_ObjectFlow16);
			// ControlFlow ControlFlow51 from Call setP() to Read d.a
			Operation_ProvidedAndRequiredInterface_main_ControlFlow51->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_main_ControlFlow51);
			Operation_ProvidedAndRequiredInterface_main_ControlFlow51->setName("ControlFlow51");
			Operation_ProvidedAndRequiredInterface_main_ControlFlow51->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_main_ControlFlow51->setSource(Operation_ProvidedAndRequiredInterface_main_Call_setP_);
			Operation_ProvidedAndRequiredInterface_main_ControlFlow51->setTarget(Operation_ProvidedAndRequiredInterface_main_Read_d_a);
		Operation_ProvidedAndRequiredInterface_main->addEdge(Operation_ProvidedAndRequiredInterface_main_ControlFlow51);
			// ObjectFlow ObjectFlow52 from result to v
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow52->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow52);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow52->setName("ObjectFlow52");
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow52->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow52->setSource(Operation_ProvidedAndRequiredInterface_main_Value_4_result);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow52->setTarget(Operation_ProvidedAndRequiredInterface_main_Call_setP__v);
				// LiteralBoolean LiteralBoolean54
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow52_LiteralBoolean54->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow52_LiteralBoolean54);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow52_LiteralBoolean54->setName("LiteralBoolean54");
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow52_LiteralBoolean54->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow52_LiteralBoolean54->setValue(true);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow52->setGuard(Operation_ProvidedAndRequiredInterface_main_ObjectFlow52_LiteralBoolean54);
		Operation_ProvidedAndRequiredInterface_main->addEdge(Operation_ProvidedAndRequiredInterface_main_ObjectFlow52);
			// ObjectFlow ObjectFlow55 from result to object
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow55->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow55);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow55->setName("ObjectFlow55");
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow55->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow55->setSource(Operation_ProvidedAndRequiredInterface_main_Read_d_e_result);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow55->setTarget(Operation_ProvidedAndRequiredInterface_main_Read_e_c_object);
				// LiteralBoolean LiteralBoolean56
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow55_LiteralBoolean56->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow55_LiteralBoolean56);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow55_LiteralBoolean56->setName("LiteralBoolean56");
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow55_LiteralBoolean56->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow55_LiteralBoolean56->setValue(true);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow55->setGuard(Operation_ProvidedAndRequiredInterface_main_ObjectFlow55_LiteralBoolean56);
		Operation_ProvidedAndRequiredInterface_main->addEdge(Operation_ProvidedAndRequiredInterface_main_ObjectFlow55);
			// ObjectFlow ObjectFlow19 from Fork d to object
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow19->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow19);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow19->setName("ObjectFlow19");
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow19->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow19->setSource(Operation_ProvidedAndRequiredInterface_main_Fork_d);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow19->setTarget(Operation_ProvidedAndRequiredInterface_main_Read_d_e_object);
				// LiteralBoolean LiteralBoolean21
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow19_LiteralBoolean21->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow19_LiteralBoolean21);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow19_LiteralBoolean21->setName("LiteralBoolean21");
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow19_LiteralBoolean21->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow19_LiteralBoolean21->setValue(true);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow19->setGuard(Operation_ProvidedAndRequiredInterface_main_ObjectFlow19_LiteralBoolean21);
		Operation_ProvidedAndRequiredInterface_main->addEdge(Operation_ProvidedAndRequiredInterface_main_ObjectFlow19);
			// ObjectFlow ObjectFlow62 from result to target
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow62->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow62);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow62->setName("ObjectFlow62");
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow62->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow62->setSource(Operation_ProvidedAndRequiredInterface_main_Create_D_result);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow62->setTarget(Operation_ProvidedAndRequiredInterface_main_D__target);
				// LiteralBoolean LiteralBoolean64
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow62_LiteralBoolean64->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow62_LiteralBoolean64);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow62_LiteralBoolean64->setName("LiteralBoolean64");
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow62_LiteralBoolean64->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow62_LiteralBoolean64->setValue(true);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow62->setGuard(Operation_ProvidedAndRequiredInterface_main_ObjectFlow62_LiteralBoolean64);
		Operation_ProvidedAndRequiredInterface_main->addEdge(Operation_ProvidedAndRequiredInterface_main_ObjectFlow62);
			// ObjectFlow ObjectFlow22 from result to Fork d
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow22->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow22);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow22->setName("ObjectFlow22");
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow22->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow22->setSource(Operation_ProvidedAndRequiredInterface_main_D__result);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow22->setTarget(Operation_ProvidedAndRequiredInterface_main_Fork_d);
				// LiteralBoolean LiteralBoolean23
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow22_LiteralBoolean23->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow22_LiteralBoolean23);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow22_LiteralBoolean23->setName("LiteralBoolean23");
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow22_LiteralBoolean23->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow22_LiteralBoolean23->setValue(true);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow22->setGuard(Operation_ProvidedAndRequiredInterface_main_ObjectFlow22_LiteralBoolean23);
		Operation_ProvidedAndRequiredInterface_main->addEdge(Operation_ProvidedAndRequiredInterface_main_ObjectFlow22);
			// ObjectFlow ObjectFlow30 from result to object
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow30->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow30);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow30->setName("ObjectFlow30");
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow30->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow30->setSource(Operation_ProvidedAndRequiredInterface_main_Read_d_a_result);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow30->setTarget(Operation_ProvidedAndRequiredInterface_main_Read_a_b_object);
				// LiteralBoolean LiteralBoolean32
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow30_LiteralBoolean32->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow30_LiteralBoolean32);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow30_LiteralBoolean32->setName("LiteralBoolean32");
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow30_LiteralBoolean32->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow30_LiteralBoolean32->setValue(true);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow30->setGuard(Operation_ProvidedAndRequiredInterface_main_ObjectFlow30_LiteralBoolean32);
		Operation_ProvidedAndRequiredInterface_main->addEdge(Operation_ProvidedAndRequiredInterface_main_ObjectFlow30);
			// ObjectFlow ObjectFlow36 from result to object
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow36->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow36);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow36->setName("ObjectFlow36");
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow36->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow36->setSource(Operation_ProvidedAndRequiredInterface_main_Read_a_b_result);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow36->setTarget(Operation_ProvidedAndRequiredInterface_main_Read_b_p_object);
				// LiteralBoolean LiteralBoolean37
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow36_LiteralBoolean37->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow36_LiteralBoolean37);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow36_LiteralBoolean37->setName("LiteralBoolean37");
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow36_LiteralBoolean37->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow36_LiteralBoolean37->setValue(true);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow36->setGuard(Operation_ProvidedAndRequiredInterface_main_ObjectFlow36_LiteralBoolean37);
		Operation_ProvidedAndRequiredInterface_main->addEdge(Operation_ProvidedAndRequiredInterface_main_ObjectFlow36);
			// ObjectFlow ObjectFlow78 from result to p
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow78->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow78);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow78->setName("ObjectFlow78");
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow78->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow78->setSource(Operation_ProvidedAndRequiredInterface_main_Read_b_p_result);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow78->setTarget(Operation_ProvidedAndRequiredInterface_main_Call_testP_p);
				// LiteralBoolean LiteralBoolean80
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow78_LiteralBoolean80->setThisElementPtr(Operation_ProvidedAndRequiredInterface_main_ObjectFlow78_LiteralBoolean80);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow78_LiteralBoolean80->setName("LiteralBoolean80");
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow78_LiteralBoolean80->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_main_ObjectFlow78_LiteralBoolean80->setValue(true);
			Operation_ProvidedAndRequiredInterface_main_ObjectFlow78->setGuard(Operation_ProvidedAndRequiredInterface_main_ObjectFlow78_LiteralBoolean80);
		Operation_ProvidedAndRequiredInterface_main->addEdge(Operation_ProvidedAndRequiredInterface_main_ObjectFlow78);
	Operation_ProvidedAndRequiredInterface->addPackagedElement(Operation_ProvidedAndRequiredInterface_main);
		// Class A
		Operation_ProvidedAndRequiredInterface_A->setThisClass_Ptr(Operation_ProvidedAndRequiredInterface_A);
		Operation_ProvidedAndRequiredInterface_A->setName("A");
		Operation_ProvidedAndRequiredInterface_A->setVisibility(VisibilityKind::public_);
		
			// Port q
			Operation_ProvidedAndRequiredInterface_A_q->setThisElementPtr(Operation_ProvidedAndRequiredInterface_A_q);
			Operation_ProvidedAndRequiredInterface_A_q->setName("q");
			Operation_ProvidedAndRequiredInterface_A_q->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_A_q->setType(Operation_ProvidedAndRequiredInterface_IImpl);
			Operation_ProvidedAndRequiredInterface_A_q->setAggregation(AggregationKind::composite);
			Operation_ProvidedAndRequiredInterface_A_q->isService = true;
			Operation_ProvidedAndRequiredInterface_A_q->addProvided(Operation_ProvidedAndRequiredInterface_I);
		Operation_ProvidedAndRequiredInterface_A->addOwnedAttribute(Operation_ProvidedAndRequiredInterface_A_q);
			// Property b
			Operation_ProvidedAndRequiredInterface_A_b->setThisElementPtr(Operation_ProvidedAndRequiredInterface_A_b);
			Operation_ProvidedAndRequiredInterface_A_b->setName("b");
			Operation_ProvidedAndRequiredInterface_A_b->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_A_b->setType(Operation_ProvidedAndRequiredInterface_B);
			Operation_ProvidedAndRequiredInterface_A_b->setAggregation(AggregationKind::composite);
		Operation_ProvidedAndRequiredInterface_A->addOwnedAttribute(Operation_ProvidedAndRequiredInterface_A_b);
		// Activity setPActivity
			Operation_ProvidedAndRequiredInterface_A_setPActivity->setThisActivityPtr(Operation_ProvidedAndRequiredInterface_A_setPActivity);
			Operation_ProvidedAndRequiredInterface_A_setPActivity->setName("setPActivity");
			Operation_ProvidedAndRequiredInterface_A_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				Operation_ProvidedAndRequiredInterface_A_setPActivity_v->setThisElementPtr(Operation_ProvidedAndRequiredInterface_A_setPActivity_v);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_v->setName("v");
				Operation_ProvidedAndRequiredInterface_A_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_A_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedAndRequiredInterface_A_setPActivity->addOwnedParameter(Operation_ProvidedAndRequiredInterface_A_setPActivity_v);
				// ActivityParameterNode vParameterNode
				Operation_ProvidedAndRequiredInterface_A_setPActivity_vParameterNode->setThisElementPtr(Operation_ProvidedAndRequiredInterface_A_setPActivity_vParameterNode);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_vParameterNode->setName("vParameterNode");
				Operation_ProvidedAndRequiredInterface_A_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_A_setPActivity_vParameterNode->setParameter(Operation_ProvidedAndRequiredInterface_A_setPActivity_v);
			Operation_ProvidedAndRequiredInterface_A_setPActivity->addNode(Operation_ProvidedAndRequiredInterface_A_setPActivity_vParameterNode);
				// ReadSelfAction this
				Operation_ProvidedAndRequiredInterface_A_setPActivity_this->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_A_setPActivity_this);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_this->setName("this");
				Operation_ProvidedAndRequiredInterface_A_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result->setThisElementPtr(Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result->setName("result");
					Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result->setType(Operation_ProvidedAndRequiredInterface_A);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_this->setResult(Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result);
			Operation_ProvidedAndRequiredInterface_A_setPActivity->addNode(Operation_ProvidedAndRequiredInterface_A_setPActivity_this);
				// CallOperationAction Call I::setP on q
				Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q->setName("Call I::setP on q");
				Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q->setOnPort(Operation_ProvidedAndRequiredInterface_A_q);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q->setOperation(Operation_ProvidedAndRequiredInterface_I_setP_Integer);
					// InputPin target
					Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_target->setThisElementPtr(Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_target);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_target->setName("target");
					Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_target->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q->setTarget(Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_target);
					// InputPin v
					Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v->setThisElementPtr(Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v->setName("v");
					Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v->setVisibility(VisibilityKind::public_);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q->addArgument(Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v);
			Operation_ProvidedAndRequiredInterface_A_setPActivity->addNode(Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q);
				// ObjectFlow ObjectFlow88 from result to target
				Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88->setName("ObjectFlow88");
				Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88->setSource(Operation_ProvidedAndRequiredInterface_A_setPActivity_this_result);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88->setTarget(Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_target);
					// LiteralBoolean LiteralBoolean89
					Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88_LiteralBoolean89->setThisElementPtr(Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88_LiteralBoolean89);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88_LiteralBoolean89->setName("LiteralBoolean89");
					Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88_LiteralBoolean89->setVisibility(VisibilityKind::public_);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88_LiteralBoolean89->setValue(true);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88->setGuard(Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88_LiteralBoolean89);
			Operation_ProvidedAndRequiredInterface_A_setPActivity->addEdge(Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow88);
				// ObjectFlow ObjectFlow91 from vParameterNode to v
				Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91->setName("ObjectFlow91");
				Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91->setSource(Operation_ProvidedAndRequiredInterface_A_setPActivity_vParameterNode);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91->setTarget(Operation_ProvidedAndRequiredInterface_A_setPActivity_Call_I_setP_on_q_v);
					// LiteralBoolean LiteralBoolean93
					Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91_LiteralBoolean93->setThisElementPtr(Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91_LiteralBoolean93);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91_LiteralBoolean93->setName("LiteralBoolean93");
					Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91_LiteralBoolean93->setVisibility(VisibilityKind::public_);
					Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91_LiteralBoolean93->setValue(true);
				Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91->setGuard(Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91_LiteralBoolean93);
			Operation_ProvidedAndRequiredInterface_A_setPActivity->addEdge(Operation_ProvidedAndRequiredInterface_A_setPActivity_ObjectFlow91);
		Operation_ProvidedAndRequiredInterface_A->addOwnedBehavior(Operation_ProvidedAndRequiredInterface_A_setPActivity);
		Operation_ProvidedAndRequiredInterface_A_r->setName("r");
			Operation_ProvidedAndRequiredInterface_A_r->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_A_r_ConnectorEnd100->setRole(Operation_ProvidedAndRequiredInterface_A_q);
				
			Operation_ProvidedAndRequiredInterface_A_r->addEnd(Operation_ProvidedAndRequiredInterface_A_r_ConnectorEnd100);
				
				Operation_ProvidedAndRequiredInterface_A_r_ConnectorEnd99->setRole(Operation_ProvidedAndRequiredInterface_A_b);
				
			Operation_ProvidedAndRequiredInterface_A_r->addEnd(Operation_ProvidedAndRequiredInterface_A_r_ConnectorEnd99);
			Operation_ProvidedAndRequiredInterface_A_r->setType(Operation_ProvidedAndRequiredInterface_R);
		Operation_ProvidedAndRequiredInterface_A->addOwnedConnector(Operation_ProvidedAndRequiredInterface_A_r);
			// Operation setP_Integer
			Operation_ProvidedAndRequiredInterface_A_setP_Integer->setThisOperationPtr(Operation_ProvidedAndRequiredInterface_A_setP_Integer);
			Operation_ProvidedAndRequiredInterface_A_setP_Integer->setName("setP_Integer");
			Operation_ProvidedAndRequiredInterface_A_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_ProvidedAndRequiredInterface_A_setP_Integer_v->setThisElementPtr(Operation_ProvidedAndRequiredInterface_A_setP_Integer_v);
				Operation_ProvidedAndRequiredInterface_A_setP_Integer_v->setName("v");
				Operation_ProvidedAndRequiredInterface_A_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_A_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedAndRequiredInterface_A_setP_Integer->addOwnedParameter(Operation_ProvidedAndRequiredInterface_A_setP_Integer_v);
			Operation_ProvidedAndRequiredInterface_A_setP_Integer->addMethod(Operation_ProvidedAndRequiredInterface_A_setPActivity);
		Operation_ProvidedAndRequiredInterface_A->addOwnedOperation(Operation_ProvidedAndRequiredInterface_A_setP_Integer);
	Operation_ProvidedAndRequiredInterface->addPackagedElement(Operation_ProvidedAndRequiredInterface_A);
		// Class E
		Operation_ProvidedAndRequiredInterface_E->setThisClass_Ptr(Operation_ProvidedAndRequiredInterface_E);
		Operation_ProvidedAndRequiredInterface_E->setName("E");
		Operation_ProvidedAndRequiredInterface_E->setVisibility(VisibilityKind::public_);
		
			// Port q
			Operation_ProvidedAndRequiredInterface_E_q->setThisElementPtr(Operation_ProvidedAndRequiredInterface_E_q);
			Operation_ProvidedAndRequiredInterface_E_q->setName("q");
			Operation_ProvidedAndRequiredInterface_E_q->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_E_q->setType(Operation_ProvidedAndRequiredInterface_IProvReq);
			Operation_ProvidedAndRequiredInterface_E_q->setAggregation(AggregationKind::composite);
			Operation_ProvidedAndRequiredInterface_E_q->isService = true;
			Operation_ProvidedAndRequiredInterface_E_q->addRequired(Operation_ProvidedAndRequiredInterface_I);
			Operation_ProvidedAndRequiredInterface_E_q->addProvided(Operation_ProvidedAndRequiredInterface_I);
		Operation_ProvidedAndRequiredInterface_E->addOwnedAttribute(Operation_ProvidedAndRequiredInterface_E_q);
			// Property c
			Operation_ProvidedAndRequiredInterface_E_c->setThisElementPtr(Operation_ProvidedAndRequiredInterface_E_c);
			Operation_ProvidedAndRequiredInterface_E_c->setName("c");
			Operation_ProvidedAndRequiredInterface_E_c->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_E_c->setType(Operation_ProvidedAndRequiredInterface_C);
			Operation_ProvidedAndRequiredInterface_E_c->setAggregation(AggregationKind::composite);
		Operation_ProvidedAndRequiredInterface_E->addOwnedAttribute(Operation_ProvidedAndRequiredInterface_E_c);
		
		Operation_ProvidedAndRequiredInterface_E_s->setName("s");
			Operation_ProvidedAndRequiredInterface_E_s->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_E_s_ConnectorEnd102->setRole(Operation_ProvidedAndRequiredInterface_C_q);
				Operation_ProvidedAndRequiredInterface_E_s_ConnectorEnd102->setPartWithPort(Operation_ProvidedAndRequiredInterface_E_c);
				
			Operation_ProvidedAndRequiredInterface_E_s->addEnd(Operation_ProvidedAndRequiredInterface_E_s_ConnectorEnd102);
				
				Operation_ProvidedAndRequiredInterface_E_s_ConnectorEnd101->setRole(Operation_ProvidedAndRequiredInterface_E_q);
				
			Operation_ProvidedAndRequiredInterface_E_s->addEnd(Operation_ProvidedAndRequiredInterface_E_s_ConnectorEnd101);
			Operation_ProvidedAndRequiredInterface_E_s->setType(Operation_ProvidedAndRequiredInterface_S);
		Operation_ProvidedAndRequiredInterface_E->addOwnedConnector(Operation_ProvidedAndRequiredInterface_E_s);
	Operation_ProvidedAndRequiredInterface->addPackagedElement(Operation_ProvidedAndRequiredInterface_E);
		// Class IImpl
		Operation_ProvidedAndRequiredInterface_IImpl->setThisClass_Ptr(Operation_ProvidedAndRequiredInterface_IImpl);
		Operation_ProvidedAndRequiredInterface_IImpl->setName("IImpl");
		Operation_ProvidedAndRequiredInterface_IImpl->setVisibility(VisibilityKind::public_);
		Operation_ProvidedAndRequiredInterface_IImpl_IRealization->setName("IRealization");
			Operation_ProvidedAndRequiredInterface_IImpl_IRealization->setVisibility(VisibilityKind::public_);
			Operation_ProvidedAndRequiredInterface_IImpl_IRealization->setContract(Operation_ProvidedAndRequiredInterface_I);
			
		Operation_ProvidedAndRequiredInterface_IImpl->addInterfaceRealization(Operation_ProvidedAndRequiredInterface_IImpl_IRealization);
		
			// Operation setP_Integer
			Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer->setThisOperationPtr(Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer);
			Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer->setName("setP_Integer");
			Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer_v->setThisElementPtr(Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer_v);
				Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer_v->setName("v");
				Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer->addOwnedParameter(Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer_v);
		Operation_ProvidedAndRequiredInterface_IImpl->addOwnedOperation(Operation_ProvidedAndRequiredInterface_IImpl_setP_Integer);
	Operation_ProvidedAndRequiredInterface->addPackagedElement(Operation_ProvidedAndRequiredInterface_IImpl);
		// Usage IUsageIProvReq
		Operation_ProvidedAndRequiredInterface_IUsageIProvReq->setName("IUsageIProvReq");
		Operation_ProvidedAndRequiredInterface_IUsageIProvReq->setVisibility(VisibilityKind::public_);
		Operation_ProvidedAndRequiredInterface_IUsageIProvReq->addClient(Operation_ProvidedAndRequiredInterface_IProvReq);
		Operation_ProvidedAndRequiredInterface_IUsageIProvReq->addSupplier(Operation_ProvidedAndRequiredInterface_I);
	Operation_ProvidedAndRequiredInterface->addPackagedElement(Operation_ProvidedAndRequiredInterface_IUsageIProvReq);
		// Class IProvReq
		Operation_ProvidedAndRequiredInterface_IProvReq->setThisClass_Ptr(Operation_ProvidedAndRequiredInterface_IProvReq);
		Operation_ProvidedAndRequiredInterface_IProvReq->setName("IProvReq");
		Operation_ProvidedAndRequiredInterface_IProvReq->setVisibility(VisibilityKind::public_);
		
			// Generalization to IImpl
			Operation_ProvidedAndRequiredInterface_IProvReq_Generalization103->setThisElementPtr(Operation_ProvidedAndRequiredInterface_IProvReq_Generalization103);
			Operation_ProvidedAndRequiredInterface_IProvReq_Generalization103->setGeneral(Operation_ProvidedAndRequiredInterface_IImpl);
		Operation_ProvidedAndRequiredInterface_IProvReq->addGeneralization(Operation_ProvidedAndRequiredInterface_IProvReq_Generalization103);
		
		
			// Operation setP_Integer
			Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer->setThisOperationPtr(Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer);
			Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer->setName("setP_Integer");
			Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer_v->setThisElementPtr(Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer_v);
				Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer_v->setName("v");
				Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer->addOwnedParameter(Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer_v);
		Operation_ProvidedAndRequiredInterface_IProvReq->addOwnedOperation(Operation_ProvidedAndRequiredInterface_IProvReq_setP_Integer);
	Operation_ProvidedAndRequiredInterface->addPackagedElement(Operation_ProvidedAndRequiredInterface_IProvReq);
		// Class B
		Operation_ProvidedAndRequiredInterface_B->setThisClass_Ptr(Operation_ProvidedAndRequiredInterface_B);
		Operation_ProvidedAndRequiredInterface_B->setName("B");
		Operation_ProvidedAndRequiredInterface_B->setVisibility(VisibilityKind::public_);
		
			// Property p
			Operation_ProvidedAndRequiredInterface_B_p->setThisElementPtr(Operation_ProvidedAndRequiredInterface_B_p);
			Operation_ProvidedAndRequiredInterface_B_p->setName("p");
			Operation_ProvidedAndRequiredInterface_B_p->setVisibility(VisibilityKind::public_);
			
			Operation_ProvidedAndRequiredInterface_B_p->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
		Operation_ProvidedAndRequiredInterface_B->addOwnedAttribute(Operation_ProvidedAndRequiredInterface_B_p);
		// Activity setPActivity
			Operation_ProvidedAndRequiredInterface_B_setPActivity->setThisActivityPtr(Operation_ProvidedAndRequiredInterface_B_setPActivity);
			Operation_ProvidedAndRequiredInterface_B_setPActivity->setName("setPActivity");
			Operation_ProvidedAndRequiredInterface_B_setPActivity->setVisibility(VisibilityKind::public_);
			
				// Parameter v
				Operation_ProvidedAndRequiredInterface_B_setPActivity_v->setThisElementPtr(Operation_ProvidedAndRequiredInterface_B_setPActivity_v);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_v->setName("v");
				Operation_ProvidedAndRequiredInterface_B_setPActivity_v->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_B_setPActivity_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedAndRequiredInterface_B_setPActivity->addOwnedParameter(Operation_ProvidedAndRequiredInterface_B_setPActivity_v);
				// ActivityParameterNode vParameterNode
				Operation_ProvidedAndRequiredInterface_B_setPActivity_vParameterNode->setThisElementPtr(Operation_ProvidedAndRequiredInterface_B_setPActivity_vParameterNode);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_vParameterNode->setName("vParameterNode");
				Operation_ProvidedAndRequiredInterface_B_setPActivity_vParameterNode->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_B_setPActivity_vParameterNode->setParameter(Operation_ProvidedAndRequiredInterface_B_setPActivity_v);
			Operation_ProvidedAndRequiredInterface_B_setPActivity->addNode(Operation_ProvidedAndRequiredInterface_B_setPActivity_vParameterNode);
				// AddStructuralFeatureValueAction Set this.p
				Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p->setName("Set this.p");
				Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p->setVisibility(VisibilityKind::public_);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p->setStructuralFeature(Operation_ProvidedAndRequiredInterface_B_p);
					// InputPin object
					Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object->setThisElementPtr(Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object->setName("object");
					Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object->setVisibility(VisibilityKind::public_);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object->setType(Operation_ProvidedAndRequiredInterface_B);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p->setObject(Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object);
					// InputPin value
					Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value->setThisElementPtr(Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value->setName("value");
					Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value->setVisibility(VisibilityKind::public_);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p->setValue(Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value);
					// OutputPin result
					Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_result->setThisElementPtr(Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_result);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_result->setName("result");
					Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_result->setVisibility(VisibilityKind::public_);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_result->setType(Operation_ProvidedAndRequiredInterface_B);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p->setResult(Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_result);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p->setIsReplaceAll(true);
			Operation_ProvidedAndRequiredInterface_B_setPActivity->addNode(Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p);
				// ReadSelfAction this
				Operation_ProvidedAndRequiredInterface_B_setPActivity_this->setThisExecutableNodePtr(Operation_ProvidedAndRequiredInterface_B_setPActivity_this);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_this->setName("this");
				Operation_ProvidedAndRequiredInterface_B_setPActivity_this->setVisibility(VisibilityKind::public_);
					// OutputPin result
					Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result->setThisElementPtr(Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result->setName("result");
					Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result->setVisibility(VisibilityKind::public_);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result->setType(Operation_ProvidedAndRequiredInterface_B);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_this->setResult(Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result);
			Operation_ProvidedAndRequiredInterface_B_setPActivity->addNode(Operation_ProvidedAndRequiredInterface_B_setPActivity_this);
				// ObjectFlow ObjectFlow104 from vParameterNode to value
				Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104->setName("ObjectFlow104");
				Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104->setSource(Operation_ProvidedAndRequiredInterface_B_setPActivity_vParameterNode);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104->setTarget(Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_value);
					// LiteralBoolean LiteralBoolean106
					Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104_LiteralBoolean106->setThisElementPtr(Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104_LiteralBoolean106);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104_LiteralBoolean106->setName("LiteralBoolean106");
					Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104_LiteralBoolean106->setVisibility(VisibilityKind::public_);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104_LiteralBoolean106->setValue(true);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104->setGuard(Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104_LiteralBoolean106);
			Operation_ProvidedAndRequiredInterface_B_setPActivity->addEdge(Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow104);
				// ObjectFlow ObjectFlow107 from result to object
				Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107->setThisActivityEdgePtr(Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107->setName("ObjectFlow107");
				Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107->setSource(Operation_ProvidedAndRequiredInterface_B_setPActivity_this_result);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107->setTarget(Operation_ProvidedAndRequiredInterface_B_setPActivity_Set_this_p_object);
					// LiteralBoolean LiteralBoolean108
					Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107_LiteralBoolean108->setThisElementPtr(Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107_LiteralBoolean108);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107_LiteralBoolean108->setName("LiteralBoolean108");
					Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107_LiteralBoolean108->setVisibility(VisibilityKind::public_);
					Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107_LiteralBoolean108->setValue(true);
				Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107->setGuard(Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107_LiteralBoolean108);
			Operation_ProvidedAndRequiredInterface_B_setPActivity->addEdge(Operation_ProvidedAndRequiredInterface_B_setPActivity_ObjectFlow107);
		Operation_ProvidedAndRequiredInterface_B->addOwnedBehavior(Operation_ProvidedAndRequiredInterface_B_setPActivity);
			Operation_ProvidedAndRequiredInterface_B_IRealization->setName("IRealization");
			Operation_ProvidedAndRequiredInterface_B_IRealization->setVisibility(VisibilityKind::public_);
			Operation_ProvidedAndRequiredInterface_B_IRealization->setContract(Operation_ProvidedAndRequiredInterface_I);
			
		Operation_ProvidedAndRequiredInterface_B->addInterfaceRealization(Operation_ProvidedAndRequiredInterface_B_IRealization);
		
			// Operation setP_Integer
			Operation_ProvidedAndRequiredInterface_B_setP_Integer->setThisOperationPtr(Operation_ProvidedAndRequiredInterface_B_setP_Integer);
			Operation_ProvidedAndRequiredInterface_B_setP_Integer->setName("setP_Integer");
			Operation_ProvidedAndRequiredInterface_B_setP_Integer->setVisibility(VisibilityKind::public_);
				// Parameter v
				Operation_ProvidedAndRequiredInterface_B_setP_Integer_v->setThisElementPtr(Operation_ProvidedAndRequiredInterface_B_setP_Integer_v);
				Operation_ProvidedAndRequiredInterface_B_setP_Integer_v->setName("v");
				Operation_ProvidedAndRequiredInterface_B_setP_Integer_v->setVisibility(VisibilityKind::public_);
				
				Operation_ProvidedAndRequiredInterface_B_setP_Integer_v->setType(PrimitiveTypesModel::Instance()->PrimitiveTypes_Integer);
			Operation_ProvidedAndRequiredInterface_B_setP_Integer->addOwnedParameter(Operation_ProvidedAndRequiredInterface_B_setP_Integer_v);
			Operation_ProvidedAndRequiredInterface_B_setP_Integer->addMethod(Operation_ProvidedAndRequiredInterface_B_setPActivity);
		Operation_ProvidedAndRequiredInterface_B->addOwnedOperation(Operation_ProvidedAndRequiredInterface_B_setP_Integer);
	Operation_ProvidedAndRequiredInterface->addPackagedElement(Operation_ProvidedAndRequiredInterface_B);
}
