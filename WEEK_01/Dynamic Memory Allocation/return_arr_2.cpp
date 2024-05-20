// Dynamic Array
#include <iostream>
using namespace std;

int *my_array()
{

    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    return arr; // arr means arr[0]
}

int main()
{
    int *my_arr = my_array();
    for (int i = 0; i < 5; i++)
    {
        cout << my_arr[i] << " ";
    }

    return 0;
}