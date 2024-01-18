/*
 * Realization.h
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#ifndef UML_COMMONSTRUCTURE_REALIZATION_H_
#define UML_COMMONSTRUCTURE_REALIZATION_H_

#include <uml/commonstructure/Abstraction.h>

namespace uml::commonstructure
{
    class Realization : public Abstraction // PSCS-specific
    {
    	public:
    		virtual ~Realization() = default;
    }; // Realization
}

#endif /* UML_COMMONSTRUCTURE_REALIZATION_H_ */
