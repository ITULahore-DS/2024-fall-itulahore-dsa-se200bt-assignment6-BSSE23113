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
    head = nullptr;
    tail = nullptr;
    count = -1;
}
// destructor
Stack::~Stack()
{

    while (head)
    {
        Node *temp = head;
        head = head->getNext();
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
    if (head)
    {
        temp->setNext(head);
        head = temp;
    }
    else
    {
        head = temp;
        tail = temp;
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
        Node *temp = head;
        head = head->getNext();
        delete temp;
        count--;
    }
}

// get head node
int Stack::peek()
{
    if (!head)
    {
        return -1;
    }
    return head->getData();
}

// clears stack
void Stack::clear()
{
    while (head)
    {
        Node *temp = head;
        head = head->getNext();
        delete temp;
    }
    count = -1;
}

// prints stack
void Stack::printStack()
{
    Node *temp = head;
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
    head = nullptr;
    tail = nullptr;
    count = -1;
}
// destructor
Queue::~Queue()
{

    while (head)
    {
        Node *temp = head;
        head = head->getNext();
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
    Node *temp = head;
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
    if (head)
    {
        tail->setNext(temp);
        tail = temp;
    }
    else
    {
        head = temp;
        tail = temp;
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
        Node *temp = head;
        head = head->getNext();
        delete temp;
        count--;
    }
}

// returns size of queue
int Queue::size()
{
    return count + 1;
}