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
public:
    Node *first = NULL;
    Node *second = NULL;
    Node *third = NULL;

public:
    LinkedList()
    {
        first = NULL;
        second = NULL;
        third = NULL;
    }
    void display();
    void create(int A[], int size);
    void Sort();
    void Reverse(int A[]);
    void Reverse1();
    int Reverse2(Node *p, Node *q);

    int count();
};
void LinkedList::display()
{
    Node *p = first;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void LinkedList::create(int A[], int size)
{
    if (size == 0)
    {
        return;
    }
    first = new Node;
    first->data = A[0];
    first->next = NULL;

    Node *t, *last = first;
    for (int i = 1; i < size; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int LinkedList::count()
{
    Node *p = first;
    int counter = 0;
    while (p)
    {
        p = p->next;
        counter++;
    }
    return counter;
}
void LinkedList::Sort()
{
    Node *p = first;
    while (p)
    {
        Node *q = p->next;
        while (q)
        {

            if (p->data > q->data)
            {
                int temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
            q = q->next;
        }
        p = p->next;
    }
}
void LinkedList::Reverse(int A[])
{
    Node *p = first;
    int i = 0;
    while (p)
    {
        A[i] = p->data;
        p = p->next;
        i++;
    }
    p = first;
    i--;
    while (p)
    {
        p->data = A[i];
        p = p->next;
        i--;
    }
}
void LinkedList::Reverse1()
{
    Node *r = NULL;
    Node *q = NULL;
    Node *p = first;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}
int LinkedList::Reverse2(Node *p, Node *q)
{
   
    if (p)
    {
        Reverse2(p->next,p );
        p->next=q;
    }
    else
    {
        first = q;
    }
}

int main()
{ 
    LinkedList ls;

    int A[] = {1, 122, 3, 84, 5, 6};
    int size = sizeof(A) / sizeof(A[0]);
    int B[] = {11, 21, 31, 41, 51, 61};
    int size1 = sizeof(B) / sizeof(B[0]);
    ls.create(A, 6);
    ls.Reverse2(ls.first,NULL);
    ls.display();
    cout << ls.count() << endl;
    ls.create(B, 6);
    ls.display();
    // cout << ls.count() << endl;
    // ls.Sort();
    // ls.display();
    ls.Reverse2(ls.first,NULL);
    ls.display();

    return 0;
}