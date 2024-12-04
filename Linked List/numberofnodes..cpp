#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *first = NULL;
void create(int A[], int n)
{
    int i;
    int *p, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i <= n; i++)
    {
        p = new Node; 
        p->next = NULL;
        last->next = p; 
        last = p;
    }
}

int main()
{

    return 0;
}