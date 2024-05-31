#include <bits/stdc++.h> //goto range_based..._2 for clear code
using namespace std; 

int main()
{ // range based for loop means Shortcut for loop
//when we do not index, we can easily use range based for loop
    string name = "Sabbir";
    // for (int i = 0; i < name.size(); i++)
    // {
    //     cout << name[i] << " ";
    // }
    for(char my_ch : name) //remember colon ':'
    {
        // cout<< name [i] << " ";
        cout<< my_ch << " "; //look
    }

    return 0;
}