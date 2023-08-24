/*
 * Feature.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_FEATURE_H_
#define FUML_SYNTAX_CLASSIFICATION_FEATURE_H_

#include <fuml/syntax/classification/RedefinableElement.h>

namespace fuml::syntax::classification
{
	class Feature : virtual public RedefinableElement
	{
		public:
			bool isStatic = false;
			ClassifierListPtr featuringClassifier = std::make_shared<ClassifierList>();

		public:
			virtual ~Feature() = 0;

			void _addFeaturingClassifier(
					const ClassifierPtr&);
	}; // Feature
}

#endif /* FUML_SYNTAX_CLASSIFICATION_FEATURE_H_ */
