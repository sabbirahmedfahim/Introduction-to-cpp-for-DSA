#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ch;
    int count[26] = {0};
    while (cin >> ch)
    {
        count[ch - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < count[i]; j++)
        { 
            cout << (char)(i + 97);
        }
    }
    return 0;
}