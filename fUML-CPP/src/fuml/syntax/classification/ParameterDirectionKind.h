/*
 * ParameterDirectionKind.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_PARAMETERDIRECTIONKIND_H_
#define FUML_SYNTAX_CLASSIFICATION_PARAMETERDIRECTIONKIND_H_

namespace fuml::syntax::classification
{
	enum class ParameterDirectionKind
	{
		in,
		inout,
		out,
		return_
	};
}

using ParameterDirectionKind = fuml::syntax::classification::ParameterDirectionKind;

#endif /* FUML_SYNTAX_CLASSIFICATION_PARAMETERDIRECTIONKIND_H_ */
