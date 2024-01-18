/*
 * LIFOGetNextEventStrategy.h
 *
 *  Created on: 08.01.2024
 *      Author: Maximilian
 */

#ifndef FUML_EXTENSIONS_COMMONBEHAVIOR_LIFOGETNEXTEVENTSTRATEGY_H_
#define FUML_EXTENSIONS_COMMONBEHAVIOR_LIFOGETNEXTEVENTSTRATEGY_H_

#include <fuml/semantics/commonbehavior/GetNextEventStrategy.h>

namespace fuml::extensions::commonbehavior
{
	class LIFOGetNextEventStrategy : public GetNextEventStrategy
	{
		public:
			virtual ~LIFOGetNextEventStrategy() = default;

			EventOccurrencePtr getNextEvent(const ObjectActivationPtr&) override;
	};
// LIFOGetNextEventStrategy
}

#endif /* FUML_EXTENSIONS_COMMONBEHAVIOR_LIFOGETNEXTEVENTSTRATEGY_H_ */
