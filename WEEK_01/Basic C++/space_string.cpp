#include <iostream>
using namespace std;

int main()
{
    char my_name[101];
    fgets(my_name, 101, stdin); //this is the method of C
    cout << my_name;

    return 0;
}