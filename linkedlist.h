#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include <iostream>
using namespace std;

#pragma once

template <class T>
class linkedlist
{
    struct Node
    {
        T data;
        Node *next;
    };

public:
    linkedlist();
    void insertFront(T);
    void insertend(T);
    void display();
    void search(T &);
    void delFront();
    void delEnd();

private:
    Node *head;
};

#endif