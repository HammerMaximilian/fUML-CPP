/*
 * Offer.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_OFFER_H_
#define FUML_SEMANTICS_ACTIVITIES_OFFER_H_

#include <fuml/semantics/fwd.h>
#include <utils/UmlObject.h>

namespace fuml::semantics::activities
{
	class Offer : public uml::UmlObject
	{
		public:
			TokenListPtr offeredTokens = std::make_shared<TokenList>();

		public:
			virtual ~Offer() = default;

			int countOfferedValues();
			TokenListPtr getOfferedTokens();
			void removeOfferedValues(int);
			void removeWithdrawnTokens();
			bool hasTokens();
	};
// Offer
}

#endif /* FUML_SEMANTICS_ACTIVITIES_OFFER_H_ */
