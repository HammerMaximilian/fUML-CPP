/*
 * Classifier.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_CLASSIFIER_H_
#define FUML_SYNTAX_CLASSIFICATION_CLASSIFIER_H_

#include <fuml/syntax/classification/ClassifierList.h>
#include <fuml/syntax/classification/FeatureList.h>
#include <fuml/syntax/classification/GeneralizationList.h>
#include <fuml/syntax/classification/PropertyList.h>
#include <fuml/syntax/commonstructure/NamedElementList.h>
#include <fuml/syntax/commonstructure/Type.h>
#include <memory>

namespace fuml::syntax::classification
{
	class Feature;
	class Generalization;
	class Property;
}
using Feature = fuml::syntax::classification::Feature;
using FeaturePtr = std::shared_ptr<Feature>;
using Generalization = fuml::syntax::classification::Generalization;
using GeneralizationPtr = std::shared_ptr<Generalization>;
using Property = fuml::syntax::classification::Property;
using PropertyPtr = std::shared_ptr<Property>;

namespace fuml::syntax::classification
{
	class Classifier : public Type
	{
		public:
			using ClassifierPtr = std::shared_ptr<Classifier>;

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
			~Classifier() = 0;
			virtual void setThisPtr(std::weak_ptr<Classifier>);

			void addGeneralization(
				const GeneralizationPtr&);
			void setIsAbstract(bool);
			NamedElementListPtr inherit(
				const NamedElementListPtr&);
			NamedElementListPtr inheritableMembers(
				const ClassifierPtr&);
			bool hasVisibilityOf(const NamedElementPtr&);
			void setIsFinalSpecialization(bool);

			protected:
				void addFeature(const FeaturePtr&);
				void addAttribute(const PropertyPtr&);
	}; //Classifier
}

using Classifier = fuml::syntax::classification::Classifier;
using ClassifierPtr = std::shared_ptr<Classifier>;

#endif /* FUML_SYNTAX_CLASSIFICATION_CLASSIFIER_H_ */
