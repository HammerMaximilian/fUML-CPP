/*
 * StandardOutputChannelObject.h
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_CHANNEL_STANDARDOUTPUTCHANNELOBJECT_H_
#define UTILS_LIBRARY_CHANNEL_STANDARDOUTPUTCHANNELOBJECT_H_

#include <utils/library/channel/TextOutputChannelObject.h>

namespace fuml::library::channel
{
	class StandardOutputChannelObject : public TextOutputChannelObject
	{
		private:
			bool opened = true;

		public:
			StandardOutputChannelObject();
			virtual ~StandardOutputChannelObject() = default;

			virtual std::string getName() override;
			virtual void open(const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual void close(const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual bool isOpen() override;
			virtual bool isFull() override;
			virtual void write(const ValuePtr&, const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual void writeString(std::string, const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual void writeNewLine(const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual ValuePtr new_() override;
	};
// StandardOutputChannelObject
}

#endif /* UTILS_LIBRARY_CHANNEL_STANDARDOUTPUTCHANNELOBJECT_H_ */
