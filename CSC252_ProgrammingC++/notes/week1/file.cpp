#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Initalize string vector
    vector <string> myVector = { "Hello", "World", "This", "Is", "Week1"};

    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Loop through the entire vector (this notation loops through each element)
    for (string word: myVector){
        
        // Need to compare the element to 0 (weird C++)
        if (word.compare("This") == 0)
        {
            // Stops the loop when if statement condition is met
            // break;
            // Prevents execution of the for loop when if statement condition is met, but continues through remaining elements
            // continue;
        }

        // Prints word to file
        MyFile << word << endl;
    }

    // Closes text file
    MyFile.close();

    // Read from text file
    ifstream MyReadFile("filename.txt");

    string myWords;

    // Read the file line by line and print each word to the console
    while (getline (MyReadFile, myWords)){
        cout << myWords << endl;
    }

    MyReadFile.close();

    string sent = "This is Errol";

    for (char character: sent){
        cout << character << endl;
    }

    return 0;
}