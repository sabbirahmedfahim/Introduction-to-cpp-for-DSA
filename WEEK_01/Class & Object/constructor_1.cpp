#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    double gpa;
    char section;

    //constructor for the Student class
    Student(int i, double g, int s)
    {
        id = i;
        gpa = g;
        section = s;
    }
};

int main()  
{
    // Student sabbir; //error: we hafta call the function
    Student sabbir(234, 3.99,'F');
    // cout<<sabbir(234, 3.99,'F'); //error: there are no shortcut
    cout<<sabbir.id<<" "<<sabbir.gpa<<" "<<sabbir.section<<endl<<endl;

    Student fahim(355, 3.96, 'H');
    cout<<fahim.id<<" "<<fahim.gpa<<" "<<fahim.section;

    return 0;
}