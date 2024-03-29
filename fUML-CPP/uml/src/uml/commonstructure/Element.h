/*
 * Element.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef UML_COMMONSTRUCTURE_ELEMENT_H_
#define UML_COMMONSTRUCTURE_ELEMENT_H_

#include <uml/fwd.h>
#include <utils/UmlObject.h>

namespace uml::commonstructure
{
	class Element : public uml::UmlObject
	{
		public:
			ElementListPtr ownedElement = std::make_shared<ElementList>();
			ElementPtr_w owner;
			CommentListPtr ownedComment = std::make_shared<CommentList>();
			StereotypeListPtr appliedStereotype = std::make_shared<StereotypeList>();

		private:
			ElementPtr_w thisElementPtr;

		public:
			virtual ~Element() = 0;
			void setThisElementPtr(ElementPtr_w);
			void applyStereotype(const StereotypePtr&); // // PSCS-specific, Stereotypes are required in PSCS
			void unapplyStereotype(const StereotypePtr&); // PSCS-specific, Stereotypes are required in PSCS

		protected:
			void addOwnedElement(const ElementPtr& ownedElement);
	};
// Element
}

#endif /* UML_COMMONSTRUCTURE_ELEMENT_H_ */
