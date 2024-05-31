#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string name;

    cin>>n;   
    // getchar(); //we can use any of them (getchar or cin.ingnore)
    cin.ignore();
    getline(cin, name);

    cout<<n<<endl<<name; 
   

    return 0;
}