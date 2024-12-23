#include<iostream>
using namespace std;
class Queue{
    public:
    int size = 5;
    int front = -1;
    int rear = -1;
    int *arr = new int[size];

    void enqueue(){
        if ((front == 0 && rear == size-1) || rear == (front -1)% (size -1))
        {
            cout<<"Stack is Full "<<endl;
        }
        else if (front==-1)
        {
            rear++;
            cout<<"Enter Value to Store : "<<endl;
            cin>>arr[rear];
            
        }
        else if (rear == size-1 && front!=0)
        {
           rear++;
            cout<<"Enter Value to Store : "<<endl;
            cin>>arr[rear];

        }
        else
        {
            rear++;
            cout<<"Enter Value to Store : "<<endl;
            cin>>arr[rear];
        }       
    }
    int dequeue(){
        if (front == -1 && front == rear )
        {
           cout<<"Stack is Empty"<<endl;
        }
        int ans = arr[front];
        arr[front]=-1;
        if (front == rear)
        {
            front++;
        }
        else if (front == size -1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        
        return ans;
    }
    void display(){
        if (front == -1 && front == rear )
        {
           cout<<"Stack is Empty"<<endl;
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout<<"  " <<arr[i];
            }
            
        }
        
    }
};

int main(){

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
            //q.queueemppty();
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