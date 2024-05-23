#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    double gpa;
    char section;
    Student(int id, double gpa, char section) 
    {
        (*this).id = id; //dereference first(*), then access(.)
        this->gpa = gpa; //using arrow sign: the shortcut
        this->section = section; //dereference + access (at once)
    }    
};

int main()  
{
    Student sabbir(234, 3.99,'F');
    cout<<sabbir.id<<" "<<sabbir.gpa<<" "<<sabbir.section<<endl<<endl;

    Student fahim(355, 3.96, 'H');
    cout<<fahim.id<<" "<<fahim.gpa<<" "<<fahim.section;

    return 0;
}