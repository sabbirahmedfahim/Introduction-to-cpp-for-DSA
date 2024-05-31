#include <iostream>
using namespace std;

int main()
{
    char arr1[100] = "Sabbir";
    cout<<arr1<<endl;
    // arr1 = "Fahim"; //this is not possible, i hafta use strcpy
    // for using strcpy, i hafta use another variable, i mean lengthy 

    string arr2 = "Sabbir"; //string func is dynamic !!
    cout<<arr2<<endl;
    arr2 = "Fahim";
    cout<<arr2<<endl; //now i did it easily !!

    return 0;
}