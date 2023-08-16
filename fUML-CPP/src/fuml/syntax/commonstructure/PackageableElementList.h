/*
 * PackageableElementList.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEABLEELEMENTLIST_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEABLEELEMENTLIST_H_

#include <memory>
#include <vector>
#include "PackageableElement.h"

namespace fuml::syntax::commonstructure
{
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::PackageableElement>> PackageableElementList;
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEABLEELEMENTLIST_H_ */
