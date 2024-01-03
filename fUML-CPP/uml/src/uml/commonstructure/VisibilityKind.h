/*
 * VisibilityKind.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef UML_COMMONSTRUCTURE_VISIBILITYKIND_H_
#define UML_COMMONSTRUCTURE_VISIBILITYKIND_H_

namespace uml::commonstructure
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

#endif /* UML_COMMONSTRUCTURE_VISIBILITYKIND_H_ */
