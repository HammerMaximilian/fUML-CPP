/*
 * Variable.h
 *
 *  Created on: 01.12.2025
 *      Author: maxs
 */

#ifndef UML_ACTIVITIES_VARIABLE_H_
#define UML_ACTIVITIES_VARIABLE_H_

#include <uml/structuredclassifiers/ConnectableElement.h>
#include <uml/commonstructure/MultiplicityElement.h>

namespace uml::activities
{
	class Variable : virtual public ConnectableElement, virtual public MultiplicityElement
	{
		public:
			ActivityPtr_w activityScope;
			StructuredActivityNodePtr_w scope;

		public:
			virtual ~Variable() = default;

			void _setActivityScope(const ActivityPtr&);
			void _setScope(const StructuredActivityNodePtr&);
	};
// Variable
}

#endif /* UML_ACTIVITIES_VARIABLE_H_ */
