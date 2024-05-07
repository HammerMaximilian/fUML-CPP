/*
 * CustomActivityExecution.cpp
 *
 *  Created on: 07.05.2024
 *      Author: Maximilian
 */

#include <fuml/extensions/activities/CustomActivityExecution.h>

#include <fuml/semantics/commonbehavior/ExecutionQueue.h>

using namespace fuml::extensions::activities;

void CustomActivityExecution::execute()
{
	// Custom addition to method ActivityExecution::execute.
	// This is used to always start ExecutionQueue if it is not started yet.

	if(ExecutionQueue::notStarted())
	{
		ExecutionQueue::start(this->thisActivityExecutionPtr.lock());
	}
	else
	{
		ActivityExecution::execute();
	}

} // execute
