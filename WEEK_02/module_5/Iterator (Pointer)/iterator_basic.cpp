#include <bits/stdc++.h>
using namespace std;

int main() //iterator means Pointer
{
    string name = "SABBIR";
    // cout<<name.begin(); // iterator is pointer, so we hafta dereference
    //another reason memory address doesn't print here bcz it's a private data

    cout<<*name.begin() <<endl; //here name.begin() Points 'S'
    cout<<*name.end() <<endl; //it Points a NULL character just after last character
    
    cout<<*(name.end()-1); //it prints the last character of the string
    //So in the code: name.end() Points a NULL character

    return 0;
}