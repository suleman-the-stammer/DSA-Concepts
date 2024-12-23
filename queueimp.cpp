#include <iostream>
using namespace std;

class Queue
{

public:
    int size = 6;
    // int* arr;
    int rear = 0;
    int front = 0;
    int *arr = new int[size];
    void enqueue()
    {
        if (front == rear || rear < size)
        {
            cout << "Enter the Number to Push : " << endl;
            cin >> arr[rear];
            rear++;
        }
        else
        {
            cout << "Queue is Fulll " << endl;
        }
    }

    void dequeue()
    {
        if (front == rear)
        {
            cout << "Queue is Empty " << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)

            {
                front = 0;
                rear = 0;
            }
        }
    }
    void queueemppty()
    {
        if (front == rear)
        {
            cout << "Queue is Empty " << endl;
        }
        else
        {
            cout << "Queue is not empty " << endl;
        }
    }
    void display()
    {
        if (front == rear)
        {
            cout << "Soory it's Empty " << endl;
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << endl;
            }
        }
    };
};

int main()
{
    
    Queue q;
    int ch;
    cout << "1) Push in Queue" << endl;
    cout << "2) Pop from Queue" << endl;
    cout << "3) Display Queue " << endl;
    cout << "4) Check Queue is Empty or not" << endl;
    do
    {

        cout << "Enter choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            q.enqueue();
            break;
        }
        case 2:
        {
            q.dequeue();
            break;
        }
        case 3:
        {
            q.display();
            break;
        }
        case 4:
        {
            q.queueemppty();
            break;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    } while (ch != 4);

    return 0;
}