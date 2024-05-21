#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mxx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mxx = max(mxx, arr[i]); //used max() function
    }
    cout << mxx;

    return 0;
}

// Another way [accepted code] without using max() function
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     long long int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int mxx = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > mxx)
//         {
//             mxx = arr[i];
//         }
//     }
//     cout<<mxx;

//     return 0;
// }