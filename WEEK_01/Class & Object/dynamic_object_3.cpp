#include <bits/stdc++.h> //GOTO dynamic_object_4 for clean code


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

Student *my_function()
{
    // Student sabbir(234, 3.99, 'H');
    Student *sabbir = new Student(234, 3.99, 'H');

    // Student *ptr = &sabbir; 
    //no need a pointer, 'sabbir' points the dynamic variable
    //  return ptr; 

    return sabbir;
}

int main()
{
    Student *student_info = my_function();

    cout << student_info->id << " " << student_info->gpa << " "
         << student_info->favorite_char;

    return 0;
}