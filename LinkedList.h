#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct node //declaring node
{
    int data;
    struct node *next;
};


class LinkedList //declaring class
{
    public:
        node * start;
        node* createNode(int);
        void insertNodeBeginning();
        void insertNodePosition();
        void insertNodeLast();
        void deleteNode();
        void sort();
        void search();
        void update();
        void reverse();
        void display();
        LinkedList()
        {
            start = NULL;
        }
};
#endif // LINKEDLIST_H
