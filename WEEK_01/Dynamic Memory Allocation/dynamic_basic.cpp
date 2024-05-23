#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    cout<<x<<endl<<endl;

    int *y = new int(350);
    cout<<"Address of y: "<<y<<endl;
    cout<<"Value *pointed* of y: "<<*y<<endl<<endl;
    delete[] y;

    cout<<"Address of y: "<<y<<endl;
    cout<<"Value *pointed* of y: "<<*y<<endl<<endl;

    return 0;
}