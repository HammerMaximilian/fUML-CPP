/*
 * StandardInputChannelObject.h
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_CHANNEL_STANDARDINPUTCHANNELOBJECT_H_
#define UTILS_LIBRARY_CHANNEL_STANDARDINPUTCHANNELOBJECT_H_

#include <utils/library/channel/TextInputChannelObject.h>

namespace fuml::library::channel
{
	class StandardInputChannelObject : public TextInputChannelObject
	{
		private:
			bool opened = true;

		public:
			StandardInputChannelObject();
			virtual ~StandardInputChannelObject() = default;

			virtual std::string getName() override;
			virtual void open(const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual void close(const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual bool isOpen() override;
			virtual bool hasMore() override;
			virtual ValuePtr read(const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual ValuePtr peek(const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual std::string readCharacter(const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual std::string peekCharacter(const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual std::string readLine(const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual bool readBoolean(const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual int readInteger(const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual float readReal(const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual UMLPrimitiveTypes::unlimitedNatural readUnlimitedNatural(const std::shared_ptr<fuml::library::common::Status>&) override;
			virtual ValuePtr new_() override;
	};
// StandardInputChannelObject
}

#endif /* UTILS_LIBRARY_CHANNEL_STANDARDINPUTCHANNELOBJECT_H_ */
