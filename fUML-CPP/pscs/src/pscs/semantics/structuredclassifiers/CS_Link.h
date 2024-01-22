/*
 * CS_Link.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_LINK_H_
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_LINK_H_

#include <fuml/semantics/structuredclassifiers/Link.h>

namespace pscs::semantics::structuredclassifiers
{
	class CS_Link : public Link
	{
		public:
			virtual ~CS_Link() = default;

			bool hasValueForAFeature(const ValuePtr&);
			StructuralFeaturePtr getFeature(const ValuePtr&);
	}; // CS_Link
}



#endif /* PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_LINK_H_ */
