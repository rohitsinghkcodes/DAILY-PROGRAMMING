//TO print the different words fo a string in different lines
#include<iostream>
#include<process.h>
#include<string.h>
using namespace std;
char ch[50];
void enterString()
{
    cout<<"Enter the string:";
     gets(ch);
    
}
void display()
{
    cout<<"the entered string is:";
   cout<<ch;
}
int main()
{
    int choose;
    cout<<"1.Enter string\n2.Display String\n3.Exit\nEnter your choice:";
    cin>>choose;
    switch (choose)
    {
    case 1:
        enterString();
        break;
    case 2:
        display();
        break;
    case 3:
        exit(0);
        break;
    default:
    cout<<"Enter a volid choice";
        break;
    }
    main();

}