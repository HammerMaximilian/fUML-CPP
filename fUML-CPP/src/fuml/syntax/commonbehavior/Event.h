/*
 * Event.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_EVENT_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_EVENT_H_

#include <fuml/syntax/commonstructure/PackageableElement.h>

namespace fuml::syntax::commonbehavior
{
	class Event : public fuml::syntax::commonstructure::PackageableElement
	{
		public:
			virtual ~Event() = default;

	};
// Event
}

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_EVENT_H_ */
