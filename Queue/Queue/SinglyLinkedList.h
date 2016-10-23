#pragma once

#include <iostream>

template <typename T>
struct ListElement
{
	T data;
	ListElement *next;
	ListElement *prev;

	ListElement() :
		data(0),
		next(0),
		prev(0)
	{}

	ListElement(T value) :
		data(value),
		next(0),
		prev(0)
	{}
};

template <typename T>
class SinglyLinkedList
{
private:
	ListElement<T> *front;
	ListElement<T> *back;

public:
	SinglyLinkedList() :
		front(0),
		back(0)
	{}

	bool isEmpty() { return (back == 0); }
	void print();

	void addToBack(T element);
	T popFromFront();
};

template <typename T>
inline void SinglyLinkedList<T>::print()
{
	if (isEmpty()) return;

	ListElement<T> *current = back;
	do {
		std::cout << current->data << " ";
		current = current->next;
	} while (current != back);	
	
	std::cout << std::endl;
}

template <typename T>
inline void SinglyLinkedList<T>::addToBack(T element)
{
	// 1
	// 2 1
	// 3 2 1

	if (isEmpty())
	{
		back = new ListElement<T>(element);
		front = back;			
	}
	else
	{
		ListElement<T> *last = new ListElement<T>(element);
		back->prev = last;
		last->next = back;
		back = last;

		front->next = back;
	}
}

template <typename T>
inline T SinglyLinkedList<T>::popFromFront()
{
	// TODO: Should throw an exception here
	if (isEmpty()) return 0;

	ListElement<T> *first = front;
	T retval = first->data;

	if (first != back)
	{
		// Update front
		front = first->prev;
		front->next = back;
	}
	else
	{
		back = 0;
		front = 0;
	}
	delete first;

	return retval;
}

