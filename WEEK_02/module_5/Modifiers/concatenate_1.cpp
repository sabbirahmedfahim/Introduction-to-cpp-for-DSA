#include <bits/stdc++.h>
using namespace std;

int main()
{ // things are very easy and faster in C++

    string name1 = "Sabbir";
    string name2 = "Ahmed";
    string name3 = "Fahim";
    name1 += name2;
    cout << name1 << endl;

    name1 = "Sabbir";
    name2 = "Ahmed";
    name3 = "Fahim";
    name1 = name1 + name2 + name3;
    cout << name1 << endl;

    name1 = "Sabbir";
    name2 = "Bhaiii";
    name1 = name1 + " " + name2;
    cout << name1;

    return 0;
}