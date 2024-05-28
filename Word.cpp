#include "Word.h"

Word::Word(const char* word)
{
	if (strlen(word)>20)
	{
		throw std::exception("Word too long");
	}
	strcpy(arr,word);
}

char& Word::operator[](int index)
{
	return arr[index];
}

Word Word::operator+(char ch)
{
	Word word(arr);
	int size = strlen(arr);
	if (size<20)
	{
		word[size++] = ch;
		word[size] = '\0';
	}
	return word;
}

Word& Word::operator+=(char ch)
{
	*this = *this + ch;
	return *this;
}

std::ostream& operator<<(std::ostream& os, Word const& word)
{
	
}
