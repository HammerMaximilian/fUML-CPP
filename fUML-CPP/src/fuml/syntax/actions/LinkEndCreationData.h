/*
 * LinkEndCreationData.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_LINKENDCREATIONDATA_H_
#define FUML_SYNTAX_ACTIONS_LINKENDCREATIONDATA_H_

#include <memory>
#include "LinkEndData.h"

namespace fuml::syntax::actions
{
	class InputPin;
}

namespace fuml::syntax::actions
{
	class LinkEndCreationData : public LinkEndData
	{
		public:
			bool isReplaceAll = false;;
			std::shared_ptr<InputPin> insertAt = nullptr;

		public:
			void setIsReplaceAll(bool);
			void setInsertAt(const std::shared_ptr<InputPin>&);
	}; // LinkEndCreationData
}

#endif /* FUML_SYNTAX_ACTIONS_LINKENDCREATIONDATA_H_ */
