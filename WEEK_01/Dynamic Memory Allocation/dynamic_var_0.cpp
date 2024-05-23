#include <bits/stdc++.h>
using namespace std;
//benefits of dynamic objects is: we can delete them, 
// whereas static objects cannot be deleted
int main()
{
    int n = 4;
    int *x = &n;
    cout << *x << endl<<endl;

    int *m = new int(90);
    /*Dynamically allocating an integer on the heap(memory) and
    initializing it with the value 90. 'm' is a pointer to this integer.*/
    cout << *m << endl<<endl; //Dereferencing the pointer 'm' to get the value 90 and printing it.

    float *k = new float(34.6509);
    cout<<*k<<endl<<endl;

    int *arr = new int[5];
    arr[0] = 45;
    arr[1] = 7;
    arr[2] = 34;
    arr[3] = 83;
    arr[4] = 2;
    for (int i = 0; i < 5; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }
    

    return 0;
}
