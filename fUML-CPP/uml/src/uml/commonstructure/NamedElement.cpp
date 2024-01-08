/*
 * NamedElement.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include <uml/commonstructure/NamedElement.h>
#include <uml/commonstructure/Namespace.h>

NamedElement::~NamedElement()
{
}

void NamedElement::setName(std::string name)
{
	this->name = name;

	if (!name.empty())
	{
		NamespacePtr namespace_ = this->namespace_.lock();

		if (namespace_ == nullptr)
		{
			this->qualifiedName = name;
		}
		else if (!namespace_->qualifiedName.empty())
		{
			this->qualifiedName = namespace_->qualifiedName + "::" + name;
		}
	}
} // setName

void NamedElement::setVisibility(VisibilityKind visibility)
{
	this->visibility = visibility;
} // setVisibility

void NamedElement::_setNamespace(const NamespacePtr& namespace_)
{
	this->namespace_ = namespace_;

	if (!this->name.empty())
	{
		if (namespace_ == nullptr)
		{
			this->qualifiedName = name;
		}
		else if (!namespace_->qualifiedName.empty())
		{
			this->qualifiedName = namespace_->qualifiedName + "::" + name;
		}
	}
} // _setNamespace

void NamedElement::addClientDependency(const DependencyPtr& clientDependency)
{
	this->clientDependency->push_back(clientDependency);
}
