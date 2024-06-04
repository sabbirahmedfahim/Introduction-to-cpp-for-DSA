#include <bits/stdc++.h>
using namespace std;

int main()
{
    string nme;
    getline(cin, nme);
    stringstream ss(nme);
    string word;
    int totalWord = 1;
    for (int i = 0; i < nme.size(); i++)
    {
        if (nme[i] == ' ')
        {
            totalWord++;
        }
    }

    int countWords = 0;
    while (ss >> word)
    {
        for (int i = word.size() - 1; i >= 0; i--)
        {
            cout << word[i];
        }
        countWords++;
        if (totalWord != countWords)
        {
            cout << " ";
        }
    }

    return 0;
}