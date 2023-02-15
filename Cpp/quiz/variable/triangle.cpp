#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    while (cin >> a >> b >> c)
    {
        if( a+b>c and a+c>b and b+c>a )
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}