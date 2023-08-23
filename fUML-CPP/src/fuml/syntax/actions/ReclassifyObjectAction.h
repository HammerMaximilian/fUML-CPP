/*
 * ReclassifyObjectAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_RECLASSIFYOBJECTACTION_H_
#define FUML_SYNTAX_ACTIONS_RECLASSIFYOBJECTACTION_H_

#include <fuml/syntax/actions/Action.h>
#include <fuml/syntax/classification/ClassifierList.h>
#include <memory>

namespace fuml::syntax::actions
{
	class InputPin;
}

namespace fuml::syntax::actions
{
	class ReclassifyObjectAction : public Action
	{
		public:
			bool isReplaceAll = false;
			std::shared_ptr<fuml::syntax::classification::ClassifierList> oldClassifier = std::make_shared<fuml::syntax::classification::ClassifierList>();
			std::shared_ptr<InputPin> object = nullptr;
			std::shared_ptr<fuml::syntax::classification::ClassifierList> newClassifier = std::make_shared<fuml::syntax::classification::ClassifierList>();

		public:
			void setIsReplaceAll(bool);
			void addOldClassifier(const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			void addNewClassifier(const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			void setObject(const std::shared_ptr<InputPin>&);
	}; // ReclassifyObjectAction
}

using ReclassifyObjectAction = fuml::syntax::actions::ReclassifyObjectAction;
using ReclassifyObjectActionPtr = std::shared_ptr<ReclassifyObjectAction>;

#endif /* FUML_SYNTAX_ACTIONS_RECLASSIFYOBJECTACTION_H_ */
