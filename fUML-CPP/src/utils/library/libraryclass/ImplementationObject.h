/*
 * ImplementationObject.h
 *
 *  Created on: 12.09.2023
 *      Author: Maximilian
 */

#ifndef UTILS_LIBRARY_LIBRARYCLASS_IMPLEMENTATIONOBJECT_H_
#define UTILS_LIBRARY_LIBRARYCLASS_IMPLEMENTATIONOBJECT_H_

#include <fuml/semantics/structuredclassifiers/Object_.h>

namespace fuml::library::libraryclass
{
	class OperationExecution;
}

namespace fuml::library::libraryclass
{
	class ImplementationObject : public Object_
	{
		private:
			std::weak_ptr<ImplementationObject> thisImplementationObjectPtr;

		public:
			virtual ~ImplementationObject() = 0;
			void setThisImplementationObjectPtr(std::weak_ptr<ImplementationObject>);

			virtual void execute(const std::shared_ptr<OperationExecution>&) = 0;
			virtual ExecutionPtr dispatch(const OperationPtr&) override;
	};
// ImplementationObject
}

#endif /* UTILS_LIBRARY_LIBRARYCLASS_IMPLEMENTATIONOBJECT_H_ */
