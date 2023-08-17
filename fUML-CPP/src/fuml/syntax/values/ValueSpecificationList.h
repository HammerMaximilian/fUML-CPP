/*
 * ValueSpecificationList.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_VALUES_VALUESPECIFICATIONLIST_H_
#define FUML_SYNTAX_VALUES_VALUESPECIFICATIONLIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::values
{
	class ValueSpecification;
	typedef std::vector<std::shared_ptr<fuml::syntax::values::ValueSpecification>> ValueSpecificationList;
}

#endif /* FUML_SYNTAX_VALUES_VALUESPECIFICATIONLIST_H_ */
