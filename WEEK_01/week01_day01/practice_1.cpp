#include <iostream>
using namespace std;

void get_array(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int n;
    cin>>n;
    get_array(n);

    return 0;
}