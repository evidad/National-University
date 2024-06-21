#include <iostream>
#include <vector>
using namespace std;

void check_odd_even(vector<int> vec)
{
  for (int i = 0; i < vec.size(); i++)
    {
      if (vec[i] % 2 == 1)
      {
        cout << "odd" << endl;
      } 
      else 
      {
        cout << "even" << endl;
      }
    }
}
int main(){
  vector<int> my_vector = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
  check_odd_even(my_vector);
  return 0;
}