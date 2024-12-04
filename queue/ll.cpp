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
    Node *front;
    Node *rear;
    LinkedList()
    {
        front = rear = NULL;
    }
    void enqueue(int x);
    int dequeue();
    void display();
};
void LinkedList::enqueue(int x)
{
    Node *t = new Node;
    if (t == NULL)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}
int LinkedList::dequeue()
{
    int x = -1;
    Node *t;
    if (front == NULL)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        delete[] t;
    }
    return x;
}
void LinkedList::display()
{
    Node *p = front;
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
    ls.enqueue(20);
    ls.enqueue(30);
    ls.enqueue(40);
    ls.enqueue(250);
    ls.display();
    ls.dequeue();
    ls.display();
    return 0;
}