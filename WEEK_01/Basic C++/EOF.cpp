#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a, b;

    //even C code works here. I just need to call stdio.h library
    // while (scanf("%d %d", &a, &b) != EOF)
    // {
    //     printf("%d %d\n", a, b);
    // }

    //mixture of C/C++ works !! HeioOO
    // while (scanf("%d %d", &a, &b) != EOF)
    // {
    //     cout<<a<<" "<<b<<endl;
    // }

    while (cin>>a>>b)
    {
        cout<<a<<" "<<b<<endl; // cpp just reduced the code size !    
    }

    return 0;
}