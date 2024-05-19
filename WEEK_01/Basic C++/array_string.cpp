#include <iostream>
#include <string.h> //for getting the length of a string
using namespace std;

int main ()
{
    char name[101];
    cin>>name;
    cout<<name<<endl;

    cout<<"length of the string is "<<strlen(name);

    return 0;
}