/*
 * DataStoreNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_DATASTORENODE_H_
#define FUML_SYNTAX_ACTIVITIES_DATASTORENODE_H_

#include <fuml/syntax/activities/CentralBufferNode.h>

namespace fuml::syntax::activities
{
	class DataStoreNode : public CentralBufferNode
	{
		public:
			virtual ~DataStoreNode() = default;
			
	}; // DataStoreNode
}

#endif /* FUML_SYNTAX_ACTIVITIES_DATASTORENODE_H_ */
