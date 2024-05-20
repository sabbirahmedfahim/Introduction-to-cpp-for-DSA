//it does not work (Goto return_dynamic_func file for solve)

#include <iostream>
using namespace std;

int *my_fun()
{
    int arr[3] = {2,3,4};
    return arr;
}

int main()
{
    int* x = my_fun();
    cout<< x[0];

    return 0;
}

