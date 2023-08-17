/*
 * ElementImportList.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTIMPORTLIST_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTIMPORTLIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::commonstructure
{
	class ElementImport;
	typedef std::vector<std::shared_ptr<fuml::syntax::commonstructure::ElementImport>> ElementImportList;
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_ELEMENTIMPORTLIST_H_ */
