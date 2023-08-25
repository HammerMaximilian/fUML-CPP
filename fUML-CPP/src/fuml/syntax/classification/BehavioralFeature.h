/*
 * BehavioralFeature.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_BEHAVIORALFEATURE_H_
#define FUML_SYNTAX_CLASSIFICATION_BEHAVIORALFEATURE_H_

#include <fuml/syntax/classification/Feature.h>
#include <fuml/syntax/commonbehavior/CallConcurrencyKind.h>
#include <fuml/syntax/commonstructure/Namespace.h>

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
			virtual ~BehavioralFeature() = 0;
			void setThisBehavioralFeaturePtr(std::weak_ptr<BehavioralFeature>);

			void setIsAbstract(bool);
			virtual void addOwnedParameter(
				const ParameterPtr&);
			virtual void addMethod(
				const BehaviorPtr&);
			void addRaisedException(const TypePtr&);
	}; // BehavioralFeature
}

#endif /* FUML_SYNTAX_CLASSIFICATION_BEHAVIORALFEATURE_H_ */
