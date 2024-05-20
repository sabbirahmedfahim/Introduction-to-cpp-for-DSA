// Part-2
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *arr1 = new int[3];
    int *arr2 = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }

    delete[] arr1;
    // int *arr1 = new int[5]; //mistake bcz: arr1 already is an pointer array
    arr1 = new int[5];
    for (int i = 0; i < 3; i++)
    {
        arr1[i] = arr2[i];
    }
    for (int i = 3; i < 5; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << endl;
    }

    return 0;
}