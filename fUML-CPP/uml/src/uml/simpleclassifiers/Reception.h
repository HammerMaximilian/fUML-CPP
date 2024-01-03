/*
 * Reception.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_SIMPLECLASSIFIERS_RECEPTION_H_
#define UML_SIMPLECLASSIFIERS_RECEPTION_H_

#include <uml/classification/BehavioralFeature.h>

namespace uml::simpleclassifiers
{
	class Reception : virtual public BehavioralFeature
	{
		public:
			SignalPtr signal = nullptr;

		public:
			virtual ~Reception() = default;

			void setSignal(const SignalPtr&);
	};
// Reception
}

#endif /* UML_SIMPLECLASSIFIERS_RECEPTION_H_ */
