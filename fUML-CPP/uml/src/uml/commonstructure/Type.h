/*
 * Type.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef UML_COMMONSTRUCTURE_TYPE_H_
#define UML_COMMONSTRUCTURE_TYPE_H_

#include <uml/commonstructure/Namespace.h>

namespace uml::commonstructure
{
	class Type : public Namespace
	{
		public:
			PackagePtr_w package;

		public:
			virtual ~Type() = 0;
			void _setPackage(const PackagePtr&);
	};
//Type
}

#endif /* UML_COMMONSTRUCTURE_TYPE_H_ */
