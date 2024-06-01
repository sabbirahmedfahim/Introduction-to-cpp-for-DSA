/*Target: let's say string is 'zaaaabbcczzzzc', output: zzzzzaaaacccbb
jar count beshi, sheta agey print hobe*/ 
//Goto counting..._5.cpp for Updated code

#include <bits/stdc++.h>
using namespace std;

class Freq_Arr
{
public:
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

    for (char ch : arr)
    {
        // Frq[int(ch - 'a')]++; //increase what?
        // Frq.count[int(ch - 'a')]++; //wrong submission
        Frq[int(ch - 'a')].count++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (Frq[i].count > 0)
        cout << Frq[i].value << " " << Frq[i].count << endl;
    }

    return 0;
}