/*
 * ClassifierList.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_CLASSIFIERLIST_H_
#define FUML_SYNTAX_CLASSIFICATION_CLASSIFIERLIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::classification
{
	class Classifier;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Classifier>> ClassifierList;
}

#endif /* FUML_SYNTAX_CLASSIFICATION_CLASSIFIERLIST_H_ */
