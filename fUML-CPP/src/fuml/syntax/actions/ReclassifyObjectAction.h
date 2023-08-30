/*
 * ReclassifyObjectAction.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_RECLASSIFYOBJECTACTION_H_
#define FUML_SYNTAX_ACTIONS_RECLASSIFYOBJECTACTION_H_

#include <fuml/syntax/actions/Action.h>
#include <fuml/syntax/fwd.h>

namespace fuml::syntax::actions
{
	class ReclassifyObjectAction : public Action
	{
		public:
			bool isReplaceAll = false;
			ClassifierListPtr oldClassifier = std::make_shared<ClassifierList>();
			InputPinPtr object = nullptr;
			ClassifierListPtr newClassifier = std::make_shared<ClassifierList>();

		public:
			virtual ~ReclassifyObjectAction() = default;

			void setIsReplaceAll(bool);
			void addOldClassifier(const ClassifierPtr&);
			void addNewClassifier(const ClassifierPtr&);
			void setObject(const InputPinPtr&);
	};
// ReclassifyObjectAction
}

#endif /* FUML_SYNTAX_ACTIONS_RECLASSIFYOBJECTACTION_H_ */
