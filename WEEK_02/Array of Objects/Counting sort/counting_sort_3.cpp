/*Target: let's say string is 'zaaaabbcczzzzc', output: zzzzzaaaacccbb
jar count beshi, sheta agey print hobe*/ //Goto counting..._4.cpp for Solution
#include <bits/stdc++.h>
using namespace std;

class Freq_Arr
{
public:
    //   string arr;
    char value;
    int count;
};

int main()
{
    string arr;
    cin >> arr;
    Freq_Arr Frq[26];
    for (int i = 0; i < 26; i++)
    {
        Frq[i].value = char(i + 'a');
        Frq[i].count = 0;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << Frq[i].value << " " << Frq[i].count << endl;
    }

    return 0;
}