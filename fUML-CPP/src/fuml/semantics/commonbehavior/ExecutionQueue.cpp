/*
 * ExecutionQueue.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/ExecutionQueue.h>

#include <fuml/Debug.h>
#include <fuml/semantics/commonbehavior/Execution.h>

ExecutionQueuePtr ExecutionQueue::executionQueue;

bool ExecutionQueue::notStarted()
{
	return ExecutionQueue::executionQueue == nullptr;
}

void ExecutionQueue::start(const ExecutionPtr& execution)
{
	executionQueue.reset(new ExecutionQueue());
	executionQueue->add(execution);
	executionQueue->run();
	executionQueue = nullptr;
}

bool ExecutionQueue::step()
{
	return executionQueue->runNext();
}

void ExecutionQueue::enqueue(const ExecutionPtr& execution)
{
	if (notStarted())
	{
		start(execution);
	}
	else
	{
		fuml::Debug::println("[enqueue] execution = " + execution->toString());
		executionQueue->add(execution);
	}
}

void ExecutionQueue::run()
{
	while (this->runNext());
}

bool ExecutionQueue::runNext()
{
	if (this->queue->size() == 0)
	{
		return false;
	}
	else
	{
		ExecutionPtr execution = this->queue->at(0);
		this->queue->erase(this->queue->begin());
		if (execution->context->getTypes()->size() > 0)
		{
			fuml::Debug::println("[runNext] execution = " + execution->toString());
			execution->execute();
		}
		return true;
	}
}

void ExecutionQueue::add(const ExecutionPtr& execution)
{
	this->queue->push_back(execution);
}
