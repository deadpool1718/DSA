#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList
{
    Node *first = NULL;
    // Node *last = NULL;

public:
    LinkedList()
    {
        first = NULL; //= last
    }
    void InsertLast(int x)
    {
        Node *t = new Node;
        t->data = x;
        t->next = NULL;
        if (first == NULL)
        {
            first = t; // last
        }
        else
        {
            Node *temp = first;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = t;
        }
    }
    void SortedInsert(int x);
    void display()
    {
        Node *p = first;
        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
};

void LinkedList::SortedInsert(int x)
{
    Node *t, *q = NULL;
    Node *p = first;
    t = new Node;
    t->data = x;
    t->next = NULL;
    if (first == nullptr || first->data >= x)
    {
        t->next = first;
        first = t;
    }
    else
    {
        // Traverse the list to find the correct position
        while (p != nullptr && p->data < x)
        {
            q = p;
            p = p->next;
        }
        q->next = t;    
        t->next = p;
    }
}


int main()
{
    LinkedList list;
    list.SortedInsert(4);
    list.display();
    list.SortedInsert(3);
    list.display();
    list.SortedInsert(55);
    list.display();
    list.SortedInsert(555);
    list.display();
    list.SortedInsert(88);
    list.display();
    list.SortedInsert(8);
    list.display();

    return 0;
}