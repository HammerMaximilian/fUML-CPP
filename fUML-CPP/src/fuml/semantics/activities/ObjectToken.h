/*
 * ObjectToken.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_OBJECTTOKEN_H_
#define FUML_SEMANTICS_ACTIVITIES_OBJECTTOKEN_H_

#include <fuml/semantics/activities/Token.h>

namespace fuml::semantics::activities
{
	class ObjectToken : public Token
	{
		public:
			ValuePtr value = nullptr;

		private:
			std::weak_ptr<ObjectToken> thisObjectTokenPtr;

		public:
			virtual ~ObjectToken() = default;
			void setThisObjectTokenPtr(std::weak_ptr<ObjectToken>);

			virtual bool equals(const TokenPtr&) override;
			virtual TokenPtr copy() override;
			virtual bool isControl() override;
			virtual ValuePtr getValue() override;
	};
// ObjectToken
}

#endif /* FUML_SEMANTICS_ACTIVITIES_OBJECTTOKEN_H_ */
