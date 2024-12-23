#include <iostream>
#include <string>
using namespace std;
struct Marks
{
    int rollnum;
    string name;
    int cp;
    int dsa;
    int oop;
    int p[10];
};
int main()
{
    int temp, i, j;
    int min;
    int t = 300;
    int obt;
    Marks s[10];
    for (i = 0; i < 10; i++)
    {
        cout << endl;
        cout << "Enter your Roll Number : ";
        cin >> s[i].rollnum;
        cin.ignore();
        cout << "Enter your Name : ";
        getline(cin, s[i].name);
        cout << "Enter your CP Marks : ";
        cin >> s[i].cp;
        cout << "Enter your ICT/DSA Marks : ";
        cin >> s[i].dsa;
        cout << "Enter your OOP Marks : ";
        cin >> s[i].oop;
    }
    for (i = 0; i < 10; i++)
    {
        obt = s[i].cp + s[i].dsa + s[i].oop;
        s[i].p[i] = obt * 100 / t;
        cout << " The percentage of " << s[i].name << " with Roll Number "
             << s[i].rollnum << " is " << s[i].p[i] << "%" << endl;
    }
    cout << "the percentage before sorting " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << s[i].p[i] << "%" << endl;
    }

    for (i = 0; i < 9; i++)
    {

        for (j = i + 1; j < 10; i++)
        {
            min = i;
            if (s[i].p[j] < s[i].p[min])
            {
                min = j;
            }
        }
        temp = s[i].p[min];
        s[i].p[min] = s[i].p[i];
        s[i].p[i] = temp;
    }
    cout << "the percentage After sorting " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << s[i].p[i] << "%" << endl;
    }

    return 0;
}