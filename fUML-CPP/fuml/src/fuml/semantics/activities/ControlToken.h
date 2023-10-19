/*
 * ControlToken.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_CONTROLTOKEN_H_
#define FUML_SEMANTICS_ACTIVITIES_CONTROLTOKEN_H_

#include <fuml/semantics/activities/Token.h>

namespace fuml::semantics::activities
{
	class ControlToken : public Token
	{
		public:
			virtual ~ControlToken() = default;

			virtual bool equals(const TokenPtr&) override;
			virtual TokenPtr copy() override;
			virtual bool isControl() override;
			virtual const ValuePtr& getValue() override;

	};
// ControlToken
}

#endif /* FUML_SEMANTICS_ACTIVITIES_CONTROLTOKEN_H_ */
