#pragma once
#include "Pair.h"

template <typename T, typename S>
class Dictionary
{
private:
	Pair* pairs;
	int size;
	int capacity;
	void resize();

public:
	void addPair(Pair newPair);
	void removePair(Pair remPair);
	int getIndex(Pair remPair);
	S Find(T _key);
};

template<typename T, typename S>
inline void Dictionary<T, S>::resize()
{
	Pair* temp = new Pair[capacity * 2];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = pairs[i];
	}

	capacity = capacity * 2;
	delete[] pairs;

	pairs = temp;
}

template<typename T, typename S>
inline void Dictionary<T, S>::addPair(Pair newPair)
{
	if (size + 1 > capacity)
	{
		resize();
	}

	pairs[size] = newPair;
	size++;
}



template<typename T, typename S>
inline void Dictionary<T, S>::removePair(Pair remPair)
{
	int index = getIndex(remPair);

	for (size_t i = index; i < size - 1; i++)
	{
		pairs[i] = pairs[i + 1];
	}
	size--;
}

template<typename T, typename S>
inline int Dictionary<T, S>::getIndex(Pair remPair)
{
	for (size_t i = 0; i < size; i++)
	{
		if (pairs[i] == remPair)
		{
			return i;
		}
	}
}

template<typename T, typename S>
inline S Dictionary<T, S>::Find(T _key)
{
	for (size_t i = 0; i < size; i++)
	{
		if (pairs[i].getKey() == _key)
		{
			return pairs[i].getValue(_key);
		}
	}
	cout << "Key not found!" << endl;
	return NULL;
}
