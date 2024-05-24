/*
 * CS_Locus.h
 *
 *  Created on: 20.01.2024
 *      Author: Maximilian
 */

#ifndef PSCS_SEMANTICS_LOCI_CS_LOCUS_H_
#define PSCS_SEMANTICS_LOCI_CS_LOCUS_H_

#include <fuml/semantics/loci/Locus.h>

namespace pscs::semantics::loci
{
	class CS_Locus : public Locus
	{
		public:
			virtual ~CS_Locus() = default;

			virtual Object_Ptr instantiate(const Class_Ptr&) override;
	}; // CS_Locus
}

#endif /* PSCS_SEMANTICS_LOCI_CS_LOCUS_H_ */
