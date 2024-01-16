#include <iostream>

using namespace std;

class emp
{
private:
    float a, b, c, sum = 0, avg;

public:
    float d, e;

    void setdata(float a1, float b1, float c1);
    void getdata()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
        cout << "d = " << d << endl;
        cout << "e = " << e << endl;
        cout << "sum(a,b,c) = " << sum << endl;
        cout << "average(a,b,c) = " << avg << endl;
    }
};

void emp ::setdata(float a1, float b1, float c1)
{
    a = a1;
    b = b1;
    c = c1;
    sum = a + b + c;
    avg = (sum / 3);
}

int main()
{
    emp dhamo;
    dhamo.d = 22;
    dhamo.e = 33;
    dhamo.setdata(5, 6, 99);
    dhamo.getdata();
    return 0;
}