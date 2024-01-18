/*
 * ObjectFlow.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIVITIES_OBJECTFLOW_H_
#define UML_ACTIVITIES_OBJECTFLOW_H_

#include <uml/activities/ActivityEdge.h>

namespace uml::activities
{
	class ObjectFlow : public ActivityEdge
	{
		public:
			virtual ~ObjectFlow() = default;
	};
// ObjectFlow
}

#endif /* UML_ACTIVITIES_OBJECTFLOW_H_ */
