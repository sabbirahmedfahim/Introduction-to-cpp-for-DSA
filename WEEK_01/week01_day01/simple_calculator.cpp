#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin>>x>>y;
    long long int summation = x+y;
    // long long int multiplication =  x*y; //find mistake
    long long int multiplication = (long long int) x*y;
    long long int substraction = x-y;
    cout<<x<<" + "<<y<<" = "<<summation<<endl;
    cout<<x<<" * "<<y<<" = "<<multiplication<<endl;
    cout<<x<<" - "<<y<<" = "<<substraction;

    return 0;
}