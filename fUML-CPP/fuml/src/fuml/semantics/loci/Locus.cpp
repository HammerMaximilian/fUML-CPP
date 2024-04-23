/*
 * Locus.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/loci/Locus.h>

#include <fuml/semantics/commonbehavior/Execution.h>
#include <fuml/semantics/loci/ExecutionFactory.h>
#include <fuml/semantics/loci/Executor.h>
#include <fuml/semantics/structuredclassifiers/Object_.h>
#include <uml/classification/Classifier.h>
#include <uml/commonbehavior/Behavior.h>
#include <iomanip>

void Locus::setThisLocusPtr(LocusPtr_w thisLocusPtr)
{
	this->thisLocusPtr = thisLocusPtr;
}

void Locus::setExecutor(const ExecutorPtr& executor)
{
	// Set the executor for this locus.

	this->executor = executor;
	this->executor->locus = this->thisLocusPtr.lock();
} // setExecutor

void Locus::setFactory(const ExecutionFactoryPtr& factory)
{
	// Set the factory for this locus.

	this->factory = factory;
	this->factory->locus = this->thisLocusPtr.lock();
} // setFactory

ExtensionalValueListPtr Locus::getExtent(const ClassifierPtr& classifier)
{
	// Return the set of extensional values at this locus which have the
	// given classifier as a type.

	ExtensionalValueListPtr extent(new ExtensionalValueList());

	const ExtensionalValueListPtr& extensionalValues = this->extensionalValues;
	for (const ExtensionalValuePtr& value : *extensionalValues)
	{
		ClassifierListPtr types = value->getTypes();

		bool conforms = false;
		unsigned int j = 1;
		unsigned int typesSize = types->size();
		while (!conforms && j <= typesSize)
		{
			conforms = this->conforms(types->at(j - 1), classifier);
			j = j + 1;
		}

		if (conforms)
		{
			extent->push_back(value);
		}
	}

	return extent;
} // getExtent

void Locus::add(const ExtensionalValuePtr& value)
{
	// Add the given extensional value to this locus

	value->locus = this->thisLocusPtr.lock();
	value->identifier = this->identifier + "#" + this->makeIdentifier(value);
	this->extensionalValues->push_back(value);

} // add

std::string Locus::makeIdentifier(const ExtensionalValuePtr& value)
{
	// Return an identifier for the given (newly created) extensional value.

	// [No normative specification. A conforming implementation may create an identifier
	// an identifier in any way such that all identifiers for extensional values created
	// at any one locus are unique.]

	// Non-normative C++ implementation
	std::stringstream sstream;
	sstream << std::hex << value->hashCode();
	std::string result = sstream.str();
	return result;
} // makeIdentifier

void Locus::remove(const ExtensionalValuePtr& value)
{
	// Remove the given extensional value from this locus.

	value->locus = nullptr;

	bool notFound = true;
	unsigned int i = 1;
	unsigned int extensionalValuesSize = extensionalValues->size();
	while (notFound && i <= extensionalValuesSize)
	{
		if (this->extensionalValues->at(i - 1) == value)
		{
			this->extensionalValues->erase(this->extensionalValues->begin() + (i - 1));
			notFound = false;
		}
		i = i + 1;
	}
} // remove

Object_Ptr Locus::instantiate(const Class_Ptr& type)
{
	// Instantiate the given class at this locus.

	Object_Ptr object = nullptr;

	BehaviorPtr behavior = AS(Behavior, type);

	if (behavior)
	{
		object = this->factory->createExecution(behavior, nullptr);
	}
	else
	{
		object.reset(new Object_());
		object->setThisObject_Ptr(object);

		object->types->push_back(type);
		object->createFeatureValues();
		this->add(object);
	}

	return object;
} // instantiate

bool Locus::conforms(const ClassifierPtr& type, const ClassifierPtr& classifier)
{
	// Test if a type conforms to a given classifier, that is, the type is
	// equal to or a descendant of the classifier.

	bool doesConform = false;

	if (type == classifier)
	{
		doesConform = true;
	}
	else
	{
		unsigned int i = 1;
		unsigned int generalsSize = type->general->size();
		while (!doesConform && i <= generalsSize)
		{
			doesConform = this->conforms(type->general->at(i - 1), classifier);
			i = i + 1;
		}
	}

	return doesConform;

} // conforms
