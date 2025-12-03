/*
 * ActivityExecutionExtension.h
 *
 *  Created on: 02.12.2025
 *      Author: maxs
 */

#ifndef FUML_EXTENSIONS_ACTIVITIES_ACTIVITYEXECUTIONEXTENSION_H_
#define FUML_EXTENSIONS_ACTIVITIES_ACTIVITYEXECUTIONEXTENSION_H_

#include <fuml/extensions/activities/CustomActivityExecution.h>
#include <fuml/extensions/fwd.h>

namespace fuml::extensions::activities
{
	class ActivityExecutionExtension : public CustomActivityExecution
	{
		public:
			VariableValueListPtr variableValues = std::make_shared<VariableValueList>();

		public:
			virtual ~ActivityExecutionExtension() = default;

			virtual void execute() override;
			void createVariableValues();
			VariableValueListPtr getVariableValues();
	};
// ActivityExecutionExtension
}

#endif /* FUML_EXTENSIONS_ACTIVITIES_ACTIVITYEXECUTIONEXTENSION_H_ */
