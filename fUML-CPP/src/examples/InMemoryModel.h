/*
 * InMemoryModel.h
 *
 *  Created on: 31.08.2023
 *      Author: Maximilian
 */

#ifndef EXAMPLES_INMEMORYMODEL_H_
#define EXAMPLES_INMEMORYMODEL_H_

#include <fuml/syntax/fwd.h>

namespace examples
{
	class InMemoryModel
	{
		public:
			virtual ~InMemoryModel() = 0;

			virtual BehaviorPtr getMainBehavior() = 0;

	};
}


#endif /* EXAMPLES_INMEMORYMODEL_H_ */
