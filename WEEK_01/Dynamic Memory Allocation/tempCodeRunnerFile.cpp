//Part-1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *arr = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    // delete arr; //incorrect way to delete an array
    delete[] arr; // correctly delete the entire array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}