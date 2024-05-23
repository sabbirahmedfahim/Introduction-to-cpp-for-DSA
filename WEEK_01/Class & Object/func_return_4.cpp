#include <bits/stdc++.h> //Goto: func_return_5 for clean code
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

// Student my_function()
Student *my_function()
{
    Student sabbir(234, 3.99, 'H');
    // int *ptr = sabbir; //data type: Student
    // Student *ptr = sabbir; // mistake: & 
    Student *ptr = &sabbir;
    return ptr;
}

int main()
{
    // Student student_info = my_function(); //think logically: receive a pointer
    Student* student_info = my_function();
    // cout << student_info.id << " " << student_info.gpa << " "
    //      << student_info.favorite_char; //dereference karna chati yaaar
    cout << (*student_info).id << " " << student_info->gpa << " "
         << student_info->favorite_char;

    return 0;
}