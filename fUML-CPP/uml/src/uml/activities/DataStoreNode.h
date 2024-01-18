/*
 * DataStoreNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIVITIES_DATASTORENODE_H_
#define UML_ACTIVITIES_DATASTORENODE_H_

#include <uml/activities/CentralBufferNode.h>

namespace uml::activities
{
	class DataStoreNode : public CentralBufferNode
	{
		public:
			virtual ~DataStoreNode() = default;

	};
// DataStoreNode
}

#endif /* UML_ACTIVITIES_DATASTORENODE_H_ */
