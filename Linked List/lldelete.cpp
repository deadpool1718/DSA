#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node()
    {
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList
{
    Node *first = NULL;

public:
    LinkedList()
    {
        first = NULL;
    }
    void SortedInsert(int x);
    void display();
    int Delete(int index);
    int count();
};
void LinkedList::SortedInsert(int x)
{
    Node *t, *q = NULL, *p = first;
    t = new Node;
    t->data = x;
    t->next = NULL;
    if (p == NULL || p->data >= x)
    {
        t->next = first;
        first = t;
    }
    else
    {
        while (p != 0 && p->data < x)
        {
            q = p;
            p = p->next;
        }
        t->data = x;
        q->next = t;
        t->next = p;
    }
}
void LinkedList::display()
{
    Node *p;
    p = first;
    while (p != 0)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int LinkedList::count()
{
    Node *p = first;
    int counter = 0;
    while (p != 0)
    {
        p = p->next;
        counter++;
    }
    cout << counter << endl;
}
int LinkedList::Delete(int index)
{
    Node *p = first;
    Node *q = NULL;
    int x = -1;
    if (index < 1 && index > count())
    {
        return -1;
    }
    if (index == 1)
    {
        first=first->next;
        x=p->data;
        delete p;
        return x;
    }
    else
    {

        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
}

int main()
{
    LinkedList list;
    list.SortedInsert(5676);
    list.display();
    list.SortedInsert(5);
    list.display();
    list.SortedInsert(576);
    list.display();
    list.SortedInsert(12576);
    list.display();
    list.count();
    cout<<"Deleted element is :"<<list.Delete(1)<<endl ;
    list.count();
    list.display();

    return 0;
}