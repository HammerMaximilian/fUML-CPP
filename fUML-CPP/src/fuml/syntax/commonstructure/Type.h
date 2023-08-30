/*
 * Type.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_TYPE_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_TYPE_H_

#include <fuml/syntax/commonstructure/Namespace.h>

namespace fuml::syntax::commonstructure
{
	class Type : public Namespace
	{
		public:
			PackagePtr package = nullptr;

		public:
			virtual ~Type() = 0;
			void _setPackage(const PackagePtr&);
	};
//Type
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_TYPE_H_ */
