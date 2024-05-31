#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    string st1;
    getline(cin, st1); //let's say, input: Sabbir Ahmed Fahim
    stringstream ss(st1);
    string word;
    // ss >> word; //moved inside while loop

    while (ss>>word) 
    {
        cout<<word<< " ";
    } //if you don't understand, don't worry, you're losing ur basics :)
    

    return 0;
}