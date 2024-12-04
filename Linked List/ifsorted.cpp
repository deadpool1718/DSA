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
        next = NULL;
    }
};
class LinkedList
{

    Node *first = NULL;
    Node*second =NULL;

public:
    LinkedList()
    {
        first = NULL;
        second=NULL;
    }

    int count();
    void Insert(int x);
    int Delete(int index);
    int ifSorted();
    void create(int A[], int size);
    void create2(int A[], int size);
    void RemoveDuplicate();
    void Reverse();
    void Reverse2();
    void Reverse3(Node *p, Node *q);
    void Reverse3();
    void concat(Node *p, Node *q);
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
void LinkedList::Insert(int x)
{
    Node *q = NULL;
    Node *t = new Node;
    Node *p = first;
    t->data = x;
    t->next = NULL;
    if (first == NULL || p->data >= x)
    {
        t->next = first;
        first = t;
    }
    else
    {
        while (p != NULL && p->data < x)
        {
            q = p;
            p = p->next;
        }
        q->next = t;
        t->next = p;
    }
}
int LinkedList::Delete(int index)
{
    Node *p = first;
    Node *q = NULL;
    int x = -1;
    if (index < 1 || index > count())
    {
        return -1;
    }

    if (index == 1)
    {
        x = first->data;
        first = first->next;
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
        return x;
    }
}
int LinkedList::ifSorted()
{
    Node *p = first;
    int x = INT16_MIN;
    while (p)
    {

        if (p->data < x)
        {
            return false;
        }
        else
        {
            x = p->data;
            p = p->next;
        }
    }
    return true;
}
void LinkedList::create(int A[], int n)
{
    if (n == 0)
        return;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    // Initialize the first node
    Node *t, *last = first;

    for (int i = 1; i < n; i++)
    { // Start from the second element
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void LinkedList::create2(int A[], int n)
{
    if (n == 0)
        return;
    second = new Node;
    second->data = A[0];
    second->next = NULL;
    // Initialize the first node
    Node *t, *last = second;

    for (int i = 1; i < n; i++)
    { // Start from the second element
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void LinkedList::RemoveDuplicate()
{
    Node *p = first;
    Node *q = p->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}
void LinkedList::Reverse()
{
    Node *p = first;

    int *A;
    A = new int[count()];
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
void LinkedList::Reverse2()
{
    Node *p = first;
    Node *r, *q;
    r = q = NULL;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}
void LinkedList::concat(Node *p, Node *q)
{
    Node *p = first;
    Node *q = NULL;

    while (p->next)
    {
        p = p->next;
    }
    p->next = q;
    q = NULL;
}

int main()
{
    LinkedList list;
    int arr[] = {20, 60, 70, 400, 100};
    int arr1[] = {21, 61, 71, 4001, 101};

    int size = sizeof(arr) / sizeof(arr[0]);
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    list.create(arr, 5);
    list.display();

    list.create2(arr1, 5);
  
    list.display();
    // void Reverse();
    // void Reverse2();
    // list.Insert(5);
    // list.display();
    // list.Insert(53);
    // list.display();
    // list.Insert(25);
    // list.display();
    // list.Insert(51);
    // list.display();
    // list.Insert(15);
    // list.display();
    // cout << list.count() << endl;
    // cout << list.Delete(3) << endl;
    // list.display();
    // cout << list.count() << endl;
    // cout << list.ifSorted();
    return 0;
}