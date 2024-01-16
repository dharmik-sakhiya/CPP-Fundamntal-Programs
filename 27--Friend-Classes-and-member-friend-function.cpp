#include <iostream>
#include <string>

using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex, complex);
    int sumimgcomplex(complex, complex);
};

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

    // friend int calculator ::sumrealcomplex(complex, complex);
    // friend int calculator ::sumimgcomplex(complex, complex);
    friend class calculator;
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumimgcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

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
    complex o1, o2;

    o1.setnumber(x1, y1);
    o2.setnumber(x2, y2);

    calculator cal;

    int res = cal.sumrealcomplex(o1, o2);
    int img = cal.sumimgcomplex(o1, o2);
    cout << endl
         << "The Sum of Real Part o1 & o2 is " << res << endl;
    cout << "The Sum of Imaginary Part o1 & o2 is " << img << endl;
    return 0;
}