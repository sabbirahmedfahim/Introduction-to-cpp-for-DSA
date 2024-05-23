#include <iostream> 
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

Student my_function() // here: Student is a data type, for return !!
{
    Student sabbir(234, 3.99, 'H');
    return sabbir;
}
// void my_function() //Goto func_return_3 to find out why void doesn't work
// {
//     Student sabbir(234, 3.99, 'H');
//     return sabbir;
// }

int main()
{
    Student student_info = my_function();
    cout << student_info.id << " " << student_info.gpa << " "
         << student_info.favorite_char;

    return 0;
}