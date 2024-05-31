#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "Fahim bhai";
    name.resize(4);
    cout << name << endl;
    name.resize(7, 'U'); // filling the gaps of extra size
    // if you do not manually takes the input or informs function to do,
    //  then you will face garbage/NULL values for the remaining cells
    cout << name;

    return 0;
}