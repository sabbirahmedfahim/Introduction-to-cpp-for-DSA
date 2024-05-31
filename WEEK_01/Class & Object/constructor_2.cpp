#include <bits/stdc++.h>
using namespace std;

class Student 
{
    public:
    char name[101];
    int id;
    float gpa;
    Student(char n[], int i, float g)
    {
        //how to declare a string?e
        name = n;  
        id = i;
        gpa = g;
    }
}