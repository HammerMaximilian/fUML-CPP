/*
 * SemanticStrategy.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_LOCI_SEMANTICSTRATEGY_H_
#define FUML_SEMANTICS_LOCI_SEMANTICSTRATEGY_H_

#include <fuml/semantics/fwd.h>
#include <utils/UmlObject.h>

namespace fuml::semantics::loci
{
	class SemanticStrategy : public uml::UmlObject
	{
		public:
			virtual ~SemanticStrategy() = 0;

			virtual std::string getName() = 0;
	};
// SemanticStrategy
}

#endif /* FUML_SEMANTICS_LOCI_SEMANTICSTRATEGY_H_ */
