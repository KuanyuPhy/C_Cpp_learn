#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int ans;
    int i = 1;

    while (cin >> number)
    {
        ans = 0;
        while(number > 0)
        {
            cout << number <<endl;
            number = number/10;
            ans = ans+1;
        }
         cout << ans << endl;
    }
    

    

   
}