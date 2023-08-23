/*
 * ClearAssociationAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_CLEARASSOCIATIONACTION_H_
#define FUML_SYNTAX_ACTIONS_CLEARASSOCIATIONACTION_H_

#include <fuml/syntax/actions/Action.h>
#include <memory>

namespace fuml::syntax::structuredclassifiers
{
	class Association;
}
namespace fuml::syntax::actions
{
	class InputPin;
}

namespace fuml::syntax::actions
{
	class ClearAssociationAction : public Action
	{
		public:
			std::shared_ptr<fuml::syntax::structuredclassifiers::Association> association = nullptr;
			std::shared_ptr<InputPin> object = nullptr;

		public:
			void setObject(const std::shared_ptr<InputPin>&);
			void setAssociation(const std::shared_ptr<fuml::syntax::structuredclassifiers::Association>&);
	}; // ClearAssociationAction
}

using ClearAssociationAction = fuml::syntax::actions::ClearAssociationAction;
using ClearAssociationActionPtr = std::shared_ptr<ClearAssociationAction>;

#endif /* FUML_SYNTAX_ACTIONS_CLEARASSOCIATIONACTION_H_ */
