// problem with copying values to (dynamic)object
// Goto copy_dyn..._2 for detecting problem

#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person *Sabbir = new Person("Sabbir", 10);
    Person *Fahim = new Person("Fahim", 12);

    Sabbir = Fahim;
    cout<<Sabbir->name<<" "<<Sabbir->age;
    // Goto copy_dyn..._2 for detecting problem

    return 0;
}