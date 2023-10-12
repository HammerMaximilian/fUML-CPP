/*
 * VisibilityKind.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_VISIBILITYKIND_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_VISIBILITYKIND_H_

namespace fuml::syntax::commonstructure
{
	enum class VisibilityKind
	{
		null_,
		public_,
		private_,
		protected_,
		package
	};
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_VISIBILITYKIND_H_ */
