/*
 * LinkActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_LINKACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_LINKACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class LinkActionActivation : public ActionActivation
	{
		public:
			virtual ~LinkActionActivation() = 0;

			bool linkMatchesEndData(const LinkPtr&, const LinkEndDataListPtr&);
			bool endMatchesEndData(const LinkPtr&, const LinkEndDataPtr&);
			AssociationPtr getAssociation();

	};
// LinkActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_LINKACTIONACTIVATION_H_ */
