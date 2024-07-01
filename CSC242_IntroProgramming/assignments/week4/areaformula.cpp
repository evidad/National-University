#include <iostream>
using namespace std;

double areaOfCircle(double radius)
{
  double const PIE = 3.14;
  double area = PIE * radius * radius;
  return area;
}

double areaOfTriangle(double base, double height)
{
  double area = base * height;
  return area/2;
}

double areaOfTrapezoid(double top, double base, double height)
{
  double sumOfHorizontal = top + base;
  double area = sumOfHorizontal * height;
  return area/2;
}

int main() {
  cout << areaOfCircle(1) << endl;
  cout << areaOfCircle(2) << endl;
  cout << areaOfCircle(4) << endl;
  cout << areaOfTriangle(1, 2) << endl;
  cout << areaOfTriangle(2, 3) << endl;
  cout << areaOfTriangle(4, 4) << endl;
  cout << areaOfTrapezoid(1, 2, 3) << endl;
  cout << areaOfTrapezoid(2, 3, 4) << endl;
  cout << areaOfTrapezoid(4, 4, 4) << endl;
}