#include <iostream> //[why the code shows error while I use void func?]
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

void my_function() 
{
    Student x(234, 3.99, 'H');
    cout << x.id << " " << x.gpa << " "
         << x.favorite_char;
}

int main()
{
    Student student_info = my_function();


    return 0;
}