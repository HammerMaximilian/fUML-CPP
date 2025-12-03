/*
 * ExecutionFactoryExtension.h
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#ifndef FUML_EXTENSIONS_LOCI_EXECUTIONFACTORYEXTENSION_H_
#define FUML_EXTENSIONS_LOCI_EXECUTIONFACTORYEXTENSION_H_

#include <fuml/semantics/loci/ExecutionFactory.h>

namespace fuml::extensions::loci
{
	class ExecutionFactoryExtension : public ExecutionFactory
	{
		public:
			virtual ~ExecutionFactoryExtension() = default;

			virtual SemanticVisitorPtr instantiateVisitor(const ElementPtr&) override;
	}; // ExecutionFactoryExtension
}

#endif /* FUML_EXTENSIONS_LOCI_EXECUTIONFACTORYEXTENSION_H_ */
