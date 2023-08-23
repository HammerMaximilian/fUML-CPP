/*
 * ChoiceStrategy.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_LOCI_CHOICESTRATEGY_H_
#define FUML_SEMANTICS_LOCI_CHOICESTRATEGY_H_

#include "fuml/semantics/loci/SemanticStrategy.h"

namespace fuml::semantics::loci
{
	class ChoiceStrategy : public SemanticStrategy
	{
		public:
			virtual ~ChoiceStrategy() = 0;

			virtual std::string getName() override;
			virtual int choose(int) = 0;
	}; // ChoiceStrategy
}

#endif /* FUML_SEMANTICS_LOCI_CHOICESTRATEGY_H_ */
