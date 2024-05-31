#include <bits/stdc++.h>
using namespace std;
// if the size of a string is 0, empty() func returns true, else returns false
int main()
{
    string name;
    if (name.empty() == true)
    {
        cout << "Empty" << endl
             << endl;
    }
    else
    {
        cout << "Not empty" << endl
             << endl;
    }

    name = "Sabbir";
    if (name.empty() == true)
        cout << "Empty" << endl;
    else
        cout << "Not empty" << endl;
    name.clear(); //cleared the memory
    if (name.empty() == true)
        cout << "Empty" << endl;
    else
        cout << "Not empty" << endl;

    return 0;
}