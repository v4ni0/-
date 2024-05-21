#include "DatePair.h"

DatePair::DatePair(const char* key, int day, int month, int year):Pair(key)
{
	if (month<0||month>12)
	{
		throw std::exception("Invalid month");
	}
	if (day<0||day>31)
	{
		throw std::exception("Invalid day");
	}
	value[0] = day;
	value[1] = month;
	value[2] = year;

}

DatePair::DatePair(DatePair const& other):Pair(other)
{
	for (size_t i = 0; i < 3; i++)
	{
		value[i] = other.value[i];
	}
}

DatePair& DatePair::operator=(DatePair const& other)
{
	if (this != &other)
	{
		Pair::operator=(other);
		for (size_t i = 0; i < 3; i++)
		{
			value[i] = other.value[i];
		}
	}
	return *this;
}
