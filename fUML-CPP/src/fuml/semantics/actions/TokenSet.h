/*
 * TokenSet.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_TOKENSET_H_
#define FUML_SEMANTICS_ACTIONS_TOKENSET_H_

#include <fuml/semantics/fwd.h>
#include <utils/FumlObject.h>

namespace fuml::semantics::actions
{
	class TokenSet : public utils::FumlObject
	{
		public:
			TokenListPtr tokens = std::make_shared<TokenList>();

		public:
			virtual ~TokenSet() = default;
	};
// TokenSet
}

#endif /* FUML_SEMANTICS_ACTIONS_TOKENSET_H_ */
