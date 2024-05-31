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

    
    *Sabbir = *Fahim; 
    // so we're Copying the Address of Objects the Class [Stored]

    delete Fahim;
    cout<<Sabbir->name<<" "<<Sabbir->age; 
    

    return 0;
}