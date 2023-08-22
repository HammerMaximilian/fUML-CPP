/*
 * LinkEndDestructionData.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_LINKENDDESTRUCTIONDATA_H_
#define FUML_SYNTAX_ACTIONS_LINKENDDESTRUCTIONDATA_H_

#include <memory>
#include "LinkEndData.h"

namespace fuml::syntax::actions
{
	class InputPin;
}

namespace fuml::syntax::actions
{
	class LinkEndDestructionData : public LinkEndData
	{
		public:
			bool isDestroyDuplicates = false;
			std::shared_ptr<InputPin> destroyAt = nullptr;

		public:
			void setIsDestroyDuplicates(bool);
			void setDestroyAt(const std::shared_ptr<InputPin>&);
	}; // LinkEndDestructionData
}

using LinkEndDestructionData = fuml::syntax::actions::LinkEndDestructionData;
using LinkEndDestructionDataPtr = std::shared_ptr<LinkEndDestructionData>;

#endif /* FUML_SYNTAX_ACTIONS_LINKENDDESTRUCTIONDATA_H_ */
