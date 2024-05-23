/*
 * RecursiveDestructionModel.cpp
 * 
 * Auto-generated file
 */

#include "RecursiveDestructionModel.h"

#include <uml/commonbehavior/FunctionBehavior.h>
#include <uml/actions/CallBehaviorAction.h>
#include <uml/actions/DestroyObjectAction.h>
#include <uml/activities/ObjectFlow.h>
#include <uml/activities/Activity.h>
#include <uml/values/LiteralBoolean.h>
#include <uml/classification/Property.h>
#include <uml/actions/InputPin.h>
#include <uml/values/LiteralInteger.h>
#include <uml/simpleclassifiers/PrimitiveType.h>
#include <uml/classification/Parameter.h>
#include <uml/commonstructure/Comment.h>
#include <uml/classification/Operation.h>
#include <utils/primitivetypes/PrimitiveTypesModel.h>
#include <uml/commonstructure/PackageImport.h>
#include <utils/standardprofile/StandardProfileModel.h>
#include <uml/commonbehavior/OpaqueBehavior.h>
#include <uml/activities/ControlFlow.h>
#include <uml/simpleclassifiers/Interface.h>
#include <uml/structuredclassifiers/ConnectorEnd.h>
#include <utils/library/FoundationalModelLibraryModel.h>
#include <uml/structuredclassifiers/Association.h>
#include <uml/structuredclassifiers/Connector.h>
#include <uml/actions/CreateObjectAction.h>
#include <uml/actions/CallOperationAction.h>
#include <uml/structuredclassifiers/Port.h>
#include <uml/simpleclassifiers/InterfaceRealization.h>
#include <uml/packages/Package.h>
#include <uml/values/LiteralUnlimitedNatural.h>
#include <uml/actions/OutputPin.h>
#include <uml/structuredclassifiers/Class_.h>
#include <uml/actions/ReadExtentAction.h>


/* Start of user code : User-defined includes and using directives
 * This section may be used for includes and using directives.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

using namespace RecursiveDestruction;
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

RecursiveDestructionModel::RecursiveDestructionModel()
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

RecursiveDestructionModel::~RecursiveDestructionModel()
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

const std::shared_ptr<RecursiveDestructionModel>& RecursiveDestructionModel::Instance()
{
	static std::shared_ptr<RecursiveDestructionModel> instance = nullptr;

	if(!instance)
	{
		instance.reset(new RecursiveDestructionModel());
		instance->initializeInMemoryModel();
	}

	return instance;
}

void RecursiveDestructionModel::initializeInMemoryModel()
{
	// Create public members
	/*
	 * Model RecursiveDestruction
	 */
	RecursiveDestruction.reset(new Package());
	this->addToElementRepository("RecursiveDestruction", RecursiveDestruction);
		RecursiveDestruction_IImpl.reset(new Class_());
		this->addToElementRepository("IImpl", RecursiveDestruction_IImpl);
			RecursiveDestruction_IImpl_I_Realization.reset(new InterfaceRealization());
			this->addToElementRepository("I_Realization", RecursiveDestruction_IImpl_I_Realization);
		RecursiveDestruction_B.reset(new Class_());
		this->addToElementRepository("B", RecursiveDestruction_B);
			RecursiveDestruction_B_p.reset(new Port());
			this->addToElementRepository("p", RecursiveDestruction_B_p);
				RecursiveDestruction_B_p_LiteralInteger0.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger0", RecursiveDestruction_B_p_LiteralInteger0);
				RecursiveDestruction_B_p_LiteralUnlimitedNatural1.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural1", RecursiveDestruction_B_p_LiteralUnlimitedNatural1);
		RecursiveDestruction_R.reset(new Association());
		this->addToElementRepository("R", RecursiveDestruction_R);
			RecursiveDestruction_R_y.reset(new Property());
			this->addToElementRepository("y", RecursiveDestruction_R_y);
				RecursiveDestruction_R_y_LiteralInteger2.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger2", RecursiveDestruction_R_y_LiteralInteger2);
				RecursiveDestruction_R_y_LiteralUnlimitedNatural3.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural3", RecursiveDestruction_R_y_LiteralUnlimitedNatural3);
			RecursiveDestruction_R_x.reset(new Property());
			this->addToElementRepository("x", RecursiveDestruction_R_x);
				RecursiveDestruction_R_x_LiteralInteger4.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger4", RecursiveDestruction_R_x_LiteralInteger4);
				RecursiveDestruction_R_x_LiteralUnlimitedNatural5.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural5", RecursiveDestruction_R_x_LiteralUnlimitedNatural5);
		RecursiveDestruction_main.reset(new Activity());
		this->addToElementRepository("main", RecursiveDestruction_main);
			RecursiveDestruction_main_ControlFlow6.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow6", RecursiveDestruction_main_ControlFlow6);
			RecursiveDestruction_main_ObjectFlow7.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow7", RecursiveDestruction_main_ObjectFlow7);
				RecursiveDestruction_main_ObjectFlow7_LiteralBoolean8.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean8", RecursiveDestruction_main_ObjectFlow7_LiteralBoolean8);
				RecursiveDestruction_main_ObjectFlow7_LiteralInteger9.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger9", RecursiveDestruction_main_ObjectFlow7_LiteralInteger9);
			RecursiveDestruction_main_Create_A_Star_Pattern.reset(new CreateObjectAction());
			this->addToElementRepository("Create A_Star_Pattern", RecursiveDestruction_main_Create_A_Star_Pattern);
				RecursiveDestruction_main_Create_A_Star_Pattern_result.reset(new OutputPin());
				this->addToElementRepository("result", RecursiveDestruction_main_Create_A_Star_Pattern_result);
					RecursiveDestruction_main_Create_A_Star_Pattern_result_LiteralUnlimitedNatural10.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural10", RecursiveDestruction_main_Create_A_Star_Pattern_result_LiteralUnlimitedNatural10);
					RecursiveDestruction_main_Create_A_Star_Pattern_result_LiteralInteger11.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger11", RecursiveDestruction_main_Create_A_Star_Pattern_result_LiteralInteger11);
			RecursiveDestruction_main_numberOfIImplInstances.reset(new OpaqueBehavior());
			this->addToElementRepository("numberOfIImplInstances", RecursiveDestruction_main_numberOfIImplInstances);
				RecursiveDestruction_main_numberOfIImplInstances_iImplList.reset(new Parameter());
				this->addToElementRepository("iImplList", RecursiveDestruction_main_numberOfIImplInstances_iImplList);
					RecursiveDestruction_main_numberOfIImplInstances_iImplList_LiteralInteger12.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger12", RecursiveDestruction_main_numberOfIImplInstances_iImplList_LiteralInteger12);
					RecursiveDestruction_main_numberOfIImplInstances_iImplList_LiteralUnlimitedNatural13.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural13", RecursiveDestruction_main_numberOfIImplInstances_iImplList_LiteralUnlimitedNatural13);
			RecursiveDestruction_main_ObjectFlow14.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow14", RecursiveDestruction_main_ObjectFlow14);
				RecursiveDestruction_main_ObjectFlow14_LiteralInteger15.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger15", RecursiveDestruction_main_ObjectFlow14_LiteralInteger15);
				RecursiveDestruction_main_ObjectFlow14_LiteralBoolean16.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean16", RecursiveDestruction_main_ObjectFlow14_LiteralBoolean16);
			RecursiveDestruction_main_Extent_of_IImpl_after_destruction.reset(new ReadExtentAction());
			this->addToElementRepository("Extent of IImpl after destruction", RecursiveDestruction_main_Extent_of_IImpl_after_destruction);
				RecursiveDestruction_main_Extent_of_IImpl_after_destruction_iImplExtent.reset(new OutputPin());
				this->addToElementRepository("iImplExtent", RecursiveDestruction_main_Extent_of_IImpl_after_destruction_iImplExtent);
			RecursiveDestruction_main_Call_numberOfCInstances.reset(new CallBehaviorAction());
			this->addToElementRepository("Call numberOfCInstances", RecursiveDestruction_main_Call_numberOfCInstances);
				RecursiveDestruction_main_Call_numberOfCInstances_cList.reset(new InputPin());
				this->addToElementRepository("cList", RecursiveDestruction_main_Call_numberOfCInstances_cList);
					RecursiveDestruction_main_Call_numberOfCInstances_cList_LiteralInteger17.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger17", RecursiveDestruction_main_Call_numberOfCInstances_cList_LiteralInteger17);
					RecursiveDestruction_main_Call_numberOfCInstances_cList_LiteralUnlimitedNatural18.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural18", RecursiveDestruction_main_Call_numberOfCInstances_cList_LiteralUnlimitedNatural18);
					RecursiveDestruction_main_Call_numberOfCInstances_cList_LiteralInteger19.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger19", RecursiveDestruction_main_Call_numberOfCInstances_cList_LiteralInteger19);
			RecursiveDestruction_main_ObjectFlow20.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow20", RecursiveDestruction_main_ObjectFlow20);
				RecursiveDestruction_main_ObjectFlow20_LiteralInteger21.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger21", RecursiveDestruction_main_ObjectFlow20_LiteralInteger21);
				RecursiveDestruction_main_ObjectFlow20_LiteralBoolean22.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean22", RecursiveDestruction_main_ObjectFlow20_LiteralBoolean22);
			RecursiveDestruction_main_ObjectFlow23.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow23", RecursiveDestruction_main_ObjectFlow23);
				RecursiveDestruction_main_ObjectFlow23_LiteralBoolean24.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean24", RecursiveDestruction_main_ObjectFlow23_LiteralBoolean24);
				RecursiveDestruction_main_ObjectFlow23_LiteralInteger25.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger25", RecursiveDestruction_main_ObjectFlow23_LiteralInteger25);
			RecursiveDestruction_main_ObjectFlow26.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow26", RecursiveDestruction_main_ObjectFlow26);
				RecursiveDestruction_main_ObjectFlow26_LiteralBoolean27.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean27", RecursiveDestruction_main_ObjectFlow26_LiteralBoolean27);
				RecursiveDestruction_main_ObjectFlow26_LiteralInteger28.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger28", RecursiveDestruction_main_ObjectFlow26_LiteralInteger28);
			RecursiveDestruction_main_Call_assertExtentOfC.reset(new CallBehaviorAction());
			this->addToElementRepository("Call assertExtentOfC", RecursiveDestruction_main_Call_assertExtentOfC);
				RecursiveDestruction_main_Call_assertExtentOfC_cList.reset(new InputPin());
				this->addToElementRepository("cList", RecursiveDestruction_main_Call_assertExtentOfC_cList);
					RecursiveDestruction_main_Call_assertExtentOfC_cList_LiteralInteger29.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger29", RecursiveDestruction_main_Call_assertExtentOfC_cList_LiteralInteger29);
					RecursiveDestruction_main_Call_assertExtentOfC_cList_LiteralInteger30.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger30", RecursiveDestruction_main_Call_assertExtentOfC_cList_LiteralInteger30);
					RecursiveDestruction_main_Call_assertExtentOfC_cList_LiteralUnlimitedNatural31.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural31", RecursiveDestruction_main_Call_assertExtentOfC_cList_LiteralUnlimitedNatural31);
			RecursiveDestruction_main_assertExtentOfIImpl.reset(new OpaqueBehavior());
			this->addToElementRepository("assertExtentOfIImpl", RecursiveDestruction_main_assertExtentOfIImpl);
				RecursiveDestruction_main_assertExtentOfIImpl_iImplList.reset(new Parameter());
				this->addToElementRepository("iImplList", RecursiveDestruction_main_assertExtentOfIImpl_iImplList);
					RecursiveDestruction_main_assertExtentOfIImpl_iImplList_LiteralUnlimitedNatural32.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural32", RecursiveDestruction_main_assertExtentOfIImpl_iImplList_LiteralUnlimitedNatural32);
					RecursiveDestruction_main_assertExtentOfIImpl_iImplList_LiteralInteger33.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger33", RecursiveDestruction_main_assertExtentOfIImpl_iImplList_LiteralInteger33);
			RecursiveDestruction_main_ObjectFlow34.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow34", RecursiveDestruction_main_ObjectFlow34);
				RecursiveDestruction_main_ObjectFlow34_LiteralBoolean35.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean35", RecursiveDestruction_main_ObjectFlow34_LiteralBoolean35);
				RecursiveDestruction_main_ObjectFlow34_LiteralInteger36.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger36", RecursiveDestruction_main_ObjectFlow34_LiteralInteger36);
			RecursiveDestruction_main_ControlFlow37.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow37", RecursiveDestruction_main_ControlFlow37);
			RecursiveDestruction_main_ControlFlow38.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow38", RecursiveDestruction_main_ControlFlow38);
			RecursiveDestruction_main_ControlFlow39.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow39", RecursiveDestruction_main_ControlFlow39);
			RecursiveDestruction_main_numberOfCInstances.reset(new OpaqueBehavior());
			this->addToElementRepository("numberOfCInstances", RecursiveDestruction_main_numberOfCInstances);
				RecursiveDestruction_main_numberOfCInstances_cList.reset(new Parameter());
				this->addToElementRepository("cList", RecursiveDestruction_main_numberOfCInstances_cList);
					RecursiveDestruction_main_numberOfCInstances_cList_LiteralInteger40.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger40", RecursiveDestruction_main_numberOfCInstances_cList_LiteralInteger40);
					RecursiveDestruction_main_numberOfCInstances_cList_LiteralUnlimitedNatural41.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural41", RecursiveDestruction_main_numberOfCInstances_cList_LiteralUnlimitedNatural41);
			RecursiveDestruction_main_assertExtentOfB.reset(new OpaqueBehavior());
			this->addToElementRepository("assertExtentOfB", RecursiveDestruction_main_assertExtentOfB);
				RecursiveDestruction_main_assertExtentOfB_bList.reset(new Parameter());
				this->addToElementRepository("bList", RecursiveDestruction_main_assertExtentOfB_bList);
					RecursiveDestruction_main_assertExtentOfB_bList_LiteralInteger42.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger42", RecursiveDestruction_main_assertExtentOfB_bList_LiteralInteger42);
					RecursiveDestruction_main_assertExtentOfB_bList_LiteralUnlimitedNatural43.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural43", RecursiveDestruction_main_assertExtentOfB_bList_LiteralUnlimitedNatural43);
			RecursiveDestruction_main_Extent_of_B_before_destruction.reset(new ReadExtentAction());
			this->addToElementRepository("Extent of B before destruction", RecursiveDestruction_main_Extent_of_B_before_destruction);
				RecursiveDestruction_main_Extent_of_B_before_destruction_bExtent.reset(new OutputPin());
				this->addToElementRepository("bExtent", RecursiveDestruction_main_Extent_of_B_before_destruction_bExtent);
			RecursiveDestruction_main_Extent_of_C_before_destruction.reset(new ReadExtentAction());
			this->addToElementRepository("Extent of C before destruction", RecursiveDestruction_main_Extent_of_C_before_destruction);
				RecursiveDestruction_main_Extent_of_C_before_destruction_cExtent.reset(new OutputPin());
				this->addToElementRepository("cExtent", RecursiveDestruction_main_Extent_of_C_before_destruction_cExtent);
			RecursiveDestruction_main_Extent_of_IImpl_before_destruction.reset(new ReadExtentAction());
			this->addToElementRepository("Extent of IImpl before destruction", RecursiveDestruction_main_Extent_of_IImpl_before_destruction);
				RecursiveDestruction_main_Extent_of_IImpl_before_destruction_iImplExtent.reset(new OutputPin());
				this->addToElementRepository("iImplExtent", RecursiveDestruction_main_Extent_of_IImpl_before_destruction_iImplExtent);
			RecursiveDestruction_main_Destroy_A_Star_Pattern.reset(new DestroyObjectAction());
			this->addToElementRepository("Destroy A_Star_Pattern", RecursiveDestruction_main_Destroy_A_Star_Pattern);
				RecursiveDestruction_main_Destroy_A_Star_Pattern_target.reset(new InputPin());
				this->addToElementRepository("target", RecursiveDestruction_main_Destroy_A_Star_Pattern_target);
			RecursiveDestruction_main_Call_numberOfIImplInstances.reset(new CallBehaviorAction());
			this->addToElementRepository("Call numberOfIImplInstances", RecursiveDestruction_main_Call_numberOfIImplInstances);
				RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList.reset(new InputPin());
				this->addToElementRepository("iImplList", RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList);
					RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList_LiteralUnlimitedNatural44.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural44", RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList_LiteralUnlimitedNatural44);
					RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList_LiteralInteger45.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger45", RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList_LiteralInteger45);
					RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList_LiteralInteger46.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger46", RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList_LiteralInteger46);
			RecursiveDestruction_main_A_Star_Pattern_.reset(new CallOperationAction());
			this->addToElementRepository("A_Star_Pattern()", RecursiveDestruction_main_A_Star_Pattern_);
				RecursiveDestruction_main_A_Star_Pattern__target.reset(new InputPin());
				this->addToElementRepository("target", RecursiveDestruction_main_A_Star_Pattern__target);
					RecursiveDestruction_main_A_Star_Pattern__target_LiteralUnlimitedNatural47.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural47", RecursiveDestruction_main_A_Star_Pattern__target_LiteralUnlimitedNatural47);
					RecursiveDestruction_main_A_Star_Pattern__target_LiteralInteger48.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger48", RecursiveDestruction_main_A_Star_Pattern__target_LiteralInteger48);
				RecursiveDestruction_main_A_Star_Pattern__result.reset(new OutputPin());
				this->addToElementRepository("result", RecursiveDestruction_main_A_Star_Pattern__result);
					RecursiveDestruction_main_A_Star_Pattern__result_LiteralUnlimitedNatural49.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural49", RecursiveDestruction_main_A_Star_Pattern__result_LiteralUnlimitedNatural49);
					RecursiveDestruction_main_A_Star_Pattern__result_LiteralInteger50.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger50", RecursiveDestruction_main_A_Star_Pattern__result_LiteralInteger50);
					RecursiveDestruction_main_A_Star_Pattern__result_LiteralInteger51.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger51", RecursiveDestruction_main_A_Star_Pattern__result_LiteralInteger51);
			RecursiveDestruction_main_ControlFlow52.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow52", RecursiveDestruction_main_ControlFlow52);
			RecursiveDestruction_main_ObjectFlow53.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow53", RecursiveDestruction_main_ObjectFlow53);
				RecursiveDestruction_main_ObjectFlow53_LiteralInteger54.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger54", RecursiveDestruction_main_ObjectFlow53_LiteralInteger54);
				RecursiveDestruction_main_ObjectFlow53_LiteralBoolean55.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean55", RecursiveDestruction_main_ObjectFlow53_LiteralBoolean55);
			RecursiveDestruction_main_ObjectFlow56.reset(new ObjectFlow());
			this->addToElementRepository("ObjectFlow56", RecursiveDestruction_main_ObjectFlow56);
				RecursiveDestruction_main_ObjectFlow56_LiteralInteger57.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger57", RecursiveDestruction_main_ObjectFlow56_LiteralInteger57);
				RecursiveDestruction_main_ObjectFlow56_LiteralBoolean58.reset(new LiteralBoolean());
				this->addToElementRepository("LiteralBoolean58", RecursiveDestruction_main_ObjectFlow56_LiteralBoolean58);
			RecursiveDestruction_main_Call_numberOfBInstances.reset(new CallBehaviorAction());
			this->addToElementRepository("Call numberOfBInstances", RecursiveDestruction_main_Call_numberOfBInstances);
				RecursiveDestruction_main_Call_numberOfBInstances_bList.reset(new InputPin());
				this->addToElementRepository("bList", RecursiveDestruction_main_Call_numberOfBInstances_bList);
					RecursiveDestruction_main_Call_numberOfBInstances_bList_LiteralInteger59.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger59", RecursiveDestruction_main_Call_numberOfBInstances_bList_LiteralInteger59);
					RecursiveDestruction_main_Call_numberOfBInstances_bList_LiteralUnlimitedNatural60.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural60", RecursiveDestruction_main_Call_numberOfBInstances_bList_LiteralUnlimitedNatural60);
					RecursiveDestruction_main_Call_numberOfBInstances_bList_LiteralInteger61.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger61", RecursiveDestruction_main_Call_numberOfBInstances_bList_LiteralInteger61);
			RecursiveDestruction_main_numberOfBInstances.reset(new OpaqueBehavior());
			this->addToElementRepository("numberOfBInstances", RecursiveDestruction_main_numberOfBInstances);
				RecursiveDestruction_main_numberOfBInstances_bList.reset(new Parameter());
				this->addToElementRepository("bList", RecursiveDestruction_main_numberOfBInstances_bList);
					RecursiveDestruction_main_numberOfBInstances_bList_LiteralInteger62.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger62", RecursiveDestruction_main_numberOfBInstances_bList_LiteralInteger62);
					RecursiveDestruction_main_numberOfBInstances_bList_LiteralUnlimitedNatural63.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural63", RecursiveDestruction_main_numberOfBInstances_bList_LiteralUnlimitedNatural63);
			RecursiveDestruction_main_Extent_of_B_after_destruction.reset(new ReadExtentAction());
			this->addToElementRepository("Extent of B after destruction", RecursiveDestruction_main_Extent_of_B_after_destruction);
				RecursiveDestruction_main_Extent_of_B_after_destruction_bExtent.reset(new OutputPin());
				this->addToElementRepository("bExtent", RecursiveDestruction_main_Extent_of_B_after_destruction_bExtent);
			RecursiveDestruction_main_ControlFlow64.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow64", RecursiveDestruction_main_ControlFlow64);
			RecursiveDestruction_main_ControlFlow65.reset(new ControlFlow());
			this->addToElementRepository("ControlFlow65", RecursiveDestruction_main_ControlFlow65);
			RecursiveDestruction_main_Extent_of_C_after_destruction.reset(new ReadExtentAction());
			this->addToElementRepository("Extent of C after destruction", RecursiveDestruction_main_Extent_of_C_after_destruction);
				RecursiveDestruction_main_Extent_of_C_after_destruction_cExtent.reset(new OutputPin());
				this->addToElementRepository("cExtent", RecursiveDestruction_main_Extent_of_C_after_destruction_cExtent);
			RecursiveDestruction_main_Call_assertExtentOfIImpl.reset(new CallBehaviorAction());
			this->addToElementRepository("Call assertExtentOfIImpl", RecursiveDestruction_main_Call_assertExtentOfIImpl);
				RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList.reset(new InputPin());
				this->addToElementRepository("iImplList", RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList);
					RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList_LiteralUnlimitedNatural66.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural66", RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList_LiteralUnlimitedNatural66);
					RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList_LiteralInteger67.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger67", RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList_LiteralInteger67);
					RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList_LiteralInteger68.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger68", RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList_LiteralInteger68);
			RecursiveDestruction_main_assertExtentOfC.reset(new OpaqueBehavior());
			this->addToElementRepository("assertExtentOfC", RecursiveDestruction_main_assertExtentOfC);
				RecursiveDestruction_main_assertExtentOfC_cList.reset(new Parameter());
				this->addToElementRepository("cList", RecursiveDestruction_main_assertExtentOfC_cList);
					RecursiveDestruction_main_assertExtentOfC_cList_LiteralUnlimitedNatural69.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural69", RecursiveDestruction_main_assertExtentOfC_cList_LiteralUnlimitedNatural69);
					RecursiveDestruction_main_assertExtentOfC_cList_LiteralInteger70.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger70", RecursiveDestruction_main_assertExtentOfC_cList_LiteralInteger70);
			RecursiveDestruction_main_Call_assertExtentOfB.reset(new CallBehaviorAction());
			this->addToElementRepository("Call assertExtentOfB", RecursiveDestruction_main_Call_assertExtentOfB);
				RecursiveDestruction_main_Call_assertExtentOfB_bList.reset(new InputPin());
				this->addToElementRepository("bList", RecursiveDestruction_main_Call_assertExtentOfB_bList);
					RecursiveDestruction_main_Call_assertExtentOfB_bList_LiteralInteger71.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger71", RecursiveDestruction_main_Call_assertExtentOfB_bList_LiteralInteger71);
					RecursiveDestruction_main_Call_assertExtentOfB_bList_LiteralInteger72.reset(new LiteralInteger());
					this->addToElementRepository("LiteralInteger72", RecursiveDestruction_main_Call_assertExtentOfB_bList_LiteralInteger72);
					RecursiveDestruction_main_Call_assertExtentOfB_bList_LiteralUnlimitedNatural73.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("LiteralUnlimitedNatural73", RecursiveDestruction_main_Call_assertExtentOfB_bList_LiteralUnlimitedNatural73);
		RecursiveDestruction_A_Star_Pattern.reset(new Class_());
		this->addToElementRepository("A_Star_Pattern", RecursiveDestruction_A_Star_Pattern);
			RecursiveDestruction_A_Star_Pattern_Comment74.reset(new Comment());
			this->addToElementRepository("Comment74", RecursiveDestruction_A_Star_Pattern_Comment74);
			RecursiveDestruction_A_Star_Pattern_partB.reset(new Property());
			this->addToElementRepository("partB", RecursiveDestruction_A_Star_Pattern_partB);
				RecursiveDestruction_A_Star_Pattern_partB_LiteralUnlimitedNatural75.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural75", RecursiveDestruction_A_Star_Pattern_partB_LiteralUnlimitedNatural75);
				RecursiveDestruction_A_Star_Pattern_partB_LiteralInteger76.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger76", RecursiveDestruction_A_Star_Pattern_partB_LiteralInteger76);
			RecursiveDestruction_A_Star_Pattern_partC.reset(new Property());
			this->addToElementRepository("partC", RecursiveDestruction_A_Star_Pattern_partC);
				RecursiveDestruction_A_Star_Pattern_partC_LiteralUnlimitedNatural77.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural77", RecursiveDestruction_A_Star_Pattern_partC_LiteralUnlimitedNatural77);
				RecursiveDestruction_A_Star_Pattern_partC_LiteralInteger78.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger78", RecursiveDestruction_A_Star_Pattern_partC_LiteralInteger78);
			RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern.reset(new Operation());
			this->addToElementRepository("A_Star_Pattern_A_Star_Pattern", RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
				RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result.reset(new Parameter());
				this->addToElementRepository("result", RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
			RecursiveDestruction_A_Star_Pattern_r.reset(new Connector());
			this->addToElementRepository("r", RecursiveDestruction_A_Star_Pattern_r);
				RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd79.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd79", RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd79);
					RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd79_connectorEnd_2_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_2_Lower", RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd79_connectorEnd_2_Lower);
					RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd79_connectorEnd_2_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_2_Upper", RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd79_connectorEnd_2_Upper);
				RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd80.reset(new ConnectorEnd());
				this->addToElementRepository("ConnectorEnd80", RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd80);
					RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd80_connectorEnd_1_Lower.reset(new LiteralInteger());
					this->addToElementRepository("connectorEnd_1_Lower", RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd80_connectorEnd_1_Lower);
					RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd80_connectorEnd_1_Upper.reset(new LiteralUnlimitedNatural());
					this->addToElementRepository("connectorEnd_1_Upper", RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd80_connectorEnd_1_Upper);
		RecursiveDestruction_C.reset(new Class_());
		this->addToElementRepository("C", RecursiveDestruction_C);
			RecursiveDestruction_C_q.reset(new Port());
			this->addToElementRepository("q", RecursiveDestruction_C_q);
				RecursiveDestruction_C_q_LiteralInteger81.reset(new LiteralInteger());
				this->addToElementRepository("LiteralInteger81", RecursiveDestruction_C_q_LiteralInteger81);
				RecursiveDestruction_C_q_LiteralUnlimitedNatural82.reset(new LiteralUnlimitedNatural());
				this->addToElementRepository("LiteralUnlimitedNatural82", RecursiveDestruction_C_q_LiteralUnlimitedNatural82);
		RecursiveDestruction_I.reset(new Interface());
		this->addToElementRepository("I", RecursiveDestruction_I);

	// Initialize public members
	/*
	 * Model RecursiveDestruction
	 */
	RecursiveDestruction->setThisPackagePtr(RecursiveDestruction);
	RecursiveDestruction->setName("RecursiveDestruction");
	RecursiveDestruction->setVisibility(VisibilityKind::public_);
		// Class IImpl
		RecursiveDestruction_IImpl->setThisClass_Ptr(RecursiveDestruction_IImpl);
		RecursiveDestruction_IImpl->setName("IImpl");
		RecursiveDestruction_IImpl->setVisibility(VisibilityKind::public_);
		RecursiveDestruction_IImpl_I_Realization->setName("I_Realization");
			RecursiveDestruction_IImpl_I_Realization->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_IImpl_I_Realization->setContract(RecursiveDestruction_I);
			
		RecursiveDestruction_IImpl->addInterfaceRealization(RecursiveDestruction_IImpl_I_Realization);
	RecursiveDestruction->addPackagedElement(RecursiveDestruction_IImpl);
		// Class B
		RecursiveDestruction_B->setThisClass_Ptr(RecursiveDestruction_B);
		RecursiveDestruction_B->setName("B");
		RecursiveDestruction_B->setVisibility(VisibilityKind::public_);
		
			// Port p
			RecursiveDestruction_B_p->setThisElementPtr(RecursiveDestruction_B_p);
			RecursiveDestruction_B_p->setName("p");
			RecursiveDestruction_B_p->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_B_p->setUpper(-1);
			RecursiveDestruction_B_p->setLower(2);
			RecursiveDestruction_B_p->setType(RecursiveDestruction_IImpl);
			RecursiveDestruction_B_p->setAggregation(AggregationKind::composite);
			RecursiveDestruction_B_p->isService = true;
			RecursiveDestruction_B_p->addProvided(RecursiveDestruction_I);
		RecursiveDestruction_B->addOwnedAttribute(RecursiveDestruction_B_p);
	RecursiveDestruction->addPackagedElement(RecursiveDestruction_B);
		// Association R
		RecursiveDestruction_R->setThisAssociationPtr(RecursiveDestruction_R);
		RecursiveDestruction_R->setName("R");
		RecursiveDestruction_R->setVisibility(VisibilityKind::public_);
		RecursiveDestruction_R->addOwnedEnd(RecursiveDestruction_R_x);
		RecursiveDestruction_R->addOwnedEnd(RecursiveDestruction_R_y);
	RecursiveDestruction->addPackagedElement(RecursiveDestruction_R);
		// Activity main
		RecursiveDestruction_main->setThisActivityPtr(RecursiveDestruction_main);
		RecursiveDestruction_main->setName("main");
		RecursiveDestruction_main->setVisibility(VisibilityKind::public_);
		// FunctionBehavior numberOfCInstances
			RecursiveDestruction_main_numberOfCInstances->setThisClass_Ptr(RecursiveDestruction_main_numberOfCInstances);
			RecursiveDestruction_main_numberOfCInstances->setName("numberOfCInstances");
			RecursiveDestruction_main_numberOfCInstances->setVisibility(VisibilityKind::public_);
			
				// Parameter cList
				RecursiveDestruction_main_numberOfCInstances_cList->setThisElementPtr(RecursiveDestruction_main_numberOfCInstances_cList);
				RecursiveDestruction_main_numberOfCInstances_cList->setName("cList");
				RecursiveDestruction_main_numberOfCInstances_cList->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_numberOfCInstances_cList->setUpper(-1);
				RecursiveDestruction_main_numberOfCInstances_cList->setLower(0);
				RecursiveDestruction_main_numberOfCInstances_cList->setType(RecursiveDestruction_C);
			RecursiveDestruction_main_numberOfCInstances->addOwnedParameter(RecursiveDestruction_main_numberOfCInstances_cList);
			RecursiveDestruction_main_numberOfCInstances->addLanguage("C++");
			RecursiveDestruction_main_numberOfCInstances->addLanguage("Include");
			RecursiveDestruction_main_numberOfCInstances->addBody("std::cout << \"# Instances of C: \" << inputParameters->at(0)->values->size() << std::endl;");
			RecursiveDestruction_main_numberOfCInstances->addBody("#include <iostream>");
		RecursiveDestruction_main->addOwnedBehavior(RecursiveDestruction_main_numberOfCInstances);
			// FunctionBehavior numberOfIImplInstances
			RecursiveDestruction_main_numberOfIImplInstances->setThisClass_Ptr(RecursiveDestruction_main_numberOfIImplInstances);
			RecursiveDestruction_main_numberOfIImplInstances->setName("numberOfIImplInstances");
			RecursiveDestruction_main_numberOfIImplInstances->setVisibility(VisibilityKind::public_);
			
				// Parameter iImplList
				RecursiveDestruction_main_numberOfIImplInstances_iImplList->setThisElementPtr(RecursiveDestruction_main_numberOfIImplInstances_iImplList);
				RecursiveDestruction_main_numberOfIImplInstances_iImplList->setName("iImplList");
				RecursiveDestruction_main_numberOfIImplInstances_iImplList->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_numberOfIImplInstances_iImplList->setUpper(-1);
				RecursiveDestruction_main_numberOfIImplInstances_iImplList->setLower(0);
				RecursiveDestruction_main_numberOfIImplInstances_iImplList->setType(RecursiveDestruction_IImpl);
			RecursiveDestruction_main_numberOfIImplInstances->addOwnedParameter(RecursiveDestruction_main_numberOfIImplInstances_iImplList);
			RecursiveDestruction_main_numberOfIImplInstances->addLanguage("C++");
			RecursiveDestruction_main_numberOfIImplInstances->addLanguage("Include");
			RecursiveDestruction_main_numberOfIImplInstances->addBody("std::cout << \"# Instances of IImpl: \" << inputParameters->at(0)->values->size() << std::endl;");
			RecursiveDestruction_main_numberOfIImplInstances->addBody("#include <iostream>");
		RecursiveDestruction_main->addOwnedBehavior(RecursiveDestruction_main_numberOfIImplInstances);
			// FunctionBehavior numberOfBInstances
			RecursiveDestruction_main_numberOfBInstances->setThisClass_Ptr(RecursiveDestruction_main_numberOfBInstances);
			RecursiveDestruction_main_numberOfBInstances->setName("numberOfBInstances");
			RecursiveDestruction_main_numberOfBInstances->setVisibility(VisibilityKind::public_);
			
				// Parameter bList
				RecursiveDestruction_main_numberOfBInstances_bList->setThisElementPtr(RecursiveDestruction_main_numberOfBInstances_bList);
				RecursiveDestruction_main_numberOfBInstances_bList->setName("bList");
				RecursiveDestruction_main_numberOfBInstances_bList->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_numberOfBInstances_bList->setUpper(-1);
				RecursiveDestruction_main_numberOfBInstances_bList->setLower(0);
				RecursiveDestruction_main_numberOfBInstances_bList->setType(RecursiveDestruction_B);
			RecursiveDestruction_main_numberOfBInstances->addOwnedParameter(RecursiveDestruction_main_numberOfBInstances_bList);
			RecursiveDestruction_main_numberOfBInstances->addLanguage("C++");
			RecursiveDestruction_main_numberOfBInstances->addLanguage("Include");
			RecursiveDestruction_main_numberOfBInstances->addBody("std::cout << \"# Instances of B: \" << inputParameters->at(0)->values->size() << std::endl;");
			RecursiveDestruction_main_numberOfBInstances->addBody("#include <iostream>");
		RecursiveDestruction_main->addOwnedBehavior(RecursiveDestruction_main_numberOfBInstances);
			// FunctionBehavior assertExtentOfB
			RecursiveDestruction_main_assertExtentOfB->setThisClass_Ptr(RecursiveDestruction_main_assertExtentOfB);
			RecursiveDestruction_main_assertExtentOfB->setName("assertExtentOfB");
			RecursiveDestruction_main_assertExtentOfB->setVisibility(VisibilityKind::public_);
			
				// Parameter bList
				RecursiveDestruction_main_assertExtentOfB_bList->setThisElementPtr(RecursiveDestruction_main_assertExtentOfB_bList);
				RecursiveDestruction_main_assertExtentOfB_bList->setName("bList");
				RecursiveDestruction_main_assertExtentOfB_bList->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_assertExtentOfB_bList->setUpper(-1);
				RecursiveDestruction_main_assertExtentOfB_bList->setLower(0);
				RecursiveDestruction_main_assertExtentOfB_bList->setType(RecursiveDestruction_B);
			RecursiveDestruction_main_assertExtentOfB->addOwnedParameter(RecursiveDestruction_main_assertExtentOfB_bList);
			RecursiveDestruction_main_assertExtentOfB->addLanguage("C++");
			RecursiveDestruction_main_assertExtentOfB->addLanguage("Include");
			RecursiveDestruction_main_assertExtentOfB->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	std::cout<<\"Asserting B.allInstances()->size() == 0\"<<std::endl;  	int extentSize = inputParameters->at(0)->values->size(); 	 	std::cout << \"B.allInstances()->size() == \" << std::to_string(extentSize) <<std::endl; 	std::cout<<\"All instances of B recursively destroyed: \";  	if(extentSize == 0) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK <<std::endl; 	}");
			RecursiveDestruction_main_assertExtentOfB->addBody("#include <iostream>");
		RecursiveDestruction_main->addOwnedBehavior(RecursiveDestruction_main_assertExtentOfB);
			// FunctionBehavior assertExtentOfIImpl
			RecursiveDestruction_main_assertExtentOfIImpl->setThisClass_Ptr(RecursiveDestruction_main_assertExtentOfIImpl);
			RecursiveDestruction_main_assertExtentOfIImpl->setName("assertExtentOfIImpl");
			RecursiveDestruction_main_assertExtentOfIImpl->setVisibility(VisibilityKind::public_);
			
				// Parameter iImplList
				RecursiveDestruction_main_assertExtentOfIImpl_iImplList->setThisElementPtr(RecursiveDestruction_main_assertExtentOfIImpl_iImplList);
				RecursiveDestruction_main_assertExtentOfIImpl_iImplList->setName("iImplList");
				RecursiveDestruction_main_assertExtentOfIImpl_iImplList->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_assertExtentOfIImpl_iImplList->setUpper(-1);
				RecursiveDestruction_main_assertExtentOfIImpl_iImplList->setLower(0);
				RecursiveDestruction_main_assertExtentOfIImpl_iImplList->setType(RecursiveDestruction_IImpl);
			RecursiveDestruction_main_assertExtentOfIImpl->addOwnedParameter(RecursiveDestruction_main_assertExtentOfIImpl_iImplList);
			RecursiveDestruction_main_assertExtentOfIImpl->addLanguage("C++");
			RecursiveDestruction_main_assertExtentOfIImpl->addLanguage("Include");
			RecursiveDestruction_main_assertExtentOfIImpl->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	std::cout<<\"Asserting IImpl.allInstances()->size() == 0\"<<std::endl;  	int extentSize = inputParameters->at(0)->values->size(); 	 	std::cout << \"IImpl.allInstances()->size() == \" << std::to_string(extentSize) <<std::endl; 	std::cout<<\"All instances of IImpl recursively destroyed: \";  	if(extentSize == 0) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK <<std::endl; 	}");
			RecursiveDestruction_main_assertExtentOfIImpl->addBody("#include <iostream>");
		RecursiveDestruction_main->addOwnedBehavior(RecursiveDestruction_main_assertExtentOfIImpl);
			// FunctionBehavior assertExtentOfC
			RecursiveDestruction_main_assertExtentOfC->setThisClass_Ptr(RecursiveDestruction_main_assertExtentOfC);
			RecursiveDestruction_main_assertExtentOfC->setName("assertExtentOfC");
			RecursiveDestruction_main_assertExtentOfC->setVisibility(VisibilityKind::public_);
			
				// Parameter cList
				RecursiveDestruction_main_assertExtentOfC_cList->setThisElementPtr(RecursiveDestruction_main_assertExtentOfC_cList);
				RecursiveDestruction_main_assertExtentOfC_cList->setName("cList");
				RecursiveDestruction_main_assertExtentOfC_cList->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_assertExtentOfC_cList->setUpper(-1);
				RecursiveDestruction_main_assertExtentOfC_cList->setLower(0);
				RecursiveDestruction_main_assertExtentOfC_cList->setType(RecursiveDestruction_C);
			RecursiveDestruction_main_assertExtentOfC->addOwnedParameter(RecursiveDestruction_main_assertExtentOfC_cList);
			RecursiveDestruction_main_assertExtentOfC->addLanguage("C++");
			RecursiveDestruction_main_assertExtentOfC->addLanguage("Include");
			RecursiveDestruction_main_assertExtentOfC->addBody("#ifndef ASCII_GRN 		#define ASCII_GRN \"\e[0;32m\" 	#endif 	#ifndef ASCII_RED 		#define ASCII_RED \"\e[0;31m\" 	#endif 	#ifndef ASCII_BLK 		#define ASCII_BLK \"\e[0m\" 	#endif  	std::cout<<\"Asserting C.allInstances()->size() == 0\"<<std::endl;  	int extentSize = inputParameters->at(0)->values->size(); 	 	std::cout << \"C.allInstances()->size() == \" << std::to_string(extentSize) <<std::endl; 	std::cout<<\"All instances of C recursively destroyed: \";  	if(extentSize == 0) 	{ 		std::cout<<ASCII_GRN << \"Assertion successful\" << ASCII_BLK <<std::endl; 	} 	else 	{ 		std::cout<<ASCII_RED << \"Assertion failed.\" << ASCII_BLK <<std::endl; 	}");
			RecursiveDestruction_main_assertExtentOfC->addBody("#include <iostream>");
		RecursiveDestruction_main->addOwnedBehavior(RecursiveDestruction_main_assertExtentOfC);
			// CreateObjectAction Create A_Star_Pattern
			RecursiveDestruction_main_Create_A_Star_Pattern->setThisExecutableNodePtr(RecursiveDestruction_main_Create_A_Star_Pattern);
			RecursiveDestruction_main_Create_A_Star_Pattern->setName("Create A_Star_Pattern");
			RecursiveDestruction_main_Create_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_main_Create_A_Star_Pattern->setClassifier(RecursiveDestruction_A_Star_Pattern);
				// OutputPin result
				RecursiveDestruction_main_Create_A_Star_Pattern_result->setThisElementPtr(RecursiveDestruction_main_Create_A_Star_Pattern_result);
				RecursiveDestruction_main_Create_A_Star_Pattern_result->setName("result");
				RecursiveDestruction_main_Create_A_Star_Pattern_result->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_Create_A_Star_Pattern_result->setType(RecursiveDestruction_A_Star_Pattern);
			RecursiveDestruction_main_Create_A_Star_Pattern->setResult(RecursiveDestruction_main_Create_A_Star_Pattern_result);
		RecursiveDestruction_main->addNode(RecursiveDestruction_main_Create_A_Star_Pattern);
			// ReadExtentAction Extent of IImpl after destruction
			RecursiveDestruction_main_Extent_of_IImpl_after_destruction->setThisExecutableNodePtr(RecursiveDestruction_main_Extent_of_IImpl_after_destruction);
			RecursiveDestruction_main_Extent_of_IImpl_after_destruction->setName("Extent of IImpl after destruction");
			RecursiveDestruction_main_Extent_of_IImpl_after_destruction->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_main_Extent_of_IImpl_after_destruction->setClassifier(RecursiveDestruction_IImpl);
				// OutputPin iImplExtent
				RecursiveDestruction_main_Extent_of_IImpl_after_destruction_iImplExtent->setThisElementPtr(RecursiveDestruction_main_Extent_of_IImpl_after_destruction_iImplExtent);
				RecursiveDestruction_main_Extent_of_IImpl_after_destruction_iImplExtent->setName("iImplExtent");
				RecursiveDestruction_main_Extent_of_IImpl_after_destruction_iImplExtent->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_Extent_of_IImpl_after_destruction_iImplExtent->setType(RecursiveDestruction_IImpl);
			RecursiveDestruction_main_Extent_of_IImpl_after_destruction->setResult(RecursiveDestruction_main_Extent_of_IImpl_after_destruction_iImplExtent);
		RecursiveDestruction_main->addNode(RecursiveDestruction_main_Extent_of_IImpl_after_destruction);
			// ReadExtentAction Extent of B before destruction
			RecursiveDestruction_main_Extent_of_B_before_destruction->setThisExecutableNodePtr(RecursiveDestruction_main_Extent_of_B_before_destruction);
			RecursiveDestruction_main_Extent_of_B_before_destruction->setName("Extent of B before destruction");
			RecursiveDestruction_main_Extent_of_B_before_destruction->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_main_Extent_of_B_before_destruction->setClassifier(RecursiveDestruction_B);
				// OutputPin bExtent
				RecursiveDestruction_main_Extent_of_B_before_destruction_bExtent->setThisElementPtr(RecursiveDestruction_main_Extent_of_B_before_destruction_bExtent);
				RecursiveDestruction_main_Extent_of_B_before_destruction_bExtent->setName("bExtent");
				RecursiveDestruction_main_Extent_of_B_before_destruction_bExtent->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_Extent_of_B_before_destruction_bExtent->setType(RecursiveDestruction_B);
			RecursiveDestruction_main_Extent_of_B_before_destruction->setResult(RecursiveDestruction_main_Extent_of_B_before_destruction_bExtent);
		RecursiveDestruction_main->addNode(RecursiveDestruction_main_Extent_of_B_before_destruction);
			// CallBehaviorAction Call numberOfCInstances
			RecursiveDestruction_main_Call_numberOfCInstances->setThisExecutableNodePtr(RecursiveDestruction_main_Call_numberOfCInstances);
			RecursiveDestruction_main_Call_numberOfCInstances->setName("Call numberOfCInstances");
			RecursiveDestruction_main_Call_numberOfCInstances->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_main_Call_numberOfCInstances->setBehavior(RecursiveDestruction_main_numberOfCInstances);
				// InputPin cList
				RecursiveDestruction_main_Call_numberOfCInstances_cList->setThisElementPtr(RecursiveDestruction_main_Call_numberOfCInstances_cList);
				RecursiveDestruction_main_Call_numberOfCInstances_cList->setName("cList");
				RecursiveDestruction_main_Call_numberOfCInstances_cList->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_Call_numberOfCInstances_cList->setType(RecursiveDestruction_C);
				RecursiveDestruction_main_Call_numberOfCInstances_cList->setUpper(-1);
				RecursiveDestruction_main_Call_numberOfCInstances_cList->setLower(0);
			RecursiveDestruction_main_Call_numberOfCInstances->addArgument(RecursiveDestruction_main_Call_numberOfCInstances_cList);
		RecursiveDestruction_main->addNode(RecursiveDestruction_main_Call_numberOfCInstances);
			// ReadExtentAction Extent of C before destruction
			RecursiveDestruction_main_Extent_of_C_before_destruction->setThisExecutableNodePtr(RecursiveDestruction_main_Extent_of_C_before_destruction);
			RecursiveDestruction_main_Extent_of_C_before_destruction->setName("Extent of C before destruction");
			RecursiveDestruction_main_Extent_of_C_before_destruction->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_main_Extent_of_C_before_destruction->setClassifier(RecursiveDestruction_C);
				// OutputPin cExtent
				RecursiveDestruction_main_Extent_of_C_before_destruction_cExtent->setThisElementPtr(RecursiveDestruction_main_Extent_of_C_before_destruction_cExtent);
				RecursiveDestruction_main_Extent_of_C_before_destruction_cExtent->setName("cExtent");
				RecursiveDestruction_main_Extent_of_C_before_destruction_cExtent->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_Extent_of_C_before_destruction_cExtent->setType(RecursiveDestruction_C);
			RecursiveDestruction_main_Extent_of_C_before_destruction->setResult(RecursiveDestruction_main_Extent_of_C_before_destruction_cExtent);
		RecursiveDestruction_main->addNode(RecursiveDestruction_main_Extent_of_C_before_destruction);
			// ReadExtentAction Extent of IImpl before destruction
			RecursiveDestruction_main_Extent_of_IImpl_before_destruction->setThisExecutableNodePtr(RecursiveDestruction_main_Extent_of_IImpl_before_destruction);
			RecursiveDestruction_main_Extent_of_IImpl_before_destruction->setName("Extent of IImpl before destruction");
			RecursiveDestruction_main_Extent_of_IImpl_before_destruction->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_main_Extent_of_IImpl_before_destruction->setClassifier(RecursiveDestruction_IImpl);
				// OutputPin iImplExtent
				RecursiveDestruction_main_Extent_of_IImpl_before_destruction_iImplExtent->setThisElementPtr(RecursiveDestruction_main_Extent_of_IImpl_before_destruction_iImplExtent);
				RecursiveDestruction_main_Extent_of_IImpl_before_destruction_iImplExtent->setName("iImplExtent");
				RecursiveDestruction_main_Extent_of_IImpl_before_destruction_iImplExtent->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_Extent_of_IImpl_before_destruction_iImplExtent->setType(RecursiveDestruction_IImpl);
			RecursiveDestruction_main_Extent_of_IImpl_before_destruction->setResult(RecursiveDestruction_main_Extent_of_IImpl_before_destruction_iImplExtent);
		RecursiveDestruction_main->addNode(RecursiveDestruction_main_Extent_of_IImpl_before_destruction);
			// DestroyObjectAction Destroy A_Star_Pattern
			RecursiveDestruction_main_Destroy_A_Star_Pattern->setThisExecutableNodePtr(RecursiveDestruction_main_Destroy_A_Star_Pattern);
			RecursiveDestruction_main_Destroy_A_Star_Pattern->setName("Destroy A_Star_Pattern");
			RecursiveDestruction_main_Destroy_A_Star_Pattern->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_main_Destroy_A_Star_Pattern->setIsDestroyLinks(true);
			RecursiveDestruction_main_Destroy_A_Star_Pattern->setIsDestroyOwnedObjects(true);
				// InputPin target
				RecursiveDestruction_main_Destroy_A_Star_Pattern_target->setThisElementPtr(RecursiveDestruction_main_Destroy_A_Star_Pattern_target);
				RecursiveDestruction_main_Destroy_A_Star_Pattern_target->setName("target");
				RecursiveDestruction_main_Destroy_A_Star_Pattern_target->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_Destroy_A_Star_Pattern_target->setType(RecursiveDestruction_A_Star_Pattern);
				RecursiveDestruction_main_Destroy_A_Star_Pattern_target->setIsOrdered(true);
				RecursiveDestruction_main_Destroy_A_Star_Pattern_target->setIsUnique(false);
			RecursiveDestruction_main_Destroy_A_Star_Pattern->setTarget(RecursiveDestruction_main_Destroy_A_Star_Pattern_target);
		RecursiveDestruction_main->addNode(RecursiveDestruction_main_Destroy_A_Star_Pattern);
			// CallBehaviorAction Call numberOfIImplInstances
			RecursiveDestruction_main_Call_numberOfIImplInstances->setThisExecutableNodePtr(RecursiveDestruction_main_Call_numberOfIImplInstances);
			RecursiveDestruction_main_Call_numberOfIImplInstances->setName("Call numberOfIImplInstances");
			RecursiveDestruction_main_Call_numberOfIImplInstances->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_main_Call_numberOfIImplInstances->setBehavior(RecursiveDestruction_main_numberOfIImplInstances);
				// InputPin iImplList
				RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList->setThisElementPtr(RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList);
				RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList->setName("iImplList");
				RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList->setType(RecursiveDestruction_IImpl);
				RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList->setUpper(-1);
				RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList->setLower(0);
			RecursiveDestruction_main_Call_numberOfIImplInstances->addArgument(RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList);
		RecursiveDestruction_main->addNode(RecursiveDestruction_main_Call_numberOfIImplInstances);
			// CallOperationAction A_Star_Pattern()
			RecursiveDestruction_main_A_Star_Pattern_->setThisExecutableNodePtr(RecursiveDestruction_main_A_Star_Pattern_);
			RecursiveDestruction_main_A_Star_Pattern_->setName("A_Star_Pattern()");
			RecursiveDestruction_main_A_Star_Pattern_->setVisibility(VisibilityKind::public_);
			
				// OutputPin result
				RecursiveDestruction_main_A_Star_Pattern__result->setThisElementPtr(RecursiveDestruction_main_A_Star_Pattern__result);
				RecursiveDestruction_main_A_Star_Pattern__result->setName("result");
				RecursiveDestruction_main_A_Star_Pattern__result->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_A_Star_Pattern__result->setType(RecursiveDestruction_A_Star_Pattern);
			RecursiveDestruction_main_A_Star_Pattern_->addResult(RecursiveDestruction_main_A_Star_Pattern__result);
			RecursiveDestruction_main_A_Star_Pattern_->setOperation(RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
				// InputPin target
				RecursiveDestruction_main_A_Star_Pattern__target->setThisElementPtr(RecursiveDestruction_main_A_Star_Pattern__target);
				RecursiveDestruction_main_A_Star_Pattern__target->setName("target");
				RecursiveDestruction_main_A_Star_Pattern__target->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_A_Star_Pattern__target->setType(RecursiveDestruction_A_Star_Pattern);
			RecursiveDestruction_main_A_Star_Pattern_->setTarget(RecursiveDestruction_main_A_Star_Pattern__target);
		RecursiveDestruction_main->addNode(RecursiveDestruction_main_A_Star_Pattern_);
			// CallBehaviorAction Call numberOfBInstances
			RecursiveDestruction_main_Call_numberOfBInstances->setThisExecutableNodePtr(RecursiveDestruction_main_Call_numberOfBInstances);
			RecursiveDestruction_main_Call_numberOfBInstances->setName("Call numberOfBInstances");
			RecursiveDestruction_main_Call_numberOfBInstances->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_main_Call_numberOfBInstances->setBehavior(RecursiveDestruction_main_numberOfBInstances);
				// InputPin bList
				RecursiveDestruction_main_Call_numberOfBInstances_bList->setThisElementPtr(RecursiveDestruction_main_Call_numberOfBInstances_bList);
				RecursiveDestruction_main_Call_numberOfBInstances_bList->setName("bList");
				RecursiveDestruction_main_Call_numberOfBInstances_bList->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_Call_numberOfBInstances_bList->setType(RecursiveDestruction_B);
				RecursiveDestruction_main_Call_numberOfBInstances_bList->setUpper(-1);
				RecursiveDestruction_main_Call_numberOfBInstances_bList->setLower(0);
			RecursiveDestruction_main_Call_numberOfBInstances->addArgument(RecursiveDestruction_main_Call_numberOfBInstances_bList);
		RecursiveDestruction_main->addNode(RecursiveDestruction_main_Call_numberOfBInstances);
			// ReadExtentAction Extent of B after destruction
			RecursiveDestruction_main_Extent_of_B_after_destruction->setThisExecutableNodePtr(RecursiveDestruction_main_Extent_of_B_after_destruction);
			RecursiveDestruction_main_Extent_of_B_after_destruction->setName("Extent of B after destruction");
			RecursiveDestruction_main_Extent_of_B_after_destruction->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_main_Extent_of_B_after_destruction->setClassifier(RecursiveDestruction_B);
				// OutputPin bExtent
				RecursiveDestruction_main_Extent_of_B_after_destruction_bExtent->setThisElementPtr(RecursiveDestruction_main_Extent_of_B_after_destruction_bExtent);
				RecursiveDestruction_main_Extent_of_B_after_destruction_bExtent->setName("bExtent");
				RecursiveDestruction_main_Extent_of_B_after_destruction_bExtent->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_Extent_of_B_after_destruction_bExtent->setType(RecursiveDestruction_B);
			RecursiveDestruction_main_Extent_of_B_after_destruction->setResult(RecursiveDestruction_main_Extent_of_B_after_destruction_bExtent);
		RecursiveDestruction_main->addNode(RecursiveDestruction_main_Extent_of_B_after_destruction);
			// CallBehaviorAction Call assertExtentOfC
			RecursiveDestruction_main_Call_assertExtentOfC->setThisExecutableNodePtr(RecursiveDestruction_main_Call_assertExtentOfC);
			RecursiveDestruction_main_Call_assertExtentOfC->setName("Call assertExtentOfC");
			RecursiveDestruction_main_Call_assertExtentOfC->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_main_Call_assertExtentOfC->setBehavior(RecursiveDestruction_main_assertExtentOfC);
				// InputPin cList
				RecursiveDestruction_main_Call_assertExtentOfC_cList->setThisElementPtr(RecursiveDestruction_main_Call_assertExtentOfC_cList);
				RecursiveDestruction_main_Call_assertExtentOfC_cList->setName("cList");
				RecursiveDestruction_main_Call_assertExtentOfC_cList->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_Call_assertExtentOfC_cList->setType(RecursiveDestruction_C);
				RecursiveDestruction_main_Call_assertExtentOfC_cList->setUpper(-1);
				RecursiveDestruction_main_Call_assertExtentOfC_cList->setLower(0);
			RecursiveDestruction_main_Call_assertExtentOfC->addArgument(RecursiveDestruction_main_Call_assertExtentOfC_cList);
		RecursiveDestruction_main->addNode(RecursiveDestruction_main_Call_assertExtentOfC);
			// ReadExtentAction Extent of C after destruction
			RecursiveDestruction_main_Extent_of_C_after_destruction->setThisExecutableNodePtr(RecursiveDestruction_main_Extent_of_C_after_destruction);
			RecursiveDestruction_main_Extent_of_C_after_destruction->setName("Extent of C after destruction");
			RecursiveDestruction_main_Extent_of_C_after_destruction->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_main_Extent_of_C_after_destruction->setClassifier(RecursiveDestruction_C);
				// OutputPin cExtent
				RecursiveDestruction_main_Extent_of_C_after_destruction_cExtent->setThisElementPtr(RecursiveDestruction_main_Extent_of_C_after_destruction_cExtent);
				RecursiveDestruction_main_Extent_of_C_after_destruction_cExtent->setName("cExtent");
				RecursiveDestruction_main_Extent_of_C_after_destruction_cExtent->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_Extent_of_C_after_destruction_cExtent->setType(RecursiveDestruction_C);
			RecursiveDestruction_main_Extent_of_C_after_destruction->setResult(RecursiveDestruction_main_Extent_of_C_after_destruction_cExtent);
		RecursiveDestruction_main->addNode(RecursiveDestruction_main_Extent_of_C_after_destruction);
			// CallBehaviorAction Call assertExtentOfIImpl
			RecursiveDestruction_main_Call_assertExtentOfIImpl->setThisExecutableNodePtr(RecursiveDestruction_main_Call_assertExtentOfIImpl);
			RecursiveDestruction_main_Call_assertExtentOfIImpl->setName("Call assertExtentOfIImpl");
			RecursiveDestruction_main_Call_assertExtentOfIImpl->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_main_Call_assertExtentOfIImpl->setBehavior(RecursiveDestruction_main_assertExtentOfIImpl);
				// InputPin iImplList
				RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList->setThisElementPtr(RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList);
				RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList->setName("iImplList");
				RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList->setType(RecursiveDestruction_IImpl);
				RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList->setUpper(-1);
				RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList->setLower(0);
			RecursiveDestruction_main_Call_assertExtentOfIImpl->addArgument(RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList);
		RecursiveDestruction_main->addNode(RecursiveDestruction_main_Call_assertExtentOfIImpl);
			// CallBehaviorAction Call assertExtentOfB
			RecursiveDestruction_main_Call_assertExtentOfB->setThisExecutableNodePtr(RecursiveDestruction_main_Call_assertExtentOfB);
			RecursiveDestruction_main_Call_assertExtentOfB->setName("Call assertExtentOfB");
			RecursiveDestruction_main_Call_assertExtentOfB->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_main_Call_assertExtentOfB->setBehavior(RecursiveDestruction_main_assertExtentOfB);
				// InputPin bList
				RecursiveDestruction_main_Call_assertExtentOfB_bList->setThisElementPtr(RecursiveDestruction_main_Call_assertExtentOfB_bList);
				RecursiveDestruction_main_Call_assertExtentOfB_bList->setName("bList");
				RecursiveDestruction_main_Call_assertExtentOfB_bList->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_Call_assertExtentOfB_bList->setType(RecursiveDestruction_B);
				RecursiveDestruction_main_Call_assertExtentOfB_bList->setUpper(-1);
				RecursiveDestruction_main_Call_assertExtentOfB_bList->setLower(0);
			RecursiveDestruction_main_Call_assertExtentOfB->addArgument(RecursiveDestruction_main_Call_assertExtentOfB_bList);
		RecursiveDestruction_main->addNode(RecursiveDestruction_main_Call_assertExtentOfB);
			// ControlFlow ControlFlow6 from A_Star_Pattern() to Extent of B before destruction
			RecursiveDestruction_main_ControlFlow6->setThisActivityEdgePtr(RecursiveDestruction_main_ControlFlow6);
			RecursiveDestruction_main_ControlFlow6->setName("ControlFlow6");
			RecursiveDestruction_main_ControlFlow6->setVisibility(VisibilityKind::public_);
			
			RecursiveDestruction_main_ControlFlow6->setSource(RecursiveDestruction_main_A_Star_Pattern_);
			RecursiveDestruction_main_ControlFlow6->setTarget(RecursiveDestruction_main_Extent_of_B_before_destruction);
		RecursiveDestruction_main->addEdge(RecursiveDestruction_main_ControlFlow6);
			// ControlFlow ControlFlow39 from Destroy A_Star_Pattern to Extent of B after destruction
			RecursiveDestruction_main_ControlFlow39->setThisActivityEdgePtr(RecursiveDestruction_main_ControlFlow39);
			RecursiveDestruction_main_ControlFlow39->setName("ControlFlow39");
			RecursiveDestruction_main_ControlFlow39->setVisibility(VisibilityKind::public_);
			
			RecursiveDestruction_main_ControlFlow39->setSource(RecursiveDestruction_main_Destroy_A_Star_Pattern);
			RecursiveDestruction_main_ControlFlow39->setTarget(RecursiveDestruction_main_Extent_of_B_after_destruction);
		RecursiveDestruction_main->addEdge(RecursiveDestruction_main_ControlFlow39);
			// ObjectFlow ObjectFlow7 from iImplExtent to iImplList
			RecursiveDestruction_main_ObjectFlow7->setThisActivityEdgePtr(RecursiveDestruction_main_ObjectFlow7);
			RecursiveDestruction_main_ObjectFlow7->setName("ObjectFlow7");
			RecursiveDestruction_main_ObjectFlow7->setVisibility(VisibilityKind::public_);
			
			RecursiveDestruction_main_ObjectFlow7->setSource(RecursiveDestruction_main_Extent_of_IImpl_after_destruction_iImplExtent);
			RecursiveDestruction_main_ObjectFlow7->setTarget(RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList);
				// LiteralBoolean LiteralBoolean8
				RecursiveDestruction_main_ObjectFlow7_LiteralBoolean8->setThisElementPtr(RecursiveDestruction_main_ObjectFlow7_LiteralBoolean8);
				RecursiveDestruction_main_ObjectFlow7_LiteralBoolean8->setName("LiteralBoolean8");
				RecursiveDestruction_main_ObjectFlow7_LiteralBoolean8->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_ObjectFlow7_LiteralBoolean8->setValue(true);
			RecursiveDestruction_main_ObjectFlow7->setGuard(RecursiveDestruction_main_ObjectFlow7_LiteralBoolean8);
		RecursiveDestruction_main->addEdge(RecursiveDestruction_main_ObjectFlow7);
			// ObjectFlow ObjectFlow14 from iImplExtent to iImplList
			RecursiveDestruction_main_ObjectFlow14->setThisActivityEdgePtr(RecursiveDestruction_main_ObjectFlow14);
			RecursiveDestruction_main_ObjectFlow14->setName("ObjectFlow14");
			RecursiveDestruction_main_ObjectFlow14->setVisibility(VisibilityKind::public_);
			
			RecursiveDestruction_main_ObjectFlow14->setSource(RecursiveDestruction_main_Extent_of_IImpl_before_destruction_iImplExtent);
			RecursiveDestruction_main_ObjectFlow14->setTarget(RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList);
				// LiteralBoolean LiteralBoolean16
				RecursiveDestruction_main_ObjectFlow14_LiteralBoolean16->setThisElementPtr(RecursiveDestruction_main_ObjectFlow14_LiteralBoolean16);
				RecursiveDestruction_main_ObjectFlow14_LiteralBoolean16->setName("LiteralBoolean16");
				RecursiveDestruction_main_ObjectFlow14_LiteralBoolean16->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_ObjectFlow14_LiteralBoolean16->setValue(true);
			RecursiveDestruction_main_ObjectFlow14->setGuard(RecursiveDestruction_main_ObjectFlow14_LiteralBoolean16);
		RecursiveDestruction_main->addEdge(RecursiveDestruction_main_ObjectFlow14);
			// ObjectFlow ObjectFlow20 from cExtent to cList
			RecursiveDestruction_main_ObjectFlow20->setThisActivityEdgePtr(RecursiveDestruction_main_ObjectFlow20);
			RecursiveDestruction_main_ObjectFlow20->setName("ObjectFlow20");
			RecursiveDestruction_main_ObjectFlow20->setVisibility(VisibilityKind::public_);
			
			RecursiveDestruction_main_ObjectFlow20->setSource(RecursiveDestruction_main_Extent_of_C_before_destruction_cExtent);
			RecursiveDestruction_main_ObjectFlow20->setTarget(RecursiveDestruction_main_Call_numberOfCInstances_cList);
				// LiteralBoolean LiteralBoolean22
				RecursiveDestruction_main_ObjectFlow20_LiteralBoolean22->setThisElementPtr(RecursiveDestruction_main_ObjectFlow20_LiteralBoolean22);
				RecursiveDestruction_main_ObjectFlow20_LiteralBoolean22->setName("LiteralBoolean22");
				RecursiveDestruction_main_ObjectFlow20_LiteralBoolean22->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_ObjectFlow20_LiteralBoolean22->setValue(true);
			RecursiveDestruction_main_ObjectFlow20->setGuard(RecursiveDestruction_main_ObjectFlow20_LiteralBoolean22);
		RecursiveDestruction_main->addEdge(RecursiveDestruction_main_ObjectFlow20);
			// ObjectFlow ObjectFlow23 from bExtent to bList
			RecursiveDestruction_main_ObjectFlow23->setThisActivityEdgePtr(RecursiveDestruction_main_ObjectFlow23);
			RecursiveDestruction_main_ObjectFlow23->setName("ObjectFlow23");
			RecursiveDestruction_main_ObjectFlow23->setVisibility(VisibilityKind::public_);
			
			RecursiveDestruction_main_ObjectFlow23->setSource(RecursiveDestruction_main_Extent_of_B_after_destruction_bExtent);
			RecursiveDestruction_main_ObjectFlow23->setTarget(RecursiveDestruction_main_Call_assertExtentOfB_bList);
				// LiteralBoolean LiteralBoolean24
				RecursiveDestruction_main_ObjectFlow23_LiteralBoolean24->setThisElementPtr(RecursiveDestruction_main_ObjectFlow23_LiteralBoolean24);
				RecursiveDestruction_main_ObjectFlow23_LiteralBoolean24->setName("LiteralBoolean24");
				RecursiveDestruction_main_ObjectFlow23_LiteralBoolean24->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_ObjectFlow23_LiteralBoolean24->setValue(true);
			RecursiveDestruction_main_ObjectFlow23->setGuard(RecursiveDestruction_main_ObjectFlow23_LiteralBoolean24);
		RecursiveDestruction_main->addEdge(RecursiveDestruction_main_ObjectFlow23);
			// ControlFlow ControlFlow52 from Call assertExtentOfC to Extent of IImpl after destruction
			RecursiveDestruction_main_ControlFlow52->setThisActivityEdgePtr(RecursiveDestruction_main_ControlFlow52);
			RecursiveDestruction_main_ControlFlow52->setName("ControlFlow52");
			RecursiveDestruction_main_ControlFlow52->setVisibility(VisibilityKind::public_);
			
			RecursiveDestruction_main_ControlFlow52->setSource(RecursiveDestruction_main_Call_assertExtentOfC);
			RecursiveDestruction_main_ControlFlow52->setTarget(RecursiveDestruction_main_Extent_of_IImpl_after_destruction);
		RecursiveDestruction_main->addEdge(RecursiveDestruction_main_ControlFlow52);
			// ObjectFlow ObjectFlow26 from cExtent to cList
			RecursiveDestruction_main_ObjectFlow26->setThisActivityEdgePtr(RecursiveDestruction_main_ObjectFlow26);
			RecursiveDestruction_main_ObjectFlow26->setName("ObjectFlow26");
			RecursiveDestruction_main_ObjectFlow26->setVisibility(VisibilityKind::public_);
			
			RecursiveDestruction_main_ObjectFlow26->setSource(RecursiveDestruction_main_Extent_of_C_after_destruction_cExtent);
			RecursiveDestruction_main_ObjectFlow26->setTarget(RecursiveDestruction_main_Call_assertExtentOfC_cList);
				// LiteralBoolean LiteralBoolean27
				RecursiveDestruction_main_ObjectFlow26_LiteralBoolean27->setThisElementPtr(RecursiveDestruction_main_ObjectFlow26_LiteralBoolean27);
				RecursiveDestruction_main_ObjectFlow26_LiteralBoolean27->setName("LiteralBoolean27");
				RecursiveDestruction_main_ObjectFlow26_LiteralBoolean27->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_ObjectFlow26_LiteralBoolean27->setValue(true);
			RecursiveDestruction_main_ObjectFlow26->setGuard(RecursiveDestruction_main_ObjectFlow26_LiteralBoolean27);
		RecursiveDestruction_main->addEdge(RecursiveDestruction_main_ObjectFlow26);
			// ObjectFlow ObjectFlow53 from result to target
			RecursiveDestruction_main_ObjectFlow53->setThisActivityEdgePtr(RecursiveDestruction_main_ObjectFlow53);
			RecursiveDestruction_main_ObjectFlow53->setName("ObjectFlow53");
			RecursiveDestruction_main_ObjectFlow53->setVisibility(VisibilityKind::public_);
			
			RecursiveDestruction_main_ObjectFlow53->setSource(RecursiveDestruction_main_Create_A_Star_Pattern_result);
			RecursiveDestruction_main_ObjectFlow53->setTarget(RecursiveDestruction_main_A_Star_Pattern__target);
				// LiteralBoolean LiteralBoolean55
				RecursiveDestruction_main_ObjectFlow53_LiteralBoolean55->setThisElementPtr(RecursiveDestruction_main_ObjectFlow53_LiteralBoolean55);
				RecursiveDestruction_main_ObjectFlow53_LiteralBoolean55->setName("LiteralBoolean55");
				RecursiveDestruction_main_ObjectFlow53_LiteralBoolean55->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_ObjectFlow53_LiteralBoolean55->setValue(true);
			RecursiveDestruction_main_ObjectFlow53->setGuard(RecursiveDestruction_main_ObjectFlow53_LiteralBoolean55);
		RecursiveDestruction_main->addEdge(RecursiveDestruction_main_ObjectFlow53);
			// ObjectFlow ObjectFlow56 from bExtent to bList
			RecursiveDestruction_main_ObjectFlow56->setThisActivityEdgePtr(RecursiveDestruction_main_ObjectFlow56);
			RecursiveDestruction_main_ObjectFlow56->setName("ObjectFlow56");
			RecursiveDestruction_main_ObjectFlow56->setVisibility(VisibilityKind::public_);
			
			RecursiveDestruction_main_ObjectFlow56->setSource(RecursiveDestruction_main_Extent_of_B_before_destruction_bExtent);
			RecursiveDestruction_main_ObjectFlow56->setTarget(RecursiveDestruction_main_Call_numberOfBInstances_bList);
				// LiteralBoolean LiteralBoolean58
				RecursiveDestruction_main_ObjectFlow56_LiteralBoolean58->setThisElementPtr(RecursiveDestruction_main_ObjectFlow56_LiteralBoolean58);
				RecursiveDestruction_main_ObjectFlow56_LiteralBoolean58->setName("LiteralBoolean58");
				RecursiveDestruction_main_ObjectFlow56_LiteralBoolean58->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_ObjectFlow56_LiteralBoolean58->setValue(true);
			RecursiveDestruction_main_ObjectFlow56->setGuard(RecursiveDestruction_main_ObjectFlow56_LiteralBoolean58);
		RecursiveDestruction_main->addEdge(RecursiveDestruction_main_ObjectFlow56);
			// ObjectFlow ObjectFlow34 from result to target
			RecursiveDestruction_main_ObjectFlow34->setThisActivityEdgePtr(RecursiveDestruction_main_ObjectFlow34);
			RecursiveDestruction_main_ObjectFlow34->setName("ObjectFlow34");
			RecursiveDestruction_main_ObjectFlow34->setVisibility(VisibilityKind::public_);
			
			RecursiveDestruction_main_ObjectFlow34->setSource(RecursiveDestruction_main_A_Star_Pattern__result);
			RecursiveDestruction_main_ObjectFlow34->setTarget(RecursiveDestruction_main_Destroy_A_Star_Pattern_target);
				// LiteralBoolean LiteralBoolean35
				RecursiveDestruction_main_ObjectFlow34_LiteralBoolean35->setThisElementPtr(RecursiveDestruction_main_ObjectFlow34_LiteralBoolean35);
				RecursiveDestruction_main_ObjectFlow34_LiteralBoolean35->setName("LiteralBoolean35");
				RecursiveDestruction_main_ObjectFlow34_LiteralBoolean35->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_main_ObjectFlow34_LiteralBoolean35->setValue(true);
			RecursiveDestruction_main_ObjectFlow34->setGuard(RecursiveDestruction_main_ObjectFlow34_LiteralBoolean35);
		RecursiveDestruction_main->addEdge(RecursiveDestruction_main_ObjectFlow34);
			// ControlFlow ControlFlow37 from Call numberOfBInstances to Extent of C before destruction
			RecursiveDestruction_main_ControlFlow37->setThisActivityEdgePtr(RecursiveDestruction_main_ControlFlow37);
			RecursiveDestruction_main_ControlFlow37->setName("ControlFlow37");
			RecursiveDestruction_main_ControlFlow37->setVisibility(VisibilityKind::public_);
			
			RecursiveDestruction_main_ControlFlow37->setSource(RecursiveDestruction_main_Call_numberOfBInstances);
			RecursiveDestruction_main_ControlFlow37->setTarget(RecursiveDestruction_main_Extent_of_C_before_destruction);
		RecursiveDestruction_main->addEdge(RecursiveDestruction_main_ControlFlow37);
			// ControlFlow ControlFlow64 from Call numberOfIImplInstances to Destroy A_Star_Pattern
			RecursiveDestruction_main_ControlFlow64->setThisActivityEdgePtr(RecursiveDestruction_main_ControlFlow64);
			RecursiveDestruction_main_ControlFlow64->setName("ControlFlow64");
			RecursiveDestruction_main_ControlFlow64->setVisibility(VisibilityKind::public_);
			
			RecursiveDestruction_main_ControlFlow64->setSource(RecursiveDestruction_main_Call_numberOfIImplInstances);
			RecursiveDestruction_main_ControlFlow64->setTarget(RecursiveDestruction_main_Destroy_A_Star_Pattern);
		RecursiveDestruction_main->addEdge(RecursiveDestruction_main_ControlFlow64);
			// ControlFlow ControlFlow65 from Call numberOfCInstances to Extent of IImpl before destruction
			RecursiveDestruction_main_ControlFlow65->setThisActivityEdgePtr(RecursiveDestruction_main_ControlFlow65);
			RecursiveDestruction_main_ControlFlow65->setName("ControlFlow65");
			RecursiveDestruction_main_ControlFlow65->setVisibility(VisibilityKind::public_);
			
			RecursiveDestruction_main_ControlFlow65->setSource(RecursiveDestruction_main_Call_numberOfCInstances);
			RecursiveDestruction_main_ControlFlow65->setTarget(RecursiveDestruction_main_Extent_of_IImpl_before_destruction);
		RecursiveDestruction_main->addEdge(RecursiveDestruction_main_ControlFlow65);
			// ControlFlow ControlFlow38 from Call assertExtentOfB to Extent of C after destruction
			RecursiveDestruction_main_ControlFlow38->setThisActivityEdgePtr(RecursiveDestruction_main_ControlFlow38);
			RecursiveDestruction_main_ControlFlow38->setName("ControlFlow38");
			RecursiveDestruction_main_ControlFlow38->setVisibility(VisibilityKind::public_);
			
			RecursiveDestruction_main_ControlFlow38->setSource(RecursiveDestruction_main_Call_assertExtentOfB);
			RecursiveDestruction_main_ControlFlow38->setTarget(RecursiveDestruction_main_Extent_of_C_after_destruction);
		RecursiveDestruction_main->addEdge(RecursiveDestruction_main_ControlFlow38);
	RecursiveDestruction->addPackagedElement(RecursiveDestruction_main);
		// Class A_Star_Pattern
		RecursiveDestruction_A_Star_Pattern->setThisClass_Ptr(RecursiveDestruction_A_Star_Pattern);
		RecursiveDestruction_A_Star_Pattern->setName("A_Star_Pattern");
		RecursiveDestruction_A_Star_Pattern->setVisibility(VisibilityKind::public_);
		
			// Property partB
			RecursiveDestruction_A_Star_Pattern_partB->setThisElementPtr(RecursiveDestruction_A_Star_Pattern_partB);
			RecursiveDestruction_A_Star_Pattern_partB->setName("partB");
			RecursiveDestruction_A_Star_Pattern_partB->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_A_Star_Pattern_partB->setUpper(-1);
			RecursiveDestruction_A_Star_Pattern_partB->setLower(2);
			RecursiveDestruction_A_Star_Pattern_partB->setType(RecursiveDestruction_B);
			RecursiveDestruction_A_Star_Pattern_partB->setAggregation(AggregationKind::composite);
		RecursiveDestruction_A_Star_Pattern->addOwnedAttribute(RecursiveDestruction_A_Star_Pattern_partB);
			// Property partC
			RecursiveDestruction_A_Star_Pattern_partC->setThisElementPtr(RecursiveDestruction_A_Star_Pattern_partC);
			RecursiveDestruction_A_Star_Pattern_partC->setName("partC");
			RecursiveDestruction_A_Star_Pattern_partC->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_A_Star_Pattern_partC->setUpper(-1);
			RecursiveDestruction_A_Star_Pattern_partC->setLower(5);
			RecursiveDestruction_A_Star_Pattern_partC->setType(RecursiveDestruction_C);
			RecursiveDestruction_A_Star_Pattern_partC->setAggregation(AggregationKind::composite);
		RecursiveDestruction_A_Star_Pattern->addOwnedAttribute(RecursiveDestruction_A_Star_Pattern_partC);
		
		RecursiveDestruction_A_Star_Pattern_r->setName("r");
			RecursiveDestruction_A_Star_Pattern_r->setVisibility(VisibilityKind::public_);
				RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd80->setUpper(-1);
				RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd80->setLower(4);
				RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd80->setRole(RecursiveDestruction_B_p);
				RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd80->setPartWithPort(RecursiveDestruction_A_Star_Pattern_partB);
				
			RecursiveDestruction_A_Star_Pattern_r->addEnd(RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd80);
				RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd79->setUpper(-1);
				RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd79->setLower(5);
				RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd79->setRole(RecursiveDestruction_C_q);
				RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd79->setPartWithPort(RecursiveDestruction_A_Star_Pattern_partC);
				
			RecursiveDestruction_A_Star_Pattern_r->addEnd(RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd79);
			RecursiveDestruction_A_Star_Pattern_r->setType(RecursiveDestruction_R);
		RecursiveDestruction_A_Star_Pattern->addOwnedConnector(RecursiveDestruction_A_Star_Pattern_r);
			// Operation A_Star_Pattern_A_Star_Pattern
			RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setThisOperationPtr(RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
			RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->applyStereotype(uml::standardprofile::StandardProfileModel::Instance()->Stereotype_Create);
			RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setName("A_Star_Pattern_A_Star_Pattern");
			RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->setVisibility(VisibilityKind::public_);
				// Parameter result
				RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setThisElementPtr(RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
				RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setName("result");
				RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setVisibility(VisibilityKind::public_);
				
				RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setType(RecursiveDestruction_A_Star_Pattern);
				RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result->setDirection(ParameterDirectionKind::return_);
			RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern->addOwnedParameter(RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result);
		RecursiveDestruction_A_Star_Pattern->addOwnedOperation(RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern);
	RecursiveDestruction->addPackagedElement(RecursiveDestruction_A_Star_Pattern);
		// Class C
		RecursiveDestruction_C->setThisClass_Ptr(RecursiveDestruction_C);
		RecursiveDestruction_C->setName("C");
		RecursiveDestruction_C->setVisibility(VisibilityKind::public_);
		
			// Port q
			RecursiveDestruction_C_q->setThisElementPtr(RecursiveDestruction_C_q);
			RecursiveDestruction_C_q->setName("q");
			RecursiveDestruction_C_q->setVisibility(VisibilityKind::public_);
			RecursiveDestruction_C_q->setUpper(-1);
			RecursiveDestruction_C_q->setType(RecursiveDestruction_IImpl);
			RecursiveDestruction_C_q->setAggregation(AggregationKind::composite);
			RecursiveDestruction_C_q->isService = true;
			RecursiveDestruction_C_q->addProvided(RecursiveDestruction_I);
		RecursiveDestruction_C->addOwnedAttribute(RecursiveDestruction_C_q);
	RecursiveDestruction->addPackagedElement(RecursiveDestruction_C);
		// Interface I
		RecursiveDestruction_I->setThisInterfacePtr(RecursiveDestruction_I);
		RecursiveDestruction_I->setName("I");
		RecursiveDestruction_I->setVisibility(VisibilityKind::public_);
	RecursiveDestruction->addPackagedElement(RecursiveDestruction_I);
}
