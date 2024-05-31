#include <bits/stdc++.h> //Goto reference_2
using namespace std;

void print(string &s)
{
    s = "World";
}

int main()
{
    string name = "Hello";
    print(name);

    cout << name; // interesting Output
    /*
    For the string data type, we can't send a pointer from main() to
    any function() and modify it directly. Instead, we can pass the string
    by reference using '&' to achieve the same effect.
              
    This process is called passing by reference and '&' is used for reference
    */

    return 0;
}