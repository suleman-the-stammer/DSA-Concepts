#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int ID;
    int age;
    int salary;
    string Name;
};
void display(Employee emp[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Employee ID : " << emp[i].ID << endl;
        cout << "Employee Name : " << emp[i].Name << endl;
        cout << "Employee Age : " << emp[i].age << endl;
        cout << "Employee salary : " << emp[i].salary << endl;
    }
}
int main()
{
    int i, j, temp;
    Employee emp[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Employee ID : ";
        cin >> emp[i].ID;
        cin.ignore();
        cout << "Enter Employee Name : ";
        getline(cin, emp[i].Name);
        cout << "Enter Employee Age : ";
        cin >> emp[i].age;
        cout << "Enter Employee salary : ";
        cin >> emp[i].salary;
        cout << endl;
    }
    cout<<"Employee salary before sorting "<<endl;
    for ( i = 0; i < 10; i++)
    { 
        cout<<emp[i].salary<<endl;
    }
    
    for (i = 0; i < 10; i++)
    {

        for (j = 0; j < 10 - i; j++)
        {
            if (emp[j].salary < emp[j + 1].salary)
            {
                temp = emp[j].salary;
                emp[j].salary = emp[j + 1].salary;
                emp[j + 1].salary = temp;
            }
        }
    }
    cout<<"Employee salary After sorting "<<endl;
    for (i = 0; i < 10; i++)
    {
        cout << emp[i].salary << endl;
    }

     display(emp);
    return 0;
}