#pragma once
#include <iostream>
template <typename T, typename S>
class Pair
{
private:
	T key;
	S Value;

public:
	bool operator==(const Pair& pair);
	S getValue(T _key);
	

	T getKey() const;

	Pair(T _key, S _value) : key(_key), Value(_value) {};
	

};

template<typename T, typename S>
inline bool Pair<T, S>::operator==(const Pair & pair)
{
	if (key == pair.key && Value == pair.Value)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<typename T, typename S>
inline S Pair<T, S>::getValue(T _key)
{
	if (this->key == _key)
	{
		return value;
	}
	else
	{
		cout << "Key not found!" << endl;
		return NULL;
	}
}

template<typename T, typename S>
inline T Pair<T, S>::getKey() const
{
	return key;
}






