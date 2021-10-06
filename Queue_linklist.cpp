#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node *next;
};
Node *front = nullptr, *rear = nullptr;

// Check if list is empty
bool IsEmpty()
{
    return (front == nullptr && rear == nullptr);
}

// Push value to end of Queue
void push(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = nullptr;
    
    if (IsEmpty())  // if true set front & rear to new Node
    {
        front = rear = temp;
    }
    rear->next = temp;
    rear = temp;
}

// Remove value for front of queue
void pop()
{
    if(IsEmpty())
    {
        cout << "Error: the list is Empty\n";
        return;
    }
    Node *temp = front;
    front = front->next;
    delete temp;
}

// Return the top value
int top()
{
    return front->data;
}

// Print the list
void print()
{
    Node *temp = front;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    push(10);
    push(12);
    push(19);
    print();
    pop();
    push(7);
    push(9);
    push(2);
    push(67);
    print();
    pop();
    
}