/*
 * PackageList.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_PACKAGES_PACKAGELIST_H_
#define FUML_SYNTAX_PACKAGES_PACKAGELIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::packages
{
	class Package;
	typedef std::vector<std::shared_ptr<fuml::syntax::packages::Package>> PackageList;
}

using PackageList = fuml::syntax::packages::PackageList;
using PackageListPtr = std::shared_ptr<PackageList>;

#endif /* FUML_SYNTAX_PACKAGES_PACKAGELIST_H_ */
