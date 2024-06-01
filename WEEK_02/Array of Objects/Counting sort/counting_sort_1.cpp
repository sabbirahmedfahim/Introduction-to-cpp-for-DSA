#include <bits/stdc++.h>
using namespace std;

int main() 
{ //counting array is useful when our element is limited
    string arr;
    cin>>arr;
    int freq_arr[26] = {0};
    for (char ch : arr)
    {
        // cout<<ch<<" ";
        // int x = ch  - 'a';
        // cout<<x<<endl;
        // freq_arr[x]++;
        freq_arr[ch-'a']++;
    }
    
    for (char i = 'a'; i <= 'z'; i++) //remember char, not int
    {
        if (freq_arr[i - 'a']!=0)   
        cout<< i << " - " << freq_arr[i-'a'] <<endl;
    }
    
    
    

    return 0;
}