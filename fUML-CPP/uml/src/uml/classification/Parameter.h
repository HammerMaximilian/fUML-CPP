/*
 * Parameter.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef UML_CLASSIFICATION_PARAMETER_H_
#define UML_CLASSIFICATION_PARAMETER_H_

#include <uml/commonstructure/MultiplicityElement.h>
#include <uml/commonstructure/TypedElement.h>
#include <uml/classification/ParameterDirectionKind.h>

namespace uml::classification
{
	class Parameter : virtual public MultiplicityElement, virtual public TypedElement
	{
		public:
			ParameterDirectionKind direction = ParameterDirectionKind::in;
			OperationPtr_w operation;
			bool isStream = false;

		public:
			virtual ~Parameter() = default;

			void setDirection(ParameterDirectionKind);
			void setIsStream(bool);
			void _setOperation(const OperationPtr&);
	};
// Parameter
}

#endif /* UML_CLASSIFICATION_PARAMETER_H_ */
