/*
 * Generalization.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_CLASSIFICATION_GENERALIZATION_H_
#define UML_CLASSIFICATION_GENERALIZATION_H_

#include <uml/commonstructure/Element.h>
#include <uml/fwd.h>

namespace uml::classification
{
	class Generalization : public Element
	{
		public:
			bool isSubstitutable = true;
			ClassifierPtr_w specific;
			ClassifierPtr general = nullptr;

		public:
			virtual ~Generalization() = default;

			void setIsSubstitutable(bool);
			void setGeneral(const ClassifierPtr&);
			void _setSpecific(const ClassifierPtr&);
	};
// Generalization
}

#endif /* UML_CLASSIFICATION_GENERALIZATION_H_ */
