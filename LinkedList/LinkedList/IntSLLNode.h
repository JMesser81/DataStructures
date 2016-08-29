#pragma once
class IntSLLNode
{
public:
	IntSLLNode() :
		data(0),
		next(0)
	{}

	IntSLLNode(int value, IntSLLNode *ptr = 0) :
		data(value),
		next(ptr)
	{}	

	int data; 
	IntSLLNode *next;
};

