#include <iostream>
#include <vector>
using namespace std;

// Given a vector such as:
// Vector<int> v = { 4, 5, 8, 3, 4, 9 }
// 1.	Take the small value of the vector/array above. 
// The smallest value in the vector/array is 3.
// 2.	Once you have the smallest value in the vector,
// Multiply it to each of the digits above.
// {12, 15. 24, 9, 12, 27}
// 3.	Finally now add them up and print that value.

// 12 + 15 + 24 + 9 + 12 + 27 =  99
// 4.	Again as stated above simply print that value.

// Output: 99

int findSmallest(vector<int> vector)
{
  int smallestInt = vector[0];
  for (int i = 1; i < vector.size(); i++)
    {
      if (vector[i] < smallestInt)
      {
        smallestInt = vector[i];
      }
    }
  return smallestInt;
}

vector<int> multiplyVector(vector<int> vec)
{
  int smallestInt = findSmallest(vec);
  for (int i = 0; i < vec.size(); i++)
    {
     vec[i] = vec[i] * smallestInt;
    }
  return vec;
}

int sumOfVectorElements(vector<int> vec)
{
  int sum = 0;
  for (int i = 0; i < vec.size(); i++)
    {
      sum += vec[i];
    }
  return sum;
}


int main() {
  vector<int> v = {4, 5, 8, 3, 4, 9};
  cout << sumOfVectorElements(multiplyVector(v));
}