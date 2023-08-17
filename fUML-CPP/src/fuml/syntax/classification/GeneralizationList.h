/*
 * GeneralizationList.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_GENERALIZATIONLIST_H_
#define FUML_SYNTAX_CLASSIFICATION_GENERALIZATIONLIST_H_

namespace fuml::syntax::classification
{
	class Generalization;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Generalization>> GeneralizationList;
}

#endif /* FUML_SYNTAX_CLASSIFICATION_GENERALIZATIONLIST_H_ */
