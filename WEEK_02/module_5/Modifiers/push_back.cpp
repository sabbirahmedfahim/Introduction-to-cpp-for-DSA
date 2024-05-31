#include <bits/stdc++.h>
using namespace std;

int main() //push back: add character to the last of the string.
{
    string name1 = "Fah";
    name1[5] = 'i'; // eivabe hobe na, memory expend hoy na ei jnno
    cout << name1 << endl;
    name1 = name1 + 'i'; //i prefer this: easier than fancy push_back :)
    cout << name1 << endl
         << endl;

    // name1.push_back('bhai'); //hoy na, single character :)
    name1.push_back('m');
    cout << name1;

    return 0;
}