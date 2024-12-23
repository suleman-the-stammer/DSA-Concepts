#include <iostream>
#include<stack>
using namespace std;

class Stack
{
    public:
    int arr[10];
    int size = 9;
    int top = -1;
    int val;

    void stackpush()
    {
        if (top <= size)
        {
            cout << "  1Enter the elements to push in Stack :";
            cin >> val;
            top++;
            arr[top]=  val;

            
        }
        else
        {
            cout << "Stack Overflow " << endl;
        }

    }
    void stackpop()
    {
        if (top >= 0)
        {
            cout << "Your top delleted Value is : " << arr[top];
            top--;
        }  
        else
        {
            cout << "Stack Underflow " << endl;
        }
    }
    int display()
    {
        if (top <= size && top >= 0)
        {
            for (int i = top; i>=0; i--)
            {
                cout << "  " <<arr[i];
                
            }
        }
        else
        {
            cout << "Stack Empty " << endl;
        }
    }
};
void solve(stack<int> &m, int x){
    
if (m.empty())
{
    m.push(x);
    return ;
}
int num = m.top();
m.pop();
solve(m, x);
m.push(num);

}


stack <int> pushbuttom(stack<int> &mystack, int x){
    solve(mystack, x);

    return mystack;

}
int main()
{
    Stack s;
    int x = 9;
stack<int> mystack;
    
    int ch;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Exit" << endl;
    do
    {
       
        cout << "Enter choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            s.stackpush();
            break;
        }
        case 2:
        {
            s.stackpop();
            break;
        }
        case 3:
        {
            s.display();
            break;
        }
        case 4:
        {
            pushbuttom(mystack,x);
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