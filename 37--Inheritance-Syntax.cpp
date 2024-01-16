#include <iostream>
#include <string>

using namespace std;

class employee // base class
{
public:
    int id;
    float salary;
    employee(int eid, float esal)
    {
        id = eid;
        salary = esal;
    }
    employee() {}
};

// Derived class
/*
class {{derived-class-name}}:{{visibility-mode}}{{base-class-name}}
{
    class member,methods,etc...
}


default visibility=private
private members are not converted in public.
*/

// Creating a programe class derived from the employee base class
class programmer : public employee
{
public:
    int languagenum;
    programmer(int inid)
    {
        languagenum = 9;
        id = inid;
    }
    void printdata()
    {
        cout << "id: " << id << endl;
    }
};

int main()
{
    int wsal, wsalary;
    cout << "Enter employee salry-1 : ";
    cin >> wsal;
    cout << "ENter employee salary-2 : ";
    cin >> wsalary;

    employee emp(2, wsal);
    employee emp2(2, wsalary);
    cout << "Employee salary-1 : " << emp.salary << endl;
    cout << "Employee salary-2 : " << emp2.salary << endl;

    programmer prog(2);

    cout << "languagenum: " << prog.languagenum << endl;
    cout << "id: " << prog.id << endl;
    prog.printdata();
    return 0;
}