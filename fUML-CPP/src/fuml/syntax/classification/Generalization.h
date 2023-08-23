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

namespace fuml::syntax::classification
{
	class Generalization : public fuml::syntax::commonstructure::Element
	{
		public:
			bool isSubstitutable = true;
			std::shared_ptr<fuml::syntax::classification::Classifier> specific = nullptr;
			std::shared_ptr<fuml::syntax::classification::Classifier> general = nullptr;

		public:
			void setIsSubstitutable(bool);
			void setGeneral(const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			void _setSpecific(const std::shared_ptr<fuml::syntax::classification::Classifier>&);
	}; // Generalization
}

using Generalization = fuml::syntax::classification::Generalization;
using GeneralizationPtr = std::shared_ptr<Generalization>;

#endif /* FUML_SYNTAX_CLASSIFICATION_GENERALIZATION_H_ */
