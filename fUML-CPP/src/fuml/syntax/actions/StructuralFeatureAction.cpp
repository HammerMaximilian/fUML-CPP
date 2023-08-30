/*
 * StructuralFeatureAction.cpp
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/actions/StructuralFeatureAction.h>

StructuralFeatureAction::~StructuralFeatureAction()
{
}

void StructuralFeatureAction::setStructuralFeature(const StructuralFeaturePtr& structuralFeature)
{
	this->structuralFeature = structuralFeature;
} // setStructuralFeature

void StructuralFeatureAction::setObject(const InputPinPtr& object)
{
	Action::addInput(object);
	this->object = object;
} // setObject
