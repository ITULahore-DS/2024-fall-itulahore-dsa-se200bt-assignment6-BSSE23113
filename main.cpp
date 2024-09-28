#include <iostream>
#include "functions.h"
using namespace std;

void Menu()
{
    Stack stack;
    Queue queue;
    int choice, value;

    do
    {
        cout << "Menu:\n"
             << "1. Push to Stack\n"
             << "2. Pop from Stack\n"
             << "3. get top of Stack\n"
             << "4. Print Stack\n"
             << "5. Enqueue to Queue\n"
             << "6. Dequeue from Queue\n"
             << "7. Print Queue\n"
             << "8. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter value to push: ";
            cin >> value;
            stack.push(value);
            break;
        }
        case 2:
        {
            stack.pop();
            break;
        }
        case 3:
        {
            cout << "Top of stack: " << stack.peek() << endl;
            break;
        }
        case 4:
        {
            stack.printStack();
            break;
        }
        case 5:
        {
            cout << "Enter value to enqueue: ";
            cin >> value;
            queue.enqueue(value);
            break;
        }
        case 6:
        {
            queue.dequeue();
            break;
        }
        case 7:
        {
            queue.printQueue();
            break;
        }
        case 8:
        {
            cout << "Exiting..." << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice. Please try again." << endl;
        }
        }
    } while (choice != 8);
}
int main()
{
    Menu();

    return 0;
}
