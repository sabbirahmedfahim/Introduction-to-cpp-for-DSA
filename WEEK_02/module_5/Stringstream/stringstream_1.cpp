#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* stringstream is used for string operations,
    including handling groups of words */
    string my_name; //take input: Sabbir Ahmed Fahim
    getline(cin, my_name);
    stringstream stream_name(my_name);
    string my_WORD;

    stream_name >> my_WORD; // remember the '>>' sign
    cout << my_WORD << endl;  
    
    stream_name >> my_WORD; 
    cout << my_WORD << endl;

    return 0;
}