/*
 * LinkEndData.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_LINKENDDATA_H_
#define FUML_SYNTAX_ACTIONS_LINKENDDATA_H_

#include <memory>
#include <fuml/syntax/commonstructure/Element.h>

namespace fuml::syntax::classification
{
	class Property;
}
namespace fuml::syntax::actions
{
	class InputPin;
}

namespace fuml::syntax::actions
{
	class LinkEndData : public fuml::syntax::commonstructure::Element
	{
		public:
			std::shared_ptr<InputPin> value = nullptr;
			std::shared_ptr<fuml::syntax::classification::Property> end = nullptr;

		public:
			void setEnd(const std::shared_ptr<fuml::syntax::classification::Property>&);
			void setValue(const std::shared_ptr<InputPin>&);
	}; // LinkEndData
}

using LinkEndData = fuml::syntax::actions::LinkEndData;
using LinkEndDataPtr = std::shared_ptr<LinkEndData>;

#endif /* FUML_SYNTAX_ACTIONS_LINKENDDATA_H_ */
