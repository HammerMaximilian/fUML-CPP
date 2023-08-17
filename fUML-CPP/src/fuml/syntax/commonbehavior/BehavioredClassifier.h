/*
 * BehavioredClassifier.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIOREDCLASSIFIER_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIOREDCLASSIFIER_H_

#include "fuml/syntax/classification/Classifier.h"
#include "fuml/syntax/commonbehavior/BehaviorList.h"

namespace fuml::syntax::commonbehavior
{
	class BehavioredClassifier : public fuml::syntax::classification::Classifier
	{
		public:
			std::shared_ptr<fuml::syntax::commonbehavior::BehaviorList> ownedBehavior = std::make_shared<fuml::syntax::commonbehavior::BehaviorList>();
			std::shared_ptr<fuml::syntax::commonbehavior::Behavior> classifierBehavior = nullptr;

		private:
			std::weak_ptr<fuml::syntax::commonbehavior::BehavioredClassifier> thisBehavioredClassifierPtr;

		public:
			virtual ~BehavioredClassifier() = 0;
			virtual void setThisPtr(std::weak_ptr<fuml::syntax::commonbehavior::BehavioredClassifier>);

			void addOwnedBehavior(
					const std::shared_ptr<fuml::syntax::commonbehavior::Behavior>& ownedBehavior);
			void setClassifierBehavior(
					const std::shared_ptr<fuml::syntax::commonbehavior::Behavior>& classifierBehavior);

	}; // BehavioredClassifier
}

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIOREDCLASSIFIER_H_ */
