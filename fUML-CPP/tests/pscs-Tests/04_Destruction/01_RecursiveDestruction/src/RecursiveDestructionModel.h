/*
 * RecursiveDestructionModel.h
 * 
 * Auto-generated file
 */

#ifndef RECURSIVEDESTRUCTION_MODEL_H
#define RECURSIVEDESTRUCTION_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace RecursiveDestruction
{
	class RecursiveDestructionModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model RecursiveDestruction
		 */
		PackagePtr RecursiveDestruction = nullptr;
			Class_Ptr RecursiveDestruction_IImpl = nullptr;
				InterfaceRealizationPtr RecursiveDestruction_IImpl_I_Realization = nullptr;
			Class_Ptr RecursiveDestruction_B = nullptr;
				PortPtr RecursiveDestruction_B_p = nullptr;
					LiteralIntegerPtr RecursiveDestruction_B_p_LiteralInteger0 = nullptr;
					LiteralUnlimitedNaturalPtr RecursiveDestruction_B_p_LiteralUnlimitedNatural1 = nullptr;
			AssociationPtr RecursiveDestruction_R = nullptr;
				PropertyPtr RecursiveDestruction_R_y = nullptr;
					LiteralIntegerPtr RecursiveDestruction_R_y_LiteralInteger2 = nullptr;
					LiteralUnlimitedNaturalPtr RecursiveDestruction_R_y_LiteralUnlimitedNatural3 = nullptr;
				PropertyPtr RecursiveDestruction_R_x = nullptr;
					LiteralIntegerPtr RecursiveDestruction_R_x_LiteralInteger4 = nullptr;
					LiteralUnlimitedNaturalPtr RecursiveDestruction_R_x_LiteralUnlimitedNatural5 = nullptr;
			ActivityPtr RecursiveDestruction_main = nullptr;
				ControlFlowPtr RecursiveDestruction_main_ControlFlow6 = nullptr;
				ObjectFlowPtr RecursiveDestruction_main_ObjectFlow7 = nullptr;
					LiteralBooleanPtr RecursiveDestruction_main_ObjectFlow7_LiteralBoolean8 = nullptr;
					LiteralIntegerPtr RecursiveDestruction_main_ObjectFlow7_LiteralInteger9 = nullptr;
				CreateObjectActionPtr RecursiveDestruction_main_Create_A_Star_Pattern = nullptr;
					OutputPinPtr RecursiveDestruction_main_Create_A_Star_Pattern_result = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_main_Create_A_Star_Pattern_result_LiteralUnlimitedNatural10 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_Create_A_Star_Pattern_result_LiteralInteger11 = nullptr;
				OpaqueBehaviorPtr RecursiveDestruction_main_numberOfIImplInstances = nullptr;
					ParameterPtr RecursiveDestruction_main_numberOfIImplInstances_iImplList = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_numberOfIImplInstances_iImplList_LiteralInteger12 = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_main_numberOfIImplInstances_iImplList_LiteralUnlimitedNatural13 = nullptr;
				ObjectFlowPtr RecursiveDestruction_main_ObjectFlow14 = nullptr;
					LiteralIntegerPtr RecursiveDestruction_main_ObjectFlow14_LiteralInteger15 = nullptr;
					LiteralBooleanPtr RecursiveDestruction_main_ObjectFlow14_LiteralBoolean16 = nullptr;
				ReadExtentActionPtr RecursiveDestruction_main_Extent_of_IImpl_after_destruction = nullptr;
					OutputPinPtr RecursiveDestruction_main_Extent_of_IImpl_after_destruction_iImplExtent = nullptr;
				CallBehaviorActionPtr RecursiveDestruction_main_Call_numberOfCInstances = nullptr;
					InputPinPtr RecursiveDestruction_main_Call_numberOfCInstances_cList = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_Call_numberOfCInstances_cList_LiteralInteger17 = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_main_Call_numberOfCInstances_cList_LiteralUnlimitedNatural18 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_Call_numberOfCInstances_cList_LiteralInteger19 = nullptr;
				ObjectFlowPtr RecursiveDestruction_main_ObjectFlow20 = nullptr;
					LiteralIntegerPtr RecursiveDestruction_main_ObjectFlow20_LiteralInteger21 = nullptr;
					LiteralBooleanPtr RecursiveDestruction_main_ObjectFlow20_LiteralBoolean22 = nullptr;
				ObjectFlowPtr RecursiveDestruction_main_ObjectFlow23 = nullptr;
					LiteralBooleanPtr RecursiveDestruction_main_ObjectFlow23_LiteralBoolean24 = nullptr;
					LiteralIntegerPtr RecursiveDestruction_main_ObjectFlow23_LiteralInteger25 = nullptr;
				ObjectFlowPtr RecursiveDestruction_main_ObjectFlow26 = nullptr;
					LiteralBooleanPtr RecursiveDestruction_main_ObjectFlow26_LiteralBoolean27 = nullptr;
					LiteralIntegerPtr RecursiveDestruction_main_ObjectFlow26_LiteralInteger28 = nullptr;
				CallBehaviorActionPtr RecursiveDestruction_main_Call_assertExtentOfC = nullptr;
					InputPinPtr RecursiveDestruction_main_Call_assertExtentOfC_cList = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_Call_assertExtentOfC_cList_LiteralInteger29 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_Call_assertExtentOfC_cList_LiteralInteger30 = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_main_Call_assertExtentOfC_cList_LiteralUnlimitedNatural31 = nullptr;
				OpaqueBehaviorPtr RecursiveDestruction_main_assertExtentOfIImpl = nullptr;
					ParameterPtr RecursiveDestruction_main_assertExtentOfIImpl_iImplList = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_main_assertExtentOfIImpl_iImplList_LiteralUnlimitedNatural32 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_assertExtentOfIImpl_iImplList_LiteralInteger33 = nullptr;
				ObjectFlowPtr RecursiveDestruction_main_ObjectFlow34 = nullptr;
					LiteralBooleanPtr RecursiveDestruction_main_ObjectFlow34_LiteralBoolean35 = nullptr;
					LiteralIntegerPtr RecursiveDestruction_main_ObjectFlow34_LiteralInteger36 = nullptr;
				ControlFlowPtr RecursiveDestruction_main_ControlFlow37 = nullptr;
				ControlFlowPtr RecursiveDestruction_main_ControlFlow38 = nullptr;
				ControlFlowPtr RecursiveDestruction_main_ControlFlow39 = nullptr;
				OpaqueBehaviorPtr RecursiveDestruction_main_numberOfCInstances = nullptr;
					ParameterPtr RecursiveDestruction_main_numberOfCInstances_cList = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_numberOfCInstances_cList_LiteralInteger40 = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_main_numberOfCInstances_cList_LiteralUnlimitedNatural41 = nullptr;
				OpaqueBehaviorPtr RecursiveDestruction_main_assertExtentOfB = nullptr;
					ParameterPtr RecursiveDestruction_main_assertExtentOfB_bList = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_assertExtentOfB_bList_LiteralInteger42 = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_main_assertExtentOfB_bList_LiteralUnlimitedNatural43 = nullptr;
				ReadExtentActionPtr RecursiveDestruction_main_Extent_of_B_before_destruction = nullptr;
					OutputPinPtr RecursiveDestruction_main_Extent_of_B_before_destruction_bExtent = nullptr;
				ReadExtentActionPtr RecursiveDestruction_main_Extent_of_C_before_destruction = nullptr;
					OutputPinPtr RecursiveDestruction_main_Extent_of_C_before_destruction_cExtent = nullptr;
				ReadExtentActionPtr RecursiveDestruction_main_Extent_of_IImpl_before_destruction = nullptr;
					OutputPinPtr RecursiveDestruction_main_Extent_of_IImpl_before_destruction_iImplExtent = nullptr;
				DestroyObjectActionPtr RecursiveDestruction_main_Destroy_A_Star_Pattern = nullptr;
					InputPinPtr RecursiveDestruction_main_Destroy_A_Star_Pattern_target = nullptr;
				CallBehaviorActionPtr RecursiveDestruction_main_Call_numberOfIImplInstances = nullptr;
					InputPinPtr RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList_LiteralUnlimitedNatural44 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList_LiteralInteger45 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_Call_numberOfIImplInstances_iImplList_LiteralInteger46 = nullptr;
				CallOperationActionPtr RecursiveDestruction_main_A_Star_Pattern_ = nullptr;
					InputPinPtr RecursiveDestruction_main_A_Star_Pattern__target = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_main_A_Star_Pattern__target_LiteralUnlimitedNatural47 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_A_Star_Pattern__target_LiteralInteger48 = nullptr;
					OutputPinPtr RecursiveDestruction_main_A_Star_Pattern__result = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_main_A_Star_Pattern__result_LiteralUnlimitedNatural49 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_A_Star_Pattern__result_LiteralInteger50 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_A_Star_Pattern__result_LiteralInteger51 = nullptr;
				ControlFlowPtr RecursiveDestruction_main_ControlFlow52 = nullptr;
				ObjectFlowPtr RecursiveDestruction_main_ObjectFlow53 = nullptr;
					LiteralIntegerPtr RecursiveDestruction_main_ObjectFlow53_LiteralInteger54 = nullptr;
					LiteralBooleanPtr RecursiveDestruction_main_ObjectFlow53_LiteralBoolean55 = nullptr;
				ObjectFlowPtr RecursiveDestruction_main_ObjectFlow56 = nullptr;
					LiteralIntegerPtr RecursiveDestruction_main_ObjectFlow56_LiteralInteger57 = nullptr;
					LiteralBooleanPtr RecursiveDestruction_main_ObjectFlow56_LiteralBoolean58 = nullptr;
				CallBehaviorActionPtr RecursiveDestruction_main_Call_numberOfBInstances = nullptr;
					InputPinPtr RecursiveDestruction_main_Call_numberOfBInstances_bList = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_Call_numberOfBInstances_bList_LiteralInteger59 = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_main_Call_numberOfBInstances_bList_LiteralUnlimitedNatural60 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_Call_numberOfBInstances_bList_LiteralInteger61 = nullptr;
				OpaqueBehaviorPtr RecursiveDestruction_main_numberOfBInstances = nullptr;
					ParameterPtr RecursiveDestruction_main_numberOfBInstances_bList = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_numberOfBInstances_bList_LiteralInteger62 = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_main_numberOfBInstances_bList_LiteralUnlimitedNatural63 = nullptr;
				ReadExtentActionPtr RecursiveDestruction_main_Extent_of_B_after_destruction = nullptr;
					OutputPinPtr RecursiveDestruction_main_Extent_of_B_after_destruction_bExtent = nullptr;
				ControlFlowPtr RecursiveDestruction_main_ControlFlow64 = nullptr;
				ControlFlowPtr RecursiveDestruction_main_ControlFlow65 = nullptr;
				ReadExtentActionPtr RecursiveDestruction_main_Extent_of_C_after_destruction = nullptr;
					OutputPinPtr RecursiveDestruction_main_Extent_of_C_after_destruction_cExtent = nullptr;
				CallBehaviorActionPtr RecursiveDestruction_main_Call_assertExtentOfIImpl = nullptr;
					InputPinPtr RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList_LiteralUnlimitedNatural66 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList_LiteralInteger67 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_Call_assertExtentOfIImpl_iImplList_LiteralInteger68 = nullptr;
				OpaqueBehaviorPtr RecursiveDestruction_main_assertExtentOfC = nullptr;
					ParameterPtr RecursiveDestruction_main_assertExtentOfC_cList = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_main_assertExtentOfC_cList_LiteralUnlimitedNatural69 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_assertExtentOfC_cList_LiteralInteger70 = nullptr;
				CallBehaviorActionPtr RecursiveDestruction_main_Call_assertExtentOfB = nullptr;
					InputPinPtr RecursiveDestruction_main_Call_assertExtentOfB_bList = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_Call_assertExtentOfB_bList_LiteralInteger71 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_main_Call_assertExtentOfB_bList_LiteralInteger72 = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_main_Call_assertExtentOfB_bList_LiteralUnlimitedNatural73 = nullptr;
			Class_Ptr RecursiveDestruction_A_Star_Pattern = nullptr;
				CommentPtr RecursiveDestruction_A_Star_Pattern_Comment74 = nullptr;
				PropertyPtr RecursiveDestruction_A_Star_Pattern_partB = nullptr;
					LiteralUnlimitedNaturalPtr RecursiveDestruction_A_Star_Pattern_partB_LiteralUnlimitedNatural75 = nullptr;
					LiteralIntegerPtr RecursiveDestruction_A_Star_Pattern_partB_LiteralInteger76 = nullptr;
				PropertyPtr RecursiveDestruction_A_Star_Pattern_partC = nullptr;
					LiteralUnlimitedNaturalPtr RecursiveDestruction_A_Star_Pattern_partC_LiteralUnlimitedNatural77 = nullptr;
					LiteralIntegerPtr RecursiveDestruction_A_Star_Pattern_partC_LiteralInteger78 = nullptr;
				OperationPtr RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern = nullptr;
					ParameterPtr RecursiveDestruction_A_Star_Pattern_A_Star_Pattern_A_Star_Pattern_result = nullptr;
				ConnectorPtr RecursiveDestruction_A_Star_Pattern_r = nullptr;
					ConnectorEndPtr RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd79 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd79_connectorEnd_2_Lower = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd79_connectorEnd_2_Upper = nullptr;
					ConnectorEndPtr RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd80 = nullptr;
						LiteralIntegerPtr RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd80_connectorEnd_1_Lower = nullptr;
						LiteralUnlimitedNaturalPtr RecursiveDestruction_A_Star_Pattern_r_ConnectorEnd80_connectorEnd_1_Upper = nullptr;
			Class_Ptr RecursiveDestruction_C = nullptr;
				PortPtr RecursiveDestruction_C_q = nullptr;
					LiteralIntegerPtr RecursiveDestruction_C_q_LiteralInteger81 = nullptr;
					LiteralUnlimitedNaturalPtr RecursiveDestruction_C_q_LiteralUnlimitedNatural82 = nullptr;
			InterfacePtr RecursiveDestruction_I = nullptr;

		public:
			virtual ~RecursiveDestructionModel();
			static const std::shared_ptr<RecursiveDestructionModel>& Instance();

		private:
			RecursiveDestructionModel();
			void initializeInMemoryModel();

		/* Start of user code : User-defined members
		 * This section may be used for user-defined members.
		 * It will not be overwritten by future generation processes.
		 */

		/*
 		 * End of user code
		 */
	};
}

#endif /* RECURSIVEDESTRUCTION_MODEL_H */
