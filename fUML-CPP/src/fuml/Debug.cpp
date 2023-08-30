/*
 * Debug.cpp
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#ifdef NDEBUG
	#define LOG_INFO(a)		/**/
	#define LOG_DEBUG(a)	/**/
	#define LOG_ERROR(a)	/**/
#else
	#define LOG_INFO(a) 		std::cout<<"[\e[0;32mINFO\e[0m]:\t\t"<<a<<std::endl;
	#define LOG_DEBUG(a) 		std::cout<<"[\e[0;34mDEBUG\e[0m]:\t"<<a<<std::endl;
	#define LOG_ERROR(a)		std::cout<<"[\e[0;31mERROR\e[0m]:\t"<<a<<std::endl;
#endif

#include "Debug.h"

#include <iostream>

using namespace utils;

void Debug::println(bool condition, std::string message)
{
	if (condition)
	{
		Debug::println(message);
	}
}

void Debug::println(std::string message)
{
	if (message.length() >= 7 && message.substr(0, 7) == "[event]")
	{
		LOG_INFO(message.substr(8, message.length()));
	}
	else if (message.length() >= 7 && message.substr(0, 7) == "[error]")
	{
		LOG_ERROR(message.substr(8, message.length()));
	}
	else
	{
		LOG_DEBUG(message);
	}
}
