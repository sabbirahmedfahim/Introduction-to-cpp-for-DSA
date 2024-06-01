#include <bits/stdc++.h> //Goto sort_using..._2.cpp for clean code
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool compare_objects(Student a, Student b)
{
    if (a.marks == b.marks)
        return a.roll < b.roll;
    else
        return a.marks > b.marks;
}

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
    }

    sort(arr, arr + n, compare_objects);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}