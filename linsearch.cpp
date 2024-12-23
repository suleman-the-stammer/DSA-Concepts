#include<iostream>
#include<string>
using namespace std;

void search(char f, char arr[]){

for (int i = 0; i < 30; i++)
{
    if (f == arr[i])
    {
        cout<<"The name you search is available at index ["<<i<<"]"<<endl;
    }  
}


}

int main(){
    int i,j, n;
    char f;
    char arr[30];
 for ( i = 0; i < 30; i++)
 {
    cout<<"ENter your name : ";
   cin>>arr[i];
    cout<<endl;
 }

cout<<"Enter the name you want to search : ";
cin>>f;
search( f , arr);
//  for ( i = 0; i < 30; i++)
//  {
//     cout<<"The name of "<<i<<" is "<<arr[i]<<endl;
//  }
 
 
}