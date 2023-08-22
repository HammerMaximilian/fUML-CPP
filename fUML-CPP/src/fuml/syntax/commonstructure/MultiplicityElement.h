/*
 * MultiplicityElement.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_MULTIPLICITYELEMENT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_MULTIPLICITYELEMENT_H_

#include <memory>
#include "Element.h"
#include "UMLPrimitiveTypes/unlimitedNatural.h"

namespace fuml::syntax::values
{
	class ValueSpecification;
}

namespace fuml::syntax::commonstructure
{
	class MultiplicityElement : virtual public fuml::syntax::commonstructure::Element
	{
		public:
			bool isOrdered = false;
			bool isUnique = true;
			UMLPrimitiveTypes::unlimitedNatural upper = 1;
			int lower = 1;
			std::shared_ptr<fuml::syntax::values::ValueSpecification> upperValue = nullptr;
			std::shared_ptr<fuml::syntax::values::ValueSpecification> lowerValue = nullptr;

		public:
			MultiplicityElement();

			void setIsOrdered(bool);
			void setIsUnique(bool);
			void setUpperValue(
				const std::shared_ptr<fuml::syntax::values::ValueSpecification>&);
			void setLowerValue(
				const std::shared_ptr<fuml::syntax::values::ValueSpecification>&);
			void setUpper(int);
			void setLower(int);
	}; // MultiplicityElement
}

using MultiplicityElement = fuml::syntax::commonstructure::MultiplicityElement;
using MultiplicityElementPtr = std::shared_ptr<MultiplicityElement>;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_MULTIPLICITYELEMENT_H_ */
