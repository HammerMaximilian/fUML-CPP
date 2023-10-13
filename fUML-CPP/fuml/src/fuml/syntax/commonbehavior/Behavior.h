/*
 * Behavior.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIOR_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIOR_H_

#include <fuml/syntax/structuredclassifiers/Class_.h>

namespace fuml::syntax::commonbehavior
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

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIOR_H_ */
