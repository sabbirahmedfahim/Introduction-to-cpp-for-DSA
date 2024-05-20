#include <bits/stdc++.h>
using namespace std;

int *my_array()
{
    int n;
    cin>>n;
    int *arr = new int[n]; //it's int[5], NOT int(5)
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    return arr; //forget to return
}

int main ()
{
    int *My_Arr = my_array();
    for (int i = 0; i < 5; i++) //how to print nTh value?
    {
        cout<<My_Arr[i]<<" ";
    }
    

    return 0;
}