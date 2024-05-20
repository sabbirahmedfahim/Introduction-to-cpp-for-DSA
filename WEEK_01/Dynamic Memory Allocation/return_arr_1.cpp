// not works, because this is a static array :) (don't know the reason)
#include <iostream>
using namespace std;

int *my_array()
{
    int arr[5] = {11, 22, 33, 44, 55};
    return arr; // remember arr means what? Yes, arr[0]
}

int main()
{
    int *output_array = my_array();
    for (int i = 0; i < 5; i++)
    {
        cout << output_array[i] << endl;
    }

    return 0;
}
