    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int t;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            int n;
            cin >> n;
            long long int arr[n];
            for (int j = 0; j < n; j++)
            {
                cin >> arr[j];
            }
            long long int smallest_pair = 10000001; //size matters
            for (int k = 0; k < n - 1; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    long long int my_pair = arr[k] + arr[l] + l - k;
                    if (my_pair < smallest_pair)
                    {
                        smallest_pair = my_pair;
                    }
                }
            }
            cout<<smallest_pair<<endl;
        }

        return 0;
    }