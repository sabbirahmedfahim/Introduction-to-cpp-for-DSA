#include <bits/stdc++.h> //goto reverse_word_3.cpp for clean code
using namespace std;
// before entering the code, make sure you revised the #reference file

// void reverse_word(string name) //wrong
void reverse_word(stringstream &ss)
{
    string word;
    if (ss >> word) 
    //no need for a base case, the condition itself serving the job
    {
        reverse_word(ss);
        cout << word << " ";
    }
}

int main()
{
    string name;
    getline(cin, name);

    stringstream ss(name);
    // string word;
    // while (ss >> word)
    // {
    //     cout << word << " ";
    // }

    reverse_word(ss);

    return 0;
}