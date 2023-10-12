/*
 * FumlObject.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef UTILS_FUMLOBJECT_H_
#define UTILS_FUMLOBJECT_H_

#include <string>

namespace fuml
{
	class FumlObject
	{
		private:
			std::string xmiId;
			std::string href;
			std::string xmiNamespace;
			size_t internalHash = 0;

		public:
			virtual ~FumlObject() = 0;

			std::string getXmiId() const;
			void setXmiId(std::string);
			std::string getHref() const;
			void setHref(std::string);
			std::string getXmiNamespace() const;
			void setXmiNamespace(std::string);
			size_t hashCode();
	};
}

#endif /* UTILS_FUMLOBJECT_H_ */
