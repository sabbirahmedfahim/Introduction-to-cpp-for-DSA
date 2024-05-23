//this is an amazing technique. cpp is definately a powerful language
#include <iostream>
using namespace std;

class Student
{
public: //if u do not write, u can't access it is main function
    char name[101];
    int id;
    float cgpa;
    char section;
};

int main()
{
    Student sabbir, fahim;

    // taking full name as input: Sabbir Ahmed Fahim [comment out & run]
    // char temp[101];
    // // cin.getline(temp); //do not forget to initialize with SIZE
    // cin.getline(temp, 101);
    // cout<<temp;

    // we can directly get the name using getline !!
    cin.getline(sabbir.name, 101);
    cin>>sabbir.id>>sabbir.cgpa>>sabbir.section;
    cout<<sabbir.name<<endl<<sabbir.id<<endl<<sabbir.cgpa<<endl<<sabbir.section;

    return 0;
}