/*
 * PackageableElement.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEABLEELEMENT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEABLEELEMENT_H_

#include <fuml/syntax/commonstructure/NamedElement.h>

namespace fuml::syntax::commonstructure
{
	class PackageableElement : virtual public NamedElement
	{
		public:
			PackageableElement();
			virtual ~PackageableElement() = 0;
	};
// PackageableElement
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEABLEELEMENT_H_ */
