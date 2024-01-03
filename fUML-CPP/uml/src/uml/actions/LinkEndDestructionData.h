/*
 * LinkEndDestructionData.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_LINKENDDESTRUCTIONDATA_H_
#define UML_ACTIONS_LINKENDDESTRUCTIONDATA_H_

#include <uml/actions/LinkEndData.h>

namespace uml::actions
{
	class LinkEndDestructionData : public LinkEndData
	{
		public:
			bool isDestroyDuplicates = false;
			InputPinPtr destroyAt = nullptr;

		public:
			virtual ~LinkEndDestructionData() = default;

			void setIsDestroyDuplicates(bool);
			void setDestroyAt(const InputPinPtr&);
	};
// LinkEndDestructionData
}

#endif /* UML_ACTIONS_LINKENDDESTRUCTIONDATA_H_ */
