#include <iostream>
#include <string>

using namespace std;

class simple
{
    int data1, data2;

public:
    simple(int a, int b = 90)
    {
        data1 = a;
        data2 = b;
    }
    void print()
    {
        cout << "The value of data: " << data1 << " and " << data2;
    }
};

int main()
{
    simple d(23);

    d.print();
    return 0;
}