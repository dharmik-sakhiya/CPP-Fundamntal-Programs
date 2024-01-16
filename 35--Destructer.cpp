#include <iostream>
#include <string>

using namespace std;

int count = 0;

class num
{
public:
     num()
     {
          count++;
          cout << "This is the time when Contructer is called " << count << endl
               << endl;
     }

     ~num()
     {
          cout << "This is the time when Distructer is called for object number   " << count << endl
               << endl;
          count--;
     }
};

int main()
{
     cout << "Now we are in main function \n\n";
     cout << "Creating  first objects n1 " << endl
          << endl;
     num n1;
     {
          cout << "Entering this block" << endl
               << endl;
          cout << "Creating two more object " << endl
               << endl;
          num n2, n3;
          cout << "Exiting this block" << endl
               << endl;
     }

     cout << "Back to main function" << endl
          << endl;
     return 0;
}