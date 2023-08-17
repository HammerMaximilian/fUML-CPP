/*
 * BehavioralFeature.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_BEHAVIORALFEATURE_H_
#define FUML_SYNTAX_CLASSIFICATION_BEHAVIORALFEATURE_H_

#include "Feature.h"
#include "fuml/syntax/commonstructure/Namespace.h"
#include "fuml/syntax/commonbehavior/CallConcurrencyKind.h"
#include "ParameterList.h"
#include "fuml/syntax/commonbehavior/BehaviorList.h"
#include "fuml/syntax/commonstructure/TypeList.h"

namespace fuml::syntax::classification
{
	class BehavioralFeature :
		virtual public fuml::syntax::classification::Feature,
		virtual public fuml::syntax::commonstructure::Namespace
	{
		public:
			std::shared_ptr<fuml::syntax::classification::ParameterList> ownedParameter = std::make_shared<fuml::syntax::classification::ParameterList>();
			bool isAbstract = false;
			std::shared_ptr<fuml::syntax::commonbehavior::BehaviorList> method = std::make_shared<fuml::syntax::commonbehavior::BehaviorList>();
			fuml::syntax::commonbehavior::CallConcurrencyKind concurrency = fuml::syntax::commonbehavior::CallConcurrencyKind::sequential;
			std::shared_ptr<fuml::syntax::commonstructure::TypeList> raisedException = std::make_shared<fuml::syntax::commonstructure::TypeList>();

		private:
			std::weak_ptr<fuml::syntax::classification::BehavioralFeature> thisBehavioralFeaturePtr;

		public:
			~BehavioralFeature() = 0;
			virtual void setThisPtr(std::weak_ptr<fuml::syntax::classification::BehavioralFeature>);

			void setIsAbstract(bool);
			void addOwnedParameter(
				const std::shared_ptr<fuml::syntax::classification::Parameter>&);
			void addMethod(
				const std::shared_ptr<fuml::syntax::commonbehavior::Behavior>&);
			void addRaisedException(const std::shared_ptr<fuml::syntax::commonstructure::Type>&);
	}; // BehavioralFeature
}

#endif /* FUML_SYNTAX_CLASSIFICATION_BEHAVIORALFEATURE_H_ */
