#include <bits/stdc++.h> //Goto: fix_getline_2 to detect the error
using namespace std;

int main()
{
    //if my take input after getline, it will work accurately
    string nm;
    getline(cin, nm);

    string nm2;
    getline(cin, nm2);

    cout<<nm<<endl<<nm2;

    return 0;
}