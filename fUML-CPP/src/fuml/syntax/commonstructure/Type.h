/*
 * Type.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_TYPE_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_TYPE_H_

#include <fuml/syntax/commonstructure/Namespace.h>
#include <memory>

namespace fuml::syntax::packages
{
	class Package;
}
using Package = fuml::syntax::packages::Package;
using PackagePtr = std::shared_ptr<Package>;

namespace fuml::syntax::commonstructure
{
	class Type : public Namespace
	{
		public:
			PackagePtr package =  nullptr;

		public:
			virtual ~Type() = 0;
			void _setPackage(const PackagePtr&);
	}; //Type
}

using Type = fuml::syntax::commonstructure::Type;
using TypePtr = std::shared_ptr<Type>;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_TYPE_H_ */
