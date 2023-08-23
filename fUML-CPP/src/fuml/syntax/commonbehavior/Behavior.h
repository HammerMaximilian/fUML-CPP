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
}
namespace fuml::syntax::commonbehavior
{
	class BehavioredClassifier;
}

namespace fuml::syntax::commonbehavior
{
	class Behavior : public fuml::syntax::structuredclassifiers::Class_
	{
		public:
			bool isReentrant = true;
			std::shared_ptr<fuml::syntax::classification::BehavioralFeature> specification = nullptr;
			std::shared_ptr<fuml::syntax::classification::ParameterList> ownedParameter = std::make_shared<fuml::syntax::classification::ParameterList>();
			std::shared_ptr<fuml::syntax::commonbehavior::BehavioredClassifier> context = nullptr;

		public:
			virtual ~Behavior() = 0;

			void addOwnedParameter(
					const std::shared_ptr<fuml::syntax::classification::Parameter>&);
			void _setContext(
					const std::shared_ptr<fuml::syntax::commonbehavior::BehavioredClassifier>&);
			void _setSpecification(
					const std::shared_ptr<fuml::syntax::classification::BehavioralFeature>&);
	}; // Behavior
}

using Behavior = fuml::syntax::commonbehavior::Behavior;
using BehaviorPtr = std::shared_ptr<Behavior>;

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIOR_H_ */
