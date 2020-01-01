#include<iostream>
using namespace std;
void mutl(int *ptr1,int *ptr2)
{
    (*ptr1) *=(*ptr2);
    cout<<*ptr1;
}
int main()
{
    //int *ptr1,*ptr2;
    int a=2,b=5;
    //ptr1=&a;
    //ptr2=&b;
    mutl(&a,&b);
   
return 0;
}

