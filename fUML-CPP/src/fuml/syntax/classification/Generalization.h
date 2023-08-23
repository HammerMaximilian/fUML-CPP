/*
 * Generalization.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_GENERALIZATION_H_
#define FUML_SYNTAX_CLASSIFICATION_GENERALIZATION_H_

#include <memory>
#include <fuml/syntax/commonstructure/Element.h>

namespace fuml::syntax::classification
{
	class Classifier;
}
using Classifier = fuml::syntax::classification::Classifier;
using ClassifierPtr = std::shared_ptr<Classifier>;

namespace fuml::syntax::classification
{
	class Generalization : public Element
	{
		public:
			bool isSubstitutable = true;
			ClassifierPtr specific = nullptr;
			ClassifierPtr general = nullptr;

		public:
			void setIsSubstitutable(bool);
			void setGeneral(const ClassifierPtr&);
			void _setSpecific(const ClassifierPtr&);
	}; // Generalization
}

using Generalization = fuml::syntax::classification::Generalization;
using GeneralizationPtr = std::shared_ptr<Generalization>;

#endif /* FUML_SYNTAX_CLASSIFICATION_GENERALIZATION_H_ */
