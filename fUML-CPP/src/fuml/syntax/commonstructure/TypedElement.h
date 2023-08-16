/*
 * TypedElement.h
 *
 *  Created on: 15.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SYNTAX_COMMONSTRUCTURE_TYPEDELEMENT_H_
#define FUML_SYNTAX_COMMONSTRUCTURE_TYPEDELEMENT_H_

#include <memory>
#include "NamedElement.h"

namespace fuml::syntax::commonstructure
{
	class Type;
}

namespace fuml::syntax::commonstructure
{
	class TypedElement : public fuml::syntax::commonstructure::NamedElement {

		public:
			std::shared_ptr<fuml::syntax::commonstructure::Type> type = nullptr;

		public:
			void setType(const std::shared_ptr<fuml::syntax::commonstructure::Type>&);
	}; // TypedElement
}

#endif /* FUML_SYNTAX_COMMONSTRUCTURE_TYPEDELEMENT_H_ */
