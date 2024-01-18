/*
 * LinkEndData.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_LINKENDDATA_H_
#define UML_ACTIONS_LINKENDDATA_H_

#include <uml/commonstructure/Element.h>

namespace uml::actions
{
	class LinkEndData : public Element
	{
		public:
			InputPinPtr value = nullptr;
			PropertyPtr end = nullptr;

		public:
			virtual ~LinkEndData() = default;

			void setEnd(const PropertyPtr&);
			void setValue(const InputPinPtr&);
	};
// LinkEndData
}

#endif /* UML_ACTIONS_LINKENDDATA_H_ */
