#include <bits/stdc++.h> //use used this keyword
using namespace std;

class Person
{
public:
    string name; 
    int age;
    int marks1, marks2;
    Person(string name, int age, int marks1, int marks2)
    {
        (*this).name = name;
        (*this).age = age;
        (*this).marks1 = marks1;
        (*this).marks2 = marks2;
    }
    void hello()
    {
        cout << "Welcome Shobaike..." << endl;
        cout << "Me " << name << ", age " << age;
    }
    int total_marks()
    {
        return marks1 + marks2;
    }
    void all_in_one()
    {
        hello();
        total_marks();
    }
};

int main()
{
    Person Khalid("Khalid Farhan", 33, 98, 95);

    Khalid.all_in_one(); 
    cout<<endl;

    return 0;
}