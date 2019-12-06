//program for linear searching
#include<iostream>
using namespace std;
int main()
{
    int a[50],n,i,j;
    int count;
    cout<<"Enter the elements of the array";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the desired no to be searched";
    cin>>n;
    for(i=0;i<=10;i++)
    {
        if(n==a[i])
        {
            cout<<"found";
            cout<<"\nposition"<<i+1;
        }
    }
    return 0;
}
