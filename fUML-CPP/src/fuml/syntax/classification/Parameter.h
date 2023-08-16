/*
 * Parameter.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_PARAMETER_H_
#define FUML_SYNTAX_CLASSIFICATION_PARAMETER_H_

#include <memory>
#include "fuml/syntax/commonstructure/MultiplicityElement.h"
#include "fuml/syntax/commonstructure/TypedElement.h"
#include "fuml/syntax/classification/ParameterDirectionKind.h"

namespace fuml::syntax::classification
{
	class Operation;
}

namespace fuml::syntax::classification
{
	class Parameter :
		virtual public fuml::syntax::commonstructure::MultiplicityElement,
		virtual public fuml::syntax::commonstructure::TypedElement
	{
		public:
			fuml::syntax::classification::ParameterDirectionKind direction = fuml::syntax::classification::ParameterDirectionKind::in;
			std::shared_ptr<fuml::syntax::classification::Operation> operation = nullptr;
			bool isStream = false;

		public:
			void setDirection(
					fuml::syntax::classification::ParameterDirectionKind);
			void setIsStream(bool);
			void _setOperation(const std::shared_ptr<fuml::syntax::classification::Operation>&);
	}; // Parameter
}

#endif /* FUML_SYNTAX_CLASSIFICATION_PARAMETER_H_ */
