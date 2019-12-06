#include<iostream>
using namespace std;
int cells(int n,int x)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(x%i==0 && x/i<=n)
        {count++;}
    }
    return count;
}
int main()
{
    int n,x;
    cout<<"enter vlaue of n=";
    cin>>n;
    cout<<"enter vlaue of x=";
    cin>>x;
    cout<<"ans="<<cells(n,x);
    return 0;
}
