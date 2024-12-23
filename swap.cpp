#include <iostream>
using namespace std;

void spec(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    //return a,b;
    
}

int main()
{

    int a = 5;
    int b = 4;
    //int arr[] = { 3,2,6,5,43,1};
    cout << "Before Swaping  a = " << a << endl;
    cout << "Before Swaping  b = " << b << endl;

    spec(a, b);

    cout << "After Swaping " << endl;
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b;
    return 0;
}