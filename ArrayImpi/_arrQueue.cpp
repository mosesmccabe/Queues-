#include <iostream>
using namespace std;

const int MaxSize = 101;
int front = -1, rear = -1;

int Arr[MaxSize];

// check if Queue is empty
bool IsEmpty()
{
    return (front == -1 && rear == -1);
}
// List is full
bool IsFull()
{
    return ((rear+1)%MaxSize == front);
}
// push value to list
void push(int value)
{
    if(IsEmpty())
        front = rear = 0;
    else if(IsFull())
    {
        cout << "Error: Queue is Full\n";
        return;
    }
    else
        rear = (rear+1)%MaxSize;
    Arr[rear] = value;
}

// Pop value from list
void pop()
{
    if(IsEmpty())
    {
        cout << "Error: Queue is Empty\n";
        return;
    }
    else if (front == rear)
    {
        front = rear = -1;
        cout << "Error: Queue is Empty\n";
        return;
    }
    front = (front+1)%MaxSize;
}
// Return front value of Queue
int top()
{
    if(IsEmpty())
    {
        cout << "Error: Queue is Empty\n";
        return -1;
    }
    return Arr[front];
    
}


int main()
{
    push(12);
    push(5);
    push(87);
    cout << top()<< endl;
     pop();
    cout << top()<< endl;
     pop();
    cout << top()<< endl;
    pop();
    

}