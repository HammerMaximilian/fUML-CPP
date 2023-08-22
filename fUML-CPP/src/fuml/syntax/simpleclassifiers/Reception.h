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

namespace fuml::syntax::simpleclassifiers
{
	class Reception : virtual public fuml::syntax::classification::BehavioralFeature
	{
		public:
			std::shared_ptr<fuml::syntax::simpleclassifiers::Signal> signal = nullptr;

		public:
			void setSignal(
				const std::shared_ptr<fuml::syntax::simpleclassifiers::Signal>&);
	}; // Reception
}

using Reception = fuml::syntax::simpleclassifiers::Reception;
using ReceptionPtr = std::shared_ptr<Reception>;

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_RECEPTION_H_ */
