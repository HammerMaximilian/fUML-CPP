/*
 * StructuralFeatureAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/StructuralFeatureAction.h>

using namespace fuml::syntax::actions;

StructuralFeatureAction::~StructuralFeatureAction()
{
}

void StructuralFeatureAction::setStructuralFeature(
	const std::shared_ptr<fuml::syntax::classification::StructuralFeature>& structuralFeature)
{
	this->structuralFeature = structuralFeature;
} // setStructuralFeature

void StructuralFeatureAction::setObject(const std::shared_ptr<InputPin>& object)
{
	Action::addInput(object);
	this->object = object;
} // setObject
