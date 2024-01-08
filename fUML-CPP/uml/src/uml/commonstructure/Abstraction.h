/*
 * Abstraction.h
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#ifndef UML_COMMONSTRUCTURE_ABSTRACTION_H_
#define UML_COMMONSTRUCTURE_ABSTRACTION_H_

#include <uml/commonstructure/Dependency.h>

namespace uml::commonstructure
{
    class Abstraction : public Dependency // PSCS-specific
    {
    	public:
    		virtual ~Abstraction() = default;
    }; // Abstraction
}

#endif /* UML_COMMONSTRUCTURE_ABSTRACTION_H_ */
