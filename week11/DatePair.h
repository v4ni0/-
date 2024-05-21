#pragma once
#include "Pair.h"
class DatePair :
    public Pair<unsigned[3]>
{
public:
    DatePair(const char* key, int day, int month, int year);
    DatePair(DatePair const& other);
    DatePair& operator=(DatePair const& other);
};

