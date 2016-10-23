// Queue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GenericQueue.h"


int main()
{
	GenericQueue<int> myQueue;

	myQueue.enqueue(1);
	myQueue.enqueue(2);
	myQueue.enqueue(3);
	myQueue.print();

	myQueue.dequeue();
	myQueue.print();
	
	myQueue.enqueue(4);
	myQueue.print();

	myQueue.dequeue();
	myQueue.dequeue();
	myQueue.print();

	myQueue.dequeue();
	myQueue.print();
	myQueue.dequeue();

	return 0;
}

