/*
 * ExtensionalValue.h
 *
 *  Created on: 23.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_EXTENSIONALVALUE_H_
#define FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_EXTENSIONALVALUE_H_

#include <fuml/semantics/simplesclassifiers/CompoundValue.h>

namespace fuml::semantics::structuredclassifiers
{
	class ExtensionalValue : public CompoundValue
	{
		public:
			std::string identifier = "";
			LocusPtr locus = nullptr;

		public:
			virtual ~ExtensionalValue() = 0;

			virtual void destroy();
			virtual ValuePtr copy() override;
			virtual std::string toString() override;

	}; // ExtensionalValue
}

#endif /* FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_EXTENSIONALVALUE_H_ */
