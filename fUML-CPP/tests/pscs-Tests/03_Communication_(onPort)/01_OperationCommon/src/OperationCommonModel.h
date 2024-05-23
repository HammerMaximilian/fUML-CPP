/*
 * OperationCommonModel.h
 * 
 * Auto-generated file
 */

#ifndef OPERATIONCOMMON_MODEL_H
#define OPERATIONCOMMON_MODEL_H

#include <uml/fwd.h>
#include <utils/environment/InMemoryModel.h>

/* Start of user code : User-defined includes and forward declarations
 * This section may be used for includes and forward declarations.
 * It will not be overwritten by future generation processes.
 */

/*
 * End of user code
 */

namespace OperationCommon
{
	class OperationCommonModel : public uml::environment::InMemoryModel
	{
		public:
		/*
		 * Model OperationCommon
		 */
		PackagePtr OperationCommon = nullptr;
			AssociationPtr OperationCommon_S = nullptr;
				PropertyPtr OperationCommon_S_y = nullptr;
				PropertyPtr OperationCommon_S_x = nullptr;
			AssociationPtr OperationCommon_R = nullptr;
				PropertyPtr OperationCommon_R_y = nullptr;
				PropertyPtr OperationCommon_R_x = nullptr;
			Class_Ptr OperationCommon_IImpl = nullptr;
				InterfaceRealizationPtr OperationCommon_IImpl_IRealization = nullptr;
				OperationPtr OperationCommon_IImpl_setP_Integer = nullptr;
					ParameterPtr OperationCommon_IImpl_setP_Integer_v = nullptr;
			InterfacePtr OperationCommon_I = nullptr;
				OperationPtr OperationCommon_I_setP_Integer = nullptr;
					ParameterPtr OperationCommon_I_setP_Integer_v = nullptr;
			Class_Ptr OperationCommon_B = nullptr;
				ActivityPtr OperationCommon_B_setPActivity = nullptr;
					ParameterPtr OperationCommon_B_setPActivity_v = nullptr;
					ObjectFlowPtr OperationCommon_B_setPActivity_ObjectFlow0 = nullptr;
						LiteralBooleanPtr OperationCommon_B_setPActivity_ObjectFlow0_LiteralBoolean1 = nullptr;
						LiteralIntegerPtr OperationCommon_B_setPActivity_ObjectFlow0_LiteralInteger2 = nullptr;
					AddStructuralFeatureValueActionPtr OperationCommon_B_setPActivity_Set_this_p = nullptr;
						OutputPinPtr OperationCommon_B_setPActivity_Set_this_p_result = nullptr;
							LiteralIntegerPtr OperationCommon_B_setPActivity_Set_this_p_result_LiteralInteger3 = nullptr;
							LiteralUnlimitedNaturalPtr OperationCommon_B_setPActivity_Set_this_p_result_LiteralUnlimitedNatural4 = nullptr;
						InputPinPtr OperationCommon_B_setPActivity_Set_this_p_object = nullptr;
							LiteralUnlimitedNaturalPtr OperationCommon_B_setPActivity_Set_this_p_object_LiteralUnlimitedNatural5 = nullptr;
							LiteralIntegerPtr OperationCommon_B_setPActivity_Set_this_p_object_LiteralInteger6 = nullptr;
						InputPinPtr OperationCommon_B_setPActivity_Set_this_p_value = nullptr;
							LiteralUnlimitedNaturalPtr OperationCommon_B_setPActivity_Set_this_p_value_LiteralUnlimitedNatural7 = nullptr;
							LiteralIntegerPtr OperationCommon_B_setPActivity_Set_this_p_value_LiteralInteger8 = nullptr;
					ObjectFlowPtr OperationCommon_B_setPActivity_ObjectFlow9 = nullptr;
						LiteralIntegerPtr OperationCommon_B_setPActivity_ObjectFlow9_LiteralInteger10 = nullptr;
						LiteralBooleanPtr OperationCommon_B_setPActivity_ObjectFlow9_LiteralBoolean11 = nullptr;
					ActivityParameterNodePtr OperationCommon_B_setPActivity_vParameterNode = nullptr;
						LiteralIntegerPtr OperationCommon_B_setPActivity_vParameterNode_LiteralInteger12 = nullptr;
					ReadSelfActionPtr OperationCommon_B_setPActivity_this = nullptr;
						OutputPinPtr OperationCommon_B_setPActivity_this_result = nullptr;
							LiteralUnlimitedNaturalPtr OperationCommon_B_setPActivity_this_result_LiteralUnlimitedNatural13 = nullptr;
							LiteralIntegerPtr OperationCommon_B_setPActivity_this_result_LiteralInteger14 = nullptr;
				OperationPtr OperationCommon_B_setP_Integer = nullptr;
					ParameterPtr OperationCommon_B_setP_Integer_v = nullptr;
				InterfaceRealizationPtr OperationCommon_B_IRealization = nullptr;
				PropertyPtr OperationCommon_B_p = nullptr;

		public:
			virtual ~OperationCommonModel();
			static const std::shared_ptr<OperationCommonModel>& Instance();

		private:
			OperationCommonModel();
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

#endif /* OPERATIONCOMMON_MODEL_H */
