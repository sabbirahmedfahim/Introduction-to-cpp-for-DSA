// [without Function] version (Goto: func_return_2&3 for more)
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
        (*this).id = id;
        (*this).gpa = gpa;
        (*this).favorite_char = favorite_char;
    }
};

int main()
{
    Student sabbir(234, 3.99, 'H');
    cout << sabbir.id << " " << sabbir.gpa << " " << sabbir.favorite_char<<endl;
    Student fahim(266, 3.93, 'S');
    cout << fahim.id << " " << fahim.gpa << " " << fahim.favorite_char;

    return 0;
}