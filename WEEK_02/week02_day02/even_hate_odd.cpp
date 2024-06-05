#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        int eachCount = n / 2;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int countOdd = 0, countEven = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                countEven++;
            else
                countOdd++;
        }
        if (countEven == countOdd)
        {
            cout << "0" << endl;
        }
        else if (n % 2 != 0)
        {
            cout<<"-1"<<endl;
        }
        
        else
        {
            if (countEven < eachCount)
                cout << eachCount - countEven << endl;
            else
                cout << eachCount - countOdd << endl;
        }
    }

    return 0;
}