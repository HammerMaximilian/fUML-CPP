/*
 * ObjectNode.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIVITIES_OBJECTNODE_H_
#define UML_ACTIVITIES_OBJECTNODE_H_

#include <uml/activities/ActivityNode.h>
#include <uml/commonstructure/TypedElement.h>

namespace uml::activities
{
	class ObjectNode : virtual public ActivityNode, virtual public TypedElement
	{
		public:
			virtual ~ObjectNode() = 0;
	};
// ObjectNode
}

#endif /* UML_ACTIVITIES_OBJECTNODE_H_ */
