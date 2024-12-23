#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

int bin(string binary)
{
    stack<int> stack;
    int decimal = 0;
    int weight = 0;

    for (int i = 0; i < binary.length(); i++)
    {
        stack.push(binary[i] - '0');
    }

    while (!stack.empty())
    {
        decimal += stack.top() * pow(2, weight);
        stack.pop();
        weight++;
    }

    return decimal;
}

int main()
{

    cout << "11000101 = " << bin("11000101") << endl;
    cout << "10101010 = " << bin("10101010") << endl;
    cout << "11111111 = " << bin("11111111") << endl;
    cout << "10000000 = " << bin("10000000") << endl;
    cout << "1111100000 = " << bin("1111100000") << endl;

    return 0;
}
