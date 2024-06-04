#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int q = 0; q < n; q++)
    {
        int x;
        cin >> x;
        int k = x;
        int m = x;
        int count1 = 0, count2 = 0;
        for (int i = 0; i < 3; i++)
        {
            count1 = count1 + k % 10;
            k /= 10;
        }
        m = m / 1000;
        for (int i = 0; i < 3; i++)
        {
            count2 = count2 + m % 10;
            m /= 10;
        }
        if (count1 == count2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}