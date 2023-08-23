/*
 * Behavior.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIOR_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIOR_H_

#include <memory>
#include <vector>
#include <fuml/syntax/structuredclassifiers/Class_.h>
#include <fuml/syntax/classification/ParameterList.h>

namespace fuml::syntax::classification
{
	class BehavioralFeature;
	class Parameter;
}
using BehavioralFeature = fuml::syntax::classification::BehavioralFeature;
using BehavioralFeaturePtr = std::shared_ptr<BehavioralFeature>;
using Parameter = fuml::syntax::classification::Parameter;
using ParameterPtr = std::shared_ptr<Parameter>;

namespace fuml::syntax::commonbehavior
{
	class Behavior : public Class_
	{
		public:
			bool isReentrant = true;
			BehavioralFeaturePtr specification = nullptr;
			ParameterListPtr ownedParameter = std::make_shared<ParameterList>();
			BehavioredClassifierPtr context = nullptr;

		public:
			virtual ~Behavior() = 0;

			void addOwnedParameter(
					const ParameterPtr&);
			void _setContext(
					const BehavioredClassifierPtr&);
			void _setSpecification(
					const BehavioralFeaturePtr&);
	}; // Behavior
}

using Behavior = fuml::syntax::commonbehavior::Behavior;
using BehaviorPtr = std::shared_ptr<Behavior>;

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIOR_H_ */
