/*
 * Classifier.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_CLASSIFIER_H_
#define FUML_SYNTAX_CLASSIFICATION_CLASSIFIER_H_

#include <memory>
#include <vector>
#include "fuml/syntax/commonstructure/Type.h"

namespace fuml::syntax::classification
{
	class Generalization;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Generalization>> GeneralizationList;
	class Feature;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Feature>> FeatureList;
	class Property;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Property>> PropertyList;
	class Classifier;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Classifier>> ClassifierList;
}
namespace fuml::syntax::commonstructure
{
	class NamedElement;
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::NamedElement>> NamedElementList;
}

namespace fuml::syntax::classification
{
	class Classifier : public fuml::syntax::commonstructure::Type
	{
		public:
			bool isAbstract = false;
			std::shared_ptr<fuml::syntax::classification::GeneralizationList> generalization = std::make_shared<fuml::syntax::classification::GeneralizationList>();
			std::shared_ptr<fuml::syntax::classification::FeatureList> feature = std::make_shared<fuml::syntax::classification::FeatureList>();
			std::shared_ptr<fuml::syntax::commonstructure::NamedElementList> inheritedMember = std::make_shared<fuml::syntax::commonstructure::NamedElementList>();
			std::shared_ptr<fuml::syntax::classification::PropertyList> attribute = std::make_shared<fuml::syntax::classification::PropertyList>();
			std::shared_ptr<fuml::syntax::classification::ClassifierList> general = std::make_shared<fuml::syntax::classification::ClassifierList>();
			bool isFinalSpecialization = false;

		private:
			std::weak_ptr<fuml::syntax::classification::Classifier> thisClassifierPtr;

		public:
			~Classifier() = 0;
			virtual void setThisPtr(std::weak_ptr<fuml::syntax::classification::Classifier>);

			void addGeneralization(
				const std::shared_ptr<fuml::syntax::classification::Generalization>&);
			void setIsAbstract(bool);
			std::shared_ptr<fuml::syntax::commonstructure::NamedElementList> inherit(
				const std::shared_ptr<fuml::syntax::commonstructure::NamedElementList>&);
			std::shared_ptr<fuml::syntax::commonstructure::NamedElementList> inheritableMembers(
				const std::shared_ptr<fuml::syntax::classification::Classifier>&);
			bool hasVisibilityOf(const std::shared_ptr<fuml::syntax::commonstructure::NamedElement>&);
			void setIsFinalSpecialization(bool);

			protected:
				void addFeature(const std::shared_ptr<fuml::syntax::classification::Feature>&);
				void addAttribute(const std::shared_ptr<fuml::syntax::classification::Property>&);
	}; //Classifier
}

#endif /* FUML_SYNTAX_CLASSIFICATION_CLASSIFIER_H_ */
