/*
 * Signal.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_SIMPLECLASSIFIERS_SIGNAL_H_
#define UML_SIMPLECLASSIFIERS_SIGNAL_H_

#include <uml/classification/Classifier.h>

namespace uml::simpleclassifiers
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

#endif /* UML_SIMPLECLASSIFIERS_SIGNAL_H_ */
