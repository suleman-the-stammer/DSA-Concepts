#include<iostream>
using namespace std;

class stak{

public:
char arr[7];
int size = 7;
int top = -1;
char val;

void stakpush(){
    if (top< size)
    {
        cout<<"Enter the Value to push : "<<endl;
        cin>>val;
        top++;
        arr[top]= val;
    }
    else
    cout<<"Stack is Full "<<endl;
}

void stakpop(){
    if(top>=0){
    cout<<"Your Poped value is : "<<top<<endl;
    top--;
    }
    else
    {
        cout<<"Stack is empty "<<endl;
    }
    
}
void display(){
if (top>=0)
{
    for (int i = top; i >= 0 ; i--)
    {
        cout<<"  "<<arr[i];
    }
    
}
else
cout<<"Stack is Empty : "<<endl;
}

};

int main(){
    stak s;
 int ch;

    cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
    cout<<endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            s.stakpush();
            break;
         }
         case 2: {
            s.stakpop();
            break;
         }
         case 3: {
            s.display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}