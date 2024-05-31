#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name1 = "SabbirFahim";
    name1.erase(4);
    cout<<name1 <<endl; //deleted rest of the string (after index 3!)

    string name2 = "SabbirAhmed";
    name2.erase(4, 2); //Starting from index 4, delete 2 characters
    cout<<name2 <<endl;

    return 0;
}