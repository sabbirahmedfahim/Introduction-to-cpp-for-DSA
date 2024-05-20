#include <iostream>
using namespace std;

int *my_fun()
{
    int *arr = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    return arr;
}

int main()
{
    int *k = my_fun();
    for (int i = 0; i < 3; i++)
    {
        cout << k[i] << " ";
    }
    delete[] k;

    //Quiz: what will happen after cleaning the memory form k variable?
    cout<<endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout << k[i] << " ";
    }
    return 0;
}
