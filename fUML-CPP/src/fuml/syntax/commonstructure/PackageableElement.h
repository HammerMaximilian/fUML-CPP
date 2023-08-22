/*
 * PackageableElement.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEABLEELEMENT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEABLEELEMENT_H_

#include <fuml/syntax/commonstructure/NamedElement.h>
#include <memory>

namespace fuml::syntax::commonstructure
{
	class PackageableElement : virtual public fuml::syntax::commonstructure::NamedElement
	{
		public:
			PackageableElement();
			virtual ~PackageableElement() = 0;
	};
}

using PackageableElement = fuml::syntax::commonstructure::PackageableElement;
using PackageableElementPtr = std::shared_ptr<PackageableElement>;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEABLEELEMENT_H_ */
