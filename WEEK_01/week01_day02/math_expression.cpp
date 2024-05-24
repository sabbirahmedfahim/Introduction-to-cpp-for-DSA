#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    char m, n;
    cin>>x>>m>>y>>n>>z;

    if (m == '+')
    {
        if (x+y == z)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<x+y;
        }
        
    }
    else if (m == '-')
    {
        if (x-y == z)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<x-y;
        }
    }
    else if (m == '*')
    {
        if (x*y == z)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<x*y;
        }
    }
    

    return 0;
}