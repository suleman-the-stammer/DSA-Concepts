#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;
    q.push(4);
    q.push(6);
    q.push(2);
    q.push(3);
    q.push(10);
    cout<<q.front()<<endl;
    cout<<"Size is " <<q.size()<<endl;
    cout<<q.back();



return 0;

}