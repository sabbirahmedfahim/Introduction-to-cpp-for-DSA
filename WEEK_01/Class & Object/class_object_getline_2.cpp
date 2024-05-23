#include <iostream>
using namespace std;

class Student
{
public: 
    char name[101];
    int id;
    float cgpa;
    char section;
};

int main()
{
    Student sabbir, fahim;

    cin.getline(sabbir.name, 101);
    cin >> sabbir.id >> sabbir.cgpa >> sabbir.section;
    cout << sabbir.name << " "
         << sabbir.id << " "
         << sabbir.cgpa << " "
         << sabbir.section<<endl<<endl;

    getchar(); //avoid extra space
    cin.getline(fahim.name, 101);
    cin >> fahim.id >> fahim.cgpa >> fahim.section;
    cout << fahim.name << " "
         << fahim.id << " "
         << fahim.cgpa << " "
         << fahim.section;

    return 0;
}