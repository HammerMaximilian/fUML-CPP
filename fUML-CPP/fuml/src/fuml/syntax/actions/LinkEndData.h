/*
 * LinkEndData.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_LINKENDDATA_H_
#define FUML_SYNTAX_ACTIONS_LINKENDDATA_H_

#include <fuml/syntax/commonstructure/Element.h>

namespace fuml::syntax::actions
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

#endif /* FUML_SYNTAX_ACTIONS_LINKENDDATA_H_ */
