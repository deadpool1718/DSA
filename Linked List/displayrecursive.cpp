#include <iostream>
#include <climits> // for INT32_MIN and INT32_MAX

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    void RDisplay(Node *p);
    int Max(Node *p);
    int Rmax(Node *p);
    int Rmin(Node *p);
    int Min(Node *p);
    Node *LSearch(Node *p, int key);
    Node *LMSearch(Node *p, int key);
    Node *RSearch(Node *p, int key);
    int Insert(int index, int x);
    int count(Node *p);
};

Node *first = NULL;

void create(int A[], int n)
{
    int i;
    Node *p, *last;
    first = new Node; // Allocate memory for the first node
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        p = new Node; // Allocate memory for the next node
        p->data = A[i];
        p->next = NULL;
        last->next = p; // Link the last node to the new node
        last = p;       // Update last to the new node
    }
}

void Node::RDisplay(Node *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        RDisplay(p->next);
    }
}
int Node::count(Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}

int Node::Max(Node *p)
{
    int max = INT32_MIN;
    while (p != NULL)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

int Node::Rmax(Node *p)
{
    if (p == NULL)
    {
        return INT32_MIN;
    }
    int x = Rmax(p->next);
    return (x > p->data) ? x : p->data;
}

int Node::Min(Node *p)
{
    int min = INT32_MAX;
    while (p != NULL)
    {
        if (p->data < min)
        {
            min = p->data;
        }
        p = p->next;
    }
    return min;
}

int Node::Rmin(Node *p)
{
    if (p == NULL)
    {
        return INT32_MAX;
    }
    int x = Rmin(p->next);
    return (x < p->data) ? x : p->data;
}

Node *Node::LMSearch(Node *p, int key)
{
    Node *q;
    while (p != NULL)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}
Node *Node::LSearch(Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}
Node *Node::RSearch(Node *p, int key)
{
    if (p == NULL)
    {
        return NULL;
    }
    if (key == p->data)
    {
        return p;
    }
    RSearch(p->next, key);
}
void create::Insert(int index, int x)
{
    Node *t;
    if (index < 0 || index > count(p))
        return;
    Node *t = new Node;
    t->data = x;
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (i = 0; i < index; i++)
        {
            p = p->next;
            t->next = p->next;
            p->next = t;
        }
    }
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    int n = sizeof(A) / sizeof(A[0]);
    create(A, n);

    first->RDisplay(first);
    cout << endl;

    cout << "Maximum element: " << first->Max(first) << endl;
    cout << "Minimum element: " << first->Min(first) << endl;
    cout << "Recursive maximum element: " << first->Rmax(first) << endl;
    cout << "Recursive minimum element: " << first->Rmin(first) << endl;

    // Node *temp = first->LMSearch(first, 7);
    Node *temp = first->LMSearch(first, 5);
    if (temp)
        cout << "Key is found at: " << temp->data << endl;
    else
        cout << "Key is not found!" << endl;
    first->RDisplay(first);
    return 0;
}
