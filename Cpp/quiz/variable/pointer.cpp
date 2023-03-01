#include <iostream>
using namespace std;

void func(int **p)
{
    int B = 2;
    *p = &B;
}

int main()
{
    /*int A = 1, C = 3;
    int * = &A;
    int &a=A;
    func(&ptrA);
    printf("%d\n", *ptrA);
    */
    /*
    int a = 10;
    int* p1 = &a;
    cout<< "value of a = "<< a << "\n";
    cout<< "value of p1 = "<< p1 << "\n";
    cout<< "address of a = "<<&a<< "\n";
    cout<< "address of p1 = "<<&p1 <<"\n";
    cout<< "value of the variable pointed by p1 = "<<*p1<<"\n";
    */
    /*
    int a = 10;
    
    int *ptr = &a;
    cout << *ptr<< "\n";

    *ptr = 5;
    cout << a << "\n";
    a = 18;
    cout << *ptr << "\n";
    */
    int a = 10;
    int *ptr1;
    int *ptr2;
    ptr1 = ptr2 = &a;
    cout << *ptr1<< "\n";
    *ptr2 = 5;
    cout << *ptr1<< "\n";
    (*ptr1)++;
    cout<<a;


    return 0;
}