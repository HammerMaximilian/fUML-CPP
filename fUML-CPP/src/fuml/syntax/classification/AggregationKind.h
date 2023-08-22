/*
 * AggregationKind.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_AGGREGATIONKIND_H_
#define FUML_SYNTAX_CLASSIFICATION_AGGREGATIONKIND_H_

namespace fuml::syntax::classification
{
	enum class AggregationKind
	{
		none,
		shared,
		composite
	};
}

using AggregationKind = fuml::syntax::classification::AggregationKind;

#endif /* FUML_SYNTAX_CLASSIFICATION_AGGREGATIONKIND_H_ */
