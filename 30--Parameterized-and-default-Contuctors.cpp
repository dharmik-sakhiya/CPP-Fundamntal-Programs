#include<iostream>
#include<string>

using namespace std;

class complex
{
    int a, b;

public:
    complex(int ,int );
    void printnumber()
    {
        cout << "\nYour Complex Number is " << a << "+" << b << "i" << endl;
    }
};

complex::complex(int x,int y)
{
    a = x;
    b = y;
}

int main()
{
    int x1, y1, x2, y2;

    cout << "Enter Set-1 Complex Number X1 factor= ";
    cin >> x1;
    cout << "Enter Set-1 Complex Number Y1 factor= ";
    cin >> y1;

    
    complex d(x1,y1);

    complex d1=complex(3,4);
    
    d.printnumber();
    d1.printnumber();
    return 0;
}