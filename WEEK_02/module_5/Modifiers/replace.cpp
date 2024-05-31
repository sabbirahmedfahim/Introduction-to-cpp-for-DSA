#include <bits/stdc++.h>
using namespace std;

int main()
{
    // intstructor told replace is erase + replace
    string name1 = "SabbirNFahim";
    name1.replace(6, 1, "Ahmed"); // things are very easy
    cout << name1 << endl;

    // fun moment : giving parameter 0
    string name2 = "HelloWorld";
    name2.replace(5, 0, "RRR"); //didn't delete 'o', added "RRR"
    cout << name2;

    return 0;
}