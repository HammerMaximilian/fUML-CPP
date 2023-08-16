/*
 * RedefinableElementList.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_REDEFINABLEELEMENTLIST_H_
#define FUML_SYNTAX_CLASSIFICATION_REDEFINABLEELEMENTLIST_H_

#include <memory>
#include <vector>
#include "RedefinableElement.h"

namespace fuml::syntax::classification
{
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::RedefinableElement>> RedefinableElementList;
}

#endif /* FUML_SYNTAX_CLASSIFICATION_REDEFINABLEELEMENTLIST_H_ */
