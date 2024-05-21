#include "StringPair.h"

StringPair::StringPair(const char* key, const char* value):Pair(key)
{
	
	this->value = new char[strlen(value) + 1];
	strcpy(this->value, value);
}

StringPair::StringPair(StringPair const& other):Pair(other)
{
	value = new char[strlen(other.value) + 1];
	strcpy(value,other.value);
}

StringPair& StringPair::operator=(StringPair const& other)
{
	if (this!=&other)
	{
		Pair::operator=(other);
		delete[] value;
		value = new char[strlen(other.value) + 1];
		strcpy(value, other.value);
	}
	return *this;
}

StringPair::~StringPair()
{
	delete[] value;
}
