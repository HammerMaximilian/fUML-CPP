/*
 * DataStoreNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_DATASTORENODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIVITIES_DATASTORENODEACTIVATION_H_

#include <fuml/semantics/activities/CentralBufferNodeActivation.h>

namespace fuml::semantics::activities
{
	class DataStoreNodeActivation : public CentralBufferNodeActivation
	{
		public:
			virtual ~DataStoreNodeActivation() = default;

			virtual void addToken(const TokenPtr&) override;
			virtual int removeToken(const TokenPtr&) override;

	}; // DataStoreNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIVITIES_DATASTORENODEACTIVATION_H_ */
