#include <iostream>
using namespace std;
class Queue
{
public:
    int size;
    int front;
    int rear;
    int *Q;
    Queue();
    ~Queue();
    void create();
    void enqueue(int x);
    int dequeue();
    void display();
};
Queue::Queue()
{
    size = 0;
    front = rear = -1;
}
Queue::~Queue()
{

    delete[] Q;
}
void Queue::create()
{
    cout << "Enter the size" << endl;
    cin >> size;
    Q = new int[size];
}
void Queue::enqueue(int x)
{
    if (rear == size - 1)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        rear++;
        Q[rear] = x;
    }
}
int Queue::dequeue()
{
    int x = -1;
    if (front == rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        front++;
        x = Q[front];
    }
    return x;
}
void Queue::display()
{

    for (int i = front + 1; i <= rear; i++)
    {
        cout << Q[i] << " ";
    }
    cout << endl;
}

int main()
{
    Queue ls;
    ls.create();
    ls.enqueue(30);
    ls.enqueue(60);
    ls.enqueue(90);
    ls.enqueue(120);
    ls.enqueue(150);
    ls.display();
    cout<<ls.dequeue()<<endl;           
    ls.display();

    return 0;
}