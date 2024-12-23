#include<iostream>
using namespace std;

// void update(int *ptr){

// *ptr = *ptr+1;
// cout<<"Inside func = "<<*ptr<<endl;


// }

int main(){
// int arr[10]={2,3,41,33,54,55,32,36,22,11};
// int *p= &arr[0];
// cout<<"*p =  "<<*p<<endl;
//  cout<<"Size of arr[10] = "<<sizeof(arr)<<endl;
//  cout<<"Size of *ptr = "<<sizeof(p)<<endl;
// char arr[6]= "abcde";
// char *ch = &arr[0];
// cout<<" *ch = "<<*ch<<endl;
// cout<<" ch = "<<ch<<endl;
int c= 45;
int *ptr = &c;
int** p = &ptr;
cout<<"p = "<<p<<endl;
cout<<"**p = "<<**p<<endl;
// cout<<"Outside = "<<*ptr<<endl;
// update(ptr);
// cout<<"Ater fun = "<<*ptr<<endl;


return 0;

}