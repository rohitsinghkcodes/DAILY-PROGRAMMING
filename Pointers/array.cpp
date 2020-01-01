#include<iostream>
using namespace std;
//Using array for in pointers for sum
/* int main()
{
    int val[5]={10,20,30,40,50},sum=0;
    int *ptr;
    for(int i=0;i<5;i++)
    {
        ptr=&val[i];
        sum+=*ptr;
    }
    cout<<"sum is="<<sum;
} */

//Using functions and array in pointers ofr sum
void sum(int *ptr,int add)
{
    for(int i=0;i<5;i++)
    {
    add+=*ptr;
    ptr=ptr+1;
    }
    cout<<"The sum is="<<add;
}
int main()
{
    int val[5]={10,20,30,40,50},add=0;
    sum(&val[0],add);
    return 0;
}