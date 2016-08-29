// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "IntSLList.h"
#include <iostream>

int main()
{
	IntSLList list;

	std::cout << "Popped :" << list.pop() << std::endl;

	for (int i = 0; i < 5; i++)
	{
		list.addNodeToHead(i);
	}
	list.print();

	list.deleteNode(0);

	while (!list.isEmpty())
	{
		std::cout << list.pop() << std::endl;
	}
	list.print();

    return 0;
}

