#include <iostream>
using namespace std;

int main()
{
    // new arr[5]; //I hafta make a variable(pointer) to store the dynamic array
    // Mistake-1:
    // int*receving_dynamic_array = new arr[5]; //add format specifier b4 arrayname
    // Mistake-2:
    // int * myArray = new int myArray[5]; //do not use var name again!

    int * myArray = new int[5]; //corrected version
    for (int i = 0; i < 5; i++)
    {
        cin>>myArray[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<myArray[i]<<" ";
    }
    


    return 0;
}