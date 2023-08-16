/*
 * NamedElement.cpp
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#include "NamedElement.h"

#include "Namespace.h"
#include "VisibilityKind.h"

using namespace fuml::syntax::commonstructure;

NamedElement::~NamedElement()
{
}

void NamedElement::setName(std::string name)
{
	this->name = name;

	if (!name.empty()) {
		if (this->namespace_ == nullptr) {
			this->qualifiedName = name;
		} else if (!this->namespace_->qualifiedName.empty()) {
			this->qualifiedName = this->namespace_->qualifiedName + "::" + name;
		}
	}
} // setName

void NamedElement::setVisibility(
	fuml::syntax::commonstructure::VisibilityKind visibility)
{
	this->visibility = visibility;
} // setVisibility

void NamedElement::_setNamespace(
		const std::shared_ptr<fuml::syntax::commonstructure::Namespace>& namespace_)
{
	this->namespace_ = namespace_;

	if (!this->name.empty()) {
		if (this->namespace_ == nullptr) {
			this->qualifiedName = name;
		} else if (!this->namespace_->qualifiedName.empty()) {
			this->qualifiedName = this->namespace_->qualifiedName + "::" + name;
		}
	}
} // _setNamespace
