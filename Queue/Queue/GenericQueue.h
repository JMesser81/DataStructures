#pragma once
#include "SinglyLinkedList.h"

template <typename T> 
class GenericQueue
{
public:
	GenericQueue() :
		queue()
	{}
	//~GenericQueue();

	//void clear();
	void print();

	bool isEmpty() { return queue.IsEmpty() };
	void enqueue(T input);
	T dequeue();
	//T first();

private:
	SinglyLinkedList<T> queue;
};

template <typename T>
inline void GenericQueue<T>::print()
{
	queue.print();
}

template <typename T>
inline void GenericQueue<T>::enqueue(T input)
{
	queue.addToBack(input);
}

template <typename T>
inline T GenericQueue<T>::dequeue()
{
	return  queue.popFromFront();
}