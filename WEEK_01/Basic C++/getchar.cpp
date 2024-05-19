#include <iostream>
using namespace std;

int main()
{
    int my_marks;
    char my_name[101];
    cin>>my_marks;
    //there will be a conflict bcz You-KNow-What
    getchar(); //used getchar to ignore the space, same as C
    cin.getline(my_name, 101);
    
    cout<<my_marks<<endl<<my_name;

    return 0;
}