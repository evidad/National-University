#include <iostream>
using namespace std;

// Function to determine the length of a C-style string
int get_length(const char* str) 
{
    const char* ptr = str; 
    int count = 0;         

    // Traverse the string until the null terminator is encountered
    while (*ptr != '\0') 
    {
        count++;
        ptr++;
    }

    return count;
}

// Function to find the index of the first occurrence of a character in a C-style string
int index_of(const char* str, char ch) 
{
    const char* ptr = str; 
    int index = 0;         

    // Traverse the string until the null terminator is encountered
    while (*ptr != '\0') 
    {
        if (*ptr == ch) 
        {
            return index; 
        }
        ptr++;   
        index++; 
    }

    // Return -1 if the character is not found in the string
    return -1; 
}

// Function to replace every occurrence of a character in a C-style string with another character
char* replace_char(char* str, char oldChar, char newChar) 
{
    char* ptr = str; 

    // Traverse the string until the null terminator is encountered
    while (*ptr != '\0') 
    {
        if (*ptr == oldChar) 
        {
            *ptr = newChar;
        }
        ptr++;
    }

    return str; 
}

// Function to concatenate two C-style strings
char* concat_strings(const char* str1, const char* str2) 
{
    int len1 = get_length(str1); 
    int len2 = get_length(str2); 

    // Allocate memory for the new string
    char* result = new char[len1 + len2 + 1];

    // Copy the first string into the result
    char* ptr = result;
    while (*str1 != '\0') 
    {
        *ptr = *str1;
        ptr++;
        str1++;
    }

    // Copy the second string into the result
    while (*str2 != '\0') 
    {
        *ptr = *str2;
        ptr++;
        str2++;
    }

    *ptr = '\0'; 

    return result; 
}


int main() 
{
    const char* length_example = "Hello World";
    
    int len = get_length(length_example);

    cout << "Character count of \"" << length_example << "\" is " << len << " characters" << endl;

    // --------------------------------------------------------------

    char searchChar = 'l';

    int index = index_of(length_example, searchChar);

    if (index != -1) {
        cout << "The character '" << searchChar << "' is found at index " << index << endl;
    } else {
        cout << "The character '" << searchChar << "' is not found in the string \"" << length_example << "\"." << endl;
    }

    // --------------------------------------------------------------

    char originalString[] = "Hello, world!";
    char oldChar = 'o';
    char newChar = 'a';

    char* modifiedString = replace_char(originalString, oldChar, newChar);

    cout << "The modified string is: \"" << modifiedString << "\"" << endl;

    // --------------------------------------------------------------

    const char* str1 = "Hello, ";
    const char* str2 = "world!";

    char* concatenatedString = concat_strings(str1, str2);

    cout << "The concatenated string is: \"" << concatenatedString << "\"" << endl;

    delete[] concatenatedString;

    return 0;
}
