/*
 * Token.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_TOKEN_H_
#define FUML_SEMANTICS_ACTIVITIES_TOKEN_H_

#include <fuml/semantics/fwd.h>
#include <utils/FumlObject.h>

namespace fuml::semantics::activities
{
	class Token : public utils::FumlObject
	{
		public:
			ActivityNodeActivationPtr holder = nullptr;

		private:
			std::weak_ptr<Token> thisTokenPtr;

		public:
			virtual ~Token() = 0;
			void setThisTokenPtr(std::weak_ptr<Token>);

			TokenPtr transfer(const ActivityNodeActivationPtr& holder);
			virtual void withdraw();
			virtual bool equals(const TokenPtr&) = 0;
			virtual TokenPtr copy() = 0;
			bool isWithdrawn();
			virtual bool isControl() = 0;
			virtual ValuePtr getValue() = 0;
	}; // Token
}

#endif /* FUML_SEMANTICS_ACTIVITIES_TOKEN_H_ */
