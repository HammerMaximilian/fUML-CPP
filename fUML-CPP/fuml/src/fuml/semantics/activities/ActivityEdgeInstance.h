/*
 * ActivityEdgeInstance.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_ACTIVITYEDGEINSTANCE_H_
#define FUML_SEMANTICS_ACTIVITIES_ACTIVITYEDGEINSTANCE_H_

#include <fuml/semantics/fwd.h>
#include <uml/fwd.h>
#include <utils/UmlObject.h>

namespace fuml::semantics::activities
{
	class ActivityEdgeInstance : public uml::UmlObject
	{
		public:
			ActivityEdgePtr edge = nullptr;
			ActivityNodeActivationGroupPtr_w group;
			ActivityNodeActivationPtr_w source;
			ActivityNodeActivationPtr_w target;
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
