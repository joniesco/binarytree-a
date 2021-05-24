#pragma once
#include <iostream>

using namespace std;

namespace ariel
{
    template <typename T>
    class BinaryTree
    {

        class Node
        {
        public:
            T data;
            Node *right;
            Node *left;
            Node(const T &data, Node *left, Node *right)
            {
                this->data = data;
                this->left = NULL;
                this->right = NULL;
            }
        };//end node class
                //---------------------------------------start of Iterator class------------------------------------------------------------


        class Iterator
        {
        private:
            Node *current;

        public:
            Iterator()
            {
                current = nullptr;
            }
            Iterator(Node *curr)
            {
                this->current = curr;
            }
            bool operator==(const Iterator &rhs) const
            {
                return false;
            }

            bool operator!=(const Iterator &rhs) const
            {
                return false;
            }
            T &operator*() const
            {

                return this->current->data;
            }

            T *operator->() const
            {
                return &(this->current->data);
            }

            Iterator &operator++()
            {
                return *this;
            }
        }; //end iterator class

        //---------------------------------------start of BT class------------------------------------------------------------
    private:
        Node *root;

    public:
        BinaryTree()
        {
            root = NULL;
        }

        BinaryTree<T> &add_root(T root)
        {
            return *this;
        }
        BinaryTree<T> &add_left(T ls, T rs)
        {
            return *this;
        }
        BinaryTree<T> &add_right(T ls, T rs)
        {
            return *this;
        }
        Iterator begin_preorder()
        {
            return Iterator(root);
        }

        Iterator end_preorder()
        {
            return Iterator(root);
        }
        Iterator begin_inorder()
        {
            return Iterator(root);
        }

        Iterator end_inorder()
        {
            return Iterator(root);
        }
        Iterator begin_postorder()
        {
            return Iterator(root);
        }

        Iterator end_postorder()
        {
            return Iterator(root);
        }
        Iterator begin()    // A requierd method for Iterator
        {
            return Iterator(root);
        }
        Iterator end()    // A requierd method for Iterator
        {
            return Iterator(root);
        }

        friend std::ostream &operator<<(std::ostream &out, const BinaryTree<T> &bt)
        {
            return out;
        }
        ~BinaryTree() {}
    };
}