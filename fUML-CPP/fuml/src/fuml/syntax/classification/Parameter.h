/*
 * Parameter.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_PARAMETER_H_
#define FUML_SYNTAX_CLASSIFICATION_PARAMETER_H_

#include <fuml/syntax/commonstructure/MultiplicityElement.h>
#include <fuml/syntax/commonstructure/TypedElement.h>
#include <fuml/syntax/classification/ParameterDirectionKind.h>

namespace fuml::syntax::classification
{
	class Parameter : virtual public MultiplicityElement, virtual public TypedElement
	{
		public:
			ParameterDirectionKind direction = ParameterDirectionKind::in;
			OperationPtr operation = nullptr;
			bool isStream = false;

		public:
			virtual ~Parameter() = default;

			void setDirection(ParameterDirectionKind);
			void setIsStream(bool);
			void _setOperation(const OperationPtr&);
	};
// Parameter
}

#endif /* FUML_SYNTAX_CLASSIFICATION_PARAMETER_H_ */
