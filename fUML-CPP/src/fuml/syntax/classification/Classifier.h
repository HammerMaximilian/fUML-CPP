/*
 * Classifier.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_CLASSIFIER_H_
#define FUML_SYNTAX_CLASSIFICATION_CLASSIFIER_H_

#include <fuml/syntax/commonstructure/Type.h>

namespace fuml::syntax::classification
{
	class Classifier : public Type
	{
		public:
			bool isAbstract = false;
			GeneralizationListPtr generalization = std::make_shared<GeneralizationList>();
			FeatureListPtr feature = std::make_shared<FeatureList>();
			NamedElementListPtr inheritedMember = std::make_shared<NamedElementList>();
			PropertyListPtr attribute = std::make_shared<PropertyList>();
			ClassifierListPtr general = std::make_shared<ClassifierList>();
			bool isFinalSpecialization = false;

		private:
			std::weak_ptr<Classifier> thisClassifierPtr;

		public:
			virtual ~Classifier() = 0;
			void setThisClassifierPtr(std::weak_ptr<Classifier>);

			virtual void addGeneralization(const GeneralizationPtr&);
			void setIsAbstract(bool);
			virtual NamedElementListPtr inherit(const NamedElementListPtr&);
			NamedElementListPtr inheritableMembers(const ClassifierPtr&);
			bool hasVisibilityOf(const NamedElementPtr&);
			void setIsFinalSpecialization(bool);

		protected:
			void addFeature(const FeaturePtr&);
			void addAttribute(const PropertyPtr&);
	};
//Classifier
}

#endif /* FUML_SYNTAX_CLASSIFICATION_CLASSIFIER_H_ */
