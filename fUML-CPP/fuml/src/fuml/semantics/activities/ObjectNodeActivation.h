/*
 * ObjectNodeActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_OBJECTNODEACTIVATION_H_
#define FUML_SEMANTICS_ACTIVITIES_OBJECTNODEACTIVATION_H_

#include <fuml/semantics/activities/ActivityNodeActivation.h>

namespace fuml::semantics::activities
{
	class ObjectNodeActivation : public ActivityNodeActivation
	{
		public:
			int offeredTokenCount = 0;

		private:
			ObjectNodeActivationPtr_w thisObjectNodeActivationPtr;

		public:
			virtual ~ObjectNodeActivation() = 0;
			void setThisObjectNodeActivationPtr(ObjectNodeActivationPtr_w);

			virtual void run() override;
			virtual void sendOffers(const TokenListPtr&) override;
			virtual void terminate() override;
			virtual void addToken(const TokenPtr&) override;
			virtual int removeToken(const TokenPtr&) override;
			virtual void clearTokens() override;
			int countOfferedValues();
			void sendUnofferedTokens();
			int countUnofferedTokens();
			TokenListPtr getUnofferedTokens();
			TokenListPtr takeUnofferedTokens();

	};
// ObjectNodeActivation
}

#endif /* FUML_SEMANTICS_ACTIVITIES_OBJECTNODEACTIVATION_H_ */
