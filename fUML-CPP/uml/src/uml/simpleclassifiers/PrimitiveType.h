/*
 * PrimitiveType.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_SIMPLECLASSIFIERS_PRIMITIVETYPE_H_
#define UML_SIMPLECLASSIFIERS_PRIMITIVETYPE_H_

#include <uml/simpleclassifiers/DataType.h>

namespace uml::simpleclassifiers
{
	class PrimitiveType : public DataType
	{
		public:
			virtual ~PrimitiveType() = default;

	};
// PrimitiveType
}

#endif /* UML_SIMPLECLASSIFIERS_PRIMITIVETYPE_H_ */
