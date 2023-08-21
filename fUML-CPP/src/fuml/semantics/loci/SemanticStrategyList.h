/*
 * SemanticStrategyList.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_LOCI_SEMANTICSTRATEGYLIST_H_
#define FUML_SEMANTICS_LOCI_SEMANTICSTRATEGYLIST_H_

#include <memory>
#include <vector>

namespace fuml::semantics::loci
{
	class SemanticStrategy;
	typedef std::vector<std::shared_ptr<fuml::semantics::loci::SemanticStrategy>> SemanticStrategyList;
}

#endif /* FUML_SEMANTICS_LOCI_SEMANTICSTRATEGYLIST_H_ */
