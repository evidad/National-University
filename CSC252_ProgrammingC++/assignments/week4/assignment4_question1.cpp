#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> create_permutations(string word)
{
    vector<string> result;

    if (word.length() == 0)
    {
        result.push_back(word);
        return result;
    }

    for (int i = 0; i < word.length(); i++)
    {
        string shorter_word = word.substr(0, i) + word.substr(i + 1);
        vector<string> shorter_permutations = create_permutations(shorter_word);

        for (int j = 0; j < shorter_permutations.size(); j++)
        {
            string longer_word = word[i] + shorter_permutations[j];
            result.push_back(longer_word);
        }
    }
    return result;
}

int main()
{
    cout << "Please enter a string: ";
    string input;
    getline(cin, input);
    vector<string> v = create_permutations(input);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}