/*
 * LinkEndCreationData.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_LINKENDCREATIONDATA_H_
#define FUML_SYNTAX_ACTIONS_LINKENDCREATIONDATA_H_

#include <fuml/syntax/actions/LinkEndData.h>

namespace fuml::syntax::actions
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

#endif /* FUML_SYNTAX_ACTIONS_LINKENDCREATIONDATA_H_ */
