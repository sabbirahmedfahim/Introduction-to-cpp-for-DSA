//Goto interator_3 for clear code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "Sabbir";
    // for (int i = 0; i < name.size(); i++)
    // {
    //     cout<<name[i] << " ";
    // }

    string::iterator it; //'it' is not mandetory, this nothing but a variable
    for (it = name.begin(); it < name.end(); it++)
    {
        cout << *it << " ";
    } //easy

    return 0;
}