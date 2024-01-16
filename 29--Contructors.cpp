#include <iostream>
#include <string>

using namespace std;

class complex
{
    int a, b;

public:
    complex(void);
    void printnumber()
    {
        cout << "\nYour Complex Number is " << a << "+" << b << "i" << endl;
    }
};

complex::complex(void)
{
    int x1, y1, x2, y2;

    cout << "Enter Set-1 Complex Number X1 factor= ";
    cin >> x1;
    cout << "Enter Set-1 Complex Number Y1 factor= ";
    cin >> y1;

    a = x1;
    b = y1;
}

int main()
{
    complex d;
    d.printnumber();
    return 0;
}