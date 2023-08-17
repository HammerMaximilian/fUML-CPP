/*
 * ExceptionHandlerList.h
 *
 *  Created on: 17.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_ACTIVITIES_EXCEPTIONHANDLERLIST_H_
#define FUML_SYNTAX_ACTIVITIES_EXCEPTIONHANDLERLIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::activities
{
	class ExceptionHandler;
	typedef std::vector<std::shared_ptr<fuml::syntax::activities::ExceptionHandler>> ExceptionHandlerList;
}

#endif /* FUML_SYNTAX_ACTIVITIES_EXCEPTIONHANDLERLIST_H_ */
