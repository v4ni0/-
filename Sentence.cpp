#include "Sentence.h"

void Sentence::resize()
{
	capacity *= 2;
	Word* newArr = new Word[capacity];
	for (size_t i = 0; i < size; i++)
	{
		newArr[i] = sentence[i];
	}
	delete[] sentence;
	sentence = newArr;
	newArr = nullptr;
}

Sentence::Sentence():sentence(nullptr),size(0),capacity(1)
{
}

void Sentence::addWord(Word word)
{
	if (size==0)
	{
		sentence = new Word[capacity];
	}
	else
	{
		if (size==capacity)
		{
			resize();
		}
		sentence[size++] = word;
	}
}
