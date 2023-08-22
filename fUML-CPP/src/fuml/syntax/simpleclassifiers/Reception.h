/*
 * Reception.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_RECEPTION_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_RECEPTION_H_

#include <memory>
#include "fUML/syntax/classification/BehavioralFeature.h"

namespace fuml::syntax::simpleclassifiers
{
	class Signal;
}
using Signal = fuml::syntax::simpleclassifiers::Signal;
using SignalPtr = std::shared_ptr<Signal>;

namespace fuml::syntax::simpleclassifiers
{
	class Reception : virtual public fuml::syntax::classification::BehavioralFeature
	{
		public:
			SignalPtr signal = nullptr;

		public:
			void setSignal(
				const SignalPtr&);
	}; // Reception
}

using Reception = fuml::syntax::simpleclassifiers::Reception;
using ReceptionPtr = std::shared_ptr<Reception>;

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_RECEPTION_H_ */
