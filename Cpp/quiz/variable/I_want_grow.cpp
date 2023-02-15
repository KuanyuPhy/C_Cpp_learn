#include <iostream>
using namespace std;

int main(){

    float Your_height;
    float Your_expect_height;
    cout <<"input your current height (cm)"<<endl;
    cin >> Your_height ;
    cout <<"input your expect height (cm)"<<endl;
    cin >> Your_expect_height ;

    cout <<"The distance between your current height and your expect height is "<<Your_expect_height-Your_height<<" cm"<<endl;

    return 0;
}