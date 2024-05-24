// without sorting func [accepted]
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    long long int my_arr[n];
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> my_arr[i];
    }

    int custom_n = n - 1;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (my_arr[i] == my_arr[custom_n])
        {
            custom_n--;
        }
        else
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}