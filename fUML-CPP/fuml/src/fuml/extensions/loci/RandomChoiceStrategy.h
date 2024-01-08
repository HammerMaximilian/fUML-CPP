/*
 * RandomChoiceStrategy.h
 *
 *  Created on: 08.01.2024
 *      Author: Maximilian
 */

#ifndef FUML_EXTENSIONS_LOCI_RANDOMCHOICESTRATEGY_H_
#define FUML_EXTENSIONS_LOCI_RANDOMCHOICESTRATEGY_H_

#include <fuml/semantics/loci/ChoiceStrategy.h>

namespace fuml::extensions::loci
{
	class RandomChoiceStrategy : public ChoiceStrategy
	{
		public:
			virtual ~RandomChoiceStrategy() = default;

			int choose(int) override;
	};
// RandomChoiceStrategy
}

#endif /* FUML_EXTENSIONS_LOCI_RANDOMCHOICESTRATEGY_H_ */
