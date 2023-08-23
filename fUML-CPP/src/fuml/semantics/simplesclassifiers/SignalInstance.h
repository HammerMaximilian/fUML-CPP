/*
 * SignalInstance.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLESCLASSIFIERS_SIGNALINSTANCE_H_
#define FUML_SEMANTICS_SIMPLESCLASSIFIERS_SIGNALINSTANCE_H_

#include <fuml/semantics/simplesclassifiers/CompoundValue.h>

namespace fuml::semantics::simpleclassifiers
{
	class SignalInstance : public CompoundValue
	{
		public:
			SignalPtr type = nullptr;

		public:
			virtual ClassifierListPtr getTypes() override;
			virtual ValuePtr copy() override;

		protected:
			virtual ValuePtr new_() override;
	}; // SignalInstance
}

#endif /* FUML_SEMANTICS_SIMPLESCLASSIFIERS_SIGNALINSTANCE_H_ */
