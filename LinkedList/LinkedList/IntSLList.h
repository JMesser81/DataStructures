#pragma once
#include "IntSLLNode.h"

class IntSLList
{
public:
	IntSLList() :
		head(0),
		tail(0)
	{}

	~IntSLList();

	bool isEmpty() { return (head == 0); }
	void print();

	void addNode(int value);
	void addNodeToHead(int value);
	
	int pop();
	int popFromHead();

	//void deleteFromTail();
	//void deleteFromHead();

	//bool isInList(int) const;

private:
	IntSLLNode *head;
	IntSLLNode *tail;
};

