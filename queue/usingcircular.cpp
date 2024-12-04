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
    front = rear = 0;
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
    if ((rear + 1) % size == front)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        rear = (rear + 1) % size;
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
        front = (front + 1) % size;
        x = Q[front];
    }
    return x;
}
void Queue::display()
{
    int i = front + 1;
    do
    {
        cout << Q[i] << " ";
        i = (i + 1) % size;
    } while (i != (rear + 1) % size);
    cout<<endl;
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
    cout << ls.dequeue() << endl;
    ls.display();

    return 0;
}