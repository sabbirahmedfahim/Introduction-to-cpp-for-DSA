#include <bits/stdc++.h> //goto reverse_word_2 for the solution
using namespace std;


int main()
{
    string name;
    getline(cin, name);

    stringstream ss(name);
    string word;
    while (ss >> word)
    {
        cout << word << " ";
    }

    return 0;
}