/*
 * PrimitiveType.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_SIMPLECLASSIFIERS_PRIMITIVETYPE_H_
#define FUML_SYNTAX_SIMPLECLASSIFIERS_PRIMITIVETYPE_H_

#include <fuml/syntax/simpleclassifiers/DataType.h>

namespace fuml::syntax::simpleclassifiers
{
	class PrimitiveType : public DataType
	{
		public:
			virtual ~PrimitiveType() = default;
		
	}; // PrimitiveType
}

#endif /* FUML_SYNTAX_SIMPLECLASSIFIERS_PRIMITIVETYPE_H_ */
