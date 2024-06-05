#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int k = 0; k < n; k++)
    {
        int x;
        char ch;
        cin >> x >> ch;
        for (int i = 0; i < x; i++)
        {
            cout << ch << " ";
        }
        cout<<endl;
    }

    return 0;
}