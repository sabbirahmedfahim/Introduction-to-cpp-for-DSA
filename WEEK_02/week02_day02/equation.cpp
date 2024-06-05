//code accepted on codeforces. but i wanna solve it using returning int value, instead of void
#include <bits/stdc++.h>
using namespace std;

void my_pow(long long int n, long long int x) //why it do not work when I return long long int?
{
    long long int store_ans = 0;
    for (int i = 2; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            long long int ans = n;
            for (int j = 2; j <= i; j++)
            {
                ans = ans * n;
            }
            store_ans = store_ans + ans;
        }
    }
    cout << store_ans;
}

int main()
{
    long long int n, x;
    cin >> n >> x;
    my_pow(n, x);

    return 0;
}