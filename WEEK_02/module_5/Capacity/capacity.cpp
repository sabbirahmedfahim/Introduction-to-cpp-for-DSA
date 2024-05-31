#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "Sabbir bhaiiiiiiiiiiii";
    cout << name.capacity() << endl;

    name = "dfdgdfgfsdlkfjsdfdgfgfoifdsifdsfjksddfsdfsfkdslf";
    cout << name.capacity() << endl;

/*so we can increase the capacity of dynamic array AKA string*/

/*Anyway, The capacity() function returns the size of the allocated 
storage for the string. The capacity can increase AUTOMATICALLY as new 
characters are added to the string, but it does not decrease when 
characters are removed. 

The max_size() function returns the maximum number of characters that
the string can hold. This is a very large number and is determined 
by the system or implementation limitations.*/

    return 0;
}