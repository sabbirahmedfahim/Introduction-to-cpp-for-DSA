#include <iostream>
#include <algorithm> //new library
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int mxx = max(a, b);
    int mnn = min(a, b);
    cout << "maximum num = " << mxx << endl;
    cout << "minimum num = " << mnn << endl;

    return 0;
}