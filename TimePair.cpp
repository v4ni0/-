#include "TimePair.h"

TimePair::TimePair(const char* key, int hours, int minutes):Pair(key)
{
	if (hours<0||hours>24)
	{
		throw std::exception("Invalid hours");
	}
	if (minutes < 0 || minutes>59)
	{
		throw std::exception("Invalid minutes");
	}
	value[0] = hours;
	value[1] = minutes;
}

TimePair::TimePair(TimePair const& other):Pair(other)
{
	
		for (size_t i = 0; i < 2; i++)
		{
			value[i] = other.value[i];
		} 
}

TimePair& TimePair::operator=(TimePair const& other)
{
	if (this != &other)
	{
		Pair::operator=(other);
		for (size_t i = 0; i < 2; i++)
		{
			value[i] = other.value[i];
		}
	}
	return *this;
}
