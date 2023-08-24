/*
 * Execution.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_EXECUTION_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_EXECUTION_H_

#include <fuml/semantics/structuredclassifiers/Object_.h>

namespace fuml::semantics::commonbehavior
{
	class Execution : public Object_
	{
		public:
			Object_Ptr context = nullptr;
			ParameterValueListPtr parameterValues = std::make_shared<ParameterValueList>();
			ValuePtr exception;

		public:
			virtual ~Execution() = 0;

			virtual void execute() = 0;
			void terminate();
			virtual ValuePtr copy() override;
			virtual ValuePtr new_() = 0;
			void setParameterValue(const ParameterValuePtr&);
			ParameterValuePtr getParameterValue(const ParameterPtr&);
			ParameterValueListPtr getOutputParameterValues();
			BehaviorPtr getBehavior();
			virtual void destroy() override;
			void propagateException(const ValuePtr&);
	}; // Execution
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_EXECUTION_H_ */
