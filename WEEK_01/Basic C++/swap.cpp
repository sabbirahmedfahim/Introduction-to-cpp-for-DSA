#include <iostream>
using namespace std;

void my_swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10, b = 20;
    
    my_swap(&a, &b);
    cout << a << " " << b;

    return 0;
}