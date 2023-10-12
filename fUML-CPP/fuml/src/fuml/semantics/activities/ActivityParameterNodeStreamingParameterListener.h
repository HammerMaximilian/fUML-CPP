/*
 * ActivityParameterNodeStreamingParameterListener.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIVITIES_ACTIVITYPARAMETERNODESTREAMINGPARAMETERLISTENER_H_
#define FUML_SEMANTICS_ACTIVITIES_ACTIVITYPARAMETERNODESTREAMINGPARAMETERLISTENER_H_

#include <fuml/semantics/commonbehavior/StreamingParameterListener.h>

namespace fuml::semantics::activities
{
	class ActivityParameterNodeStreamingParameterListener : public StreamingParameterListener
	{
		public:
			ActivityParameterNodeActivationPtr nodeActivation = nullptr;

		public:
			virtual ~ActivityParameterNodeStreamingParameterListener() = default;

			virtual void post(const ValueListPtr&) override;
			virtual bool isTerminated() override;

	};
// ActivityParameterNodeStreamingParameterListener
}

#endif /* FUML_SEMANTICS_ACTIVITIES_ACTIVITYPARAMETERNODESTREAMINGPARAMETERLISTENER_H_ */
