#include <iostream>
#include <string>

using namespace std;

class Employee
{
    int id;
    static int tmp;

public:
    void setdata(void)
    {
        cout << "Enter the Id: ";
        cin >> id;
        tmp++;
    }
    void getdata(void)
    {
        cout << "Employee id: " << id << " and number: " << tmp << endl;
    }
    static void getcount(void)
    {
        cout << "The value of the tmp is: " << tmp << endl;
    }
};

int Employee::tmp = 1200;

int main()
{
    Employee h, k, o, p;
    h.setdata();
    h.getdata();
    Employee::getcount();

    k.setdata();
    k.getdata();
    Employee::getcount();

    o.setdata();
    o.getdata();
    Employee::getcount();

    return 0;
}