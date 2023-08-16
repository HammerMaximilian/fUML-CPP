/*
 * SlotList.h
 *
 *  Created on: 16.08.2023
 *      Author: maha6913
 */

#ifndef FUML_SYNTAX_CLASSIFICATION_SLOTLIST_H_
#define FUML_SYNTAX_CLASSIFICATION_SLOTLIST_H_

#include <memory>
#include <vector>
#include "Slot.h"

namespace fuml::syntax::classification
{
	typedef std::vector<std::shared_ptr<fuml::syntax::classification::Slot>> SlotList;
}

#endif /* FUML_SYNTAX_CLASSIFICATION_SLOTLIST_H_ */
