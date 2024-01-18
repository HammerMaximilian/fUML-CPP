/*
 * Classifier.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_CLASSIFICATION_CLASSIFIER_H_
#define UML_CLASSIFICATION_CLASSIFIER_H_

#include <uml/commonstructure/Type.h>

namespace uml::classification
{
	class Classifier : public Type
	{
		private:
			bool memberConstructed = false;

		public:
			bool isAbstract = false;
			GeneralizationListPtr generalization = std::make_shared<GeneralizationList>();
			FeatureListPtr feature = std::make_shared<FeatureList>();
			NamedElementListPtr inheritedMember = std::make_shared<NamedElementList>();
			PropertyListPtr attribute = std::make_shared<PropertyList>();
			ClassifierListPtr general = std::make_shared<ClassifierList>();
			bool isFinalSpecialization = false;

		private:
			ClassifierPtr_w thisClassifierPtr;

		public:
			virtual ~Classifier() = 0;
			void setThisClassifierPtr(ClassifierPtr_w);

			virtual void addGeneralization(const GeneralizationPtr&);
			void setIsAbstract(bool);
			virtual NamedElementListPtr inherit(const NamedElementListPtr&);
			NamedElementListPtr inheritableMembers(const ClassifierPtr&);
			bool hasVisibilityOf(const NamedElementPtr&);
			void setIsFinalSpecialization(bool);
			virtual const NamedElementListPtr& member() override;

		protected:
			void addFeature(const FeaturePtr&);
			void addAttribute(const PropertyPtr&);
	};
//Classifier
}

#endif /* UML_CLASSIFICATION_CLASSIFIER_H_ */
