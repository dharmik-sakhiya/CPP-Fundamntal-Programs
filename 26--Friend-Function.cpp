#include <iostream>
#include <string>

using namespace std;

class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "\nYour Complex Number is " << a << "+" << b << "i" << endl;
    }

    friend complex sumcomplex(complex o1, complex o2);
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
};

int main()
{
    int x1, y1, x2, y2;

    cout << "Enter Set-1 Complex Number X1 factor= ";
    cin >> x1;
    cout << "Enter Set-1 Complex Number Y1 factor= ";
    cin >> y1;
    cout << "\nEnter Set-2 Complex Number X2 factor= ";
    cin >> x2;
    cout << "Enter Set-2 Complex Number Y2 factor= ";
    cin >> y2;

    complex d1, d2, sum;

    d1.setnumber(x1, y1);
    d1.printnumber();

    d2.setnumber(x2, y2);
    d2.printnumber();

    sum = sumcomplex(d1, d2);
    sum.printnumber();

    return 0;
}

/*
Properties of Friend Function
1. Not in the scope of the class
2. Since it is not in the scope of the class, it cannot be called from the object of that class,
   for example, sumComplex() is invalid
3. A friend function can be invoked without the help of any object
4. Usually contain objects as arguments
5. Can be declared under the public or private access modifier, it will not make any difference
6. It cannot access the members directly by their names, it needs (object_name.member_name)
   to access any member.

*/