/*
 * Value.cpp
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#include "Value.h"

#include "fuml/syntax/classification/Classifier.h"

using namespace fuml::semantics::values;

Value::~Value()
{
}

bool Value::equals(const std::shared_ptr<fuml::semantics::values::Value>& otherValue)
{
	// Test if this value is equal to otherValue. To be equal, this value
	// must have the same type as otherValue.
	// This operation must be overridden in Value subclasses to check for
	// equality of properties defined in those subclasses.

	std::shared_ptr<fuml::syntax::classification::ClassifierList> myTypes = this->getTypes();
	std::shared_ptr<fuml::syntax::classification::ClassifierList> otherTypes = otherValue->getTypes();

	bool isEqual = true;

	unsigned int myTypesSize = myTypes->size(), otherTypesSize = otherTypes->size();
	if(myTypesSize != otherTypesSize)
	{
		isEqual = false;
	}
	else
	{
		unsigned int i = 1;
		while(isEqual && i <= myTypesSize)
		{
			bool matched = false;
			unsigned int j = 1;
			while(!matched && j <= otherTypesSize)
			{
				matched = (otherTypes->at(j - 1) == myTypes->at(i - 1));
				j = j + 1;
			}
			isEqual = matched;
			i = i + 1;
		}
	}
	return isEqual;
} // equals

std::shared_ptr<fuml::semantics::values::Value> Value::copy()
{
	// Create a new value that is equal to this value.
	// By default, this operation simply creates a new value with empty
	// properties.
	// It must be overridden in each Value subclass to do the superclass
	// copy and then appropriately set properties defined in the subclass.

	return this->new_();
} // copy

bool Value::hasType(const std::shared_ptr<fuml::syntax::classification::Classifier>& type)
{
	// Check if this object has the given classifier as a type.

	std::shared_ptr<fuml::syntax::classification::ClassifierList> types = this->getTypes();

	bool found = false;
	unsigned int i = 1;
	unsigned int typesSize = types->size();
	while (!found && i <= typesSize) {
		found = (types->at(i - 1) == type);
		i = i + 1;
	}

	return found;
} // hasType

bool Value::isInstanceOf(const std::shared_ptr<fuml::syntax::classification::Classifier>& classifier)
{
	// Check if this value has the given classifier as its type
	// or as an ancestor of one of its types.

	std::shared_ptr<fuml::syntax::classification::ClassifierList> types = this->getTypes();

	bool isInstance = this->hasType(classifier);
	unsigned int i = 1;
	unsigned int typesSize = types->size();
	while (!isInstance && i <= typesSize) {
		isInstance = this->checkAllParents(types->at(i-1), classifier);
		i = i + 1;
	}

	return isInstance;
}

bool Value::checkAllParents(const std::shared_ptr<fuml::syntax::classification::Classifier>& type,
		const std::shared_ptr<fuml::syntax::classification::Classifier>& classifier)
{
	// Check if the given classifier matches any of the direct or indirect
	// ancestors of a given type.

	std::shared_ptr<fuml::syntax::classification::ClassifierList> directParents = type->general;
	bool matched = false;
	unsigned int i = 1;
	unsigned int directParentsSize = directParents->size();
	while (!matched && i <= directParentsSize) {
		std::shared_ptr<fuml::syntax::classification::Classifier> directParent = directParents->at(i - 1);
		if (directParent == classifier) {
			matched = true;
		} else {
			matched = this->checkAllParents(directParent, classifier);
		}
		i = i + 1;
	}

	return matched;
}
