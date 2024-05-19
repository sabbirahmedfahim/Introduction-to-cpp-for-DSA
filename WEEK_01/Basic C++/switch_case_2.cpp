#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    switch (n%2)
    {
    // case n%2==0; //it will not work
    case 0:
        cout<<"Even"<<endl;
        break;
    
    default:
        cout<<"Odd"<<endl;
        break;
    }

    return 0;
}