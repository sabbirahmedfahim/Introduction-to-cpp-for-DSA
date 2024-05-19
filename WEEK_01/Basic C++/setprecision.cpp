//remember? I wanted to print custom float point but failed
//Here I will learn How to do it

#include <iostream>
#include <stdio.h>
#include <iomanip> //new library, input-output manipulation
using namespace std;

int main()
{
    float a;
    cin>>a;
    cout<<fixed<<setprecision(2)<<a<<endl;
    cout<<fixed<<setprecision(5)<<a;

    return 0;
}