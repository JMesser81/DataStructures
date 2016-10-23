// CircularList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include "CircularList.h"

void CreateIntegerCircularList();
void CreateStringCircularList();
//void CreateDoubleCircularList();

int main()
{
	CreateIntegerCircularList();
	CreateStringCircularList();
	//CreateDoubleCircularList();

	return 0;
}

void CreateIntegerCircularList()
{
	CircularList<int> myCircularIntList;

	myCircularIntList.print();
	myCircularIntList.addNodeToTail(3);
	myCircularIntList.addNodeToTail(4);
	myCircularIntList.addNodeToTail(5);
	myCircularIntList.addNodeToTail(10);
	
	for (int i = 20; i < 40; i++)
	{
		myCircularIntList.addNodeToTail(i);
	}
	
	myCircularIntList.print();
}

void CreateStringCircularList()
{
	CircularList<std::string> myCircularStringList;

	myCircularStringList.print();
	myCircularStringList.addNodeToTail("Hello!");
	myCircularStringList.addNodeToTail(" How ");
	myCircularStringList.addNodeToTail(" are " );

	myCircularStringList.print();
}