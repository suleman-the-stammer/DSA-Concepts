#include<iostream>
using namespace std;

void space(int i){
    if (i==0)
    {
        return ;
    }
    cout<<" ";
    i--;
    space(i);   
}
void star(int j){
    if (j==0)
    {
        
        return ;
    }
    cout<<"* ";
    j--;
    star(j);
    
}
void nspace(int k){
    if (k==0)
    {
        return ;
    }
    cout<<" ";
    k--;
    nspace(k);   
}
void nstar(int m){
    if (m==0)
    {
        
        return ;
    }
    cout<<"* ";
    m--;
    nstar(m);
    
}

void steric(int n, int i, int j){
   
if (n==0)
{
   return ;
}
space(i);
star(j);
cout<<endl;
n--;
i--;
j++;

steric(n,i,j);

}
void low(int k, int m, int n){
if (n==0)
{
   return ;
}
nspace(k);
nstar(m);
cout<<endl;
n--;
k++;
m--;
low(k,m,n);
}

int main(){
    int n= 5;
    int i = 5,j= 1;
     int k = 1;
     int m = 5;
    steric(n,i,j);
    low(k,m,n);
    return 0;
}