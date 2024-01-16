#include <iostream>
#include <string>

using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setdatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printnumber()
    {
        cout << "Your Complex Number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    int x1, y1, x2, y2;
    cout << "Enter Set-1 Complex Number X factor= ";
    cin >> x1;
    cout << "\nEnter Set-1 Complex Number Y factor= ";
    cin >> y1;
    cout << "Enter Set-2 Complex Number X factor= ";
    cin >> x2;
    cout << "\nEnter Set-2 Complex Number Y factor= ";
    cin >> y2;

    complex d1, d2, d3;
    d1.setdata(x1, y1);
    d1.printnumber();

    d2.setdata(x2, y2);
    d2.printnumber();

    d3.setdatabysum(d1, d2);
    d3.printnumber();

    return 0;
}