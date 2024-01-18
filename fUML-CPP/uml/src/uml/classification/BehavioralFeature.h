/*
 * BehavioralFeature.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_CLASSIFICATION_BEHAVIORALFEATURE_H_
#define UML_CLASSIFICATION_BEHAVIORALFEATURE_H_

#include <uml/classification/Feature.h>
#include <uml/commonbehavior/CallConcurrencyKind.h>
#include <uml/commonstructure/Namespace.h>

namespace uml::classification
{
	class BehavioralFeature : virtual public Feature, virtual public Namespace
	{
		public:
			ParameterListPtr ownedParameter = std::make_shared<ParameterList>();
			bool isAbstract = false;
			BehaviorListPtr method = std::make_shared<BehaviorList>();
			CallConcurrencyKind concurrency = CallConcurrencyKind::sequential;
			TypeListPtr raisedException = std::make_shared<TypeList>();

		private:
			BehavioralFeaturePtr_w thisBehavioralFeaturePtr;

		public:
			virtual ~BehavioralFeature() = 0;
			void setThisBehavioralFeaturePtr(BehavioralFeaturePtr_w);

			void setIsAbstract(bool);
			virtual void addOwnedParameter(const ParameterPtr&);
			virtual void addMethod(const BehaviorPtr&);
			void addRaisedException(const TypePtr&);
	};
// BehavioralFeature
}

#endif /* UML_CLASSIFICATION_BEHAVIORALFEATURE_H_ */
