#ifndef _QUEUES_H
#define _QUEUES_H

#include <iostream>
using namespace std;


const int MaxSize = 101;
template <class T>
class _Queues
{
private:
    T Arr[MaxSize];
    T front, rear;
public:
    _Queues() 
    {
        front = rear = -1;
    }
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
    void push(T value)
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
    T top()
    {
        if(IsEmpty())
        {
            cout << "Error: Queue is Empty\n";
            return -1;
        }
        return Arr[front];
    }
};
#endif