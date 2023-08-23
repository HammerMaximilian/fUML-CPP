/*
 * MultiplicityElement.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_MULTIPLICITYELEMENT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_MULTIPLICITYELEMENT_H_

#include <fuml/syntax/commonstructure/Element.h>
#include <UMLPrimitiveTypes/unlimitedNatural.h>
#include <memory>

namespace fuml::syntax::values
{
	class ValueSpecification;
}
using ValueSpecification = fuml::syntax::values::ValueSpecification;
using ValueSpecificationPtr = std::shared_ptr<ValueSpecification>;

namespace fuml::syntax::commonstructure
{
	class MultiplicityElement : virtual public Element
	{
		public:
			bool isOrdered = false;
			bool isUnique = true;
			UMLPrimitiveTypes::unlimitedNatural upper = 1;
			int lower = 1;
			ValueSpecificationPtr upperValue = nullptr;
			ValueSpecificationPtr lowerValue = nullptr;

		public:
			MultiplicityElement();

			void setIsOrdered(bool);
			void setIsUnique(bool);
			void setUpperValue(
				const ValueSpecificationPtr&);
			void setLowerValue(
				const ValueSpecificationPtr&);
			void setUpper(int);
			void setLower(int);
	}; // MultiplicityElement
}

using MultiplicityElement = fuml::syntax::commonstructure::MultiplicityElement;
using MultiplicityElementPtr = std::shared_ptr<MultiplicityElement>;

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_MULTIPLICITYELEMENT_H_ */
