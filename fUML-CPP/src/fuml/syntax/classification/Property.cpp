/*
 * Property.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include <fuml/syntax/classification/Property.h>

void Property::setIsReadOnly(bool isReadOnly)
{
	this->isReadOnly = isReadOnly;
} // setIsReadOnly

void Property::setAggregation(
	AggregationKind aggregation)
{
	this->aggregation = aggregation;
	this->isComposite = (aggregation == AggregationKind::composite);
} // setAggregation

void Property::_setAssociation(
	const AssociationPtr& association)
{
	this->association = association;
} // _setAssociation

void Property::_setClass(const std::shared_ptr<Class_>& class_)
{
	this->class_ = class_;
} // _setClass

void Property::_setDatatype(const DataTypePtr& datatype)
{
	this->datatype = datatype;
} // _setDataType

void Property::setIsID(bool isID)
{
	this->isID = isID;
} // setIsID

void Property::_setOwningAssociation(
	const AssociationPtr& association)
{
	this->association = association;
} // _setOwningAssociation

void Property::_setOpposite(const PropertyPtr& opposite)
{
	this->opposite = opposite;
} // _setOpposite


