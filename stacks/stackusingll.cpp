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
    Node *top = NULL;
    void push(int x);
    int pop();
    void display();
    LinkedList()
    {
        top = NULL;
    }
};
void LinkedList::push(int x)
{
    Node *t = new Node;
    if (t == NULL)
    {
        cout << "stack overflow." << endl;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int LinkedList::pop()
{
    int x = -1;
    Node *t = new Node;
    if (top == NULL)
    {
        cout << "stack is empty." << endl;
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        delete[] t;
    }
    return x;
}
void LinkedList::display()
{
    Node *p = top;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    LinkedList ls;
    ls.push(10);
    ls.push(20);
    ls.push(30);
    ls.display();
   cout<< ls.pop()<<endl;
    ls.display();

    return 0;
}