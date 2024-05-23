/*
 * RemovingInstanceFromPartModel.h
 * 
 * Auto-generated file
 */

#ifndef REMOVINGINSTANCEFROMPART_MODEL_H
#define REMOVINGINSTANCEFROMPART_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace RemovingInstanceFromPart
{
	class RemovingInstanceFromPartModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model RemovingInstanceFromPart
		 */
		PackagePtr RemovingInstanceFromPart = nullptr;
			Class_Ptr RemovingInstanceFromPart_B = nullptr;
				OperationPtr RemovingInstanceFromPart_B_B_B = nullptr;
					ParameterPtr RemovingInstanceFromPart_B_B_B_result = nullptr;
				ActivityPtr RemovingInstanceFromPart_B_setPActivity = nullptr;
					ActivityParameterNodePtr RemovingInstanceFromPart_B_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPart_B_setPActivity_vParameterNode_LiteralInteger0 = nullptr;
					ReadSelfActionPtr RemovingInstanceFromPart_B_setPActivity_this = nullptr;
						OutputPinPtr RemovingInstanceFromPart_B_setPActivity_this_result = nullptr;
							LiteralUnlimitedNaturalPtr RemovingInstanceFromPart_B_setPActivity_this_result_LiteralUnlimitedNatural1 = nullptr;
							LiteralIntegerPtr RemovingInstanceFromPart_B_setPActivity_this_result_LiteralInteger2 = nullptr;
					ParameterPtr RemovingInstanceFromPart_B_setPActivity_v = nullptr;
					ObjectFlowPtr RemovingInstanceFromPart_B_setPActivity_ObjectFlow3 = nullptr;
						LiteralBooleanPtr RemovingInstanceFromPart_B_setPActivity_ObjectFlow3_LiteralBoolean4 = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPart_B_setPActivity_ObjectFlow3_LiteralInteger5 = nullptr;
					ObjectFlowPtr RemovingInstanceFromPart_B_setPActivity_ObjectFlow6 = nullptr;
						LiteralBooleanPtr RemovingInstanceFromPart_B_setPActivity_ObjectFlow6_LiteralBoolean7 = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPart_B_setPActivity_ObjectFlow6_LiteralInteger8 = nullptr;
					AddStructuralFeatureValueActionPtr RemovingInstanceFromPart_B_setPActivity_Set_this_p = nullptr;
						OutputPinPtr RemovingInstanceFromPart_B_setPActivity_Set_this_p_result = nullptr;
							LiteralUnlimitedNaturalPtr RemovingInstanceFromPart_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural9 = nullptr;
							LiteralIntegerPtr RemovingInstanceFromPart_B_setPActivity_Set_this_p_result_LiteralInteger10 = nullptr;
						InputPinPtr RemovingInstanceFromPart_B_setPActivity_Set_this_p_value = nullptr;
							LiteralUnlimitedNaturalPtr RemovingInstanceFromPart_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural11 = nullptr;
							LiteralIntegerPtr RemovingInstanceFromPart_B_setPActivity_Set_this_p_value_LiteralInteger12 = nullptr;
						InputPinPtr RemovingInstanceFromPart_B_setPActivity_Set_this_p_object = nullptr;
							LiteralUnlimitedNaturalPtr RemovingInstanceFromPart_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural13 = nullptr;
							LiteralIntegerPtr RemovingInstanceFromPart_B_setPActivity_Set_this_p_object_LiteralInteger14 = nullptr;
				OperationPtr RemovingInstanceFromPart_B_setP_Integer = nullptr;
					ParameterPtr RemovingInstanceFromPart_B_setP_Integer_v = nullptr;
				PropertyPtr RemovingInstanceFromPart_B_p = nullptr;
				InterfaceRealizationPtr RemovingInstanceFromPart_B_IRealization = nullptr;
			ActivityPtr RemovingInstanceFromPart_assertA = nullptr;
				ActivityParameterNodePtr RemovingInstanceFromPart_assertA_aParameterNode = nullptr;
					LiteralIntegerPtr RemovingInstanceFromPart_assertA_aParameterNode_LiteralInteger15 = nullptr;
				OpaqueBehaviorPtr RemovingInstanceFromPart_assertA_assertionNotImplemented = nullptr;
				ParameterPtr RemovingInstanceFromPart_assertA_a = nullptr;
				CallBehaviorActionPtr RemovingInstanceFromPart_assertA_Call_assertionNotImplemented = nullptr;
			InterfacePtr RemovingInstanceFromPart_I = nullptr;
				OperationPtr RemovingInstanceFromPart_I_setP_Integer = nullptr;
					ParameterPtr RemovingInstanceFromPart_I_setP_Integer_v = nullptr;
			ActivityPtr RemovingInstanceFromPart_main = nullptr;
				ObjectFlowPtr RemovingInstanceFromPart_main_ObjectFlow16 = nullptr;
					LiteralBooleanPtr RemovingInstanceFromPart_main_ObjectFlow16_LiteralBoolean17 = nullptr;
					LiteralIntegerPtr RemovingInstanceFromPart_main_ObjectFlow16_LiteralInteger18 = nullptr;
				ClearStructuralFeatureActionPtr RemovingInstanceFromPart_main_Clear_a_b = nullptr;
					OutputPinPtr RemovingInstanceFromPart_main_Clear_a_b_result = nullptr;
					InputPinPtr RemovingInstanceFromPart_main_Clear_a_b_object = nullptr;
				CreateObjectActionPtr RemovingInstanceFromPart_main_Create_A = nullptr;
					OutputPinPtr RemovingInstanceFromPart_main_Create_A_result = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPart_main_Create_A_result_LiteralInteger19 = nullptr;
						LiteralUnlimitedNaturalPtr RemovingInstanceFromPart_main_Create_A_result_LiteralUnlimitedNatural20 = nullptr;
				ObjectFlowPtr RemovingInstanceFromPart_main_ObjectFlow21 = nullptr;
					LiteralBooleanPtr RemovingInstanceFromPart_main_ObjectFlow21_LiteralBoolean22 = nullptr;
					LiteralIntegerPtr RemovingInstanceFromPart_main_ObjectFlow21_LiteralInteger23 = nullptr;
				ObjectFlowPtr RemovingInstanceFromPart_main_ObjectFlow24 = nullptr;
					LiteralIntegerPtr RemovingInstanceFromPart_main_ObjectFlow24_LiteralInteger25 = nullptr;
					LiteralBooleanPtr RemovingInstanceFromPart_main_ObjectFlow24_LiteralBoolean26 = nullptr;
				CallBehaviorActionPtr RemovingInstanceFromPart_main_Call_assertA = nullptr;
					InputPinPtr RemovingInstanceFromPart_main_Call_assertA_a = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPart_main_Call_assertA_a_LiteralInteger27 = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPart_main_Call_assertA_a_LiteralInteger28 = nullptr;
						LiteralUnlimitedNaturalPtr RemovingInstanceFromPart_main_Call_assertA_a_LiteralUnlimitedNatural29 = nullptr;
				CallOperationActionPtr RemovingInstanceFromPart_main_A_ = nullptr;
					InputPinPtr RemovingInstanceFromPart_main_A__target = nullptr;
						LiteralUnlimitedNaturalPtr RemovingInstanceFromPart_main_A__target_LiteralUnlimitedNatural30 = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPart_main_A__target_LiteralInteger31 = nullptr;
					OutputPinPtr RemovingInstanceFromPart_main_A__result = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPart_main_A__result_LiteralInteger32 = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPart_main_A__result_LiteralInteger33 = nullptr;
						LiteralUnlimitedNaturalPtr RemovingInstanceFromPart_main_A__result_LiteralUnlimitedNatural34 = nullptr;
			Class_Ptr RemovingInstanceFromPart_IImpl = nullptr;
				OperationPtr RemovingInstanceFromPart_IImpl_setP_Integer = nullptr;
					ParameterPtr RemovingInstanceFromPart_IImpl_setP_Integer_v = nullptr;
				InterfaceRealizationPtr RemovingInstanceFromPart_IImpl_IRealization = nullptr;
			Class_Ptr RemovingInstanceFromPart_A = nullptr;
				PortPtr RemovingInstanceFromPart_A_q = nullptr;
				OperationPtr RemovingInstanceFromPart_A_A_A = nullptr;
					ParameterPtr RemovingInstanceFromPart_A_A_A_result = nullptr;
				ConnectorPtr RemovingInstanceFromPart_A_r = nullptr;
					ConnectorEndPtr RemovingInstanceFromPart_A_r_ConnectorEnd35 = nullptr;
					ConnectorEndPtr RemovingInstanceFromPart_A_r_ConnectorEnd36 = nullptr;
				PropertyPtr RemovingInstanceFromPart_A_b = nullptr;
			AssociationPtr RemovingInstanceFromPart_R = nullptr;
				PropertyPtr RemovingInstanceFromPart_R_y = nullptr;
				PropertyPtr RemovingInstanceFromPart_R_x = nullptr;

		public:
			virtual ~RemovingInstanceFromPartModel();
			static const std::shared_ptr<RemovingInstanceFromPartModel>& Instance();

		private:
			RemovingInstanceFromPartModel();
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

#endif /* REMOVINGINSTANCEFROMPART_MODEL_H */
