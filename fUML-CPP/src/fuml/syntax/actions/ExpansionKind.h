/*
 * ExpansionKind.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIONS_EXPANSIONKIND_H_
#define FUML_SYNTAX_ACTIONS_EXPANSIONKIND_H_

namespace fuml::syntax::actions
{
	enum class ExpansionKind
	{
		parallel,
		iterative,
		stream
	}; // ExpansionKind
}

using ExpansionKind = fuml::syntax::actions::ExpansionKind;

#endif /* FUML_SYNTAX_ACTIONS_EXPANSIONKIND_H_ */
