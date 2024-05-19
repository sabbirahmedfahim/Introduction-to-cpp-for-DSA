#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // int mxx = max(a,b,c,d); //it do not work, only for two values
    int mxx = max({a, b, c, d}); //added curly braces
    int mnn = min({a, b, c, d});

    cout<<"maximum num = "<<mxx<<endl<<"minimum num = "<<mnn<<endl;

    return 0;
}