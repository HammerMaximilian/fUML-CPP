/*
 * PrimitiveType.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_PRIMITIVETYPE_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_PRIMITIVETYPE_H_

#include "DataType.h"

namespace fuml::syntax::simpleclassifiers
{
	class PrimitiveType : public fuml::syntax::simpleclassifiers::DataType
	{
	}; // PrimitiveType
}

using PrimitiveType = fuml::syntax::simpleclassifiers::PrimitiveType;
using PrimitiveTypePtr = std::shared_ptr<PrimitiveType>;

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_PRIMITIVETYPE_H_ */
