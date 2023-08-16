/*
 * Property.cpp
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#include "Property.h"

using namespace fuml::syntax::classification;

void Property::setIsReadOnly(bool isReadOnly)
{
	this->isReadOnly = isReadOnly;
} // setIsReadOnly

void Property::setAggregation(
	fuml::syntax::classification::AggregationKind aggregation)
{
	this->aggregation = aggregation;
	this->isComposite = (aggregation == fuml::syntax::classification::AggregationKind::composite);
} // setAggregation

void Property::_setAssociation(
	const std::shared_ptr<fuml::syntax::structuredclassifiers::Association>& association)
{
	this->association = association;
} // _setAssociation

void Property::_setClass(const std::shared_ptr<fuml::syntax::structuredclassifiers::Class_>& class_)
{
	this->class_ = class_;
} // _setClass

void Property::_setDatatype(const std::shared_ptr<fuml::syntax::simpleclassifiers::DataType>& datatype)
{
	this->datatype = datatype;
} // _setDataType

void Property::setIsID(bool isID)
{
	this->isID = isID;
} // setIsID

void Property::_setOwningAssociation(
	const std::shared_ptr<fuml::syntax::structuredclassifiers::Association>& association)
{
	this->association = association;
} // _setOwningAssociation

void Property::_setOpposite(const std::shared_ptr<fuml::syntax::classification::Property>& opposite)
{
	this->opposite = opposite;
} // _setOpposite


