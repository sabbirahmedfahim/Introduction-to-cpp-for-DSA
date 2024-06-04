#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string x = "EGYPT";
    while (s.find(x) != -1)
    {
        s.replace(s.find(x), x.size(), " ");
    }

    cout << s;

    return 0;
}