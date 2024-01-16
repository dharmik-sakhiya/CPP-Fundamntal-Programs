#include <iostream>
#include <string>

using namespace std;

class bin
{
    string s;

public:
    void read(void);
    void ckbin(void);
    void ones_compliment(void);
    void dislay(void);
};

void bin ::read(void)
{
    cout << "Enter BInary Number: ";
    cin >> s;
}

void bin ::ckbin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Number BRO" << endl;
            exit(0);
        }
    }
}

void bin ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << endl;
}

void bin ::dislay(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    bin b;
    b.read();
    b.ckbin();
    b.dislay();
    b.ones_compliment();
    b.dislay();
    return 0;
}
