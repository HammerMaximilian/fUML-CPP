/*
 * FIFOGetNextEventStrategy.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_FIFOGETNEXTEVENTSTRATEGY_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_FIFOGETNEXTEVENTSTRATEGY_H_

#include <fuml/semantics/commonbehavior/GetNextEventStrategy.h>

namespace fuml::semantics::commonbehavior
{
	class FIFOGetNextEventStrategy : public GetNextEventStrategy
	{
		public:
			virtual EventOccurrencePtr getNextEvent(const ObjectActivationPtr&) override;
	}; // FIFOGetNextEventStrategy
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_FIFOGETNEXTEVENTSTRATEGY_H_ */
