#pragma once
#include "Pair.h"

class TimePair :
    public Pair<unsigned[2]>
{
public:
    TimePair(const char* key,int hours, int minutes);
    TimePair(TimePair const& other);
    TimePair& operator=(TimePair const& other);
};

