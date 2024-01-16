#include <iostream>
#include <string>

using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }

    number(int num)
    {
        a = num;
    }

    // WHEN NO COPY CONSTTRUCTOR IS FOOUND , THEN COMPLER PROVIDE ITS OWN COPY CONDTRUCTOR
    number(number &obj)
    {
        cout << "The copy constructor called" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    number x, y, z(45);
    x.display();
    y.display();
    z.display();
    number z1(z);
    z1.display();

    number z3 = z;
    z3.display();
    return 0;
}