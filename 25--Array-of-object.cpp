#include <iostream>
#include <string>

using namespace std;

class worker
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 2333;
        cout << "Enter ID of worker: ";
        cin >> id;
    }
    void getid(void)
    {
        cout << "The ID of Worker is " << id << endl;
    }
};

int main()
{
    int x;

    cout << "Enter How Many Worker is : ";
    cin >> x;

    worker ds[x];

    for (int i = 0; i < x; i++)
    {
        ds[i].setid();
        ds[i].getid();
    }

    return 0;
}