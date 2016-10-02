// Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GenericStack.h"
#include <iostream>

int main()
{
	GenericStack<int, 50> mystack;

	if (mystack.isEmpty())
	{
		std::cout << "My Stack is Empty" << std::endl;
	}
	
	mystack.push(5);
	mystack.push(4);
	mystack.push(3);
	mystack.push(2);

	while (!mystack.isEmpty())
	{
		std::cout << "Popped " << mystack.pop() << " from mystack" << std::endl;
	}

    return 0;
}

