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
			virtual ~MultiplicityElement() = default;

			void setIsOrdered(bool);
			void setIsUnique(bool);
			void setUpperValue(const ValueSpecificationPtr&);
			void setLowerValue(const ValueSpecificationPtr&);
			void setUpper(int);
			void setLower(int);
	};
// MultiplicityElement
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_MULTIPLICITYELEMENT_H_ */
