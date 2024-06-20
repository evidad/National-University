/*
This program converts a given 12-hour time (with an AM/PM indicator) into military (24-hour) time format. It prompts the user to enter the time in hours and minutes, along with specifying AM or PM. The program then outputs the equivalent time in 24-hour format.
*/

#include <iostream>
using namespace std;

int get_hours()
{
  int hours;
  do
    {
      cout << "Enter time in hours (1-12): ";
      cin >> hours;
    } while (hours < 1 || hours > 12);
  return hours;
}

int get_minutes()
{
  int minutes;
  do
    {
      cout << "Enter time in minutes (0-59): ";
      cin >> minutes;
    } while (minutes < 0 || minutes > 59);
  if (minutes == 0)
  {
    minutes = 00;
  }
  return minutes;
}

string get_am_pm()
{
  string military;
  do
    {
      cout << "Enter AM or PM: ";
      cin >> military;
    } while (military != "AM" && military != "PM");
  return military;
}

string format_time(int component)
{
  if (component < 10)
  {
    return "0" + to_string(component);
  } else {
    return to_string(component);
  }
}

string convert_military_time(int hours, int minutes, string am_pm)
{
  if (am_pm == "PM" && hours != 12)
  {
    hours = hours + 12;
  }
  string hours_str = format_time(hours);
  string minutes_str = format_time(minutes);

  return "The military time is: " + hours_str + minutes_str;
}

int main ()
{
  int hours = get_hours();
  int minutes = get_minutes();
  string am_pm = get_am_pm();
  string results = convert_military_time(hours, minutes, am_pm);
  cout << results << endl;
  return 0;
}