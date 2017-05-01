#ifndef _BST_H
#define _BST_H

template<typename T>
class BSTNode {
    public:
        BSTNode *left, *right;
        T data;

        BSTNode() :
            left(nullptr), 
            right(nullptr) 
            {};
    
        BSTNode(const T& elem, BSTNode *l = nullptr, BSTNode *r = nullptr) :
            data(elem),
            left(l),
            right(r)
            {};
};

template<typename T>
class BST {
    public:
        BST() :
            root(nullptr)
            {};

        ~BST() {
            clear();
        }

        bool isEmpty() const {
            return (root == nullptr);
        }

        void insert(const T& elem);
        T* search(const T& elem) const;
        void breadthFirst(bool visitNode = false);
        
        // Visit - Left - Right
        void preorder(bool visitNode = false) const {
            preorder(root, visitNode);
        }

        // Left - Visit - Right
        void inorder(bool visitNode = false) {
            inorder(root, visitNode);
        }

        // Left - Right - Visit
        void postorder(bool visitNode = false);

        void visit(const BSTNode<T> *p);

        void clear();

    protected:
        void inorder(BSTNode<T> *p, bool visitNode = false);
        
    private:
        BSTNode<T> *root;
};

#include "genericBST.cpp"

#endif