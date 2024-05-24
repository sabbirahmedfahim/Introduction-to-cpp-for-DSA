#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char z;
    cin>>x>>z>>y;

    if (z == '>')
    {
        if (x>y)
        {
            cout<<"Right";
        }
        else
        {
            cout<<"Wrong";
        }
        
    }
    else if (z == '=')
    {
        if (x==y)
        {
            cout<<"Right";
        }
        else
        {
            cout<<"Wrong";
        }
    }
    else if (z == '<')
    {
        if (x<y)
        {
            cout<<"Right";
        }
        else
        {
            cout<<"Wrong";
        }
    }
    

    return 0;
}