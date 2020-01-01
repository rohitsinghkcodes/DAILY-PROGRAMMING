#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int *ptr1,*ptr2;
	cout<<"Enter the value os a and b=";
	cin>>a>>b;
	ptr1=&a;
	ptr2=&b;
	*ptr1+=*ptr2;
	cout<<"The sum is="<<*ptr1;
	return 0;
}