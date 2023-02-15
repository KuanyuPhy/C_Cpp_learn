#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double a,b,c,x;

    while(cin >> a >> b >> c >> x)
    {
        double Ans=a*pow(x,2)+b*x+c;
        cout << Ans << endl;
    }


    return 0;
}