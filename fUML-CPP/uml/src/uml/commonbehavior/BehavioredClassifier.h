/*
 * BehavioredClassifier.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_COMMONBEHAVIOR_BEHAVIOREDCLASSIFIER_H_
#define UML_COMMONBEHAVIOR_BEHAVIOREDCLASSIFIER_H_

#include <uml/classification/Classifier.h>

namespace uml::commonbehavior
{
	class BehavioredClassifier : virtual public Classifier
	{
		public:
			BehaviorListPtr ownedBehavior = std::make_shared<BehaviorList>();
			BehaviorPtr classifierBehavior = nullptr;
			InterfaceRealizationListPtr interfaceRealization = std::make_shared<InterfaceRealizationList>(); // PSCS-specific

		private:
			BehavioredClassifierPtr_w thisBehavioredClassifierPtr;

		public:
			virtual ~BehavioredClassifier() = 0;
			void setThisBehavioredClassifierPtr(BehavioredClassifierPtr_w);

			void addOwnedBehavior(const BehaviorPtr& ownedBehavior);
			void setClassifierBehavior(const BehaviorPtr& classifierBehavior);
			void addInterfaceRealization(const InterfaceRealizationPtr& interfaceRealization); // PSCS-specific
	};
// BehavioredClassifier
}

#endif /* UML_COMMONBEHAVIOR_BEHAVIOREDCLASSIFIER_H_ */
