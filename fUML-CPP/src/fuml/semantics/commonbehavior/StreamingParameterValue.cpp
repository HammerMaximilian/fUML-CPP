/*
 * StreamingParameterValue.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/commonbehavior/StreamingParameterValue.h>

#include <fuml/semantics/commonbehavior/StreamingParameterListener.h>

void StreamingParameterValue::post(
		const ValueListPtr& values)
{
	// Post the given values to the listener, if there is at
	// least one value.

	this->values = values;

	if (this->listener != nullptr && values->size() > 0) {
		listener->post(values);
	}
} // post

void StreamingParameterValue::register_(
		const StreamingParameterListenerPtr& listener)
{
	// Register a listener for this streaming parameter value.

	this->listener = listener;
} // register_

bool StreamingParameterValue::isTerminated()
{
	// Check if this streaming parameter value either has no listener,
	// or it has a listener that has terminated.

	bool isTerminated = true;
	if (this->listener != nullptr) {
		isTerminated = this->listener->isTerminated();
	}
	return isTerminated;
} // isTerminated
