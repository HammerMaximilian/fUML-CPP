/*
 * Usage.h
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#ifndef UML_COMMONSTRUCTURE_USAGE_H_
#define UML_COMMONSTRUCTURE_USAGE_H_

#include <uml/commonstructure/Dependency.h>

namespace uml::commonstructure
{
    class Usage : public Dependency // PSCS-specific
    {
    	public:
    		virtual ~Usage() = default;
    }; // Usage
}

#endif /* UML_COMMONSTRUCTURE_USAGE_H_ */
