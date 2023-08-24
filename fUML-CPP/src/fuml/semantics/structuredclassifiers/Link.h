/*
 * Link.h
 *
 *  Created on: 23.08.2023
 *      Author: Maximilian
 */

#ifndef FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_LINK_H_
#define FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_LINK_H_

#include <fuml/semantics/structuredclassifiers/ExtensionalValue.h>

namespace fuml::semantics::structuredclassifiers
{
	class Link : public ExtensionalValue
	{
		public:
			AssociationPtr type = nullptr;

		public:
			virtual ~Link() = default;
		
			virtual void destroy() override;
			virtual ValuePtr copy() override;
			virtual ClassifierListPtr getTypes() override;
			bool isMatchingLink(
					const ExtensionalValuePtr&,
					const PropertyPtr&);
			FeatureValueListPtr getOtherFeatureValues(
					const ExtensionalValueListPtr&,
					const PropertyPtr&);
			void addTo(const LocusPtr&);

		protected:
			virtual ValuePtr new_() override;
	};
}

#endif /* FUML_SEMANTICS_STRUCTUREDCLASSIFIERS_LINK_H_ */
