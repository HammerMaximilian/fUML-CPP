/*
 * LinkEndDestructionData.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_LINKENDDESTRUCTIONDATA_H_
#define FUML_SYNTAX_ACTIONS_LINKENDDESTRUCTIONDATA_H_

#include <fuml/syntax/actions/LinkEndData.h>

namespace fuml::syntax::actions
{
	class LinkEndDestructionData : public LinkEndData
	{
		public:
			bool isDestroyDuplicates = false;
			InputPinPtr destroyAt = nullptr;

		public:
			void setIsDestroyDuplicates(bool);
			void setDestroyAt(const InputPinPtr&);
	}; // LinkEndDestructionData
}

#endif /* FUML_SYNTAX_ACTIONS_LINKENDDESTRUCTIONDATA_H_ */
