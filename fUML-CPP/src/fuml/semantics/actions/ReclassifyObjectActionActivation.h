/*
 * ReclassifyObjectActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_RECLASSIFYOBJECTACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_RECLASSIFYOBJECTACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class ReclassifyObjectActionActivation : public ActionActivation
	{
		public:
			virtual ~ReclassifyObjectActionActivation() = default;

			virtual void doAction() override;
			bool checkForMissingFeature(
					const StructuralFeatureListPtr&,
					const StructuralFeaturePtr&);
	}; // ReclassifyObjectActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_RECLASSIFYOBJECTACTIONACTIVATION_H_ */
