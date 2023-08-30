/*
 * SemanticVisitor.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_LOCI_SEMANTICVISITOR_H_
#define FUML_SEMANTICS_LOCI_SEMANTICVISITOR_H_

#include <fuml/semantics/fwd.h>
#include <utils/FumlObject.h>

namespace fuml::semantics::loci
{
	class SemanticVisitor : public utils::FumlObject
	{
		public:
			virtual ~SemanticVisitor() = 0;

			static void _beginIsolation();
			static void _endIsolation();
	};
// SemanticVisitor
}

#endif /* FUML_SEMANTICS_LOCI_SEMANTICVISITOR_H_ */
