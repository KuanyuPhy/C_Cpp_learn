#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int i = 1;

    cin >> number;

    while (i <= number)
    {
        if (number % i == 0)
        {
            cout << "i =" << i << endl;
        }
        i = i + 1;
    }
    cout << endl;
    return 0;
}