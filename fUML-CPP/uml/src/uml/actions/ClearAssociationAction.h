/*
 * ClearAssociationAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef UML_ACTIONS_CLEARASSOCIATIONACTION_H_
#define UML_ACTIONS_CLEARASSOCIATIONACTION_H_

#include <uml/actions/Action.h>
#include <uml/fwd.h>

namespace uml::actions
{
	class ClearAssociationAction : public Action
	{
		public:
			AssociationPtr association = nullptr;
			InputPinPtr object = nullptr;

		public:
			virtual ~ClearAssociationAction() = default;

			void setObject(const InputPinPtr&);
			void setAssociation(const AssociationPtr&);
	};
// ClearAssociationAction
}

#endif /* UML_ACTIONS_CLEARASSOCIATIONACTION_H_ */
