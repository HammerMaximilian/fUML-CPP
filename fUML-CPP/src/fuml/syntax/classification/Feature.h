/*
 * Feature.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_FEATURE_H_
#define FUML_SYNTAX_CLASSIFICATION_FEATURE_H_

#include <fuml/syntax/classification/ClassifierList.h>
#include <fuml/syntax/classification/RedefinableElement.h>
#include <memory>

namespace fuml::syntax::classification
{
	class Feature : virtual public RedefinableElement
	{
		public:
			bool isStatic = false;
			ClassifierListPtr featuringClassifier = std::make_shared<ClassifierList>();

		public:
			~Feature() = 0;

			void _addFeaturingClassifier(
					const ClassifierPtr&);
	}; // Feature
}

using Feature = fuml::syntax::classification::Feature;
using FeaturePtr = std::shared_ptr<Feature>;

#endif /* FUML_SYNTAX_CLASSIFICATION_FEATURE_H_ */
