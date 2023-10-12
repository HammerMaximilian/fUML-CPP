/*
 * ReturnInformation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_RETURNINFORMATION_H_
#define FUML_SEMANTICS_ACTIONS_RETURNINFORMATION_H_

#include <fuml/semantics/values/Value.h>

namespace fuml::semantics::actions
{
	class ReturnInformation : public Value
	{
		public:
			CallEventOccurrencePtr callEventOccurrence = nullptr;

		public:
			virtual ~ReturnInformation() = default;

			OperationPtr getOperation();
			void reply(const ParameterValueListPtr&);
			virtual ValueSpecificationPtr specify() override;
			virtual ClassifierListPtr getTypes() override;
			virtual bool equals(const ValuePtr&) override;
			virtual ValuePtr copy() override;
			virtual std::string toString() override;

		protected:
			virtual ValuePtr new_() override;

	};
// ReturnInformation
}

#endif /* FUML_SEMANTICS_ACTIONS_RETURNINFORMATION_H_ */
