#include <bits/stdc++.h> //Goto this_keyword.cpp for Updated and Clean code
using namespace std;

class Person
{
public:
    string name; // did u notice? we entered a new era, using string directly
    int age;
    int marks1, marks2;
    Person(string nm, int ag, int mk1, int mk2)
    {
        name = nm; // nm = name;
        age = ag;  // ag = age;
        marks1 = mk1;
        marks2 = mk2;
    }
    void hello()
    {
        cout << "Welcome Shobaike..." << endl;
        cout << "This is " << name << ", age: " << age;
    }
    int total_marks()
    {
        return marks1 + marks2;
    }
    void all_in_one()
    {
        hello();
        // total_marks(); //we hafta receive int function
        cout << endl << "marks: " << total_marks(); 
    }
};

int main()
{
    Person Khalid("Khalid Farhan", 33, 98, 95);

    Khalid.all_in_one(); // without calling seperately, I can print at once
    cout << endl;

    // Uncomment these two functions and the cout statement for deeper understanding
    // Khalid.hello(); //
    // Khalid.total_marks();
    // cout << Khalid.name << " " << Khalid.age << " " << Khalid.total_marks();

    return 0;
}