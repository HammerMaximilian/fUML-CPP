/*
 * DataStoreNodeActivation.cpp
 *
 *  Created on: 28.08.2023
 *      Author: Maximilian
 */

#include <fuml/semantics/activities/DataStoreNodeActivation.h>

#include <fuml/semantics/activities/Token.h>
#include <fuml/semantics/values/Value.h>

void DataStoreNodeActivation::addToken(
		const TokenPtr& token)
{
	// Add the given token to the data store only if it is unique,
	// that is, if its value is not the same as the value of
	// another token already held in the data store.

	ValuePtr value = token->getValue();

	bool isUnique = true;
	if (value != nullptr) {
		TokenListPtr heldTokens = this->getTokens();
		unsigned int i = 1;
		unsigned int heldTokensSize = heldTokens->size();
		while (isUnique && i <= heldTokensSize) {
			isUnique = !heldTokens->at(i-1)->getValue()->equals(value);
			i = i + 1;
		}
	}

	if (isUnique) {
		ObjectNodeActivation::addToken(token);
	}
}

int DataStoreNodeActivation::removeToken(
		const TokenPtr& token)
{
	// Remove the given token from the data store, but then immediately
	// add a copy back into the data store and offer it (unless the
	// node activation has already been terminated).

	int i = ObjectNodeActivation::removeToken(token);

	if (this->isRunning()) {
		ObjectNodeActivation::addToken(token->copy());
		this->sendUnofferedTokens();
	}

	return i;
}
