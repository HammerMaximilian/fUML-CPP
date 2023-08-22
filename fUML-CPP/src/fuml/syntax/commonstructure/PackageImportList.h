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

namespace fuml::syntax::commonstructure
{
	class PackageImport;
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::PackageImport>> PackageImportList;
}

using PackageImportList = fuml::syntax::commonstructure::PackageImportList;
using PackageImportListPtr = std::shared_ptr<PackageImportList>;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_PACKAGEIMPORTLIST_H_ */
