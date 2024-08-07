#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void convertDecimalToBinary(int n, string &binary)
{
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            binary += '0';
        }
        else
        {
            binary += '1';
        }
        convertDecimalToBinary(n / 2, binary);
    }
}

string getBinaryRepresentation(int n)
{
    if (n == 0)
    {
        return "0";
    }
    string binary = "";
    convertDecimalToBinary(n, binary);
    reverse(binary.begin(), binary.end());
    return binary;
}

int main()
{
    int number;
    cout << "Please enter a decimal integer: ";
    cin >> number;

    if (number < 0)
    {
        cerr << "Please enter a non-negative integer." << endl;
        return 1;
    }

    string binary = getBinaryRepresentation(number);
    cout << "Binary equivalent: " << binary << endl;

    return 0;
}
