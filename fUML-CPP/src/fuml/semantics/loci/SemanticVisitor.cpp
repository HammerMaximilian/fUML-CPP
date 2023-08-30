/*
 * SemanticVisitor.cpp
 *
 *  Created on: 21.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/loci/SemanticVisitor.h>

#include <fuml/Debug.h>

using namespace utils;

SemanticVisitor::~SemanticVisitor()
{
}

void SemanticVisitor::_beginIsolation()
{
	Debug::println("[_beginIsolation] Begin isolation.");
} // _beginIsolation

void SemanticVisitor::_endIsolation()
{
	Debug::println("[_endIsolation] End isolation.");
} // _endIsolation
