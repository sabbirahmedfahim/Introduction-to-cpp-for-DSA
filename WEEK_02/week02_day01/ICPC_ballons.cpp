#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int freq_arr[26] = {0};
        for (char ch : s)
        {
            freq_arr[ch - 'A']++;
        }

        int countWords = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq_arr[i] > 0)
            {
                countWords++;
            }
        }

        int sumOfBallons = 0;
        for (int i = 0; i < 26; i++)
        {
            sumOfBallons += freq_arr[i];
        }

        int totalBallons = sumOfBallons + countWords;
        cout << totalBallons << endl;
    }

    return 0;
}