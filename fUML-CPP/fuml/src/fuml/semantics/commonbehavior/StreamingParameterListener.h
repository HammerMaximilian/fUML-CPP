/*
 * StreamingParameterListener.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_STREAMINGPARAMETERLISTENER_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_STREAMINGPARAMETERLISTENER_H_

#include <fuml/semantics/fwd.h>

namespace fuml::semantics::commonbehavior
{
	class StreamingParameterListener
	{
		public:
			virtual ~StreamingParameterListener() = 0;

			virtual void post(const ValueListPtr&) = 0;
			virtual bool isTerminated() = 0;
	};
// StreamingParameterListener
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_STREAMINGPARAMETERLISTENER_H_ */
