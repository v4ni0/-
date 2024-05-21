#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <stdexcept>
template <typename T>
class Pair
{
private:
	char* key=nullptr;
protected:
	T value;
public:
	Pair(const char* key);
	Pair(Pair const& other);
	Pair& operator=(Pair const& other);
	void setKey(const char* key);
	char* getKey(const char* key);
	~Pair() { delete[] key; };
};

template<typename T>
inline Pair<T>::Pair(const char* key)
{
	setKey(key);
}

template<typename T>
inline Pair<T>::Pair(Pair const& other)
{
	key = new char[strlen(other.key) + 1];
	strcpy(this->key,other.key);
}

template<typename T>
inline Pair<T>& Pair<T>::operator=(Pair<T> const& other)
{
	if (this!=&other)
	{
		delete[] key;
		key = new char[strlen(other.key) + 1];
		strcpy(this->key, other.key);
	}
	return *this;
	
}

template<typename T>
inline void Pair<T>::setKey(const char* key)
{
	if (key!=nullptr)
	{
		delete[] this->key;
		
	}
	this->key = new char[strlen(key) + 1];
	strcpy(this->key, key);
}

template<typename T>
inline char* Pair<T>::getKey(const char* key)
{
	return key;
}


