#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "Sabbir";

    //used 'auto' keyword to make it sooo simple
    
    for (auto it = name.begin(); it < name.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}