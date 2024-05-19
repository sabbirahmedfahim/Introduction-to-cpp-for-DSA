#include <iostream>
using namespace std;

int main()
{
    // char to int
    char c;
    cout << "char to int: "<< endl;
    cin >> c;
    cout << int(c) << endl;

    // int to char
    int d;
    cout << "int to char: " << endl;
    cin >> d;
    cout << char(d) << endl;

    // float/double [here float] to int
    float x;
    cout << "float to int " << endl;
    cin >> x;
    cout << int(x) << endl;

    // long long int to int
    long long int z;
    cout << "long long int to int: " << endl;
    cin >> z;
    cout << int(z) << endl;

    // long long int to int [valueless process, for learing purpose]
    int m;
    cout << "int to long long int: ";
    cin >> m;
    // cout<<long long int(m)<<endl; // Quiz: find the mistake
    cout << (long long int)(m);

    return 0;
}