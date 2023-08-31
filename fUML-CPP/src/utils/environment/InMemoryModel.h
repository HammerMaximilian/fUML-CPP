/*
 * InMemoryModel.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_ENVIRONMENT_INMEMORYMODEL_H_
#define UTILS_ENVIRONMENT_INMEMORYMODEL_H_

#include <fuml/syntax/fwd.h>

namespace fuml::environment
{
	class InMemoryModel
	{
		public:
			virtual ~InMemoryModel() = 0;

			virtual BehaviorPtr getMainBehavior() = 0;
	};
}

#endif /* UTILS_ENVIRONMENT_INMEMORYMODEL_H_ */
