// the code shows error, why?
#include <bits/stdc++.h>
using namespace std;

int **my_dynamic_var()
{
    int *a = new int;
    // cout << "my_dynamic_var(): " << a << endl;
    *a = 100;
    cout << "my_dynamic_var(): " << &a << endl;
    return &a;
}

int main()
{
    int **k = my_dynamic_var();
    cout << "main(): " << k << endl;

    return 0;
}