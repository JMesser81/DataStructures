#pragma once
#include <iostream>

#include "DllNode.h"

template <typename T>
class CircularList
{

private:
	DllNode<T> *current;
	DllNode<T> *tail;

public:
	CircularList() :
		current(0),
		tail(0)
	{}

    //~CircularList();

    bool isEmpty() { return (tail == 0); }
	void print();

	//void addNode(int value);
	void addNodeToTail(T value);
	//void addNodeToHead(int value);

	//int pop();
	//int popFromHead();

	//void deleteNode(int value);
	//bool isInList(int) const;
	//{}


};

template<typename T>
inline void CircularList<T>::print()
{
	if (isEmpty()) return;

	DllNode<T>* current = tail->next;
	DllNode<T>* last = tail->next;

	do {
		std::cout << current->data << std::endl;
		current = current->next;
	} while (current != last);
}

template<typename T>
inline void CircularList<T>::addNodeToTail(T value)
{
	if (isEmpty())
	{
		tail = new DllNode<T>(value);
		tail->next = tail;
		tail->prev = tail;
	}
	else
	{
		tail->next = new DllNode<T>(value, tail->next, tail->prev);
		tail->prev = tail->next;
		tail = tail->next;
	}
}
