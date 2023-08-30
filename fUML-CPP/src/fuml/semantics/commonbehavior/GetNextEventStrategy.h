/*
 * GetNextEventStrategy.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_GETNEXTEVENTSTRATEGY_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_GETNEXTEVENTSTRATEGY_H_

#include <fuml/semantics/loci/SemanticStrategy.h>

namespace fuml::semantics::commonbehavior
{
	class GetNextEventStrategy : public SemanticStrategy
	{
		public:
			virtual ~GetNextEventStrategy() = 0;

			virtual std::string getName() override;
			virtual EventOccurrencePtr getNextEvent(const ObjectActivationPtr&) = 0;
	};
// GetNextEventStrategy
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_GETNEXTEVENTSTRATEGY_H_ */
