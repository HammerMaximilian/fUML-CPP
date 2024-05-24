/*
 * CustomActivityExecution.h
 *
 *  Created on: 07.05.2024
 *      Author: Maximilian
 */

#ifndef FUML_EXTENSIONS_ACTIVITIES_CUSTOMACTIVITYEXECUTION_H_
#define FUML_EXTENSIONS_ACTIVITIES_CUSTOMACTIVITYEXECUTION_H_

#include <fuml/semantics/activities/ActivityExecution.h>

namespace fuml::extensions::activities
{
	class CustomActivityExecution : public ActivityExecution
	{
		public:
			virtual ~CustomActivityExecution() = default;

			virtual void execute() override;
	};
} // CustomActivityExecution

#endif /* FUML_EXTENSIONS_ACTIVITIES_CUSTOMACTIVITYEXECUTION_H_ */
