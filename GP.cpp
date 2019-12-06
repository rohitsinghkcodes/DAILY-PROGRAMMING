#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i;
    cout<<"Enter the size oof array=";
    cin>>n;
    cout<<"Enter the series=";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-2;i++)
    {
        if((a[i+1]/a[i])==(a[i+2]/a[i+1]))
        {
            cout<<"series is GP\n";
        }
        else
        {
            cout<<"series is not a GP";
        }
        
    }
}