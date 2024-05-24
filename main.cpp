// Using EOF(accepted)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ch;
    int count[26] = {0};
    while (cin >> ch)
    {
        count[ch - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < count[i]; j++) // if you understand, why nested loop, you're done
        {
            cout << (char)(i + 97);
        }
    }
    return 0;
}

// without using EOF (accepted)
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int freq_arr[26] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         char x;
//         cin >> x;
//         freq_arr[(int)x - 97]++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         for (int j = 0; j < freq_arr[i]; j++) //if you understand, why nested loop, you're done
//         {
//             cout << (char)(i + 97);
//         }
//     }
//     cout << endl;

//     return 0;
// }