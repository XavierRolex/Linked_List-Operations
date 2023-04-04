#include "linkedlist.cpp"
int main()
{
    // inserting value and insert in the beginning is the same.
    linkedlist<int> s;
    cout << "How many elements do you want to insert : ";
    int n;
    cin >> n;
    cout << "Insert elements: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        s.insertFront(temp);
    }
    s.display();
    cout << "Enter element you want to search: ";
    int key;
    cin >> key;
    s.search(key);
    cout << "Enter element to insert at the beginning: ";
    int beg;
    cin >> beg;
    s.insertFront(beg);
    s.display();
    cout << "Enter element to insert at the end: ";
    int end;
    cin >> end;
    s.insertend(end);
    s.display();
    cout << "Deleting at the beginning - " << endl;
    s.delFront();
    s.display();
    cout << "Deleting at the end - " << endl;
    s.delEnd();
    s.display();
}