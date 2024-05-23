#include <bits/stdc++.h> 
/*PROBLEM: used static object & works well. but instructor adviced to use 
dynamic object.*/

//SOLUTION: my local memory(PC) stores the data's, run the code
// on online compiler to get the actual result

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
    Student x(234, 3.99, 'H');
    Student *ptr = &x;
    return ptr;
}

int main()
{

    Student *student_info = my_function();
    cout << student_info->id << " " << student_info->gpa << " "
         << student_info->favorite_char;

    return 0;
}