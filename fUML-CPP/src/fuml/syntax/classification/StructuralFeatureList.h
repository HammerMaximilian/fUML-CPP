/*
 * StructuralFeatureList.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_STRUCTURALFEATURELIST_H_
#define FUML_SYNTAX_CLASSIFICATION_STRUCTURALFEATURELIST_H_

#include <memory>
#include <vector>

namespace fuml::syntax::classification
{
	class StructuralFeature;
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::StructuralFeature>> StructuralFeatureList;
}

using StructuralFeatureList = fuml::syntax::classification::StructuralFeatureList;
using StructuralFeatureListPtr = std::shared_ptr<StructuralFeatureList>;

#endif /* FUML_SYNTAX_CLASSIFICATION_STRUCTURALFEATURELIST_H_ */
