#pragma once
#include "Pair.h"
class StringPair :
    public Pair<char*>
{
public:
    StringPair(const char* key,const char* value);
    StringPair(StringPair const& other);
    StringPair& operator=(StringPair const& other);
    ~StringPair();
};

