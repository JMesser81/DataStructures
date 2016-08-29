// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "IntSLList.h"
#include <iostream>

int main()
{
	IntSLList list;

	for (int i = 0; i < 5; i++)
	{
		list.addNode(i);
	}
	list.print();

	for (int i = 0; i < 5; i++)
	{
		std::cout << list.pop() << std::endl;
	}
	list.print();

    return 0;
}

