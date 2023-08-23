/*
 * FirstChoiceStrategy.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_LOCI_FIRSTCHOICESTRATEGY_H_
#define FUML_SEMANTICS_LOCI_FIRSTCHOICESTRATEGY_H_

#include "fuml/semantics/loci/ChoiceStrategy.h"

namespace fuml::semantics::loci
{
	class FirstChoiceStrategy : public ChoiceStrategy
	{
		public:
			virtual int choose(int) override;
	}; // ChoiceStrategy
}

#endif /* FUML_SEMANTICS_LOCI_FIRSTCHOICESTRATEGY_H_ */
