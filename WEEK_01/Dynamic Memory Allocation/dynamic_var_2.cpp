#include <bits/stdc++.h>
using namespace std;

int *my_dynamic_var()
{
    int *a = new int;
    cout << "my_dynamic_var(): " << a << endl;
    *a = 100;
    // return 0; //run this to recap function concept
    return a;
}

int main()
{
    cout << "main(): " << my_dynamic_var() << endl;
    cout << endl;
    cout << "main(): " << *my_dynamic_var() << endl;

    return 0;
}