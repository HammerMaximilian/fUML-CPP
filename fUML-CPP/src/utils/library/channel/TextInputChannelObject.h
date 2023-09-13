/*
 * TextInputChannelObject.h
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_CHANNEL_TEXTINPUTCHANNELOBJECT_H_
#define UTILS_LIBRARY_CHANNEL_TEXTINPUTCHANNELOBJECT_H_

#include <utils/library/channel/InputChannelObject.h>
#include <UMLPrimitiveTypes/unlimitedNatural.h>

namespace fuml::library::channel
{
	class TextInputChannelObject : public InputChannelObject
	{
		public:
			TextInputChannelObject();
			virtual ~TextInputChannelObject() = 0;

			virtual std::string readCharacter(const std::shared_ptr<fuml::library::common::Status>&) = 0;
			virtual std::string peekCharacter(const std::shared_ptr<fuml::library::common::Status>&) = 0;
			virtual std::string readLine(const std::shared_ptr<fuml::library::common::Status>&) = 0;
			virtual int readInteger(const std::shared_ptr<fuml::library::common::Status>&) = 0;
			virtual float readReal(const std::shared_ptr<fuml::library::common::Status>&) = 0;
			virtual bool readBoolean(const std::shared_ptr<fuml::library::common::Status>&) = 0;
			virtual UMLPrimitiveTypes::unlimitedNatural readUnlimitedNatural(const std::shared_ptr<fuml::library::common::Status>&) = 0;
			virtual void execute(const std::shared_ptr<fuml::library::libraryclass::OperationExecution>&) override;
	};
// TextInputChannelObject
}

#endif /* UTILS_LIBRARY_CHANNEL_TEXTINPUTCHANNELOBJECT_H_ */
