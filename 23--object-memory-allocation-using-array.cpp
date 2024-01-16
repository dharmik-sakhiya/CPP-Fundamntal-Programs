#include <iostream>

using namespace std;

class shop
{
  int itemid[50];
  int itemprice[50];
  int tmp, sum;

public:
  void inittmp(void)
  {
    tmp = 0;
    sum = 0;
  }
  void getdata(void);
  void displaydata(void);
};

void shop ::getdata(void)
{
  cout << "Enter Itemid: ";
  cin >> itemid[tmp];
  cout << "Enter itemprice: ";
  cin >> itemprice[tmp];
  tmp++;
}

void shop ::displaydata(void)
{
  for (int i = 0; i < tmp; i++)
  {
    cout << "Shop: Itemid: " << itemid[i] << "\tItemprice: " << itemprice[i] << endl;
  }
}

int main()
{
  int j, n;
  shop i;
  i.inittmp();

  cout << "Enter How Many Items You Need to Work With: ";
  cin >> n;

  cout << endl;

  for (int j = 0; j < n; j++)
  {
    i.getdata();
  }

  i.displaydata();
  return 0;
}