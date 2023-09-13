/*
 * OutputChannelObject.h
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_CHANNEL_OUTPUTCHANNELOBJECT_H_
#define UTILS_LIBRARY_CHANNEL_OUTPUTCHANNELOBJECT_H_

#include <utils/library/channel/ChannelObject.h>

namespace fuml::library::channel
{
	class OutputChannelObject : public ChannelObject
	{
		public:
			OutputChannelObject();
			virtual ~OutputChannelObject() = 0;

			virtual void write(const ValuePtr&, const std::shared_ptr<fuml::library::common::Status>&) = 0;
			virtual bool isFull() = 0;
			virtual void execute(const std::shared_ptr<fuml::library::libraryclass::OperationExecution>&) override;
	};
// OutputChannelObject
}

#endif /* UTILS_LIBRARY_CHANNEL_OUTPUTCHANNELOBJECT_H_ */
