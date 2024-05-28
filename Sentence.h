#pragma once
#include "Word.h"
class Sentence
{
private:
	Word* sentence;
	int size;
	int capacity;
	void resize();
public:
	Sentence();
	void addWord(Word word);
	friend std::ostream& operator<<(std::ostream& os, Sentence const& sentence);
};

