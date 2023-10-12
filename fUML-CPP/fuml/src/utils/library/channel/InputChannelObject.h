/*
 * InputChannelObject.h
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_CHANNEL_INPUTCHANNELOBJECT_H_
#define UTILS_LIBRARY_CHANNEL_INPUTCHANNELOBJECT_H_

#include <utils/library/channel/ChannelObject.h>

namespace fuml::library::channel
{
	class InputChannelObject : public ChannelObject
	{
		public:
			InputChannelObject();
			virtual ~InputChannelObject() = 0;

			virtual bool hasMore() = 0;
			virtual ValuePtr read(const std::shared_ptr<fuml::library::common::Status>&) = 0;
			virtual ValuePtr peek(const std::shared_ptr<fuml::library::common::Status>&) = 0;
			virtual void execute(const std::shared_ptr<fuml::library::libraryclass::OperationExecution>&) override;
	};
// InputChannelObject
}

#endif /* UTILS_LIBRARY_CHANNEL_INPUTCHANNELOBJECT_H_ */
