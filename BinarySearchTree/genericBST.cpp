#include "genericBST.hpp"

#ifndef _BST_IMPL
#define _BST_IMPL

#include <queue>
#include <iostream>

template<typename T>
void BST<T>::insert(const T& elem)
{
    // First element
    if (isEmpty())
    {
        BSTNode<T> *newNode = new BSTNode<T>(elem);
        root = newNode;
    }
    else
    {
        // Traverse the tree, breadth-first
        BSTNode<T> *curNode = root;
        while (curNode != nullptr)
        {
            if (elem < curNode->data)
            {
                if (curNode->left == nullptr)
                {
                    curNode->left = new BSTNode<T>(elem);
                    break;
                }
                else
                {
                    curNode = curNode->left;
                }
            }
            else if (elem > curNode->data)
            {
                if (curNode->right == nullptr)
                {
                    curNode->right = new BSTNode<T>(elem);
                    break;
                }
                else
                {
                    curNode = curNode->right;
                }
            }
            else
            {
                // Do not allow duplicate values
                return;
            }
        }
    }
}

template<typename T>
void BST<T>::clear()
{
    // Traverse tree, depth-first

    // delete leaf nodes

    this->root = 0;
}

template<typename T>
T* BST<T>::search(const T& elem) const
{
    BSTNode<T> *p = root;

    while (p != nullptr)
    {
        if (elem == p->data)
        {
            return &(p->data);
        }
        else if (elem > p->data)
        {
            p = p->right;
        }
        else
        {
            p = p->left;
        }
    }

    return nullptr;
}

template<typename T>
void BST<T>::breadthFirst(bool visitNode)
{
    std::queue<BSTNode<T>*> children;
    BSTNode<T>* p = root;
    if (p != nullptr)
    {
        children.push(p);
    }

    while (!children.empty())
    {
        p = children.front();
        if (visitNode) this->visit(p);
        children.pop();

        if (p->left != nullptr)
        {
            children.push(p->left);
        }

        if (p->right != nullptr)
        {
            children.push(p->right);
        }
    }
}

template<typename T>
void BST<T>::preorder(bool visitNode)
{
    if (p != nullptr)
    {
      if (visitNode) this->visit(p);

      if (p->left != nullptr)
      {
        this->preorder(p->left, visitNode);
      }

      if (p->right != nullptr)
      {
        this->preorder(p->right, visitNode)
      }
    }
}

template<typename T>
void BST<T>::inorder(BSTNode<T> *p, bool visitNode)
{
    if (p != nullptr)
    {
        if (p->left != nullptr)
        {
            this->inorder(p->left, visitNode);
        }

        if (visitNode) this->visit(p);

        if (p->right != nullptr)
        {
            this->inorder(p->right, visitNode);
        }

    }

}

template<typename T>
void BST<T>::postorder(bool visitNode)
{
  if (p != nullptr)
  {
    if (p->left != nullptr)
    {
      this->postorder(p->left, visitNode);
    }

    if (p->right != nullptr)
    {
      this->postorder(p->right, visitNode)
    }

    if (visitNode) this->visit(p);

  }
}

template<typename T>
void BST<T>::visit(const BSTNode<T> *p)
{
    std::cout << p->data << ' ';
}
#endif
