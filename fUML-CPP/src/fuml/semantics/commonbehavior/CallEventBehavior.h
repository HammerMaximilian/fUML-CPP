/*
 * CallEventBehavior.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTBEHAVIOR_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTBEHAVIOR_H_

#include <fuml/syntax/commonbehavior/Behavior.h>

namespace fuml::semantics::commonbehavior
{
	class CallEventBehavior : public Behavior
	{
		public:
			OperationPtr operation = nullptr;

		public:
			void setOperation (const OperationPtr&);
	}; // CallEventBehavior
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_CALLEVENTBEHAVIOR_H_ */
