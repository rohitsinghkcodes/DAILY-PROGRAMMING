/*Program to enter 2 operands using constructor and perform arithmatic operation +,-.*,/ on them and display the result */

#include<iostream>
using namespace std;
class opr
{
  int a,b;
public:
    opr();
};
opr::opr()
{
    cout<<"enter the value of operands i.e. a and b=";
    cout<<"\na=";
    cin>>a;
    cout<<"\nb=";
    cin>>b;
    cout<<"\nsum is="<<a+b;
    cout<<"\nsub is="<<a-b;
    cout<<"\nmult is="<<a*b;
    cout<<"\ndiv is="<<a/b;
}

int main()
{
    opr r;
}