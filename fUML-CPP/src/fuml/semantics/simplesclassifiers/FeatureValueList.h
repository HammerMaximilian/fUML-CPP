/*
 * FeatureValueList.h
 *
 *  Created on: 22.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_SIMPLESCLASSIFIERS_FEATUREVALUELIST_H_
#define FUML_SEMANTICS_SIMPLESCLASSIFIERS_FEATUREVALUELIST_H_

#include <memory>
#include <vector>

namespace fuml::semantics::simpleclassifiers
{
	class FeatureValue;
	typedef std::vector<std::shared_ptr<fuml::semantics::simpleclassifiers::FeatureValue>> FeatureValueList;
}

using FeatureValueList = fuml::semantics::simpleclassifiers::FeatureValueList;
using FeatureValueListPtr = std::shared_ptr<FeatureValueList>;

#endif /* FUML_SEMANTICS_SIMPLESCLASSIFIERS_FEATUREVALUELIST_H_ */
