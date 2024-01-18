/*
 * RandomChoiceStrategy.cpp
 *
 *  Created on: 08.01.2024
 *      Author: Maximilian
 */

#include <fuml/extensions/loci/RandomChoiceStrategy.h>

#include <random>

using namespace fuml::extensions::loci;

int RandomChoiceStrategy::choose(int size)
{
	// Randomly choose a value between 1 and size.

    static std::random_device device;
    static std::mt19937 randomNumberGenerator(device());

    std::uniform_int_distribution<std::mt19937::result_type> distribution(1, size);

    return distribution(randomNumberGenerator);
} // choose
