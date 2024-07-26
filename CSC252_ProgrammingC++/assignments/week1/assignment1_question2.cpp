#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    string inputFileName = "input.txt";
    string outputFileName = "output.txt";

    // Open the input file
    ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) 
    {
        cerr << "Could not open the input file." << endl;
        return 1;
    }

    // Open the output file
    ofstream outputFile(outputFileName);
    if (!outputFile.is_open()) 
    {
        cerr << "Could not open the output file." << endl;
        inputFile.close();
        return 1;
    }

    string line;

    // Read each line from the input file
    while (getline(inputFile, line)) 
    {
        if (!line.empty()) 
        {
            outputFile << line << endl;
        }
    }

    // Close the input and output files
    inputFile.close();
    outputFile.close();

    cout << "Non-blank lines have been written to the output file." << endl;

    return 0;
}