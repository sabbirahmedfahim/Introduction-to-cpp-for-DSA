#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "Sabbir";
    // string:: iterator it; //decleared inside loop
    for (string::iterator it = name.begin(); it < name.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}