#include<iostream>
using namespace std;
int check(int n){
    if (n==1)
    {
        int k = 2;
        return k;
    }
    cout<<"Out of the if "<<endl;
    return 1;
    
}
int main(void){
    int n=1;
    cout<<check(n);
}