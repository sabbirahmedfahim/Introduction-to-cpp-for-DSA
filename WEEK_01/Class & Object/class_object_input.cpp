#include <bits/stdc++.h>
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
    // taking input
    char temp[101];
    cout << "Information of sabbir: [name, id, cgpa, section]" << endl;
    cin >> temp >> sabbir.id >> sabbir.cgpa >> sabbir.section;
    // interesting thing is cin takes input of different data types at once,
    //  and does not counts SPACE as input
    strcpy(sabbir.name, temp);
    cout << sabbir.name << " " << sabbir.id << " " << sabbir.cgpa << " " << sabbir.section << endl;

    cout << endl
         << "Information of fahim: [name, id, cgpa, section]" << endl;
    cin >> temp >> fahim.id >> fahim.cgpa >> fahim.section;
    strcpy(fahim.name, temp);
    cout << fahim.name << " " << fahim.id << " " << fahim.cgpa << " " << fahim.section << endl;

    return 0;
}