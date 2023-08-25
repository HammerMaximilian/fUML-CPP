/*
 * StructuralFeature.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_STRUCTURALFEATURE_H_
#define FUML_SYNTAX_CLASSIFICATION_STRUCTURALFEATURE_H_

#include <fuml/syntax/classification/Feature.h>
#include <fuml/syntax/commonstructure/MultiplicityElement.h>
#include <fuml/syntax/commonstructure/TypedElement.h>

namespace fuml::syntax::classification
{
	class StructuralFeature :
		virtual public Feature,
		virtual public MultiplicityElement,
		virtual public TypedElement
	{
		public:
			bool isReadOnly = false;

		public:
			virtual ~StructuralFeature() = default;
			
			virtual void setIsReadOnly(bool);
	}; // StructuralFeature
}

#endif /* FUML_SYNTAX_CLASSIFICATION_STRUCTURALFEATURE_H_ */
