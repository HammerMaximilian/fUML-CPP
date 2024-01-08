/*
 * Locus.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_LOCI_LOCUS_H_
#define FUML_SEMANTICS_LOCI_LOCUS_H_

#include <fuml/semantics/fwd.h>
#include <uml/fwd.h>
#include <utils/UmlObject.h>

namespace fuml::semantics::loci
{
	class Locus : public uml::UmlObject
	{
		public:
			std::string identifier = std::to_string(this->hashCode());
			ExecutorPtr executor = nullptr;
			ExecutionFactoryPtr factory = nullptr;
			ExtensionalValueListPtr extensionalValues = std::make_shared<ExtensionalValueList>();

		private:
			LocusPtr_w thisLocusPtr;

		public:
			virtual ~Locus() = default;
			void setThisLocusPtr(LocusPtr_w);

			void setExecutor(const ExecutorPtr&);
			void setFactory(const ExecutionFactoryPtr&);
			ExtensionalValueListPtr getExtent(const ClassifierPtr&);
			void add(const ExtensionalValuePtr&);
			std::string makeIdentifier(const ExtensionalValuePtr&);
			void remove(const ExtensionalValuePtr&);
			virtual Object_Ptr instantiate(const Class_Ptr&);
			bool conforms(const ClassifierPtr&, const ClassifierPtr&);

	};
// Locus
}

#endif /* FUML_SEMANTICS_LOCI_LOCUS_H_ */
