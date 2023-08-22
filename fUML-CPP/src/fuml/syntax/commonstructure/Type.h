/*
 * Type.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_TYPE_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_TYPE_H_

#include <memory>
#include "Namespace.h"

namespace fuml::syntax::packages
{
	class Package;
}

namespace fuml::syntax::commonstructure
{
	class Type : public fuml::syntax::commonstructure::Namespace
	{
		public:
			std::shared_ptr<fuml::syntax::packages::Package> package =  nullptr;

		public:
			virtual ~Type() = 0;
			void _setPackage(const std::shared_ptr<fuml::syntax::packages::Package>&);
	}; //Type
}

using Type = fuml::syntax::commonstructure::Type;
using TypePtr = std::shared_ptr<Type>;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_TYPE_H_ */
