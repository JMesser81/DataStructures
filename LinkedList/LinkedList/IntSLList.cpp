#include "stdafx.h"
#include "IntSLList.h"
#include <iostream>


IntSLList::~IntSLList()
{
	/*
	IntSLLNode *current = head;
	IntSLLNode *last = 0;

	while (current != tail)
	{
		while (current != tail)
		{
			last = current;
			current = current->next;
		}
		last->next = 0;

		std::cout << "Deleting node with value " << current->data << std::endl;		
		delete current;
				
		tail = last;		
		current = head;
	}

	std::cout << "Deleting node with value " << current->data << std::endl;
	current->next = 0;
	delete current;
	*/

	for (IntSLLNode *p; !isEmpty(); )
	{
		p = head->next;
		std::cout << "Deleting node with value " << head->data << std::endl;
		delete head;
		head = p;
	}

}

void IntSLList::print()
{
	IntSLLNode* current = head;
	while (current != tail)
	{
		std::cout << current->data << std::endl;
		current = current->next;
	}
	std::cout << current->data << std::endl;
}

void IntSLList::addNode(int value)
{
	/*
	IntSLLNode *node = new IntSLLNode(value);
	if (head == 0)
	{
		head = node;
		tail = node;
	}
	else
	{
		IntSLLNode *oldTail = tail;
		oldTail->next = node;
		tail = node;
	}
	*/
	if (tail != 0)
	{
		tail->next = new IntSLLNode(value);
		tail = tail->next;
	}
	else
	{
		head = tail = new IntSLLNode(value);
	}
}

void IntSLList::addNodeToHead(int value)
{
	IntSLLNode *p = head;	
	head = new IntSLLNode(value);

	if (p != 0)
	{
		head->next = p;
	}
}

int IntSLList::pop()
{
	int value = tail->data;

	if (head == tail)
	{
		delete tail;
		head = tail = 0;
	}
	else
	{
		IntSLLNode *p = 0;
		for (p = head; p->next != tail; p = p->next);

		delete tail;
		tail = p;
		tail->next = 0;

	}
	return value;
}

int IntSLList::popFromHead()
{
	if (head == 0)
	{
		// TODO: Throw an error
		return -1;
	}

	int value = head->data;
	delete head;
	head = head->next;

	return value;
}
