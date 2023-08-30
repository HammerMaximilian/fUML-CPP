/*
 * ReclassifyObjectActionActivation.cpp
 *
 *  Created on: 30.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/actions/ReclassifyObjectActionActivation.h>

#include <fuml/syntax/actions/ReclassifyObjectAction.h>
#include <fuml/syntax/structuredclassifiers/Class_.h>
#include <fuml/semantics/structuredclassifiers/Reference.h>
#include <fuml/semantics/structuredclassifiers/Object_.h>
#include <fuml/semantics/structuredclassifiers/Link.h>
#include <fuml/semantics/simpleclassifiers/FeatureValue.h>

void ReclassifyObjectActionActivation::doAction()
{
	// Get the value of the object input pin. If it is not a reference, then
	// do nothing. Otherwise, do the following.
	// Remove all types from the referent object that are in the set of old
	// classifiers but not the set of new classifiers (or just all types
	// that are not new classifiers, if isReplaceAll is true).
	// Remove the feature values from the referent object for all
	// classifiers that are removed.
	// Add all new classifiers as types of the referent object that are not
	// already types.
	// Add feature values to the referent object for the structural
	// features of all added classifiers.
	// Any features that previously had values maintain those values,
	// while new features are initialized as being empty.

	ReclassifyObjectActionPtr action = std::dynamic_pointer_cast<ReclassifyObjectAction>(this->node);
	const ClassifierListPtr& newClassifiers = action->newClassifier;
	const ClassifierListPtr& oldClassifiers = action->oldClassifier;

	const ValuePtr& input = this->takeTokens(action->object)->at(0);

	ReferencePtr reference = std::dynamic_pointer_cast<Reference>(input);

	if (reference) {
		const Object_Ptr& object = reference->referent;
		StructuralFeatureListPtr oldFeatures = object->getStructuralFeatures();

		unsigned int i = 1;
		while (i <= object->types->size()) {
			const Class_Ptr& type = object->types->at(i - 1);

			bool toBeRemoved = true;
			unsigned int j = 1;
			while (toBeRemoved && j <= newClassifiers->size()) {
				toBeRemoved = (type != newClassifiers->at(j - 1));
				j = j + 1;
			}

			if (toBeRemoved & !action->isReplaceAll) {
				bool notInOld = true;
				unsigned int k = 1;
				while (notInOld && k <= oldClassifiers->size()) {
					notInOld = (type != oldClassifiers->at(k - 1));
					k = k + 1;
				}
				toBeRemoved = !notInOld;
			}

			if (toBeRemoved) {
				object->types->erase(object->types->begin() + (i - 1));
			} else {
				i = i + 1;
			}
		}

		for (const ClassifierPtr& classifier : *newClassifiers) {
			bool toBeAdded = true;

			for (const Class_Ptr& type : *(object->types)) {
				toBeAdded = (classifier != type);
				if(!toBeAdded) break;
			}

			if (toBeAdded) {
				object->types->push_back(std::dynamic_pointer_cast<Class_>(classifier));
			}
		}

		FeatureValueListPtr oldFeatureValues = object->getFeatureValues();
		object->featureValues.reset(new FeatureValueList());
		object->addFeatureValues(oldFeatureValues);

		// Destroy links involving association ends that were previously features
		// but no longer have feature values after the reclassification.
		StructuralFeatureListPtr newFeatures = object->getStructuralFeatures();
		for (const StructuralFeaturePtr& feature : *(oldFeatures)) {;
			AssociationPtr association = this->getAssociation(feature);
			if (association != nullptr) {
				if (this->checkForMissingFeature(newFeatures, feature)) {
					LinkListPtr links = this->getMatchingLinks(association, feature, input);
					for (const LinkPtr& link : *links) {
						link->destroy();
					}
				}
			}
		}
	}
} // doAction

bool ReclassifyObjectActionActivation::checkForMissingFeature(
		const StructuralFeatureListPtr& features, const StructuralFeaturePtr& feature)
{
	bool isMissing = true;

	for (const StructuralFeaturePtr& containedFeature : *features) {
		isMissing = containedFeature != feature;
		if(!isMissing) break;
	}

	return isMissing;
} // checkForMissingFeature
