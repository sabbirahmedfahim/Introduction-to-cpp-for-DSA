#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    double gpa;
    char section;
    Student(int id, double gpa, char section) //did u notice the change?
    {
        (*this).id = id;
        (*this).gpa = gpa;
        (*this).section = section;
    }
    // Student(int i, double g, int s)
    // {
    //     id = i;
    //     gpa = g;
    //     section = s;
    // }
};

int main()  
{
    Student sabbir(234, 3.99,'F');
    cout<<sabbir.id<<" "<<sabbir.gpa<<" "<<sabbir.section<<endl<<endl;

    Student fahim(355, 3.96, 'H');
    cout<<fahim.id<<" "<<fahim.gpa<<" "<<fahim.section;

    return 0;
}