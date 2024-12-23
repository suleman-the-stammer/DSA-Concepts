#include<iostream>
#include<string>
#include<stack>
using namespace std;
// const int n =10;
// int arr[n];
// int top=-1;
// void push (int x){
//     if(top>=n-1){
//         cout<<"Stack Is OverFlow :";
//     }
//     else{
//         top++;
//         arr[top]=x;
//     }
// }
// void pop(){
//     if(top==-1){
//         cout<<"Stack is UnderFlow :";
//     }else{
//         cout<<"Pop Element Is :"<<arr[top];
//         top--;
//     }
    
// }
// void display(){
//     if(top==-1){
//         cout<<"stack is empty:";
//     }
//     else{
//         for(int i=top;i>=0;i--){
//             cout<<arr[i]<<" ";
//         }
//     }
// }
int priority(char alpha){
    if(alpha=='+'||alpha=='-')
    return 1;
    if(alpha=='*'||alpha=='/')
    return 2;
    if(alpha=='^')
    return 3;
    else
    return 0;
}
string convert(string infix){
    int i=0;
    string postfix ="";
    stack<int>s;
    while(infix[i]!='\0'){
    if(infix[i]>='a'&&infix[i]<='z'||infix[i]>='A'&&infix[i]<='Z'){
        postfix +=infix[i];
        i++;
    }
    else if(infix[i]=='('){
        
            s.push(infix[i]);
            i++;
        
    }
    else if(infix[i]==')'){
    while(s.top()!='('){
        postfix +=s.top();
     s.pop(); 
    }
    s.pop();
    i++;
    
}
else{
while(!s.empty()&&priority(infix[i])<=priority(s.top())){
    postfix+=s.top();
    s.pop();
}
s.push(infix[i]);
i++;}}
while(!s.empty()){
    postfix+=s.top();
    s.pop();
}
cout<<"Postfix Is :"<<postfix;
return postfix;
}
int main (){
 string infix = "((a+(b*c))-d)"; 
    string postfix;
    postfix = convert(infix);
     return 0;
}