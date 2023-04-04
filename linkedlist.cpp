#include "linkedlist.h"
template <class T>
linkedlist<T>::linkedlist()
{
    head = NULL;
}
template <class T>
// inserting value/ inserting at the beginning
void linkedlist<T>::insertFront(T value)
{
    Node *node = new Node();
    node->data = value;
    node->next = head;
    head = node;
}
template <class T>
// inserting at the end
void linkedlist<T>::insertend(T value)
{
    Node *new_node = new Node();
    new_node->data = value;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
    }
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    // assign last node's next to the new_node
    temp->next = new_node;
}
template <class T>
// deleting the front just changing the head
void linkedlist<T>::delFront()
{
    Node *temp = head;
    head = head->next;
    delete temp;
}
template <class T>
void linkedlist<T>::delEnd()
{

    Node *temp = head;
    Node *previous;

    if (head == NULL)
    {
        cout << ("\nEmpty List, can't delete");
        return;
    }

    if (temp->next == NULL)
    {
        head = NULL;
        return;
    }

    while (temp->next != NULL)
    {
        previous = temp;
        temp = temp->next;
    }

    previous->next = NULL;

    delete temp;
}
template <class T>
void linkedlist<T>::search(T &item)
{
    Node *temp = head;
    int flag = 0;
    if (head == NULL)
    {
        cout << "THE LIST IS EMPTY!";
    }
    else
    {
        while (temp != NULL)
        {
            if (temp->data == item)
            {
                cout << "ITEM FOUND!";
                flag++;
            }
            temp = temp->next;
        }
        if (flag == 0)
        {
            cout << "ITEM NOT FOUND!";
        }
    }
    cout << endl;
}
template <class T>
void linkedlist<T>::display()
{
    Node *node = new Node();
    node = head;
    cout << "Linked List: ";
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}