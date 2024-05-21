#pragma once
#include "DatePair.h"
#include "TimePair.h"
class DateTimePair: DatePair
{
private:
	unsigned time[2];
public:
	DateTimePair(const char* key,int days, int months, int year,int hours, int minutes);
};

