/*
 * OperationList.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_OPERATIONLIST_H_
#define FUML_SYNTAX_CLASSIFICATION_OPERATIONLIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::classification
{
	class Operation;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Operation>> OperationList;
}

#endif /* FUML_SYNTAX_CLASSIFICATION_OPERATIONLIST_H_ */
