#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
     
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy value
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    // Merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
   k = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++]= first[index1++];
        }else
        {
            arr[k++]=second[index2++];
        }
    }
    while (index1<len1)
    {
        arr[k++] = first[index1++];
    }
     while (index2<len2)
    {
        arr[k++] = second[index2++];
    }
    
    
}
void sort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return ; // base case
    }

    int mid = (s + e) / 2;
    // left part marging
    sort(arr, s, mid);
    // right part sorting
    sort(arr, mid + 1, e);
    // merging
    merge(arr, s, e);
}

int main()
{
    int arr[7] = {3, 4, 1, 0, 8, 6, 5};
    int n = 7;
    cout<<"Before "<<endl;
    for (int i = 0; i < n; i++)
    {
        
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    sort(arr, 0, n - 1);
    cout<<"After "<<endl;
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}