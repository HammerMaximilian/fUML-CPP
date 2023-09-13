/*
 * TextOutputChannelObject.h
 *
 *  Created on: 13.09.2023
 *      Author: maha6913
 */

#ifndef UTILS_LIBRARY_CHANNEL_TEXTOUTPUTCHANNELOBJECT_H_
#define UTILS_LIBRARY_CHANNEL_TEXTOUTPUTCHANNELOBJECT_H_

#include <utils/library/channel/OutputChannelObject.h>
#include <UMLPrimitiveTypes/unlimitedNatural.h>

namespace fuml::library::channel
{
	class TextOutputChannelObject : public OutputChannelObject
	{
		public:
			TextOutputChannelObject();
			virtual ~TextOutputChannelObject() = 0;

			virtual void writeString(std::string, const std::shared_ptr<fuml::library::common::Status>&) = 0;
			virtual void writeNewLine(const std::shared_ptr<fuml::library::common::Status>&) = 0;
			void writeLine(std::string, const std::shared_ptr<fuml::library::common::Status>&);
			void writeInteger(int, const std::shared_ptr<fuml::library::common::Status>&);
			void writeReal(float, const std::shared_ptr<fuml::library::common::Status>&);
			void writeBoolean(bool, const std::shared_ptr<fuml::library::common::Status>&);
			void writeUnlimitedNatural(UMLPrimitiveTypes::unlimitedNatural, const std::shared_ptr<fuml::library::common::Status>&);
			virtual void execute(const std::shared_ptr<fuml::library::libraryclass::OperationExecution>&) override;
	};
// TextOutputChannelObject
}

#endif /* UTILS_LIBRARY_CHANNEL_TEXTOUTPUTCHANNELOBJECT_H_ */
