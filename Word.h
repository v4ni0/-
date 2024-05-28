#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdexcept>
#include<cstring>
class Word
{
private:
	char arr[21];
	
public:
	Word() = default;
	Word(const char* word);
	char& operator[](int index);
	Word operator+(char ch);
	Word& operator+=(char ch);
	friend std::ostream& operator<<(std::ostream& os, Word const& word);
};

