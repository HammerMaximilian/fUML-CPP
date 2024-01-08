/*
 * LastChoiceStrategy.cpp
 *
 *  Created on: 08.01.2024
 *      Author: Maximilian
 */

#include <fuml/extensions/loci/LastChoiceStrategy.h>

using namespace fuml::extensions::loci;

int LastChoiceStrategy::choose(int size)
{
    // Always choose size.

    return size;
} // choose
