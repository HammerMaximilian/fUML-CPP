/*
 * Signal.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_SIGNAL_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_SIGNAL_H_

#include <fuml/syntax/classification/Classifier.h>

namespace fuml::syntax::simpleclassifiers
{
	class Signal : public Classifier
	{
		public:
			PropertyListPtr ownedAttribute = std::make_shared<PropertyList>();

		private:
			SignalPtr_w thisSignalPtr;

		public:
			virtual ~Signal() = default;
			void setThisSignalPtr(SignalPtr_w);

			void addOwnedAttribute(const PropertyPtr&);
	};
// Signal
}

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_SIGNAL_H_ */
