// /*A class is similar to a structure in C.
// The variable name of a class is an OBJECT because it is a custom data type.
// A class is a user-defined data type.*/
// // It is good practice to start the first letter of
// //  a custom data type with a capital letter

#include <bits/stdc++.h>
using namespace std;

class Student // size of the class is: total size of data types, including its(class) own size
{
public: // colon
    char name[101];
    int id;
    float cgpa; 
    char section;
}; // added semicolon
int main()
{
    Student sabbir,fahim; // sabbir is a group, fahim is another one
    sabbir.id = 233;
    sabbir.cgpa = 3.92;
    sabbir.section = 'F';
    // cout<<sabbir; //ERROR: we can print the element of group, not the group itself
    cout<<sabbir.id<<" "<<sabbir.cgpa<<" "<<sabbir.section<<" ";

    // sabbir.name = "Sabbir"; //don't understand, why it shows ERROR?!

    // char temp[101] = "Sabbir"; //WRONG way
    // sabbir.name = temp;

    char temp[101] = "Sabbir";
    strcpy(sabbir.name, temp); 
    cout<<sabbir.name;

    return 0;
}

