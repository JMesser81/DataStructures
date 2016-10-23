#pragma once

template<typename T>
class DllNode
{
public:
	DllNode() :
		data(0), // what if the default constructor for type T isn't a 0?
		next(0),
		prev(0)
	{}

	DllNode(T value, DllNode *next_ptr = 0, DllNode *prev_ptr = 0) :
		data(value),
		next(next_ptr),
		prev(prev_ptr)
	{}

	T data;
	DllNode *next;
	DllNode *prev;
};

