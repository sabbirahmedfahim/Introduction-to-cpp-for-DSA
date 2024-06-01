/*Target: let's say string is 'zaaaabbcczzzzc', output: zzzzzaaaacccbb
jar count beshi, sheta agey print hobe*/

#include <bits/stdc++.h>
using namespace std;

class Freq_Arr
{
public:
    char value;
    int count;
};

bool compare_object(Freq_Arr a, Freq_Arr b)
{
    if (a.count == b.count) return a.value < b.value;
    else return a.count > b.count;
}

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
        Frq[int(ch - 'a')].count++;
    }

    sort(Frq, Frq + 26, compare_object);

    for (int i = 0; i < 26; i++)
    {
        if (Frq[i].count > 0)
            for (int j = 0; j < Frq[i].count; j++)
            {
                cout << Frq[i].value;
            }
    }

    return 0;
}