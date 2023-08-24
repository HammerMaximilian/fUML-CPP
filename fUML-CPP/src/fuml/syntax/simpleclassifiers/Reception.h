/*
 * Reception.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_RECEPTION_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_RECEPTION_H_

#include <fUML/syntax/classification/BehavioralFeature.h>

namespace fuml::syntax::simpleclassifiers
{
	class Reception : virtual public BehavioralFeature
	{
		public:
			SignalPtr signal = nullptr;

		public:
			virtual ~Reception() = default;
		
			void setSignal(
				const SignalPtr&);
	}; // Reception
}

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_RECEPTION_H_ */
