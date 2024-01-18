/*
 * Reference.h
 *
 *  Created on: 23.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_REFERENCE_H_
#define FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_REFERENCE_H_

#include <fuml/semantics/simpleclassifiers/StructuredValue.h>

namespace fuml::semantics::structuredclassifiers
{
	class Reference : public StructuredValue
	{
		public:
			Object_Ptr referent = nullptr;

		public:
			virtual ~Reference() = default;

			virtual void startBehavior(const Class_Ptr&, const ParameterValueListPtr&);
			virtual ExecutionPtr dispatch(const OperationPtr&);
			virtual ExecutionPtr dispatch(const OperationPtr&, bool); // implemented in ReferenceExtension.cpp
			virtual void send(const EventOccurrencePtr&);
			void destroy();
			virtual bool equals(const ValuePtr&) override;
			virtual ValuePtr copy() override;
			virtual ClassifierListPtr getTypes() override;
			virtual FeatureValuePtr getFeatureValue(const StructuralFeaturePtr&) override;
			virtual void setFeatureValue(const StructuralFeaturePtr&, const ValueListPtr&, int) override;
			virtual FeatureValueListPtr getFeatureValues() override;
			virtual std::string toString() override;

		protected:
			virtual ValuePtr new_() override;
	};
// Reference
}

#endif /* FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_REFERENCE_H_ */
