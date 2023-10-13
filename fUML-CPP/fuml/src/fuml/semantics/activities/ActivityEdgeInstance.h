/*
 * ActivityEdgeInstance.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_ACTIVITYEDGEINSTANCE_H_
#define FUML_SEMANTICS_ACTIVITIES_ACTIVITYEDGEINSTANCE_H_

#include <fuml/semantics/fwd.h>
#include <fuml/syntax/fwd.h>
#include <utils/FumlObject.h>

namespace fuml::semantics::activities
{
	class ActivityEdgeInstance : public fuml::FumlObject
	{
		public:
			ActivityEdgePtr edge = nullptr;
			ActivityNodeActivationGroupPtr_w group;
			ActivityNodeActivationPtr source = nullptr;
			ActivityNodeActivationPtr target = nullptr;
			OfferListPtr offers = std::make_shared<OfferList>();

		public:
			virtual ~ActivityEdgeInstance() = default;

			void sendOffer(const TokenListPtr&);
			int countOfferedValues();
			TokenListPtr takeOfferedTokens();
			TokenListPtr takeOfferedTokens(int);
			TokenListPtr getOfferedTokens();
			bool hasOffer();
	};
// ActivityEdgeInstance
}

#endif /* FUML_SEMANTICS_ACTIVITIES_ACTIVITYEDGEINSTANCE_H_ */
