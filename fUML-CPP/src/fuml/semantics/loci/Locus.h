/*
 * Locus.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_LOCI_LOCUS_H_
#define FUML_SEMANTICS_LOCI_LOCUS_H_

#include <fuml/semantics/fwd.h>
#include <fuml/syntax/fwd.h>
#include "utils/FumlObject.h"

namespace fuml::semantics::loci
{
	class Locus : public utils::FumlObject
	{
		public:
			std::string identifier;
			ExecutorPtr executor = nullptr;
			ExecutionFactoryPtr factory = nullptr;
			ExtensionalValueListPtr extensionalValues = std::make_shared<ExtensionalValueList>();

		public:
			void setExecutor(const ExecutorPtr&);
			void setFactory(const ExecutionFactoryPtr&);
			ExtensionalValueListPtr getExtent(const ClassifierPtr);
			void add(const ExtensionalValuePtr&);
			std::string makeIdentifier(const ExtensionalValuePtr&);
			void remove(const ExtensionalValuePtr&);
			Object_Ptr instantiate(const Class_Ptr&);
			bool conforms(
					const ClassifierPtr&,
					const ClassifierPtr&);

	}; // Locus
}

#endif /* FUML_SEMANTICS_LOCI_LOCUS_H_ */
