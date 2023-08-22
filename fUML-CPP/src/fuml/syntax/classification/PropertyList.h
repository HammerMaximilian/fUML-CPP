/*
 * PropertyList.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_PROPERTYLIST_H_
#define FUML_SYNTAX_CLASSIFICATION_PROPERTYLIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::classification
{
	class Property;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Property>> PropertyList;
}

using PropertyList = fuml::syntax::classification::PropertyList;
using PropertyListPtr = std::shared_ptr<PropertyList>;

#endif /* FUML_SYNTAX_CLASSIFICATION_PROPERTYLIST_H_ */
