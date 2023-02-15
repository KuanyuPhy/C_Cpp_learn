#include <iostream>
#include <math.h>

using namespace std;

// Swap A and B

int main()
{

    int numA;
    int numB;

    while (cin >> numA >> numB)
    {
        int tmp;
        tmp = numA;
        numA = numB;
        numB = tmp;
        cout << numA << " " << numB << endl;
    }

    return 0;
}