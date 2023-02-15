#include <iostream>
using namespace std;

int main()
{
    int n;
    int ans,i;

    while (cin>>n)
    {
        if(n==0)
        {
            break;
        }
        ans = 0;
        i = 0;
        while(i < n)
        {
            ans = ans+(n-i)*(n-i);
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
   
}