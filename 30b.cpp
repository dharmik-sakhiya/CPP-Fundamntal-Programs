#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class point
{
  float x, y;

public:
  friend void pdistance(point, point);
  point(float a, float b)
  {
    x = a;
    y = b;
  }
  void displaypoint()
  {
    cout << "The point is (" << x << "," << y << ")" << endl;
  }
};

void pdistance(point p, point r)
{
  float distance;
  distance = sqrt(pow((p.x - r.x), 2) + pow((p.y - r.y), 2));
  cout << "\nThe distance between the points is " << distance << endl;
}

int main()
{

  float x1, y1, x2, y2, distance;

  cout << "Enter Set-1 Complex Number X1 factor= ";
  cin >> x1;
  cout << "Enter Set-1 Complex Number Y1 factor= ";
  cin >> y1;
  cout << "\nEnter Set-2 Complex Number X2 factor= ";
  cin >> x2;
  cout << "Enter Set-2 Complex Number Y2 factor= ";
  cin >> y2;
  cout << endl;

  point p(x1, y1);
  p.displaypoint();

  point r(x2, y2);
  r.displaypoint();

  pdistance(p, r);

  return 0;
}