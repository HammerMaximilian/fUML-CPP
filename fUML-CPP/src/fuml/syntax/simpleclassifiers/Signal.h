/*
 * Signal.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_SIGNAL_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_SIGNAL_H_

#include <memory>
#include <vector>
#include "fuml/syntax/classification/Classifier.h"
#include "fuml/syntax/classification/PropertyList.h"

namespace fuml::syntax::simpleclassifiers
{
	class Signal : public fuml::syntax::classification::Classifier
	{
		public:
			std::shared_ptr<fuml::syntax::classification::PropertyList> ownedAttribute = std::make_shared<fuml::syntax::classification::PropertyList>();

		private:
			std::weak_ptr<fuml::syntax::simpleclassifiers::Signal> thisSignalPtr;

		public:
			virtual void setThisPtr(std::weak_ptr<fuml::syntax::simpleclassifiers::Signal>);

			void addOwnedAttribute(
				const std::shared_ptr<fuml::syntax::classification::Property>&);
	}; // Signal
}

using Signal = fuml::syntax::simpleclassifiers::Signal;
using SignalPtr = std::shared_ptr<Signal>;

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_SIGNAL_H_ */
