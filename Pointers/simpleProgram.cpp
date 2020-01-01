#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr;
    cout<<"Value of a is without pointer="<<a;
    //Now the use of pointer
    ptr= &a;
    cout<<"\nValue of a using pointer is="<<*ptr;
    cout<<"\nThe output with &a="<<&a;
    cout<<"Output with *(&a)="<<*(&a);
    return 0;
}
