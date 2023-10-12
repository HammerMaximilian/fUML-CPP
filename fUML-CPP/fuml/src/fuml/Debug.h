/*
 * Debug.h
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_DEBUG_H_
#define FUML_DEBUG_H_

#include <string>

namespace fuml
{
	class Debug
	{
		public:
			static void println(bool, std::string);
			static void println(std::string);
	};
}

#endif /* FUML_DEBUG_H_ */
