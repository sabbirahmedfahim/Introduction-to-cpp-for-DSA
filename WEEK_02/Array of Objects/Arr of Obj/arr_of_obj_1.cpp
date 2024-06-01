// like an array of n size "int arr[n]" : we can make an array of Class
// [this code has a problem, did you notice? Goto arr_of...2 for solution]
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    // Student(string name, int roll, int marks)
    // {
    //     this->name = name;
    //     this->roll = roll;
    //     this->marks = marks;
    // }
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        // cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
        getline(cin, arr[i].name); //using getline for space input
        cin >> arr[i].roll >> arr[i].marks;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}