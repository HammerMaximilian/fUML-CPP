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
#include "Property.h"

namespace fuml::syntax::classification
{
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Property>> PropertyList;
}

#endif /* FUML_SYNTAX_CLASSIFICATION_PROPERTYLIST_H_ */
