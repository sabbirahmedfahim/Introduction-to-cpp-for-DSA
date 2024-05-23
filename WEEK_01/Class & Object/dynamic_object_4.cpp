#include <bits/stdc++.h> 
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
    Student *sabbir = new Student(234, 3.99, 'H');
    return sabbir;
}
int main()
{
    Student *student_info = my_function();

    cout << student_info->id << " " << student_info->gpa << " "
         << student_info->favorite_char<<endl<<endl;
         
    delete student_info;
    cout << student_info->id << " " << student_info->gpa << " "
         << student_info->favorite_char;


    return 0;
}