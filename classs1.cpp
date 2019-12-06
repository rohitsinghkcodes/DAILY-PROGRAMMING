#include<iostream>
using namespace std;
class add
{
    int a,b;
    public:
    void enter();
    void addr();
}a;
void add::enter()
{
    cout<<"Enter the value of a and b=";
    cin>>a>>b;

}
void add::addr()
{
    cout<<"the sum is="<<a+b;
}
int main()
{
    a.enter();
    a.addr();

}
