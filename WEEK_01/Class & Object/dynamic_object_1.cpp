#include <bits/stdc++.h> //this is static object, Goto: dynamic_object_3.
/*PROBLEM: used static object & works well. but instructor adviced to use 
dynamic object.*/

//SOLUTION: my local memory(PC) stores the data's, run the code
// on online compiler to get the actual result
// for more information, GOTO: dynamic_object_3 [remember 3, not 2]

/*WHY THE CODE SHOWS GARBAGE VALUES?*/ //goto nTH line please

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
    Student sabbir(234, 3.99, 'H');
    Student *ptr = &sabbir;
    return ptr;
}
/*WHY THE CODE SHOWS GARBAGE VALUES?*/
/*When we return a pointer variable named 'ptr', it returns the memory
address of 'sabbir', and then, [Attention: that is why returns garbage]
and then, after the function 'my_function' finishes, its (call) stack frame
is cleared, meaning all its local variables, including 'sabbir', are removed.
Now call stack works on main function, dereferencing the address of 'p',
means data's of 'sabbir'. But alas! the memory of the "my_function" has
been already freed.
Repeat after me:
when the main function dereferences the address stored in 'student_info',
it tries to access data that no longer exists, leading to garbage values.*/


int main()
{

    Student *student_info = my_function();
    cout << student_info->id << " " << student_info->gpa << " "
         << student_info->favorite_char;

    return 0;
}