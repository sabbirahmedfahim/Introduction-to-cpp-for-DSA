#include <bits/stdc++.h>
using namespace std;
/*What is Heap Memory in C++
Heap memory in C++ is a region for dynamically allocated objects, managed
manually by the programmer using operators like 'new' and 'delete'.*/
int main ()
{
    // int n = 10;
    
    int *x = new int;
    cout<<x<<endl;
    // x = 10; //wrong because we're storing variable under pointers address
    *x = 10;
    cout<<x<<endl;
    cout<<*x<<endl<<endl; //dereferencing
    /*in the 10th line, the star(*) means declaring the pointer.
    but 13th, 15th lines star(*) means accesing (dereferencing) the pointer.
    they are not same, be careful.*/

    float *my_float_value = new float;
    *my_float_value = 99.54;
    cout<<*my_float_value<<endl;

    return 0;
}