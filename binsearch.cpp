#include<iostream>
using namespace std;

int main()
{
int n ,i,j,mid,f,s,e,r;
cout<<"Enter array size : ";
cin>>n;
int arr[n];
s=arr[0];
e=n-1;
for ( i = 0; i < n; i++)
{
    cout<<"ENter Number : ";
    cin>>arr[i];  
}
cout<<"Enter Number you want to find : ";
cin>>f;
mid = (s,e)/2;
do
{
    if (f==mid)
    {
        r=mid;
    }
    else if(f>mid){
        r=mid++;
    }
    else if (f<mid)
    {
        r = mid--;
    }
    else
    cout<<"NOt found "<<endl;
} while (f>=s && f<=e);
for ( i = 0; i < n-1; i++)
{
    if (f==arr[mid])
    {
        mid;
    }
    else if(f>arr[mid]){
       mid++;
        
    }
    else if (f<arr[mid])
    {
        mid--;
        
    }
    else
    cout<<"NOt found "<<endl;
}
cout<<"Your Number is available at index ["<<mid<<"] "<<endl;
return 0;
}