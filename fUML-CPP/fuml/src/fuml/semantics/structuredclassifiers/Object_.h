/*
 * Object_.h
 *
 *  Created on: 23.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_OBJECT__H_
#define FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_OBJECT__H_

#include <fuml/semantics/structuredclassifiers/ExtensionalValue.h>

namespace fuml::semantics::structuredclassifiers
{
	class Object_ : public ExtensionalValue
	{
		public:
			Class_ListPtr types = std::make_shared<Class_List>();
			ObjectActivationPtr objectActivation = nullptr;

		private:
			Object_Ptr_w thisObject_Ptr;

		public:
			virtual ~Object_() = default;
			void setThisObject_Ptr(Object_Ptr_w);

			void startBehavior(const Class_Ptr&, const ParameterValueListPtr&);
			virtual ExecutionPtr dispatch(const OperationPtr&);
			virtual ExecutionPtr dispatch(const OperationPtr&, bool); // implemented in Object_Extension.cpp
			void send(const EventOccurrencePtr&);
			virtual void destroy() override;
			void register_(const EventAccepterPtr&);
			void unregister(const EventAccepterPtr&);
			virtual ValuePtr copy();
			virtual bool equals(const ValuePtr&);
			virtual ClassifierListPtr getTypes();

		protected:
			virtual ValuePtr new_();
	};
// Object_
}

#endif /* FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_OBJECT__H_ */
