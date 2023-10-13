/*
 * Generalization.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_GENERALIZATION_H_
#define FUML_SYNTAX_CLASSIFICATION_GENERALIZATION_H_

#include <fuml/syntax/commonstructure/Element.h>
#include <fuml/syntax/fwd.h>

namespace fuml::syntax::classification
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

#endif /* FUML_SYNTAX_CLASSIFICATION_GENERALIZATION_H_ */
