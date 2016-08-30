#pragma once

#include <vector>

template <class T, int capacity=50>
class GenericStack
{
	std::vector<T> elems;	
	int _capacity;

public:
	GenericStack();	

	void clear();
	bool isEmpty() {
		return (elems.size() == 0);
	};

	void push(T elem);
	T pop();
	T peek();
};

template<class T, int capacity>
GenericStack<T, capacity>::GenericStack()
{
	_capacity = capacity;
	elems.reserve(_capacity);

	// TODO: Initialize all elements to "" or 0 or 0.0
}

template<class T, int capacity>
void GenericStack<T, capacity>::clear()
{
	elems.clear();
}

template<class T, int capacity>
void GenericStack<T, capacity>::push(T elem)
{
	elems.push_back(elem);	
}

template<class T, int capacity>
T GenericStack<T, capacity>::pop()
{
	T value = elems.back();
	elems.pop_back();
	return value;
}

template<class T, int capacity>
T GenericStack<T, capacity>::peek()
{
	return elems.back();
}
