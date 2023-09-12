/*
 * OperationExecution.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_LIBRARYCLASS_OPERATIONEXECUTION_H_
#define UTILS_LIBRARY_LIBRARYCLASS_OPERATIONEXECUTION_H_

#include <fuml/semantics/commonbehavior/Execution.h>

namespace fuml::library::libraryclass
{
	class ImplementationObject;
}

namespace fuml::library::libraryclass
{
	class OperationExecution : public Execution
	{
		public:
			virtual ~OperationExecution() = default;

			void set(const std::shared_ptr<ImplementationObject>&, OperationPtr&);
			virtual ValuePtr new_() override;
			virtual void execute() override;
			std::string getOperationName();
			ParameterPtr getParameter(std::string);
			ParameterValue getParameterValue(std::string);
			void setParameterValue(const ParameterPtr&, const ValueListPtr&);
			void setParameterValue(std::string, const ValueListPtr&);
			void setParameterValue(std::string, const ValuePtr&);
			void setReturnParameterValue(const ValueListPtr&);
			void setReturnParameterValue(const ValuePtr&);
	};
// OperationExecution
}

#endif /* UTILS_LIBRARY_LIBRARYCLASS_OPERATIONEXECUTION_H_ */
