/*
 * ForkedToken.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_FORKEDTOKEN_H_
#define FUML_SEMANTICS_ACTIVITIES_FORKEDTOKEN_H_

#include <fuml/semantics/activities/Token.h>

namespace fuml::semantics::activities
{
	class ForkedToken : public Token
	{
		public:
			TokenPtr baseToken = nullptr;
			int remainingOffersCount = 0;
			bool baseTokenIsWithdrawn = false;

		private:
			ForkedTokenPtr_w thisForkedTokenPtr;

		public:
			virtual ~ForkedToken() = default;
			void setThisForkedTokenPtr(ForkedTokenPtr_w);

			virtual bool isControl() override;
			virtual void withdraw() override;
			virtual TokenPtr copy() override;
			virtual bool equals(const TokenPtr&) override;
			virtual ValuePtr getValue() override;

	};
// ForkedToken
}

#endif /* FUML_SEMANTICS_ACTIVITIES_FORKEDTOKEN_H_ */
