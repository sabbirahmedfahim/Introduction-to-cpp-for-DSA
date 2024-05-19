#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    (n % 2 == 0) ? cout << "Even" << endl : cout << "Odd" << endl;
    // ternary operator is a shortcut if-else.
    // it is frequently used for single if-else, but we can extend its use.
    // do not forget to use '?' after condition :p

    if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }

    return 0;
}