#include "stdafx.h"
#include "IntSLLNode.h"

IntSLLNode::~IntSLLNode()
{
	if (next != 0)
	{
		delete next;
	}
	next = 0;

}
