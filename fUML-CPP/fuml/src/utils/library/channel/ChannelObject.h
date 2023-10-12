/*
 * ChannelObject.h
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_CHANNEL_CHANNELOBJECT_H_
#define UTILS_LIBRARY_CHANNEL_CHANNELOBJECT_H_

#include <utils/library/libraryclass/ImplementationObject.h>

namespace fuml::library::common
{
	class Status;
}

namespace fuml::library::libraryclass
{
	class OperationExecution;
}

namespace fuml::library::channel
{
	class ChannelObject : public fuml::library::libraryclass::ImplementationObject
	{
		protected:
			std::shared_ptr<fuml::library::common::Status> status = nullptr;

		public:
			ChannelObject();
			virtual ~ChannelObject() = 0;

			virtual std::string getName() = 0;
			virtual void open(const std::shared_ptr<fuml::library::common::Status>&) = 0;
			virtual void close(const std::shared_ptr<fuml::library::common::Status>&) = 0;
			virtual bool isOpen() = 0;
			const std::shared_ptr<fuml::library::common::Status>& getStatus();
			void updateStatus(const std::shared_ptr<fuml::library::libraryclass::OperationExecution>&, const std::shared_ptr<fuml::library::common::Status>&);
			virtual void execute(const std::shared_ptr<fuml::library::libraryclass::OperationExecution>&) override;
	};
// ChannelObject
}

#endif /* UTILS_LIBRARY_CHANNEL_CHANNELOBJECT_H_ */
