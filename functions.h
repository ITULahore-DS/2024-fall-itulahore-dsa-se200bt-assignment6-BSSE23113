#ifndef FUNCTIONS_H
#define FUNCTIONS_H
class Node
{
    int data;
    Node *next;

public:
    Node();
    ~Node();
    void setNext(Node *val);
    Node *getNext();
    void setData(int data);
    int getData();
};

class Stack
{
    Node *head;
    Node *tail;
    int count;

public:
    Stack();
    ~Stack();
    bool isEmpty();
    void push(int data);
    void pop();
    void clear();
    int peek();
    void printStack();
    int size();
};

class Queue
{
    Node *head;
    Node *tail;
    int count;

public:
    Queue();
    ~Queue();
    bool isEmpty();
    void enqueue(int data);
    void dequeue();
    void printQueue();
    int size();
};
#endif
