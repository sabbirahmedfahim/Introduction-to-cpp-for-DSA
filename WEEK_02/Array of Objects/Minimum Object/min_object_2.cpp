#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

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
    // int mn = INT_MAX;
    // Student mn.marks = INT_MAX; //didn't initialize custom data type
    Student mn;
    mn.marks = INT_MAX; //I wanna know the logic: Now I know

    for (int i = 0; i < n; i++)
    {
        if (arr[i].marks < mn.marks)
        {
            // mn = arr[i].marks;
            mn = arr[i]; //tHiNk, easy
        }
    }

    cout << mn.name << " "<<mn.roll<<" "<<mn.marks; 

    return 0;
}