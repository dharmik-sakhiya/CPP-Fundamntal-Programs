#include <iostream>
#include <string>

using namespace std;

class s2;

class s1
{
    int val1;
    friend void exchange(s1 &, s2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }
};

class s2
{
    int val2;
    friend void exchange(s1 &, s2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(s1 &x, s2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    s1 os1;
    s2 os2;

    os1.indata(34);
    os2.indata(29);
    exchange(os1, os2);

    cout << "The value s1 after exchanging becomes: ";
    os1.display();
    cout << "The value s2 after exchanging becomes: ";
    os2.display();

    return 0;
}