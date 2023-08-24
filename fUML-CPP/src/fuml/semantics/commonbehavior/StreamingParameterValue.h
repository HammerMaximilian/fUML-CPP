/*
 * StreamingParameterValue.h
 *
 *  Created on: 24.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_COMMONBEHAVIOR_STREAMINGPARAMETERVALUE_H_
#define FUML_SEMANTICS_COMMONBEHAVIOR_STREAMINGPARAMETERVALUE_H_

#include <fuml/semantics/commonbehavior/ParameterValue.h>

namespace fuml::semantics::commonbehavior
{
	class StreamingParameterValue : public ParameterValue
	{
		public:
			StreamingParameterListenerPtr listener;

		public:
			virtual ~StreamingParameterValue() = default;
		
			void post(const ValueListPtr&);
			void register_(const StreamingParameterListenerPtr&);
			bool isTerminated();
	}; // StreamingParameterValue
}

#endif /* FUML_SEMANTICS_COMMONBEHAVIOR_STREAMINGPARAMETERVALUE_H_ */
