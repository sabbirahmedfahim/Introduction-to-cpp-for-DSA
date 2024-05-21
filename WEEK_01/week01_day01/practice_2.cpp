//at first I tried to make the code using static array, it's maybe impossible
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    // int arr_A[n];
    int *arr_A = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr_A[i];
    }

    int m;
    cin>>m;
    // int arr_B[m];
    int *arr_B = new int[m];
    for (int i = 0; i < n; i++)
    {
        arr_B[i] = arr_A[i];
    }
    for (int i = n; i < m; i++)
    {
        cin>>arr_B[i];
    }

    delete[] arr_A;
    for (int i = 0; i < m; i++)
    {
        cout<<arr_B[i]<<" ";
    }
    

    return 0;
}

//Static Array [not works anymore]
// the code explaines why we do not use static array to clean data 
// #include <bits/stdc++.h>
// using namespace std;

// int main ()
// {
//     int n;
//     cin>>n;
//     int arr_A[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr_A[i];
//     }

//     int m;
//     cin>>m;
//     int arr_B[m];
//     for (int i = 0; i < n; i++)
//     {
//         arr_B[i] = arr_A[i];
//     }
//     for (int i = n+1; i < m; i++)
//     {
//         cin>>arr_B[i];
//     }

//     delete[] arr_A;
//     for (int i = 0; i < m; i++)
//     {
//         cout<<arr_B[i]<<" ";
//     }
    

//     return 0;
// }