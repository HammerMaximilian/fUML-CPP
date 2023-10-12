/*
 * DestroyObjectActionActivation.h
 *
 *  Created on: 25.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SEMANTICS_ACTIONS_DESTROYOBJECTACTIONACTIVATION_H_
#define FUML_SEMANTICS_ACTIONS_DESTROYOBJECTACTIONACTIVATION_H_

#include <fuml/semantics/actions/ActionActivation.h>

namespace fuml::semantics::actions
{
	class DestroyObjectActionActivation : public ActionActivation
	{
		public:
			virtual ~DestroyObjectActionActivation() = default;

			virtual void doAction() override;
			void destroyObject(const ValuePtr&, bool, bool);
			ValuePtr getCompositeValue(const ReferencePtr&, const LinkPtr&);

	};
// DestroyObjectActionActivation
}

#endif /* FUML_SEMANTICS_ACTIONS_DESTROYOBJECTACTIONACTIVATION_H_ */
