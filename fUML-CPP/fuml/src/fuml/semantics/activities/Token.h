/*
 * Token.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_TOKEN_H_
#define FUML_SEMANTICS_ACTIVITIES_TOKEN_H_

#include <fuml/semantics/fwd.h>
#include <utils/UmlObject.h>

namespace fuml::semantics::activities
{
	class Token : public uml::UmlObject
	{
		public:
			ActivityNodeActivationPtr_w holder;

		private:
			TokenPtr_w thisTokenPtr;
			bool _isWithdrawn = false;

		public:
			virtual ~Token() = 0;
			void setThisTokenPtr(TokenPtr_w);

			TokenPtr transfer(const ActivityNodeActivationPtr& holder);
			virtual void withdraw();
			virtual bool equals(const TokenPtr&) = 0;
			virtual TokenPtr copy() = 0;
			bool isWithdrawn();
			virtual bool isControl() = 0;
			virtual const ValuePtr& getValue() = 0;
	};
// Token
}

#endif /* FUML_SEMANTICS_ACTIVITIES_TOKEN_H_ */
