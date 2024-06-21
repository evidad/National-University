#include <iostream>
using namespace std;

int get_entrance_fee(int children, int adult)
{
  int entrance_fee = 10;
  int adult_price = 25 * adult;
  int children_price;
  int total;

  if (children > 3)
  {
    children_price = 9 * children;
  }
  else
  {
    children_price = 10 * children;
  }
  total = entrance_fee + adult_price + children_price;
  return total;
}

int main()
{
  int children = 3;
  int adult = 5;
  int result = get_entrance_fee(children, adult);
  cout << result << endl;
  return 0;
}