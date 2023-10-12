/*
 * CentralBufferNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_CENTRALBUFFERNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIVITIES_CENTRALBUFFERNODEACTIVATION_H_

#include <fuml/semantics/activities/ObjectNodeActivation.h>

namespace fuml::semantics::activities
{
	class CentralBufferNodeActivation : public ObjectNodeActivation
	{
		public:
			virtual ~CentralBufferNodeActivation() = default;

			virtual void fire(const TokenListPtr&) override;

	};
// CentralBufferNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIVITIES_CENTRALBUFFERNODEACTIVATION_H_ */
