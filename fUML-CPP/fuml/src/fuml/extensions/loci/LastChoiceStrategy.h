/*
 * LastChoiceStrategy.h
 *
 *  Created on: 08.01.2024
 *      Author: Maximilian
 */

#ifndef FUML_EXTENSIONS_LOCI_LASTCHOICESTRATEGY_H_
#define FUML_EXTENSIONS_LOCI_LASTCHOICESTRATEGY_H_

#include <fuml/semantics/loci/ChoiceStrategy.h>

namespace fuml::extensions::loci
{
	class LastChoiceStrategy : public ChoiceStrategy
	{
		public:
			virtual ~LastChoiceStrategy() = default;

			int choose(int) override;
	};
// LastChoiceStrategy
}

#endif /* FUML_EXTENSIONS_LOCI_LASTCHOICESTRATEGY_H_ */
