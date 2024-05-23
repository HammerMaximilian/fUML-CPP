/*
 * RemovingInstanceFromPortModel.h
 * 
 * Auto-generated file
 */

#ifndef REMOVINGINSTANCEFROMPORT_MODEL_H
#define REMOVINGINSTANCEFROMPORT_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace RemovingInstanceFromPort
{
	class RemovingInstanceFromPortModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model RemovingInstanceFromPort
		 */
		PackagePtr RemovingInstanceFromPort = nullptr;
			Class_Ptr RemovingInstanceFromPort_B = nullptr;
				OperationPtr RemovingInstanceFromPort_B_B_B = nullptr;
					ParameterPtr RemovingInstanceFromPort_B_B_B_result = nullptr;
				ActivityPtr RemovingInstanceFromPort_B_setPActivity = nullptr;
					ActivityParameterNodePtr RemovingInstanceFromPort_B_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPort_B_setPActivity_vParameterNode_LiteralInteger0 = nullptr;
					ReadSelfActionPtr RemovingInstanceFromPort_B_setPActivity_this = nullptr;
						OutputPinPtr RemovingInstanceFromPort_B_setPActivity_this_result = nullptr;
							LiteralUnlimitedNaturalPtr RemovingInstanceFromPort_B_setPActivity_this_result_LiteralUnlimitedNatural1 = nullptr;
							LiteralIntegerPtr RemovingInstanceFromPort_B_setPActivity_this_result_LiteralInteger2 = nullptr;
					ParameterPtr RemovingInstanceFromPort_B_setPActivity_v = nullptr;
					ObjectFlowPtr RemovingInstanceFromPort_B_setPActivity_ObjectFlow3 = nullptr;
						LiteralBooleanPtr RemovingInstanceFromPort_B_setPActivity_ObjectFlow3_LiteralBoolean4 = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPort_B_setPActivity_ObjectFlow3_LiteralInteger5 = nullptr;
					ObjectFlowPtr RemovingInstanceFromPort_B_setPActivity_ObjectFlow6 = nullptr;
						LiteralBooleanPtr RemovingInstanceFromPort_B_setPActivity_ObjectFlow6_LiteralBoolean7 = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPort_B_setPActivity_ObjectFlow6_LiteralInteger8 = nullptr;
					AddStructuralFeatureValueActionPtr RemovingInstanceFromPort_B_setPActivity_Set_this_p = nullptr;
						OutputPinPtr RemovingInstanceFromPort_B_setPActivity_Set_this_p_result = nullptr;
							LiteralUnlimitedNaturalPtr RemovingInstanceFromPort_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural9 = nullptr;
							LiteralIntegerPtr RemovingInstanceFromPort_B_setPActivity_Set_this_p_result_LiteralInteger10 = nullptr;
						InputPinPtr RemovingInstanceFromPort_B_setPActivity_Set_this_p_value = nullptr;
							LiteralUnlimitedNaturalPtr RemovingInstanceFromPort_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural11 = nullptr;
							LiteralIntegerPtr RemovingInstanceFromPort_B_setPActivity_Set_this_p_value_LiteralInteger12 = nullptr;
						InputPinPtr RemovingInstanceFromPort_B_setPActivity_Set_this_p_object = nullptr;
							LiteralUnlimitedNaturalPtr RemovingInstanceFromPort_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural13 = nullptr;
							LiteralIntegerPtr RemovingInstanceFromPort_B_setPActivity_Set_this_p_object_LiteralInteger14 = nullptr;
				OperationPtr RemovingInstanceFromPort_B_setP_Integer = nullptr;
					ParameterPtr RemovingInstanceFromPort_B_setP_Integer_v = nullptr;
				PropertyPtr RemovingInstanceFromPort_B_p = nullptr;
				InterfaceRealizationPtr RemovingInstanceFromPort_B_IRealization = nullptr;
			ActivityPtr RemovingInstanceFromPort_assertA = nullptr;
				ActivityParameterNodePtr RemovingInstanceFromPort_assertA_aParameterNode = nullptr;
					LiteralIntegerPtr RemovingInstanceFromPort_assertA_aParameterNode_LiteralInteger15 = nullptr;
				OpaqueBehaviorPtr RemovingInstanceFromPort_assertA_assertionNotImplemented = nullptr;
				ParameterPtr RemovingInstanceFromPort_assertA_a = nullptr;
				CallBehaviorActionPtr RemovingInstanceFromPort_assertA_Call_assertionNotImplemented = nullptr;
			InterfacePtr RemovingInstanceFromPort_I = nullptr;
				OperationPtr RemovingInstanceFromPort_I_setP_Integer = nullptr;
					ParameterPtr RemovingInstanceFromPort_I_setP_Integer_v = nullptr;
			ActivityPtr RemovingInstanceFromPort_main = nullptr;
				ObjectFlowPtr RemovingInstanceFromPort_main_ObjectFlow16 = nullptr;
					LiteralBooleanPtr RemovingInstanceFromPort_main_ObjectFlow16_LiteralBoolean17 = nullptr;
					LiteralIntegerPtr RemovingInstanceFromPort_main_ObjectFlow16_LiteralInteger18 = nullptr;
				ClearStructuralFeatureActionPtr RemovingInstanceFromPort_main_Clear_a_q = nullptr;
					OutputPinPtr RemovingInstanceFromPort_main_Clear_a_q_result = nullptr;
					InputPinPtr RemovingInstanceFromPort_main_Clear_a_q_object = nullptr;
				CreateObjectActionPtr RemovingInstanceFromPort_main_Create_A = nullptr;
					OutputPinPtr RemovingInstanceFromPort_main_Create_A_result = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPort_main_Create_A_result_LiteralInteger19 = nullptr;
						LiteralUnlimitedNaturalPtr RemovingInstanceFromPort_main_Create_A_result_LiteralUnlimitedNatural20 = nullptr;
				ObjectFlowPtr RemovingInstanceFromPort_main_ObjectFlow21 = nullptr;
					LiteralBooleanPtr RemovingInstanceFromPort_main_ObjectFlow21_LiteralBoolean22 = nullptr;
					LiteralIntegerPtr RemovingInstanceFromPort_main_ObjectFlow21_LiteralInteger23 = nullptr;
				ObjectFlowPtr RemovingInstanceFromPort_main_ObjectFlow24 = nullptr;
					LiteralIntegerPtr RemovingInstanceFromPort_main_ObjectFlow24_LiteralInteger25 = nullptr;
					LiteralBooleanPtr RemovingInstanceFromPort_main_ObjectFlow24_LiteralBoolean26 = nullptr;
				CallBehaviorActionPtr RemovingInstanceFromPort_main_Call_assertA = nullptr;
					InputPinPtr RemovingInstanceFromPort_main_Call_assertA_a = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPort_main_Call_assertA_a_LiteralInteger27 = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPort_main_Call_assertA_a_LiteralInteger28 = nullptr;
						LiteralUnlimitedNaturalPtr RemovingInstanceFromPort_main_Call_assertA_a_LiteralUnlimitedNatural29 = nullptr;
				CallOperationActionPtr RemovingInstanceFromPort_main_A_ = nullptr;
					InputPinPtr RemovingInstanceFromPort_main_A__target = nullptr;
						LiteralUnlimitedNaturalPtr RemovingInstanceFromPort_main_A__target_LiteralUnlimitedNatural30 = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPort_main_A__target_LiteralInteger31 = nullptr;
					OutputPinPtr RemovingInstanceFromPort_main_A__result = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPort_main_A__result_LiteralInteger32 = nullptr;
						LiteralIntegerPtr RemovingInstanceFromPort_main_A__result_LiteralInteger33 = nullptr;
						LiteralUnlimitedNaturalPtr RemovingInstanceFromPort_main_A__result_LiteralUnlimitedNatural34 = nullptr;
			Class_Ptr RemovingInstanceFromPort_IImpl = nullptr;
				OperationPtr RemovingInstanceFromPort_IImpl_setP_Integer = nullptr;
					ParameterPtr RemovingInstanceFromPort_IImpl_setP_Integer_v = nullptr;
				InterfaceRealizationPtr RemovingInstanceFromPort_IImpl_IRealization = nullptr;
			Class_Ptr RemovingInstanceFromPort_A = nullptr;
				PortPtr RemovingInstanceFromPort_A_q = nullptr;
				OperationPtr RemovingInstanceFromPort_A_A_A = nullptr;
					ParameterPtr RemovingInstanceFromPort_A_A_A_result = nullptr;
				ConnectorPtr RemovingInstanceFromPort_A_r = nullptr;
					ConnectorEndPtr RemovingInstanceFromPort_A_r_ConnectorEnd35 = nullptr;
					ConnectorEndPtr RemovingInstanceFromPort_A_r_ConnectorEnd36 = nullptr;
				PropertyPtr RemovingInstanceFromPort_A_b = nullptr;
			AssociationPtr RemovingInstanceFromPort_R = nullptr;
				PropertyPtr RemovingInstanceFromPort_R_y = nullptr;
				PropertyPtr RemovingInstanceFromPort_R_x = nullptr;

		public:
			virtual ~RemovingInstanceFromPortModel();
			static const std::shared_ptr<RemovingInstanceFromPortModel>& Instance();

		private:
			RemovingInstanceFromPortModel();
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

#endif /* REMOVINGINSTANCEFROMPORT_MODEL_H */
