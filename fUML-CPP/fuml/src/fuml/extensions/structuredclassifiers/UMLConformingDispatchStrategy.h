/*
 * UMLConformingDispatchStrategy.h
 *
 *  Created on: 07.03.2024
 *      Author: maha6913
 */

#ifndef FUML_EXTENSIONS_STRUCTUREDCLASSIFIERS_UMLCONFORMINGDISPATCHSTRATEGY_H_
#define FUML_EXTENSIONS_STRUCTUREDCLASSIFIERS_UMLCONFORMINGDISPATCHSTRATEGY_H_

#include <fuml/extensions/structuredclassifiers/SignatureBasedDispatchStrategy.h>

namespace fuml::extensions::structuredclassifiers
{
	class UMLConformingDispatchStrategy : public SignatureBasedDispatchStrategy
	{
		public:
			virtual bool operationsMatch(const OperationPtr&, const OperationPtr&) override;
			bool isConsistentWith(const OperationPtr&, const OperationPtr&);
			bool conformsTo(const ClassifierPtr&, const ClassifierPtr&);
			bool compatibleWith(const MultiplicityElementPtr&, const MultiplicityElementPtr&);
	}; // UMLConformingDispatchStrategy
}

#endif /* FUML_EXTENSIONS_STRUCTUREDCLASSIFIERS_UMLCONFORMINGDISPATCHSTRATEGY_H_ */
