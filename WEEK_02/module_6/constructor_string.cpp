#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name1 = "Hello World"; // 1
    cout << name1 << endl;
    string name2("Hello World"); // 2
    cout << name2 << endl;
    string name3("Hello World", 4); // 3
    cout << name3 << endl;

    string s = "Hello World";
    string name4(s, 4); // 4 (this is interesting)
    cout << name4 << endl;

    string name5(5, 'U'); // 5
    cout << name5 << endl;

    return 0;
}