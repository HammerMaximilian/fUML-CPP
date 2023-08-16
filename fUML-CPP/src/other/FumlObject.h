/*
 * FumlObject.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef OTHER_FUMLOBJECT_H_
#define OTHER_FUMLOBJECT_H_

#include <string>

namespace fuml_cpp
{
	class FumlObject
	{
		private:
			std::string xmiId;
			std::string href;
			std::string xmiNamespace;

		public:
			std::string getXmiId() const;
			void setXmiId(std::string);
			std::string getHref() const;
			void setHref(std::string);
			std::string getXmiNamespace() const;
			void setXmiNamespace(std::string);
	};
}

#endif /* OTHER_FUMLOBJECT_H_ */
