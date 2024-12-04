#include <iostream>
using namespace std;
class Stack
{
public:
    int size;
    int top;
    int *S;
    Stack();
    ~Stack();
    void create();
    void display();
    void push(int x);
    int pop();
    int StackTop();
    int peek(int index);
    int isEmpty();
    int isFull();
   
};
Stack::Stack()
{
    size = 0;
    top = -1;
    S = NULL;
}
Stack::~Stack()
{
    delete[] S;
}
void Stack::create()
{
    cout << "Enter the size" << endl;
    cin >> size;
    top = -1;
    S = new int[size];
}
void Stack::display()
{
    int i;
    for (int i = top; i >= 0; i--)
    {
        cout << S[i] << " ";
    }
    cout << endl;
}
void Stack::push(int x)
{
    if (top == size - 1)
    {
        cout << "stack overflown." << endl;
    }
    else
    {
        top++;
        S[top] = x;
    }
}
int Stack ::pop()
{
    int x = -1;
    if (top == -1)
    {
        cout << "Stack is underflown." << endl;
    }
    else
    {
        x = S[top];
        top--;
    }
    return x;
}
int Stack::StackTop()
{
    if (top == -1)
    {
        return -1;
    }
    else
    {
        cout << top << endl;
    }
}
int Stack::peek(int index){
    int x=-1;
    if(top-index+1<0){
        cout<<"Invalid index."<<endl;
    }else{
        x=S[top-index+1];
    }
    return x;
}
int Stack::isEmpty(){
    if(top==-1){
        cout<<"Stack is empty."<<endl; 
    }
    return 0;
}
int Stack::isFull(){
    if(top==size-1){
        cout<<"Stack is Full."<<endl; 
    }
    return 0;
}
int main()
{
    Stack st;
    st.create();
    st.isEmpty();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.peek(2)<<endl;
    st.display();   
    st.isFull();
    st.StackTop();
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;

    return 0;
}