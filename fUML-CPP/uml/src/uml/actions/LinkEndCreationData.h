/*
 * LinkEndCreationData.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_LINKENDCREATIONDATA_H_
#define UML_ACTIONS_LINKENDCREATIONDATA_H_

#include <uml/actions/LinkEndData.h>

namespace uml::actions
{
	class LinkEndCreationData : public LinkEndData
	{
		public:
			bool isReplaceAll = false;
			InputPinPtr insertAt = nullptr;

		public:
			virtual ~LinkEndCreationData() = default;

			void setIsReplaceAll(bool);
			void setInsertAt(const InputPinPtr&);
	};
// LinkEndCreationData
}

#endif /* UML_ACTIONS_LINKENDCREATIONDATA_H_ */
