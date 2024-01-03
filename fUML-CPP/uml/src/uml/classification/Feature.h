/*
 * Feature.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_CLASSIFICATION_FEATURE_H_
#define UML_CLASSIFICATION_FEATURE_H_

#include <uml/classification/RedefinableElement.h>

namespace uml::classification
{
	class Feature : virtual public RedefinableElement
	{
		public:
			bool isStatic = false;
			ClassifierListPtr featuringClassifier = std::make_shared<ClassifierList>();

		public:
			virtual ~Feature() = 0;

			void _addFeaturingClassifier(const ClassifierPtr&);
	};
// Feature
}

#endif /* UML_CLASSIFICATION_FEATURE_H_ */
