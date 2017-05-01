#include "genericBST.hpp"
#include <iostream>

int main()
{
    BST<int> mytree;
    mytree.insert(3);
    mytree.insert(4);
    mytree.insert(2);
    mytree.insert(10);
    mytree.insert(20);
    mytree.insert(1);

    std::cout << "Printing out tree in breadth-first order:\n";
    mytree.breadthFirst(true);
    std::cout << std::endl;

    std::cout << "Printing tree in depth-first (inorder):\n";
    mytree.inorder(true);
    std::cout << std::endl;

    /*
    int *found = mytree.search(3);
    if (found != nullptr)
    {
        std::cout << "Found element: " << *found << std::endl;
    }
    else
    {
        std::cout << "Could not find element!" << std::endl;
    }
    */
    return 0;
}