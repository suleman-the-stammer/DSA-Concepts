#include <iostream>
using namespace std;

int main()
{
    int n, i, j, temp;
    cout << "ENter your array size : " << endl;
    cin >> n;
    int s[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter your salary : " << endl;
        cin >> s[i];
    }
    cout << "Your salary before sorting " << endl;
    for (i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
    cout << "Your salary after sorting " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (s[i] < s[i + 1])
            {
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }

    return 0;
}
