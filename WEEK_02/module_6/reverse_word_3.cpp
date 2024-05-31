#include <bits/stdc++.h>
using namespace std;

void reverse_word(stringstream &ss)
{
    string word;
    if (ss >> word)
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

    reverse_word(ss);

    return 0; 
}