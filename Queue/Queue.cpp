#include <bits/stdc++.h>
using namespace std;
#define size 5

int Queue[size + 1], front = 0, rear = 0;

int menu(void)
{
    int choice;
    do
    {
        cout << "\n1-ENTER\n2-DELETE\n0-Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice < 0 || choice > 2)
            cout << "\nWrong...Choice again...\n";
    } while (choice < 0 || choice > 2);
    return (choice);
}

void enqueue(int item) /                                    // enter
{
    if ((front == 1 && rear == size) || front == rear + 1) /// queue is already filled
        {
            cout << "Queue is full" << endl;
            return;
        }

    if (front == 0)                                         /// queue initially empty
    {
        front = 1;
        rear = 1;
    }
    else if (rear == size)                                   /// cyclic queue, goes back to begin to insert new element if empty
        {
            rear = 1;
        }
    else
    {
        rear++;
    }
    Queue[rear] = item;                                      /// inserts new element
}
void dequeue() // delete
{
    int item;   
    if (front == 0)                                             /// if queue is already empty
    {
        cout << "underflow" << endl;
        return;
    }
    item = Queue[front];
    if (front == rear)                                          /// queue has only one element so
    {   
        front = 0;                                              /// set back to zero after deletion
        rear = 0;
    }
    else if (front == size)                                     /// cyclic queue, goes back to beginning to delete items
        {
            front = 1;
        }
    else
    {
        front = front + 1;
    }
    cout << item << " "
         << "Has been deleted" << endl;
}

void display()
{
    if (front == 0)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        if (front <= rear)                                      /// wen cyclic queue doesnot occur
        {
            for (int i = front; i <= rear; i++)
            {
                cout << Queue[i] << " ";
            }
        }
        if (front > rear)                                       /// wen cyclic queue occurs
        {
            for (int i = front; i <= size; i++)                 /// print front to size
            {
                cout << Queue[i] << " ";
            }
            for (int i = 1; i <= rear; i++)                     /// then 1 to rear
            {
                cout << Queue[i] << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int choice, item;

    do
    {
        choice = menu();
        switch (choice)
        {
        case 1:
            cin >> item;
            enqueue(item);
            display();
            break;
        case 2:
            dequeue();
            display();
            break;
        case 0:
            cout << "End of operation\n";
            break;
        }
    } while (choice != 0);
    return 0;
}
