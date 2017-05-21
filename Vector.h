#pragma once


template<typename T>
class Vector
{
private:
	T* info;
	size_t size;
	size_t capacity;

	void resize()
	{
		T* temp = new T[size * 2];
		for (size_t i = 0; i < size; i++)
		{
			temp[i] = info[i];
		}

		delete[] info;
		info = temp;
		capacity = size * 2;
	}

public:

	using predicate = bool(*)(const T&);
	size_t findAll(predicate condition)
	{
		size_t counter = 0;

		for (size_t i; i < size; i++)
		{
			if (cond(info[i]))
			{
				counter++;
			}
		}

		return counter;
	}

	Vector()
	{
		data = nullptr;
		size = capacity = 0;
	}

	Vector(T *newInfo, size_t newSize)
	{
		if (newInfo != nullptr)
		{
			info = new T[size];
			size = capacity = newSize;
			
			for (size_t i; i < newSize; i++)
			{
				Info[i] = newInfo[i];
			}
		}
		else
		{
			data = nullptr;
			size = capacity = 0;
		}
	}

	Vector(const Vector& vector)
	{
		if (vector.info != nullptr)
		{
			info = new T[vector.size];
			size = capacity = vector.size;

			for (size_t i = 0; i < size; i++)
			{
				info[i] = vector.info[i];
			}
		}
		else
		{
			info = nullptr;
			size = capacity = 0;
		}
	}

	Vector& operator=(const Vector& vector)
	{
		if (this == &vector) return *this;
		else
		{
			if (vector.info != nullptr)
			{
				info = new T[vector.size];
				size  capacity = vector.size;

				for (size_t i = 0; i < size; i++)
				{
					info[i] = vector.info[i];
				}
			}
			else
			{
				data = nullptr;
				size = capacity = 0;
			}
		}
		return *this;
	}

	~Vector()
	{
		delete[] info;
		size = capacity = 0;
	}

	void Add_Back(const T& el)
	{
		if ((size + 1) > capacity)
		{
			if (capacity == 0)
			{
				capacity = 1;
			}
			resize();
		}

		data[size] = el;
		size++;
	}

	size_t getSize()
	{
		return size;
	}

	const T& operator[](size_t index) const
	{
		return info[index];
	}
};