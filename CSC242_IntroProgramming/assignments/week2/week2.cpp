#include <iostream>
using namespace std;

int main() 
{ 
  int grade;
  do {
    cout << "Enter student grade (0-100): ";
    cin >> grade;

    if (grade > 100 || grade < 0)
    {
      cout << "Not a valid student grade. Try again." << endl;
    } else {
      switch (grade / 10) 
      {
        case 10:
        case 9:
          cout << "Grade A GPA 4.0" << endl;
          break;
        case 8:
          cout << "Grade B GPA 3.0" << endl;
          break;
        case 7:
          cout << "Grade C GPA 2.0" << endl;
          break;
        default:
          cout << "Grade F GPA 0.0" << endl;
          break;
      }
    }    
  } while (grade > 100 || grade < 0);

  return 0;
}