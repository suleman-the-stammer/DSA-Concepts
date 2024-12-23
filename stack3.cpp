#include <iostream>
#include <stack>
using namespace std;



int solve(stack<int> mystack[], int &x, int top)
{

    if (mystack[top].empty())
    {
        mystack[0].push(x);
        return 0;
    }

    int num = mystack[top].top();
    mystack[top].pop();
   
    solve(mystack, x , top);
  mystack[top].push(num);
  return mystack[top].top();
  //display(mystack);
    
}

stack<int> pushbuttom(stack<int> mystack[], int &x, int top )
{
  cout<<  solve(mystack, x, top);
   // mystack;
    return mystack[top];
}

void display(stack<int> mystack[], int top)

{
   
     if (!mystack[top].empty())
    {
        for (int i = top; i >= 0; i--)
        {
            top++;
            cout<<" "<< mystack[top]<< endl;
            
           // mystack[top++];
           
        }
    }
    else
    {
        cout << "Stack is empty " << endl;
    }
}

int main()
{
    int top = -1;
    int val;
    int arr[7];
    stack<int> mystack[7];
    //int top = -1;
    int x = 9;

for (int i = 0; i < 5; i++)
{
    cout<<"Enter value to push "<<endl;
    cin>>val;
    mystack[i].push(val);
    
}

    

    pushbuttom(mystack, x, top);
   display(mystack , top );

    return 0;
}