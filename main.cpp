#include <bits/stdc++.h>
using namespace std;

void nth_element(int a, int d, int n)
{
    int ans = a + (n - 1) * d;
    cout<<ans<<endl;
}
void sum_of_N(int a, int d, int n)
{
    float ans = (float) n/2 * (2*a + (n-1) * d);
    cout<<ans<<endl;
}

int main()
{
    sum_of_N(34, -2, 13);  

    return 0;
}