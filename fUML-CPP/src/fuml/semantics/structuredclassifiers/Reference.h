/*
 * Reference.h
 *
 *  Created on: 23.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_REFERENCE_H_
#define FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_REFERENCE_H_

#include <fuml/semantics/simplesclassifiers/StructuredValue.h>

namespace fuml::semantics::structuredclassifiers
{
	class Reference : public StructuredValue
	{
		public:
			Object_Ptr referent = nullptr;

		public:
			void startBehavior(
					const Class_Ptr&,
					const ParameterValueListPtr&);
			ExecutorPtr dispatch(const OperationPtr&);
			void send(const EventOccurrencePtr&);
			void destroy();
			virtual bool equals(const ValuePtr&) override;
			virtual ValuePtr copy() override;
			virtual ClassifierListPtr getTypes() override;
			virtual FeatureValuePtr getFeatureValue(
					const StructuralFeaturePtr&) override;
			virtual void setFeatureValue(
					const StructuralFeaturePtr&,
					const ValueListPtr&,
					int position) override;
			virtual FeatureValueListPtr getFeatureValues() override;
			virtual std::string toString() override;

		protected:
			virtual ValuePtr new_() override;
	};
}

#endif /* FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_REFERENCE_H_ */
