/*
 * PackageImportList.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEIMPORTLIST_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEIMPORTLIST_H_

#include <memory>
#include <vector>
#include "PackageImport.h"

namespace fuml::syntax::commonstructure
{
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::PackageImport>> PackageImportList;
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEIMPORTLIST_H_ */
