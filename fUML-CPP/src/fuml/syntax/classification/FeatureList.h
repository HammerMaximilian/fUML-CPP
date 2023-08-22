/*
 * FeatureList.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_FEATURELIST_H_
#define FUML_SYNTAX_CLASSIFICATION_FEATURELIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::classification
{
	class Feature;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Feature>> FeatureList;
}

using FeatureList = fuml::syntax::classification::FeatureList;
using FeatureListPtr = std::shared_ptr<FeatureList>;

#endif /* FUML_SYNTAX_CLASSIFICATION_FEATURELIST_H_ */
