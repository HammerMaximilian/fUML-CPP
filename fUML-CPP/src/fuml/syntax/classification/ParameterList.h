/*
 * ParameterList.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_PARAMETERLIST_H_
#define FUML_SYNTAX_CLASSIFICATION_PARAMETERLIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::classification
{
	class Parameter;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Parameter>> ParameterList;
}

#endif /* FUML_SYNTAX_CLASSIFICATION_PARAMETERLIST_H_ */
