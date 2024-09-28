#include <iostream>
#include "functions.h"
using namespace std;
// constructor
Node::Node()
{
    data = 0;
    next = nullptr;
}
// destructor
Node::~Node()
{
    next = nullptr;
}
// set next node
void Node::setNext(Node *val)
{
    next = val;
}
// get next node
Node *Node::getNext()
{
    return next;
}
// set data
void Node::setData(int data)
{
    this->data = data;
}
// get data
int Node::getData()
{
    return data;
}
// constructor
Stack::Stack()
{
    top = nullptr;
    count = -1;
}
// destructor
Stack::~Stack()
{

    while (top)
    {
        Node *temp = top;
        top = top->getNext();
        delete temp;
    }
}
// check if stack is empty
bool Stack::isEmpty()
{
    if (count == -1)
    {
        return true;
    }
    return false;
}

// prepend data to the stack
void Stack::push(int data)
{
    Node *temp = new Node;
    temp->setData(data);
    if (top)
    {
        temp->setNext(top);
        top = temp;
    }
    else
    {
        top = temp;
    }
    temp = nullptr;
    count++;
}

// delete data from the start
void Stack::pop()
{
    if (count == -1)
    {
        cout << "Stack's already empty.\n";
    }
    else
    {
        Node *temp = top;
        top = top->getNext();
        delete temp;
        count--;
    }
}

// get head node
int Stack::peek()
{
    if (!top)
    {
        return -1;
    }
    return top->getData();
}

// clears stack
void Stack::clear()
{
    while (top)
    {
        Node *temp = top;
        top = top->getNext();
        delete temp;
    }
    count = -1;
}

// prints stack
void Stack::printStack()
{
    Node *temp = top;
    for (int i = 0; i <= count; ++i)
    {
        cout << "[" << i << "]: " << temp->getData() << "\n";
        temp = temp->getNext();
    }
}

// returns size of stack
int Stack::size()
{
    return count + 1;
}

// constructor
Queue::Queue()
{
    top = nullptr;
    count = -1;
}
// destructor
Queue::~Queue()
{

    while (top)
    {
        Node *temp = top;
        top = top->getNext();
        delete temp;
    }
}
// check if stack is empty
bool Queue::isEmpty()
{
    if (count == -1)
    {
        return true;
    }
    return false;
}

// prints queue
void Queue::printQueue()
{
    Node *temp = top;
    for (int i = 0; i <= count; ++i)
    {
        cout << "[" << i << "]: " << temp->getData() << "\n";
        temp = temp->getNext();
    }
}

// append data to the Queue
void Queue::enqueue(int data)
{

    Node *temp = new Node;
    temp->setData(data);
    if (top)
    {
        Node *tail = top;
        int i = 0;
        while (i != count)
        {
            tail = tail->getNext();
            i++;
        }
        tail->setNext(temp);
        tail = temp;
        tail = nullptr;
    }
    else
    {
        top = temp;
    }
    temp = nullptr;
    count++;
}

// delete data from the end
void Queue::dequeue()
{
    if (count == -1)
    {
        cout << "Queue's already empty.\n";
    }
    else
    {
        Node *temp = top;
        top = top->getNext();
        delete temp;
        count--;
    }
}

// returns size of queue
int Queue::size()
{
    return count + 1;
}

// get head node
int Queue::peek()
{
    if (!top)
    {
        return -1;
    }
    return top->getData();
}

// clears queue
void Queue::clear()
{
    while (top)
    {
        Node *temp = top;
        top = top->getNext();
        delete temp;
    }
    count = -1;
}