/*
 * Feature.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_FEATURE_H_
#define FUML_SYNTAX_CLASSIFICATION_FEATURE_H_

#include <memory>
#include <vector>
#include "RedefinableElement.h"

namespace fuml::syntax::classification
{
	class Classifier;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Classifier>> ClassifierList;
}

namespace fuml::syntax::classification
{
	class Feature : virtual public fuml::syntax::classification::RedefinableElement
	{
		public:
			bool isStatic = false;
			std::shared_ptr<fuml::syntax::classification::ClassifierList> featuringClassifier = std::make_shared<fuml::syntax::classification::ClassifierList>();

		public:
			~Feature() = 0;

			void _addFeaturingClassifier(
					const std::shared_ptr<fuml::syntax::classification::Classifier>&);
	}; // Feature
}

#endif /* FUML_SYNTAX_CLASSIFICATION_FEATURE_H_ */
