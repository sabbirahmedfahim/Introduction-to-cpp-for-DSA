// Goto copy_dyn..._3 for solution

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

    delete Fahim;
    cout<<Sabbir->name<<" "<<Sabbir->age; //run to understand
    

    return 0;
}