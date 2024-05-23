#include <bits/stdc++.h> //explained dynamic, pointer relation.
//now, GOTO: dynamic_object_3

using namespace std;

class Student
{
public:
    int id;
    float gpa;
    char favorite_char;
    Student(int id, float gpa, char favorite_char)
    {
        this->id = id;
        this->gpa = gpa;
        this->favorite_char = favorite_char;
    }
};


int main()
{

    // Student sabbir(234, 3.88, 'S'); //static 

    Student* fahim = new Student(299, 3.90, 'F'); //Here: Student is data type
    cout<<fahim->id<<" "<<fahim->gpa<<" "<<fahim->favorite_char;

    return 0;
}