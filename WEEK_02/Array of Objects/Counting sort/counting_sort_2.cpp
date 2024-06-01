#include <bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin >> arr;
    int freq_arr[26] = {0};
    for (char ch : arr)
    {
        freq_arr[ch - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < freq_arr[i - 'a']; j++) // think why freq_arr[i-'a']
        {
            cout<<i;
        }
    }

    return 0;
}