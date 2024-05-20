// Conclusion: Why do we use dynamic array? Let's deep drive...
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Static Array
    int arr1[3];
    int arr2[5];
    for (int i = 0; i < 3; i++) // taking input for arr1 & to pushing arr2 as well
    {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }
    for (int i = 3; i < 5; i++) // filling remaining indeces with elements
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < 5; i++) // output
    {
        cout << arr2[i] << " ";
    }
    /*The problem with static array is: we did not clear the memory of arr1,
    so it cousumes our memory for no valid reason. We use dynamic memory
    to remove the unused array. That't is*/

    return 0;
}