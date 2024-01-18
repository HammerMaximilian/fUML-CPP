/*
 * Behavior.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_COMMONBEHAVIOR_BEHAVIOR_H_
#define UML_COMMONBEHAVIOR_BEHAVIOR_H_

#include <uml/structuredclassifiers/Class_.h>

namespace uml::commonbehavior
{
	class Behavior : public Class_
	{
		public:
			bool isReentrant = true;
			BehavioralFeaturePtr specification = nullptr;
			ParameterListPtr ownedParameter = std::make_shared<ParameterList>();
			BehavioredClassifierPtr_w context;

		public:
			virtual ~Behavior() = 0;

			void addOwnedParameter(const ParameterPtr&);
			virtual void _setContext(const BehavioredClassifierPtr&);
			void _setSpecification(const BehavioralFeaturePtr&);
	};
// Behavior
}

#endif /* UML_COMMONBEHAVIOR_BEHAVIOR_H_ */
