/*
 * BehavioredClassifier.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIOREDCLASSIFIER_H_
#define FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIOREDCLASSIFIER_H_

#include <fuml/syntax/classification/Classifier.h>

namespace fuml::syntax::commonbehavior
{
	class BehavioredClassifier : public Classifier
	{
		public:
			BehaviorListPtr ownedBehavior = std::make_shared<BehaviorList>();
			BehaviorPtr classifierBehavior = nullptr;

		private:
			std::weak_ptr<BehavioredClassifier> thisBehavioredClassifierPtr;

		public:
			virtual ~BehavioredClassifier() = 0;
			void setThisBehavioredClassifierPtr(std::weak_ptr<BehavioredClassifier>);

			void addOwnedBehavior(const BehaviorPtr& ownedBehavior);
			void setClassifierBehavior(const BehaviorPtr& classifierBehavior);

	};
// BehavioredClassifier
}

#endif /* FUML_SYNTAX_COMMONBEHAVIOR_BEHAVIOREDCLASSIFIER_H_ */
