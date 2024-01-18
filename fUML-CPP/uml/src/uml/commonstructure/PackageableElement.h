/*
 * PackageableElement.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef UML_COMMONSTRUCTURE_PACKAGEABLEELEMENT_H_
#define UML_COMMONSTRUCTURE_PACKAGEABLEELEMENT_H_

#include <uml/commonstructure/NamedElement.h>

namespace uml::commonstructure
{
	class PackageableElement : virtual public NamedElement
	{
		public:
			PackageableElement();
			virtual ~PackageableElement() = 0;
	};
// PackageableElement
}

#endif /* UML_COMMONSTRUCTURE_PACKAGEABLEELEMENT_H_ */
