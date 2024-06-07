#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, n, n_th;
    cout << "Input: d, n, n_th\n";
    cin >> d >> n >> n_th;
    int a;

    a = n_th - ((n - 1) * d);
    cout << "a : " << a <<endl;


    return 0;
}