/*
 * BehavioralFeature.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_BEHAVIORALFEATURE_H_
#define FUML_SYNTAX_CLASSIFICATION_BEHAVIORALFEATURE_H_

#include <fuml/syntax/classification/Feature.h>
#include <fuml/syntax/classification/ParameterList.h>
#include <fuml/syntax/commonbehavior/BehaviorList.h>
#include <fuml/syntax/commonbehavior/CallConcurrencyKind.h>
#include <fuml/syntax/commonstructure/Namespace.h>
#include <fuml/syntax/commonstructure/TypeList.h>
#include <memory>

namespace fuml::syntax::classification
{
	class Parameter;
}
using Parameter = fuml::syntax::classification::Parameter;
using ParameterPtr = std::shared_ptr<Parameter>;

namespace fuml::syntax::commonbehavior
{
	class Behavior;
}
using Behavior = fuml::syntax::commonbehavior::Behavior;
using BehaviorPtr = std::shared_ptr<Behavior>;

namespace fuml::syntax::commonstructure
{
	class Type;
}
using Type = fuml::syntax::commonstructure::Type;
using TypePtr = std::shared_ptr<Type>;

namespace fuml::syntax::classification
{
	class BehavioralFeature :
		virtual public Feature,
		virtual public Namespace
	{
		public:
			ParameterListPtr ownedParameter = std::make_shared<ParameterList>();
			bool isAbstract = false;
			BehaviorListPtr method = std::make_shared<BehaviorList>();
			CallConcurrencyKind concurrency = CallConcurrencyKind::sequential;
			TypeListPtr raisedException = std::make_shared<TypeList>();

		private:
			std::weak_ptr<BehavioralFeature> thisBehavioralFeaturePtr;

		public:
			~BehavioralFeature() = 0;
			virtual void setThisPtr(std::weak_ptr<BehavioralFeature>);

			void setIsAbstract(bool);
			void addOwnedParameter(
				const ParameterPtr&);
			void addMethod(
				const BehaviorPtr&);
			void addRaisedException(const TypePtr&);
	}; // BehavioralFeature
}

using BehavioralFeature = fuml::syntax::classification::BehavioralFeature;
using BehavioralFeaturePtr = std::shared_ptr<BehavioralFeature>;

#endif /* FUML_SYNTAX_CLASSIFICATION_BEHAVIORALFEATURE_H_ */
