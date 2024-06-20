/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
** 
** Class: 	CSC 242
** Assignment: 	Lesson 1
** File: 	format_phone_number.cpp
** Description: This program formats an unformatted 10-digit phone number into the standard format (XXX) XXX-XXXX.
**
** Author: 	Errol Vidad
** Date: 	6/8/2024
** -------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main () 
{
    // Unformatted phone number
    string phone_number = "4155551212";

    // Initalizes string using first three numbers of unformatted phone number
    string area_code = phone_number.substr(0,3);
    // Initalizes string variable using the next three numbers of unformatted phone number
    string prefix = phone_number.substr(3,3);
    // Initalizes string variable using the last four numbers of unformatted phone number
    string line_number = phone_number.substr(6,4);
    // Initalizes string variable that formats phone number
    string formatted_number = "(" + area_code + ") " + prefix + "-" + line_number;

    // Prints formatted phone number
    cout << formatted_number << endl;

    int array[] = {1, 2};

    cout << array[0] << array[1];

    return 0;
}