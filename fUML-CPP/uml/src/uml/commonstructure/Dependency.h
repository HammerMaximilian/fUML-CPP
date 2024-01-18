/*
 * Dependency.h
 *
 *  Created on: 03.01.2024
 *      Author: Maximilian
 */

#ifndef UML_COMMONSTRUCTURE_DEPENDENCY_H_
#define UML_COMMONSTRUCTURE_DEPENDENCY_H_

#include <uml/commonstructure/PackageableElement.h>

namespace uml::commonstructure
{
    class Dependency : public PackageableElement // PSCS-specific
    {
    	public:
    		NamedElementListPtr client = std::make_shared<NamedElementList>();
    		NamedElementListPtr supplier = std::make_shared<NamedElementList>();

    	private:
    		DependencyPtr_w thisDependencyPtr;

    	public:
    		virtual ~Dependency() = default;
    		void setThisDependencyPtr(DependencyPtr_w);

    		void addClient(const NamedElementPtr&);
    		void addSupplier(const NamedElementPtr&);

    }; // Dependency
}

#endif /* UML_COMMONSTRUCTURE_DEPENDENCY_H_ */
